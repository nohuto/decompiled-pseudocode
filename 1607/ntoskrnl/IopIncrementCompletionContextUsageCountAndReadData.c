/*
 * XREFs of IopIncrementCompletionContextUsageCountAndReadData @ 0x1401C4EE0
 * Callers:
 *     IopCompleteRequest @ 0x140054840 (IopCompleteRequest.c)
 *     IopXxxControlFile @ 0x140443F00 (IopXxxControlFile.c)
 *     NtLockFile @ 0x14046AE5C (NtLockFile.c)
 * Callees:
 *     KeReleaseSpinLock @ 0x1400E9A70 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EFE30 (KeAcquireSpinLockRaiseToDpc.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __fastcall IopIncrementCompletionContextUsageCountAndReadData(
        ULONG_PTR BugCheckParameter1,
        _BYTE *a2,
        _QWORD *a3,
        _QWORD *a4)
{
  KSPIN_LOCK *v4; // r12
  signed __int64 BugCheckParameter4; // rdi
  KIRQL v10; // al
  _QWORD *v11; // rbx

  v4 = (KSPIN_LOCK *)(BugCheckParameter1 + 184);
  BugCheckParameter4 = -1LL;
  v10 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(BugCheckParameter1 + 184));
  v11 = *(_QWORD **)(BugCheckParameter1 + 176);
  if ( v11 )
  {
    BugCheckParameter4 = v11[2];
    v11[2] = BugCheckParameter4 + 1;
  }
  KeReleaseSpinLock(v4, v10);
  if ( v11 )
  {
    *a2 = 1;
    *a3 = *v11;
    *a4 = v11[1];
    if ( BugCheckParameter4 < 0 )
      KeBugCheckEx(0x18u, BugCheckParameter1, *(_QWORD *)(BugCheckParameter1 + 176), 0x81uLL, BugCheckParameter4);
  }
  else
  {
    *a2 = 0;
    *a3 = 0LL;
    *a4 = 0LL;
  }
}

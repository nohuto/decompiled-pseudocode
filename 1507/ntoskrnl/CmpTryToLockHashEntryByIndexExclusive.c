/*
 * XREFs of CmpTryToLockHashEntryByIndexExclusive @ 0x14065D9C4
 * Callers:
 *     CmpCleanUpKCBCacheTable @ 0x1404EDAE0 (CmpCleanUpKCBCacheTable.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     CmpReferenceHive @ 0x1400506B0 (CmpReferenceHive.c)
 *     KeAbPostReleaseEx @ 0x1400F49CC (KeAbPostReleaseEx.c)
 *     KeBugCheckEx @ 0x140182750 (KeBugCheckEx.c)
 */

char __fastcall CmpTryToLockHashEntryByIndexExclusive(
        ULONG_PTR BugCheckParameter2,
        ULONG_PTR BugCheckParameter4,
        __int64 a3,
        __int64 a4)
{
  ULONG_PTR v5; // r14
  char v6; // bl
  ULONG_PTR v7; // rdi
  ULONG_PTR v8; // rax

  v5 = (unsigned int)BugCheckParameter4;
  v6 = 1;
  v7 = *(_QWORD *)(BugCheckParameter2 + 2800) + 24LL * (unsigned int)BugCheckParameter4;
  v8 = KeAbPreAcquire(v7, 0LL, 1LL, a4);
  if ( _interlockedbittestandset64((volatile signed __int32 *)v7, 0LL) )
  {
    if ( v8 )
      KeAbPostReleaseEx(v7, v8);
    return 0;
  }
  else
  {
    if ( v8 )
      *(_BYTE *)(v8 + 26) |= 1u;
    *(_QWORD *)(v7 + 8) = KeGetCurrentThread();
    if ( !CmpReferenceHive(BugCheckParameter2) )
      KeBugCheckEx(0x51u, 0x17uLL, BugCheckParameter2, 0xCuLL, v5);
  }
  return v6;
}

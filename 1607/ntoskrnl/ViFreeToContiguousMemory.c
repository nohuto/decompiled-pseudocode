/*
 * XREFs of ViFreeToContiguousMemory @ 0x1407096A0
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x1407087FC (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x140709488 (ViFreeMapRegisterFile.c)
 * Callees:
 *     RtlClearBits @ 0x14002D260 (RtlClearBits.c)
 *     KeReleaseSpinLock @ 0x1400EB600 (KeReleaseSpinLock.c)
 *     KeAcquireSpinLockRaiseToDpc @ 0x1400EDCB0 (KeAcquireSpinLockRaiseToDpc.c)
 */

__int64 __fastcall ViFreeToContiguousMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rsi
  _QWORD *v5; // r8
  KSPIN_LOCK *v7; // rdi
  KIRQL v8; // bl

  v3 = a3;
  v5 = *(_QWORD **)(a1 + 264);
  if ( !v5 )
    return 0LL;
  if ( (unsigned int)v3 >= 0x20 || v5[v3] != a2 )
  {
    LODWORD(v3) = 0;
    while ( *v5 != a2 )
    {
      LODWORD(v3) = v3 + 1;
      ++v5;
      if ( (unsigned int)v3 >= 0x20 )
        return 0LL;
    }
  }
  v7 = (KSPIN_LOCK *)(a1 + 280);
  v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 280));
  RtlClearBits((PRTL_BITMAP)(a1 + 296), v3, 1u);
  KeReleaseSpinLock(v7, v8);
  return 1LL;
}

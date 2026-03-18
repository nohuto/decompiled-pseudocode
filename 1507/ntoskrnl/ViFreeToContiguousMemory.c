/*
 * XREFs of ViFreeToContiguousMemory @ 0x14073E260
 * Callers:
 *     ViAllocateMapRegisterFile @ 0x14073D28C (ViAllocateMapRegisterFile.c)
 *     ViFreeMapRegisterFile @ 0x14073DFEC (ViFreeMapRegisterFile.c)
 * Callees:
 *     RtlClearBits @ 0x140062740 (RtlClearBits.c)
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViFreeToContiguousMemory(__int64 a1, __int64 a2, unsigned int a3)
{
  __int64 v3; // rdi
  _QWORD *v5; // r8
  volatile signed __int32 *v7; // rbx
  unsigned __int8 CurrentIrql; // bp
  __int64 retaddr; // [rsp+28h] [rbp+0h]

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
  v7 = (volatile signed __int32 *)(a1 + 280);
  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)(a1 + 280));
  }
  else if ( _interlockedbittestandset64(v7, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)(a1 + 280));
  }
  RtlClearBits((PRTL_BITMAP)(a1 + 296), v3, 1u);
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented((volatile signed __int64 *)v7, retaddr);
  else
    _InterlockedAnd64((volatile signed __int64 *)v7, 0LL);
  __writecr8(CurrentIrql);
  return 1LL;
}

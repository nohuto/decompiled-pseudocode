/*
 * XREFs of ViHalTrackDomainCommonBuffer @ 0x14073E8C0
 * Callers:
 *     VfAllocateDomainCommonBuffer @ 0x14025A4E8 (VfAllocateDomainCommonBuffer.c)
 * Callees:
 *     KxWaitForSpinLockAndAcquire @ 0x1400A4840 (KxWaitForSpinLockAndAcquire.c)
 *     KiAcquireSpinLockInstrumented @ 0x14020103C (KiAcquireSpinLockInstrumented.c)
 *     KiReleaseSpinLockInstrumented @ 0x1402010EC (KiReleaseSpinLockInstrumented.c)
 */

__int64 __fastcall ViHalTrackDomainCommonBuffer(_QWORD *a1)
{
  unsigned __int8 CurrentIrql; // di
  __int64 v3; // rax
  __int64 result; // rax
  __int64 retaddr; // [rsp+28h] [rbp+0h]

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  if ( (BYTE6(PerfGlobalGroupMask) & 0x21) != 0 )
  {
    KiAcquireSpinLockInstrumented((volatile signed __int32 *)&qword_1407631F8);
  }
  else if ( _interlockedbittestandset64((volatile signed __int32 *)&qword_1407631F8, 0LL) )
  {
    KxWaitForSpinLockAndAcquire((volatile signed __int32 *)&qword_1407631F8);
  }
  v3 = ViDomainCommonBufferList;
  *a1 = ViDomainCommonBufferList;
  a1[1] = &ViDomainCommonBufferList;
  if ( *(__int64 **)(v3 + 8) != &ViDomainCommonBufferList )
    __fastfail(3u);
  *(_QWORD *)(v3 + 8) = a1;
  ViDomainCommonBufferList = (__int64)a1;
  if ( (BYTE6(PerfGlobalGroupMask) & 1) != 0 )
    KiReleaseSpinLockInstrumented(&qword_1407631F8, retaddr);
  else
    _InterlockedAnd64(&qword_1407631F8, 0LL);
  result = CurrentIrql;
  __writecr8(CurrentIrql);
  return result;
}

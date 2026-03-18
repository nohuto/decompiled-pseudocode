/*
 * XREFs of MiLockPageAndSetDirty @ 0x14003C7B8
 * Callers:
 *     NtGetWriteWatch @ 0x14003C8B0 (NtGetWriteWatch.c)
 *     MiValidFault @ 0x14005B5E0 (MiValidFault.c)
 *     MiCopyToUserVa @ 0x140061A10 (MiCopyToUserVa.c)
 *     MiIssueHardFault @ 0x140087FE0 (MiIssueHardFault.c)
 *     NtLockVirtualMemory @ 0x1400FD8C4 (NtLockVirtualMemory.c)
 *     MmSetPageProtection @ 0x14013821C (MmSetPageProtection.c)
 *     MiMakeCombineCandidateClean @ 0x14022AB3C (MiMakeCombineCandidateClean.c)
 * Callees:
 *     MiCaptureDirtyBitToPfn @ 0x14003C844 (MiCaptureDirtyBitToPfn.c)
 *     MiPartitionIdToPointer @ 0x140055BF0 (MiPartitionIdToPointer.c)
 *     MiReleasePageFileInfo @ 0x1400DD8D8 (MiReleasePageFileInfo.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall MiLockPageAndSetDirty(__int64 a1, int a2)
{
  __int64 v2; // r14
  unsigned int v3; // edi
  unsigned __int8 CurrentIrql; // si
  __int64 v6; // r9
  __int64 result; // rax

  v2 = 0LL;
  v3 = 0;
  if ( a2 == 1 )
  {
    CurrentIrql = 17;
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  else
  {
    CurrentIrql = KeGetCurrentIrql();
    __writecr8(2uLL);
    if ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) )
    {
      do
      {
        if ( (++v3 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
          _mm_pause();
        else
          HvlNotifyLongSpinWait(v3);
      }
      while ( (*(_QWORD *)(a1 + 24) & 0x8000000000000000uLL) != 0
           || _interlockedbittestandset64((volatile signed __int32 *)(a1 + 24), 0x3FuLL) );
    }
  }
  v6 = MiCaptureDirtyBitToPfn(a1);
  if ( v6 )
    v2 = MiPartitionIdToPointer(((unsigned int)HIDWORD(*(_QWORD *)(a1 + 40)) >> 8) & 0x3FF);
  result = 0x7FFFFFFFFFFFFFFFLL;
  _InterlockedAnd64((volatile signed __int64 *)(a1 + 24), 0x7FFFFFFFFFFFFFFFuLL);
  if ( v6 )
    result = MiReleasePageFileInfo(v2, v6, 1LL);
  if ( CurrentIrql != 17 )
  {
    result = CurrentIrql;
    __writecr8(CurrentIrql);
  }
  return result;
}

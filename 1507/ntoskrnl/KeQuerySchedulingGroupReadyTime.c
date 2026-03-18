/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x1400082DC
 * Callers:
 *     PspQueryJobHierarchyAccountingInformation @ 0x140415378 (PspQueryJobHierarchyAccountingInformation.c)
 *     NtSetInformationJobObject @ 0x140417C04 (NtSetInformationJobObject.c)
 * Callees:
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r12
  __int64 v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // r15
  __int64 v5; // rdi
  __int64 v6; // rsi
  unsigned int v7; // ebp

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = &KiProcessorBlock;
    v4 = (unsigned int)KeNumberProcessors_0;
    v5 = a1 + 128;
    do
    {
      v6 = *v3;
      v7 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        do
        {
          if ( (++v7 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v7);
        }
        while ( *(_QWORD *)(v6 + 48) );
      }
      v2 += *(_QWORD *)(v5 + 56);
      if ( (*(_BYTE *)(v5 + 112) & 1) != 0 )
        v2 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v5 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      ++v3;
      v5 += 408LL;
      --v4;
    }
    while ( v4 );
  }
  __writecr8(CurrentIrql);
  return v2;
}

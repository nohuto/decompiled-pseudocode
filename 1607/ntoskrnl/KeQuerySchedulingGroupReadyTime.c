/*
 * XREFs of KeQuerySchedulingGroupReadyTime @ 0x1400A5870
 * Callers:
 *     NtSetInformationJobObject @ 0x140463AA8 (NtSetInformationJobObject.c)
 *     PspQueryJobHierarchyAccountingInformation @ 0x140468AE0 (PspQueryJobHierarchyAccountingInformation.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

__int64 __fastcall KeQuerySchedulingGroupReadyTime(__int64 a1)
{
  unsigned __int8 CurrentIrql; // r15
  __int64 v2; // rbx
  __int64 *v3; // r14
  __int64 v4; // rbp
  __int64 v5; // rdi
  __int64 v6; // rsi
  int v8; // [rsp+48h] [rbp+10h] BYREF

  CurrentIrql = KeGetCurrentIrql();
  __writecr8(2uLL);
  v2 = 0LL;
  if ( (_DWORD)KeNumberProcessors_0 )
  {
    v3 = KiProcessorBlock;
    v4 = (unsigned int)KeNumberProcessors_0;
    v5 = a1 + 128;
    do
    {
      v6 = *v3;
      v8 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(v6 + 48), 0LL) )
      {
        do
          KeYieldProcessorEx(&v8);
        while ( *(_QWORD *)(v6 + 48) );
      }
      v2 += *(_QWORD *)(v5 + 56);
      if ( (*(_BYTE *)(v5 + 112) & 1) != 0 )
        v2 += MEMORY[0xFFFFF78000000008] - *(_QWORD *)(v5 + 64);
      _InterlockedAnd64((volatile signed __int64 *)(v6 + 48), 0LL);
      ++v3;
      v5 += 424LL;
      --v4;
    }
    while ( v4 );
  }
  __writecr8(CurrentIrql);
  return v2;
}

/*
 * XREFs of PsSetIoPriorityThread @ 0x1400FB824
 * Callers:
 *     CcApplyLowIoPriorityToThread @ 0x1400B0B0C (CcApplyLowIoPriorityToThread.c)
 *     CmpSetIoPriorityThread @ 0x1400F317C (CmpSetIoPriorityThread.c)
 *     IoSetIoPriorityHintIntoThread @ 0x1400FB718 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x1400FB734 (IoApplyPriorityInfoThread.c)
 *     NtSetInformationThread @ 0x140425860 (NtSetInformationThread.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x1400FB898 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1724);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1724), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1);
  return v6;
}

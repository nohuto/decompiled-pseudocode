/*
 * XREFs of PsSetIoPriorityThread @ 0x140071C90
 * Callers:
 *     IoSetIoPriorityHintIntoThread @ 0x140070708 (IoSetIoPriorityHintIntoThread.c)
 *     IoApplyPriorityInfoThread @ 0x140070724 (IoApplyPriorityInfoThread.c)
 *     CcApplyLowIoPriorityToThread @ 0x140071360 (CcApplyLowIoPriorityToThread.c)
 *     CmpSetIoPriorityThread @ 0x1400B2B18 (CmpSetIoPriorityThread.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     NtSetInformationThread @ 0x1404F1560 (NtSetInformationThread.c)
 * Callees:
 *     KeAbProcessBaseIoPriorityChange @ 0x140071D04 (KeAbProcessBaseIoPriorityChange.c)
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
 */

__int64 __fastcall PsSetIoPriorityThread(__int64 a1, unsigned int a2)
{
  signed __int32 v4; // eax
  unsigned __int32 v5; // ebx
  unsigned int v6; // ebx

  v4 = *(_DWORD *)(a1 + 1728);
  do
  {
    v5 = v4;
    v4 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1728), (a2 << 9) | v4 & 0xFFFFF1FF, v4);
  }
  while ( v4 != v5 );
  v6 = (v5 >> 9) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1332, v6, a2, 0LL);
  if ( a2 != v6 )
    KeAbProcessBaseIoPriorityChange(a1, v6, a2);
  return v6;
}

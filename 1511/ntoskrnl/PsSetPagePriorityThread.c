/*
 * XREFs of PsSetPagePriorityThread @ 0x1400FB7D0
 * Callers:
 *     SmSetThreadPagePriority @ 0x1400F7AD8 (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x1400FB54C (CcCompleteAsyncRead.c)
 *     IoApplyPriorityInfoThread @ 0x1400FB734 (IoApplyPriorityInfoThread.c)
 *     CcPerformReadAhead @ 0x1400FC4E4 (CcPerformReadAhead.c)
 *     NtSetInformationProcess @ 0x1404507B0 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x14074C59C (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x14020E158 (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1724);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1724), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}

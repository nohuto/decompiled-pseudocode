/*
 * XREFs of PsSetPagePriorityThread @ 0x1400707C0
 * Callers:
 *     SmSetThreadPagePriority @ 0x1400049CC (SmSetThreadPagePriority.c)
 *     CcCompleteAsyncRead @ 0x14006E664 (CcCompleteAsyncRead.c)
 *     IoApplyPriorityInfoThread @ 0x140070724 (IoApplyPriorityInfoThread.c)
 *     CcPerformReadAhead @ 0x140071EB4 (CcPerformReadAhead.c)
 *     NtSetInformationProcess @ 0x1404248E0 (NtSetInformationProcess.c)
 *     MiInitSystem @ 0x1407A3AAC (MiInitSystem.c)
 * Callees:
 *     EtwTracePriority @ 0x140225E3C (EtwTracePriority.c)
 */

__int64 __fastcall PsSetPagePriorityThread(__int64 a1, int a2)
{
  signed __int32 v2; // eax
  unsigned __int32 v3; // ebx
  unsigned int v4; // ebx

  v2 = *(_DWORD *)(a1 + 1728);
  do
  {
    v3 = v2;
    v2 = _InterlockedCompareExchange((volatile signed __int32 *)(a1 + 1728), (a2 << 12) | v2 & 0xFFFF8FFF, v2);
  }
  while ( v2 != v3 );
  v4 = (v3 >> 12) & 7;
  if ( (WORD2(PerfGlobalGroupMask) & 0x2000) != 0 )
    EtwTracePriority(a1, 1331, v4, a2, 0LL);
  return v4;
}

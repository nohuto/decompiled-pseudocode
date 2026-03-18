/*
 * XREFs of DpiMiracastPerfReportGlobalConfiguration @ 0x1C0030F78
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C002C100 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastPerfRetireFrame @ 0x1C0030760 (DpiMiracastPerfRetireFrame.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0030D34 (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C019766C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     Template_qqzzzqqqqqqqqqq @ 0x1C00311A8 (Template_qqzzzqqqqqqqqqq.c)
 */

__int64 __fastcall DpiMiracastPerfReportGlobalConfiguration(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    return Template_qqzzzqqqqqqqqqq(
             a1,
             a2,
             a3,
             *(_DWORD *)(a1 + 196),
             *(_DWORD *)(a1 + 200),
             *(_QWORD *)(a1 + 384),
             *(_QWORD *)(a1 + 392),
             *(_QWORD *)(a1 + 360),
             *(_DWORD *)(a1 + 848),
             *(_DWORD *)(a1 + 852),
             *(_DWORD *)(a1 + 856),
             *(_DWORD *)(a1 + 860),
             *(_DWORD *)(a1 + 876),
             *(_DWORD *)(a1 + 880),
             *(_DWORD *)(a1 + 884),
             *(_DWORD *)(a1 + 888),
             *(_DWORD *)(a1 + 892),
             *(_DWORD *)(a1 + 896));
  return result;
}

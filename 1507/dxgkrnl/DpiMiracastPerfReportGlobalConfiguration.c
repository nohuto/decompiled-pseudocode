/*
 * XREFs of DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029F90
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C00251B0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C00269F0 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastPerfRetireFrame @ 0x1C0029748 (DpiMiracastPerfRetireFrame.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C0029D3C (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C01696F0 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     Template_qqzzzzqqqqqqqqqq @ 0x1C002A0B8 (Template_qqzzzzqqqqqqqqqq.c)
 */

__int64 __fastcall DpiMiracastPerfReportGlobalConfiguration(__int64 a1, int a2, int a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    return Template_qqzzzzqqqqqqqqqq(
             a1,
             a2,
             a3,
             *(_DWORD *)(a1 + 196),
             *(_DWORD *)(a1 + 200),
             *(_QWORD *)(a1 + 264),
             *(_QWORD *)(a1 + 272),
             *(_QWORD *)(a1 + 256),
             *(_QWORD *)(a1 + 232),
             *(_DWORD *)(a1 + 752),
             *(_DWORD *)(a1 + 756),
             *(_DWORD *)(a1 + 760),
             *(_DWORD *)(a1 + 764),
             *(_DWORD *)(a1 + 780),
             *(_DWORD *)(a1 + 784),
             *(_DWORD *)(a1 + 788),
             *(_DWORD *)(a1 + 792),
             *(_DWORD *)(a1 + 796),
             *(_DWORD *)(a1 + 800));
  return result;
}

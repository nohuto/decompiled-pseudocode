/*
 * XREFs of DpiMiracastPerfReportGlobalConfiguration @ 0x1C0029BF8
 * Callers:
 *     DpiMiracastStopMiracastSessionSync @ 0x1C0024CF0 (DpiMiracastStopMiracastSessionSync.c)
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     sub_1C00293AC @ 0x1C00293AC (sub_1C00293AC.c)
 *     DpiMiracastPerfHandleChunkSent @ 0x1C00299A4 (DpiMiracastPerfHandleChunkSent.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     Template_qqzzzzqqqqqqqqqq @ 0x1C0029D20 (Template_qqzzzzqqqqqqqqqq.c)
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
             *(_DWORD *)(a1 + 760),
             *(_DWORD *)(a1 + 764),
             *(_DWORD *)(a1 + 768),
             *(_DWORD *)(a1 + 772),
             *(_DWORD *)(a1 + 788),
             *(_DWORD *)(a1 + 792),
             *(_DWORD *)(a1 + 796),
             *(_DWORD *)(a1 + 800),
             *(_DWORD *)(a1 + 804),
             *(_DWORD *)(a1 + 808));
  return result;
}

/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C0023EA0
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C0026540 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C016DE70 (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     Template_xq @ 0x1C0027B38 (Template_xq.c)
 */

__int64 __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    return Template_xq(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}

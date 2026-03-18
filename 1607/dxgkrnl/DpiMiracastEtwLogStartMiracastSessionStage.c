/*
 * XREFs of DpiMiracastEtwLogStartMiracastSessionStage @ 0x1C002B360
 * Callers:
 *     DxgkMiracastStartMiracastSession @ 0x1C002D594 (DxgkMiracastStartMiracastSession.c)
 *     DpiMiracastHandleStartSessionDone @ 0x1C019766C (DpiMiracastHandleStartSessionDone.c)
 * Callees:
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 */

NTSTATUS __fastcall DpiMiracastEtwLogStartMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    return Template_xq(a1, &EventMiracastStartMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}

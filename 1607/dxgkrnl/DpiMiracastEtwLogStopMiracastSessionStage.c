/*
 * XREFs of DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C002B38C
 * Callers:
 *     DpiMiracastTearDownAssociation @ 0x1C002CA34 (DpiMiracastTearDownAssociation.c)
 *     DpiMiracastHandleStopSessionDone @ 0x1C0197ACC (DpiMiracastHandleStopSessionDone.c)
 * Callees:
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 */

NTSTATUS __fastcall DpiMiracastEtwLogStopMiracastSessionStage(__int64 a1, int a2, __int64 a3)
{
  NTSTATUS result; // eax

  if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x200000) != 0 )
    return Template_xq(a1, &EventMiracastStopMiracastSessionStage, a3, *(_QWORD *)(a1 + 96), a2);
  return result;
}

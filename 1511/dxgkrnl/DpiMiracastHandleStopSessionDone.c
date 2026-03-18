/*
 * XREFs of DpiMiracastHandleStopSessionDone @ 0x1C016E4B0
 * Callers:
 *     DxgkHandleMiracastEscape @ 0x1C016ED10 (DxgkHandleMiracastEscape.c)
 * Callees:
 *     DpiMiracastEtwLogStopMiracastSessionStage @ 0x1C0023ECC (DpiMiracastEtwLogStopMiracastSessionStage.c)
 *     DpiMiracastTearDownAssociation @ 0x1C00256C4 (DpiMiracastTearDownAssociation.c)
 */

void __fastcall DpiMiracastHandleStopSessionDone(char *P, __int64 a2, __int64 a3)
{
  __int64 v5; // rcx
  _QWORD *v6; // rax

  DpiMiracastEtwLogStopMiracastSessionStage((__int64)P, 0, a3);
  if ( *(int *)(a2 + 4) >= 0 )
  {
    *((_DWORD *)P + 141) = *(_DWORD *)(a2 + 24);
  }
  else
  {
    v6 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v6[4] = 0LL;
    v6[3] = DpiMiracastHandleStopSessionDone;
    v6[5] = *(int *)(a2 + 4);
    WdLogEvent5_WdError(v6);
  }
  DpiMiracastTearDownAssociation(P, *(_DWORD *)a2, *(_DWORD *)(a2 + 12), *(_BYTE *)(a2 + 20) == 0 ? 0x80 : 0, 0);
}

/*
 * XREFs of InitFunctionTables @ 0x1C03792C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 (__fastcall *InitFunctionTables())(struct tagWND *a1, unsigned int a2, unsigned __int64 a3, __int64 a4, unsigned __int64 a5)
{
  __int64 v0; // rdx
  __int64 v1; // r8
  __int64 v2; // rcx
  __int64 v3; // rax
  __int64 (__fastcall *result)(struct tagWND *, unsigned int, unsigned __int64, __int64, unsigned __int64); // rax

  v0 = 0LL;
  v1 = 304LL;
  *(_QWORD *)(gpsi + 272LL) = 4LL;
  *(_QWORD *)(gpsi + 280LL) = 0LL;
  *(_QWORD *)(gpsi + 288LL) = 3LL;
  *(_QWORD *)(gpsi + 296LL) = 1LL;
  do
  {
    *(_QWORD *)(v1 + gpsi) = 0LL;
    v1 += 8LL;
  }
  while ( v1 < 320 );
  *(_WORD *)(gpsi + 334LL) = 376;
  *(_WORD *)(gpsi + 340LL) = 384;
  *(_WORD *)(gpsi + 328LL) = 448;
  *(_WORD *)(gpsi + 332LL) = 392;
  *(_WORD *)(gpsi + 384LL) = 424;
  v2 = 32LL;
  *(_WORD *)(gpsi + 330LL) = 376;
  do
  {
    v3 = v0++ & 0x1F;
    mpFnidPfn[v3] = (__int64)IsMulDestroyBrushInternalSupported;
    --v2;
  }
  while ( v2 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C03239A8 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C03239B0 = (__int64)xxxWrapMenuWindowProc;
  qword_1C03239B8 = (__int64)xxxWrapDesktopWndProc;
  qword_1C0323A58 = (__int64)xxxWrapSendMessage;
  qword_1C0323A28 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C0323A30 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0323A60 = (__int64)xxxSendMessageFF;
  qword_1C0323A68 = (__int64)xxxSendMessageEx;
  qword_1C0323A70 = (__int64)xxxWrapCallWindowProc;
  qword_1C0323A78 = (__int64)xxxWrapSendMessageBSM;
  qword_1C03239D0 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0323A88 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0323A90 = (__int64)xxxWrapSendMessageCallback;
  qword_1C03239C0 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C03239C8 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}

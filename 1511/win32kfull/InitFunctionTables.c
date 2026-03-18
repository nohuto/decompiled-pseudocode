/*
 * XREFs of InitFunctionTables @ 0x1C0379260
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
  *(_WORD *)(gpsi + 328LL) = 448;
  *(_WORD *)(gpsi + 330LL) = 376;
  *(_WORD *)(gpsi + 332LL) = 392;
  v2 = 32LL;
  do
  {
    v3 = v0++ & 0x1F;
    mpFnidPfn[v3] = (__int64)IsMulDestroyBrushInternalSupported;
    --v2;
  }
  while ( v2 );
  mpFnidPfn[0] = (__int64)xxxWrapSBWndProc;
  qword_1C0322AF8 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0322B00 = (__int64)xxxWrapMenuWindowProc;
  qword_1C0322B08 = (__int64)xxxWrapDesktopWndProc;
  qword_1C0322BA8 = (__int64)xxxWrapSendMessage;
  qword_1C0322B78 = (__int64)fnHkINLPCWPEXSTRUCT;
  qword_1C0322B80 = (__int64)fnHkINLPCWPRETEXSTRUCT;
  qword_1C0322BB0 = (__int64)xxxSendMessageFF;
  qword_1C0322BB8 = (__int64)xxxSendMessageEx;
  qword_1C0322BC0 = (__int64)xxxWrapCallWindowProc;
  qword_1C0322BC8 = (__int64)xxxWrapSendMessageBSM;
  qword_1C0322B20 = (__int64)xxxWrapSwitchWndProc;
  qword_1C0322BD8 = (__int64)xxxWrapSendNotifyMessage;
  result = xxxWrapSendMessageCallback;
  qword_1C0322BE0 = (__int64)xxxWrapSendMessageCallback;
  qword_1C0322B10 = (__int64)xxxWrapRealDefWindowProc;
  qword_1C0322B18 = (__int64)xxxWrapRealDefWindowProc;
  return result;
}

/*
 * XREFs of xxxSendHelpMessage @ 0x1401C7838
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxHelpLoop @ 0x1402FAAB4 (xxxHelpLoop.c)
 * Callees:
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     _GetMessagePos @ 0x1401C790C (_GetMessagePos.c)
 */

__int64 __fastcall xxxSendHelpMessage(struct tagTHREADINFO **a1, int a2, int a3, __int64 a4, unsigned int a5)
{
  int MessagePos; // eax
  _DWORD v8[4]; // [rsp+50h] [rbp-38h] BYREF
  __int64 v9; // [rsp+60h] [rbp-28h]
  __int64 v10; // [rsp+68h] [rbp-20h]
  int v11; // [rsp+70h] [rbp-18h]
  int v12; // [rsp+74h] [rbp-14h]

  v8[3] = 0;
  v8[0] = 40;
  v8[1] = a2;
  v8[2] = a3;
  v9 = a4;
  v10 = a5;
  MessagePos = GetMessagePos(a1);
  v12 = SHIWORD(MessagePos);
  v11 = (__int16)MessagePos;
  return xxxSendTransformableMessageTimeout(a1, 83LL, 0LL, (__int64)v8, 0, 0, 0LL, 1u, 1);
}

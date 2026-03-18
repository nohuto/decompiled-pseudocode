/*
 * XREFs of _PostThreadMessage @ 0x1401D31A0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x140021BA8 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x14013B240 (xxxProcessEventMessage.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1401D2F9C (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     EditionPostInertiaMessage @ 0x1401D3170 (EditionPostInertiaMessage.c)
 *     NtUserPostThreadMessage @ 0x1401D3B50 (NtUserPostThreadMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1401D3210 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(struct tagTHREADINFO *a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  _QWORD v9[3]; // [rsp+30h] [rbp-18h] BYREF

  v9[0] = 0LL;
  SetUnavailableInputSource(v9);
  return PostThreadMessageEx(a1, a2, a3, a4, (struct tagINPUT_MESSAGE_SOURCE *)v9);
}

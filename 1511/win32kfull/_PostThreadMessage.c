/*
 * XREFs of _PostThreadMessage @ 0x1C0065710
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C005FAE0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C0063E9C (xxxProcessEventMessage.c)
 *     NtUserPostThreadMessage @ 0x1C00657C0 (NtUserPostThreadMessage.c)
 *     xxxSysCommand @ 0x1C0109460 (xxxSysCommand.c)
 *     zzzCancelJournalling @ 0x1C010A868 (zzzCancelJournalling.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C010F9B0 (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0111A00 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     PostInertiaMessage @ 0x1C0239A9C (PostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C0065470 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, unsigned __int64 a3, __int64 a4)
{
  DWORD v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  v5[1] = 0;
  return PostThreadMessageEx(a1, a2, a3, a4, v5);
}

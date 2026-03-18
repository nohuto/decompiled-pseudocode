/*
 * XREFs of _PostThreadMessage @ 0x1C0090EB0
 * Callers:
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C0070100 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C0071E4C (xxxProcessEventMessage.c)
 *     NtUserPostThreadMessage @ 0x1C0090EE0 (NtUserPostThreadMessage.c)
 *     xxxSysCommand @ 0x1C00FD5E4 (xxxSysCommand.c)
 *     zzzCancelJournalling @ 0x1C00FEE88 (zzzCancelJournalling.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0131258 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C01318E4 (-EndShutdown@@YAXJ@Z.c)
 *     PostInertiaMessage @ 0x1C02398B8 (PostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C0090C10 (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1, unsigned int a2, LARGE_INTEGER a3, LARGE_INTEGER a4)
{
  DWORD v5[6]; // [rsp+30h] [rbp-18h] BYREF

  v5[0] = 0;
  v5[1] = 0;
  return PostThreadMessageEx(a1, a2, a3, a4, v5);
}

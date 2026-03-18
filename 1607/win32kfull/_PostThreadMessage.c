/*
 * XREFs of _PostThreadMessage @ 0x1C0057CD8
 * Callers:
 *     NtUserPostThreadMessage @ 0x1C0057130 (NtUserPostThreadMessage.c)
 *     ?_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@@H@Z @ 0x1C00805A0 (-_PostTransformableMessageExtended@@YAPEAUtagQMSG@@PEAUtagWND@@I_K_JPEAUtagINPUT_MESSAGE_SOURCE@.c)
 *     xxxProcessEventMessage @ 0x1C00889B8 (xxxProcessEventMessage.c)
 *     zzzCancelJournalling @ 0x1C00945F8 (zzzCancelJournalling.c)
 *     xxxSysCommand @ 0x1C012ABE4 (xxxSysCommand.c)
 *     ?EndShutdown@@YAXJ@Z @ 0x1C0130610 (-EndShutdown@@YAXJ@Z.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0131480 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     zzzPostInertiaMessage @ 0x1C022A498 (zzzPostInertiaMessage.c)
 * Callees:
 *     _PostThreadMessageEx @ 0x1C0057D1C (_PostThreadMessageEx.c)
 */

__int64 __fastcall PostThreadMessage(__int64 a1)
{
  return PostThreadMessageEx(a1);
}

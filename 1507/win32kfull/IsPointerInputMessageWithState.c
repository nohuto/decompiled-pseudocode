/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C008C6AC
 * Callers:
 *     IsPointerInputHookCall @ 0x1C004A2B8 (IsPointerInputHookCall.c)
 *     UnlinkSendListSms @ 0x1C007B368 (UnlinkSendListSms.c)
 *     PostInputMessage @ 0x1C008C718 (PostInputMessage.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1450 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C01ECDA4 (_QuerySendMessage.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F9CDC (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C022F86C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C008C6CC (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // eax
  int v5; // r8d
  unsigned int v6; // edx

  v4 = IsPointerInputMessage(a1, a2, (unsigned int)a1, a4);
  v6 = 0;
  if ( v4 )
    return v5 != 595;
  return v6;
}

/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C00652DC
 * Callers:
 *     PostInputMessage @ 0x1C0064D5C (PostInputMessage.c)
 *     UnlinkSendListSms @ 0x1C0065234 (UnlinkSendListSms.c)
 *     IsPointerInputHookCall @ 0x1C0084468 (IsPointerInputHookCall.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01E1A60 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C01ED2C4 (_QuerySendMessage.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01FA180 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C022FCB8 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C00652F8 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1)
{
  int v1; // eax
  int v2; // ecx
  unsigned int v3; // edx

  v1 = IsPointerInputMessage(a1);
  v3 = 0;
  if ( v1 )
    return v2 != 595;
  return v3;
}

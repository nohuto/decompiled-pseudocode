/*
 * XREFs of IsPointerInputMessageWithState @ 0x1C005810C
 * Callers:
 *     UnlinkSendListSms @ 0x1C0058070 (UnlinkSendListSms.c)
 *     PostInputMessage @ 0x1C005816C (PostInputMessage.c)
 *     IsPointerInputHookCall @ 0x1C00A3D40 (IsPointerInputHookCall.c)
 *     xxxMenuWindowProc @ 0x1C013CEA0 (xxxMenuWindowProc.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x1C01C100C (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxRetrievePointerInputMessage @ 0x1C01D7CD8 (xxxRetrievePointerInputMessage.c)
 *     _QuerySendMessage @ 0x1C01E3E74 (_QuerySendMessage.c)
 *     ?xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z @ 0x1C01F1384 (-xxxDiscardPointerWindowFrameMessages@@YAHPEAUtagTHREADINFO@@_K@Z.c)
 * Callees:
 *     IsPointerInputMessage @ 0x1C0058128 (IsPointerInputMessage.c)
 */

__int64 __fastcall IsPointerInputMessageWithState(__int64 a1, __int64 a2)
{
  int v2; // eax
  int v3; // ecx
  unsigned int v4; // edx

  v2 = IsPointerInputMessage(a1, a2);
  v4 = 0;
  if ( v2 )
    return v3 != 595;
  return v4;
}

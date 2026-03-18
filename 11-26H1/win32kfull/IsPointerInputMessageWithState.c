/*
 * XREFs of IsPointerInputMessageWithState @ 0x140159250
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     PostInputMessage @ 0x1400904E8 (PostInputMessage.c)
 *     xxxRetrievePointerInputMessage @ 0x140140B4C (xxxRetrievePointerInputMessage.c)
 *     ?IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z @ 0x140159168 (-IsPointerQueuedMessageCoalescable@@YAHPEAUtagQ@@PEAUtagQMSG@@KK_KK@Z.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     _QuerySendMessage @ 0x1402CE1EC (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerInputMessageWithState(int a1)
{
  unsigned int v1; // eax
  int v2; // ecx
  _BOOL8 result; // rax

  v1 = a1 - 577;
  result = 0;
  if ( (unsigned int)(a1 - 577) <= 0x16 )
  {
    v2 = 8122367;
    if ( _bittest(&v2, v1) )
      return 1;
  }
  return result;
}

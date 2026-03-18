/*
 * XREFs of IsPointerParentNotify @ 0x140137BE0
 * Callers:
 *     xxxInterSendMsgEx @ 0x140051EE4 (xxxInterSendMsgEx.c)
 *     NtUserfnPOINTERINPUT @ 0x1401370F0 (NtUserfnPOINTERINPUT.c)
 *     NtUserfnPARENTNOTIFY @ 0x140137B50 (NtUserfnPARENTNOTIFY.c)
 *     TransformMessageBetweenCoordinateSpaces @ 0x1401550A0 (TransformMessageBetweenCoordinateSpaces.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     _QuerySendMessage @ 0x1402CE1EC (_QuerySendMessage.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall IsPointerParentNotify(int a1, __int16 a2)
{
  return a1 == 528 && a2 == 582;
}

/*
 * XREFs of ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C
 * Callers:
 *     xxxReceiveMessage @ 0x1C006D6A0 (xxxReceiveMessage.c)
 *     xxxInterSendMsgEx @ 0x1C006E0C0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C007B368 (UnlinkSendListSms.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0093620 (xxxCleanupThreadPointerInputInfo.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0131258 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01E0B64 (FreePointerMessageParams.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F72D4 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F943C (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F955C (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9640 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F9F44 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FBEAC (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E2F0 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 * Callees:
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01FC234 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F4EC (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 */

void __fastcall PointerList::UnreferenceMsgData(__int64 a1, int a2, __int64 a3, unsigned int a4)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 36) &= ~0x20u;
  --*(_BYTE *)(a2 + a1 + 48);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( (*(_DWORD *)(a1 + 36) & 0x10) == 0 )
      PointerFrameList::FreePointerInfoNode((PointerFrameList *)a1, *(_DWORD *)(a1 + 28), *(_DWORD *)(a1 + 32), a4);
    PointerList::FreeMsgData((PointerList *)a1);
  }
}

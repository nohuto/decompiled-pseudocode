/*
 * XREFs of ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C
 * Callers:
 *     UnlinkSendListSms @ 0x1C0058070 (UnlinkSendListSms.c)
 *     xxxInterSendMsgEx @ 0x1C0085BE0 (xxxInterSendMsgEx.c)
 *     xxxCleanupThreadPointerInputInfo @ 0x1C0107DE0 (xxxCleanupThreadPointerInputInfo.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C01BFA20 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 *     ?DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z @ 0x1C01C0840 (-DereferencePointerInputFrameAndMessageData@@YAXPEAUtagPOINTERINPUTFRAME@@@Z.c)
 *     UnreferenceUndispatchedFrame @ 0x1C01C2464 (UnreferenceUndispatchedFrame.c)
 *     FreePointerMessageParams @ 0x1C01D74CC (FreePointerMessageParams.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01EE968 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F0AEC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F0C14 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F0D18 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01F15E8 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01F35E0 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 * Callees:
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C01C0CC0 (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01F3968 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 */

void __fastcall PointerList::UnreferenceMsgData(__int64 a1, int a2)
{
  _InterlockedDecrement((volatile signed __int32 *)(a1 + 24));
  if ( a2 == 1 )
    *(_DWORD *)(a1 + 36) &= ~0x20u;
  --*(_BYTE *)(a2 + a1 + 48);
  if ( !*(_DWORD *)(a1 + 24) )
  {
    if ( (*(_DWORD *)(a1 + 36) & 0x10) == 0 )
      PointerFrameList::FreePointerInfoNode((PointerFrameList *)a1, *(_DWORD *)(a1 + 28));
    PointerList::FreeMsgData((PointerList *)a1);
  }
}

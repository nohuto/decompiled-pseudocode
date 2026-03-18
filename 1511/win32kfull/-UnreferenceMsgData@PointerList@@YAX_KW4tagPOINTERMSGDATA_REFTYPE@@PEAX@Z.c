/*
 * XREFs of ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC
 * Callers:
 *     xxxCleanupThreadPointerInputInfo @ 0x1C004BE40 (xxxCleanupThreadPointerInputInfo.c)
 *     xxxInterSendMsgEx @ 0x1C005DAE0 (xxxInterSendMsgEx.c)
 *     UnlinkSendListSms @ 0x1C0065234 (UnlinkSendListSms.c)
 *     ?DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z @ 0x1C0111A00 (-DestroyDesktop@@YAHPEAUtagDESKTOP@@@Z.c)
 *     FreePointerMessageParams @ 0x1C01E1174 (FreePointerMessageParams.c)
 *     ?AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z @ 0x1C01F7798 (-AddThreadPointerData@@YAHPEAUtagTHREADINPUTPOINTERLIST@@GK_KIPEAUHWND__@@H@Z.c)
 *     ?ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z @ 0x1C01F98EC (-ProcessAndUnreferencePreviousInput@@YAXPEBUtagPOINTERINFONODE@@_KKHH@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x1C01F9A0C (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9AE4 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z @ 0x1C01FA3E4 (-xxxGeneratePointerInputMessagesCore@@YAHHHHPEBUtagPOINTERINPUTFRAME@@@Z.c)
 *     ?CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z @ 0x1C01FC340 (-CancelActivePointer@@YAXPEAUtagINPUTPOINTERNODE@@@Z.c)
 *     ?CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z @ 0x1C022E710 (-CoalesceNodeWithPrevious@@YA_KPEBUtagPOINTERINPUTFRAME@@0PEAUtagPOINTERINFONODE@@KH@Z.c)
 * Callees:
 *     ?FreeMsgData@PointerList@@YAX_K@Z @ 0x1C01FC6C8 (-FreeMsgData@PointerList@@YAX_K@Z.c)
 *     ?FreePointerInfoNode@PointerFrameList@@YAXGKK@Z @ 0x1C022F8CC (-FreePointerInfoNode@PointerFrameList@@YAXGKK@Z.c)
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

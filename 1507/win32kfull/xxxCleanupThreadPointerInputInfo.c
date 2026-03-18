/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C0093620
 * Callers:
 *     <none>
 * Callees:
 *     ?UnregisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C0095484 (-UnregisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C00955A8 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0132C4C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9640 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCA2C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0239FBC (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023A9E8 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi
  __int64 v3; // rsi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == gptiManipulationThread )
    xxxCleanupManipulationThread((struct tagTHREADINFO *)a1);
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 968);
  v4 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v4);
  v3 = *(_QWORD *)(a1 + 992);
  if ( v3 )
  {
    PointerList::UnreferenceMsgData(*(_QWORD *)(v3 + 24), 5LL);
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 992) = 0LL;
  }
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), *v2);
  if ( !v4 )
  {
    --gdwInAtomicOperation;
    UserAtomicCheck::UnregisterStack((UserAtomicCheck *)&v4);
  }
  if ( a1 == qword_1C0322D20 )
  {
    qword_1C0322D20 = 0LL;
    if ( qword_1C0322CA0 )
      dword_1C0322D28 |= 1u;
  }
  if ( word_1C0322D00 )
  {
    if ( a1 == qword_1C0322D08 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}

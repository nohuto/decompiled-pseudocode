/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C004BE40
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C004AB74 (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C004AC30 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C0114B2C (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F9AE4 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01FCECC (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C023A194 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C023ABBC (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi
  __int64 v3; // rsi
  char v4; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == gptiManipulationThread )
    xxxCleanupManipulationThread((struct tagTHREADINFO *)a1);
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 960);
  v4 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v4);
  v3 = *(_QWORD *)(a1 + 984);
  if ( v3 )
  {
    PointerList::UnreferenceMsgData(*(_QWORD *)(v3 + 24), 5LL);
    Win32FreePool(v3);
    *(_QWORD *)(a1 + 984) = 0LL;
  }
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 960), *v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v4);
  if ( a1 == qword_1C0323610 )
  {
    qword_1C0323610 = 0LL;
    if ( qword_1C0323590 )
      dword_1C0323618 |= 1u;
  }
  if ( word_1C03235F0 )
  {
    if ( a1 == qword_1C03235F8 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}

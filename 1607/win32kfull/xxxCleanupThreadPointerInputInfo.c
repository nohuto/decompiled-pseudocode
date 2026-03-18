/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1C0107DE0
 * Callers:
 *     <none>
 * Callees:
 *     ?RegisterStack@UserAtomicCheck@@AEAAXXZ @ 0x1C007680C (-RegisterStack@UserAtomicCheck@@AEAAXXZ.c)
 *     ??1UserAtomicCheck@@QEAA@XZ @ 0x1C00768C8 (--1UserAtomicCheck@@QEAA@XZ.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1C01088A8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1C01F0D18 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z @ 0x1C01F414C (-UnreferenceMsgData@PointerList@@YAX_KW4tagPOINTERMSGDATA_REFTYPE@@PEAX@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1C0231C94 (-ForceCompletePendingPromotion@@YAXXZ.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x1C0232668 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1)
{
  struct tagTHREADPOINTERDATA **v2; // rdi
  __int64 v3; // rsi
  __int64 v4; // rdx
  __int64 v5; // r8
  char v6; // [rsp+30h] [rbp+8h] BYREF

  if ( a1 == gptiManipulationThread )
    xxxCleanupManipulationThread((struct tagTHREADINFO *)a1);
  v2 = (struct tagTHREADPOINTERDATA **)(a1 + 968);
  v6 = 0;
  ++gdwInAtomicOperation;
  UserAtomicCheck::RegisterStack((UserAtomicCheck *)&v6);
  v3 = *(_QWORD *)(a1 + 992);
  if ( v3 )
  {
    PointerList::UnreferenceMsgData(*(_QWORD *)(v3 + 24), 5LL);
    Win32FreePool(v3, v4, v5);
    *(_QWORD *)(a1 + 992) = 0LL;
  }
  while ( *v2 != (struct tagTHREADPOINTERDATA *)v2 )
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 968), *v2);
  UserAtomicCheck::~UserAtomicCheck((UserAtomicCheck *)&v6);
  if ( a1 == qword_1C0328CB0 )
  {
    qword_1C0328CB0 = 0LL;
    if ( qword_1C0328C30 )
      dword_1C0328CB8 |= 1u;
  }
  if ( word_1C0328C90 )
  {
    if ( a1 == qword_1C0328C98 )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue();
    }
  }
}

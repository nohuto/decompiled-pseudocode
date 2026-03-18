/*
 * XREFs of xxxCleanupThreadPointerInputInfo @ 0x1401364E0
 * Callers:
 *     <none>
 * Callees:
 *     Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline @ 0x140133F2C (Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline.c)
 *     ?xxxProcessMousePromotionQueue@@YAXXZ @ 0x140134570 (-xxxProcessMousePromotionQueue@@YAXXZ.c)
 *     ?UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z @ 0x1401365C0 (-UnlinkAndFreeThreadPointerData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@PEAUtagTHREADPOINTERDATA@@@Z.c)
 *     ?RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z @ 0x140136640 (-RemoveThreadPointerHookData@@YAXPEAUtagTHREADINPUTPOINTERLIST@@@Z.c)
 *     ?HasPendingPromotion@@YAHXZ @ 0x1401366C0 (-HasPendingPromotion@@YAHXZ.c)
 *     ?xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z @ 0x1402C3AE8 (-xxxCleanupManipulationThread@@YAXPEAUtagTHREADINFO@@@Z.c)
 *     ?ForceCompletePendingPromotion@@YAXXZ @ 0x1402CBEA4 (-ForceCompletePendingPromotion@@YAXXZ.c)
 */

void __fastcall xxxCleanupThreadPointerInputInfo(__int64 a1, __int64 a2)
{
  struct tagTHREADPOINTERDATA **v3; // rbx
  __int64 v4; // rcx
  struct tagTHREADPOINTERDATA *v5; // rdx
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 UserSessionState; // rbx
  __int64 v9; // rdx
  struct tagTHREADINFO *v10; // rcx
  __int64 v11; // rdx
  __int64 v12; // rcx

  if ( a1 == *(_QWORD *)(W32GetUserSessionState(a1, a2) + 18872) )
  {
    if ( (unsigned int)Feature_EliminateMitRitHandoff2__private_IsEnabledDeviceUsageNoInline() )
      *(_QWORD *)(W32GetUserSessionState(v10, v9) + 18872) = 0LL;
    else
      xxxCleanupManipulationThread(v10);
  }
  v3 = (struct tagTHREADPOINTERDATA **)(a1 + 1208);
  RemoveThreadPointerHookData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208));
  while ( 1 )
  {
    v5 = *v3;
    if ( *v3 == (struct tagTHREADPOINTERDATA *)v3 )
      break;
    UnlinkAndFreeThreadPointerData((struct tagTHREADINPUTPOINTERLIST *)(a1 + 1208), v5);
  }
  UserSessionState = W32GetUserSessionState(v4, v5);
  if ( a1 == *(_QWORD *)(UserSessionState + 16664) )
  {
    *(_QWORD *)(W32GetUserSessionState(v7, v6) + 16664) = 0LL;
    if ( *(_QWORD *)(UserSessionState + 16536) )
      *(_DWORD *)(UserSessionState + 16672) |= 1u;
  }
  if ( (unsigned int)HasPendingPromotion() )
  {
    if ( a1 == *(_QWORD *)(UserSessionState + 16640) )
    {
      ForceCompletePendingPromotion();
      xxxProcessMousePromotionQueue(v12, v11);
    }
  }
}

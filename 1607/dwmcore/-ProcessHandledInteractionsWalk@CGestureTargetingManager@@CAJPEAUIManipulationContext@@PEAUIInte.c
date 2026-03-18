/*
 * XREFs of ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@@Z @ 0x1800065AC
 * Callers:
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@@Z @ 0x1800065AC (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 *     ?TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z @ 0x180006FDC (-TargetFrameInput@CManipulationManager@@AEAAXPEAVCManipulationFrame@@@Z.c)
 * Callees:
 *     ?ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInteractionResource@@_KW4InertiaFrameType@@@Z @ 0x1800065AC (-ProcessHandledInteractionsWalk@CGestureTargetingManager@@CAJPEAUIManipulationContext@@PEAUIInte.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CGestureTargetingManager::ProcessHandledInteractionsWalk(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        unsigned int a4)
{
  int v4; // ebx
  __int64 v8; // rax
  int v10; // eax
  __int64 i; // [rsp+58h] [rbp+10h]

  v4 = 0;
  if ( a2 )
  {
    v4 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)a2 + 176LL))(a2, a3, 0LL);
    v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 32LL))(a1, a2);
    for ( i = v8; v8; i = v8 )
    {
      v10 = CGestureTargetingManager::ProcessHandledInteractionsWalk(a1, v8, a3, a4);
      if ( v4 >= 0 )
        v4 = v10;
      v8 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)a1 + 40LL))(a1, i);
    }
  }
  return (unsigned int)v4;
}

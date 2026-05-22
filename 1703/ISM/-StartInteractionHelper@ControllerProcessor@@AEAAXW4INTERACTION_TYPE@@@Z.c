/*
 * XREFs of ?StartInteractionHelper@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800359AC
 * Callers:
 *     ?ApplyZoomDelta@ControllerProcessor@@AEAAJXZ @ 0x1800341B8 (-ApplyZoomDelta@ControllerProcessor@@AEAAJXZ.c)
 *     ?TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z @ 0x1800358DC (-TryUpdateInteractionType@ControllerProcessor@@AEAAXW4INTERACTION_TYPE@@@Z.c)
 * Callees:
 *     ?StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z @ 0x180096DC0 (-StartPan@ManipulationInjector@@QEAAXAEAUtagPOINT@@@Z.c)
 *     ?StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z @ 0x180096E04 (-StartZoom@ManipulationInjector@@QEAAXAEAUtagPOINT@@_N@Z.c)
 *     _guard_dispatch_icall_nop @ 0x18009EB10 (_guard_dispatch_icall_nop.c)
 */

void __fastcall ControllerProcessor::StartInteractionHelper(__int64 a1, int a2)
{
  LONG *v4; // rdi
  LONG *v5; // rbx
  ManipulationInjector *v6; // rcx
  struct tagPOINT v7; // [rsp+30h] [rbp+8h] BYREF

  v4 = (LONG *)(a1 + 320);
  v5 = (LONG *)(a1 + 316);
  (*(void (__fastcall **)(_QWORD, __int64, __int64))(**(_QWORD **)(a1 + 264) + 24LL))(
    *(_QWORD *)(a1 + 264),
    a1 + 316,
    a1 + 320);
  v6 = (ManipulationInjector *)(a1 + 392);
  v7.x = *v5;
  v7.y = *v4;
  if ( a2 == 1 )
    ManipulationInjector::StartPan(v6, &v7);
  else
    ManipulationInjector::StartZoom(v6, &v7, a2 == 16);
}

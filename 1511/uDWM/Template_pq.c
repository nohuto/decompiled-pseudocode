/*
 * XREFs of Template_pq @ 0x18007E524
 * Callers:
 *     ?WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18002DB60 (-WindowTransitionChange@CWindowList@@UEAAJPEAUIDwmWindow@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2.c)
 *     ?ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z @ 0x180035F88 (-ShouldDelayTransition@CTopLevelWindow3D@@AEAA_N_N@Z.c)
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x18003915C (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     __security_check_cookie @ 0x18004EBE0 (__security_check_cookie.c)
 */

__int64 __fastcall Template_pq(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 *v5; // [rsp+20h] [rbp-38h] BYREF
  int v6; // [rsp+28h] [rbp-30h]
  int v7; // [rsp+2Ch] [rbp-2Ch]
  int *v8; // [rsp+30h] [rbp-28h]
  int v9; // [rsp+38h] [rbp-20h]
  int v10; // [rsp+3Ch] [rbp-1Ch]
  __int64 v11; // [rsp+70h] [rbp+18h] BYREF
  int v12; // [rsp+78h] [rbp+20h] BYREF

  v12 = a4;
  v11 = a3;
  v5 = &v11;
  v7 = 0;
  v6 = 8;
  v8 = &v12;
  v10 = 0;
  v9 = 4;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 2LL, &v5);
}

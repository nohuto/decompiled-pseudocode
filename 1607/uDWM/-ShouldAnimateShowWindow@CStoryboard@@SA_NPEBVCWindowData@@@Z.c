/*
 * XREFs of ?ShouldAnimateShowWindow@CStoryboard@@SA_NPEBVCWindowData@@@Z @ 0x1800421CC
 * Callers:
 *     ?OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@AEBUtagRECT@@2222@Z @ 0x180010D24 (-OnWindowTransitionTargetChanged@CAnimationScheduler@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARG.c)
 * Callees:
 *     ?IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z @ 0x180001154 (-IsLauncherShownAboveWindow@CImmersiveState@@QEAA_NPEBVCWindowData@@@Z.c)
 *     ?Create@CImmersiveState@@SAJPEAPEAV1@_K@Z @ 0x18000B5A4 (-Create@CImmersiveState@@SAJPEAPEAV1@_K@Z.c)
 *     ?Release@CBaseObject@@QEAAKXZ @ 0x180019B60 (-Release@CBaseObject@@QEAAKXZ.c)
 */

char __fastcall CStoryboard::ShouldAnimateShowWindow(const struct CWindowData *a1)
{
  unsigned __int64 v1; // rdx
  char v3; // bl
  int v4; // eax
  CBaseObject *v5; // r10
  CImmersiveState *v7; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)a1 + 15);
  v7 = 0LL;
  v3 = 1;
  v4 = CImmersiveState::Create(&v7, v1);
  v5 = v7;
  if ( v4 >= 0
    && (*((_DWORD *)a1 + 146) & 0x100000) != 0
    && ((*((_BYTE *)a1 + 580) & 1) != 0 || CImmersiveState::IsLauncherShownAboveWindow(v7, (const struct tagRECT *)a1)) )
  {
    v3 = 0;
  }
  if ( v5 )
    CBaseObject::Release(v5);
  return v3;
}

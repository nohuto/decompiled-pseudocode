/*
 * XREFs of EtwppTemplate_qq @ 0x18007D8C0
 * Callers:
 *     ?CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TARGET@@_NHPEAVCStoryboard@@PEAUtagRECT@@4H2PEAPEAVCAnimationComponent@@@Z @ 0x18000D3E0 (-CreateAnimationComponent@CTransitionVisualController@@QEAAJPEAVCWindowData@@W4DWMTRANSITION_TAR.c)
 *     ?RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z @ 0x18001B658 (-RemoveSecondaryWindowRepresentation@CWindowData@@QEAAXPEAVCSecondaryWindowRepresentation@@@Z.c)
 *     ??1CSecondaryWindowRepresentation@@MEAA@XZ @ 0x1800353D8 (--1CSecondaryWindowRepresentation@@MEAA@XZ.c)
 * Callees:
 *     __security_check_cookie @ 0x18004F240 (__security_check_cookie.c)
 */

__int64 EtwppTemplate_qq(__int64 a1, __int64 a2, ...)
{
  va_list v3; // [rsp+20h] [rbp-48h] BYREF
  int v4; // [rsp+28h] [rbp-40h]
  int v5; // [rsp+2Ch] [rbp-3Ch]
  va_list v6; // [rsp+30h] [rbp-38h]
  int v7; // [rsp+38h] [rbp-30h]
  int v8; // [rsp+3Ch] [rbp-2Ch]
  __int64 v9; // [rsp+80h] [rbp+18h] BYREF
  va_list va; // [rsp+80h] [rbp+18h]
  va_list va1; // [rsp+88h] [rbp+20h] BYREF

  va_start(va1, a2);
  va_start(va, a2);
  v9 = va_arg(va1, _QWORD);
  va_copy(v3, va);
  v5 = 0;
  v4 = 8;
  va_copy(v6, va1);
  v8 = 0;
  v7 = 8;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 2LL, &v3);
}

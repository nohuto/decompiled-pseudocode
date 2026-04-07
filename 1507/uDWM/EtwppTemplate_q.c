/*
 * XREFs of EtwppTemplate_q @ 0x18007A68C
 * Callers:
 *     ?EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z @ 0x18000CB78 (-EnsureSnapshot@CTransitionVisualController@@QEAAJPEAVCWindowData@@@Z.c)
 *     ?RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T_LARGE_INTEGER@@II@Z @ 0x18002BF90 (-RegisterSharedThumbnailVisual@CWindowList@@UEAAJPEAUHWND__@@0HHAEBU_DWM_THUMBNAIL_PROPERTIES@@T.c)
 *     ?_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z @ 0x180093E90 (-_StopTrackingWindow@CStoryboard@@IEAAJPEAVCWindowData@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180048580 (__security_check_cookie.c)
 */

__int64 __fastcall EtwppTemplate_q(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 *v4; // [rsp+20h] [rbp-38h] BYREF
  int v5; // [rsp+28h] [rbp-30h]
  int v6; // [rsp+2Ch] [rbp-2Ch]
  __int64 v7; // [rsp+70h] [rbp+18h] BYREF

  v7 = a3;
  v4 = &v7;
  v6 = 0;
  v5 = 8;
  return EtwEventWrite(Microsoft_Windows_Dwm_UdwmHandle, a2, 1LL, &v4);
}

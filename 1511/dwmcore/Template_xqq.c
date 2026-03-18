/*
 * XREFs of Template_xqq @ 0x18010671C
 * Callers:
 *     ?s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z @ 0x180001520 (-s_HitTestRequest@CInputManager@@CAHPEAUtagDITCALLBACKSTRUCT@@@Z.c)
 *     ?HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPEAI4PEAU_LUID@@PEAVCMILMatrix@@5PEA_N5@Z @ 0x180008B40 (-HitTestPoint@CHitTestContext@@QEAAJPEAVCVisual@@PEAVCVisualTree@@HHK_NPEAUHMONITOR__@@PEAPEAXPE.c)
 *     ?RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z @ 0x18007D530 (-RenderDirtyRegion@CHwndRenderTarget@@IEAAJPEAVCDrawingContext@@PEAVCComposeTop@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

ULONG __fastcall Template_xqq(__int64 a1, const EVENT_DESCRIPTOR *a2, __int64 a3, int a4, char a5)
{
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+20h] [rbp-40h] BYREF
  int *v7; // [rsp+30h] [rbp-30h]
  __int64 v8; // [rsp+38h] [rbp-28h]
  char *v9; // [rsp+40h] [rbp-20h]
  __int64 v10; // [rsp+48h] [rbp-18h]
  __int64 v11; // [rsp+80h] [rbp+20h] BYREF
  int v12; // [rsp+88h] [rbp+28h] BYREF

  v12 = a4;
  v11 = a3;
  UserData.Ptr = (ULONGLONG)&v11;
  *(_QWORD *)&UserData.Size = 8LL;
  v7 = &v12;
  v8 = 4LL;
  v9 = &a5;
  v10 = 4LL;
  return EventWrite(Microsoft_Windows_Dwm_CoreHandle, a2, 3u, &UserData);
}

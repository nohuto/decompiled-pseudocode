/*
 * XREFs of PointerSpeedHitTest @ 0x1C022D63C
 * Callers:
 *     ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01F19CC (-HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01FB2E8 (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01FD048 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C022FAA0 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00874C0 (IsCurrentDesktopComposed.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C022B1F4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C022BD14 (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C022BF0C (-_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022BF74 (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C022D78C (SpeedHitTestWithoutTargeting.c)
 *     TouchTargetingCreateContact @ 0x1C024B880 (TouchTargetingCreateContact.c)
 */

struct tagWND *__fastcall PointerSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINTEREVENTINT *a2,
        int *a3,
        unsigned int *a4)
{
  struct tagRECT *v9; // rdi
  __int64 v10; // r8
  __int128 v11; // xmm0
  int v12; // eax
  int v13; // eax
  struct tagWND *v14; // rbx
  struct tagRECT v15; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v16; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v17[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v18; // [rsp+64h] [rbp-9Ch]
  __int128 v19; // [rsp+6Ch] [rbp-94h]
  __int128 v20; // [rsp+7Ch] [rbp-84h]
  int v21; // [rsp+8Ch] [rbp-74h]
  struct tagRECT v22; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v23[184]; // [rsp+A0h] [rbp-60h] BYREF
  int v24; // [rsp+158h] [rbp+58h]
  int v25; // [rsp+15Ch] [rbp+5Ch]

  if ( !(unsigned int)TouchTargetingEnabledForInput(*(struct tagPOINT *)((char *)a2 + 40), a2) )
    return (struct tagWND *)SpeedHitTestWithoutTargeting(
                              (_DWORD)a1,
                              *((_DWORD *)a2 + 2),
                              *((_QWORD *)a2 + 11),
                              *((_QWORD *)a2 + 5),
                              (__int64)a3,
                              (__int64)a4);
  EtwTraceTouchTargetingSpeedHitTestStart();
  v22 = 0LL;
  v9 = 0LL;
  v15 = 0LL;
  v25 = 0;
  v24 = 0;
  if ( (unsigned int)_GetDeviceRects(a2, &v22, &v15) )
  {
    v16 = v22;
    _SetHimetricToPixelRatio(&v16, &v15, (struct tagTOUCHTARGETINGCONTACT *)v23);
    v9 = &v22;
  }
  v11 = *((_OWORD *)a2 + 7);
  v18 = *((_QWORD *)a2 + 5);
  v12 = *((_DWORD *)a2 + 27);
  v20 = v11;
  v19 = v11;
  if ( (v12 & 2) != 0 )
    v21 = *((_DWORD *)a2 + 36);
  else
    v21 = 0;
  TouchTargetingCreateContact(v17, v9, v10, v23);
  v13 = IsCurrentDesktopComposed();
  v14 = SpeedHitTestWithTargeting(
          a1,
          *((_DWORD *)a2 + 2),
          *((_QWORD *)a2 + 11),
          (struct tagTOUCHTARGETINGCONTACT *)v23,
          v13,
          a3,
          a4);
  EtwTraceTouchTargetingSpeedHitTestStop();
  return v14;
}

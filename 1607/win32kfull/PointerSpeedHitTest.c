/*
 * XREFs of PointerSpeedHitTest @ 0x1C02233A0
 * Callers:
 *     ?GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z @ 0x1C01C0E28 (-GetNodeQueue@@YAPEAUtagQ@@PEBUtagPOINTERINFONODE@@PEAH@Z.c)
 *     ?HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z @ 0x1C01E7E90 (-HitTestTPPrimaryContact@@YAXPEAUtagPOINTERINFONODE@@PEAUtagTPSTATE@@@Z.c)
 *     ?xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z @ 0x1C01F264C (-xxxSetPointerFrameTargetWindows@@YAHPEAUtagTHREADINFO@@_KIPEAH@Z.c)
 *     ?UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@IPEAUHWND__@@PEAGPEAI@Z @ 0x1C01F42C8 (-UpdateInputCaptureAndGetTarget@@YAPEAUtagWND@@PEBUtagPOINTEREVENTINT@@PEAUtagINPUTPOINTERNODE@@.c)
 * Callees:
 *     IsCurrentDesktopComposed @ 0x1C00DF580 (IsCurrentDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z @ 0x1C0220DB4 (-SpeedHitTestWithTargeting@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@HPEAHPEAI@Z.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C02219DC (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C0221BD4 (-_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0221C3C (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     SpeedHitTestWithoutTargeting @ 0x1C02234F0 (SpeedHitTestWithoutTargeting.c)
 *     TouchTargetingCreateContact @ 0x1C0247BB0 (TouchTargetingCreateContact.c)
 */

struct tagWND *__fastcall PointerSpeedHitTest(
        struct tagWND *a1,
        struct tagPOINTEREVENTINT *a2,
        int *a3,
        unsigned int *a4)
{
  struct tagRECT *v9; // rdi
  __int64 v10; // r9
  __int64 v11; // r8
  __int128 v12; // xmm0
  int v13; // eax
  int v14; // eax
  struct tagWND *v15; // rbx
  struct tagRECT v16; // [rsp+40h] [rbp-C0h] BYREF
  struct tagRECT v17; // [rsp+50h] [rbp-B0h] BYREF
  _BYTE v18[4]; // [rsp+60h] [rbp-A0h] BYREF
  __int64 v19; // [rsp+64h] [rbp-9Ch]
  __int128 v20; // [rsp+6Ch] [rbp-94h]
  __int128 v21; // [rsp+7Ch] [rbp-84h]
  int v22; // [rsp+8Ch] [rbp-74h]
  struct tagRECT v23; // [rsp+90h] [rbp-70h] BYREF
  _BYTE v24[184]; // [rsp+A0h] [rbp-60h] BYREF
  int v25; // [rsp+158h] [rbp+58h]
  int v26; // [rsp+15Ch] [rbp+5Ch]

  if ( !(unsigned int)TouchTargetingEnabledForInput(*(struct tagPOINT *)((char *)a2 + 40), a2, (__int64)a3, (__int64)a4) )
    return (struct tagWND *)SpeedHitTestWithoutTargeting(
                              (_DWORD)a1,
                              *((_DWORD *)a2 + 2),
                              *((_QWORD *)a2 + 11),
                              *((_QWORD *)a2 + 5),
                              (__int64)a3,
                              (__int64)a4);
  EtwTraceTouchTargetingSpeedHitTestStart();
  v23 = 0LL;
  v9 = 0LL;
  v16 = 0LL;
  v26 = 0;
  v25 = 0;
  if ( (unsigned int)_GetDeviceRects(a2, &v23, &v16, v10) )
  {
    v17 = v23;
    _SetHimetricToPixelRatio(&v17, &v16, (struct tagTOUCHTARGETINGCONTACT *)v24);
    v9 = &v23;
  }
  v12 = *((_OWORD *)a2 + 7);
  v19 = *((_QWORD *)a2 + 5);
  v13 = *((_DWORD *)a2 + 27);
  v21 = v12;
  v20 = v12;
  if ( (v13 & 2) != 0 )
    v22 = *((_DWORD *)a2 + 36);
  else
    v22 = 0;
  TouchTargetingCreateContact(v18, v9, v11, v24);
  v14 = IsCurrentDesktopComposed();
  v15 = SpeedHitTestWithTargeting(
          a1,
          *((_DWORD *)a2 + 2),
          *((_QWORD *)a2 + 11),
          (struct tagTOUCHTARGETINGCONTACT *)v24,
          v14,
          a3,
          a4);
  EtwTraceTouchTargetingSpeedHitTestStop();
  return v15;
}

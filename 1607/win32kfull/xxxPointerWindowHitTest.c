/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C0223C68
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F0F5C (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C0058D20 (IsThreadDesktopComposed.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0221274 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022136C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C02219DC (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C0221BD4 (-_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C0221C3C (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C0222F9C (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022331C (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C0247BB0 (TouchTargetingCreateContact.c)
 */

HWND __fastcall xxxPointerWindowHitTest(
        struct tagTHREADINFO *a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        int *a7,
        unsigned int a8,
        struct tagPOINTEREVENTINT *a9,
        __int64 a10,
        struct tagPOINT *a11)
{
  __int64 v14; // r8
  __int64 v15; // r9
  __int64 v16; // r9
  __int64 v17; // r8
  struct tagRECT *v18; // rcx
  __int128 v19; // xmm0
  int v20; // eax
  int *v21; // r9
  __int64 v22; // rdx
  struct tagWND *v23; // rax
  struct tagRECT v24; // xmm0
  HWND v25; // rbx
  struct tagPOINT v26; // rcx
  struct tagRECT v29; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v30; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v31[4]; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v32; // [rsp+94h] [rbp-6Ch]
  __int128 v33; // [rsp+9Ch] [rbp-64h]
  __int128 v34; // [rsp+ACh] [rbp-54h]
  int v35; // [rsp+BCh] [rbp-44h]
  unsigned int v36; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v37; // [rsp+C8h] [rbp-38h]
  __int64 v38; // [rsp+D0h] [rbp-30h]
  __int64 v39; // [rsp+D8h] [rbp-28h]
  int v40; // [rsp+E0h] [rbp-20h]
  unsigned int v41; // [rsp+E4h] [rbp-1Ch]
  _OWORD *v42; // [rsp+E8h] [rbp-18h]
  struct tagPOINT v43; // [rsp+F0h] [rbp-10h]
  HWND v44; // [rsp+F8h] [rbp-8h]
  int v45; // [rsp+100h] [rbp+0h]
  int v46; // [rsp+114h] [rbp+14h]
  int v47; // [rsp+118h] [rbp+18h]
  int *v48; // [rsp+120h] [rbp+20h]
  void *v49; // [rsp+168h] [rbp+68h]
  int *v50; // [rsp+170h] [rbp+70h]
  struct tagRECT v51; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v52[11]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v53; // [rsp+240h] [rbp+140h]
  _OWORD v54[12]; // [rsp+250h] [rbp+150h] BYREF

  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)TouchTargetingEnabledForInput(a6, a9, v14, v15) )
  {
    if ( gSqmIsOptedIn )
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
    *a11 = 0LL;
    *((_QWORD *)&v53 + 1) = 0LL;
    *(_QWORD *)&v30.left = 0LL;
    v51 = 0LL;
    v29 = 0LL;
    if ( (unsigned int)_GetDeviceRects(a9, &v51, &v29, v16) )
    {
      v30 = v51;
      _SetHimetricToPixelRatio(&v30, &v29, (struct tagTOUCHTARGETINGCONTACT *)v52);
      v18 = &v51;
    }
    else
    {
      v18 = *(struct tagRECT **)&v30.left;
    }
    v19 = *((_OWORD *)a9 + 7);
    v20 = *((_DWORD *)a9 + 27);
    v32 = a6;
    v34 = v19;
    v33 = v19;
    if ( (v20 & 2) != 0 )
      v35 = *((_DWORD *)a9 + 36);
    else
      v35 = 0;
    TouchTargetingCreateContact(v31, v18, v17, v52);
    v37 = a4;
    v38 = a5;
    v39 = a10;
    v40 = *a7;
    v41 = a8;
    v42 = v52;
    v43 = *a11;
    v36 = a3;
    v44 = 0LL;
    v45 = 0;
    v46 = IsThreadDesktopComposed((__int64)a1);
    v54[0] = v52[0];
    v47 = (int)v21;
    v48 = v21;
    v54[1] = v52[1];
    v49 = v21;
    v50 = v21;
    v54[2] = v52[2];
    *(struct tagPOINT *)&v51.left = a6;
    v54[3] = v52[3];
    v54[4] = v52[4];
    v54[5] = v52[5];
    v54[6] = v52[6];
    v22 = *((unsigned int *)a9 + 2);
    v54[7] = v52[7];
    v54[8] = v52[8];
    v54[9] = v52[9];
    v54[10] = v52[10];
    v54[11] = v53;
    v23 = TargetTopLevelWindow(
            a2,
            v22,
            *((_QWORD *)a9 + 11),
            (struct tagTOUCHTARGETINGCONTACT *)v54,
            (struct tagPOINT *)&v51,
            a11,
            v46,
            &v30.left,
            v21,
            (unsigned int *)v21);
    v24 = (struct tagRECT)*((_OWORD *)a2 + 7);
    v49 = v23;
    v29 = v24;
    xxxWindowHitTestWithTargeting((__int64)a2, a6, (__int64)&v36, &v29, 0);
    if ( !HIDWORD(v50) )
    {
      v26 = v43;
      v25 = v44;
      *a7 = v40;
      *a11 = v26;
      TTSqm(v26, (const struct tagTOUCHTARGETINGCONTACT *)v52);
      goto LABEL_17;
    }
  }
  else if ( gSqmIsOptedIn && *((_DWORD *)a9 + 2) == 2 && (*((_DWORD *)a9 + 5) & 0x10000) != 0 )
  {
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 0LL);
  }
  v25 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8);
LABEL_17:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v25;
}

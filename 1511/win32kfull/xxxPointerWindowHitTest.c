/*
 * XREFs of xxxPointerWindowHitTest @ 0x1C022DEF4
 * Callers:
 *     ?xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUtagQ@@HPEAHPEAUtagPOINT@@@Z @ 0x1C01F9D58 (-xxxDeterminePointerTargetWindow@@YAPEAUtagWND@@PEAUtagTHREADINFO@@PEBUtagPOINTERINFONODE@@PEAUt.c)
 * Callees:
 *     IsThreadDesktopComposed @ 0x1C00662F4 (IsThreadDesktopComposed.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022B694 (-TTSqm@@YAXUtagPOINT@@PEBUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH4PEAI@Z @ 0x1C022B78C (-TargetTopLevelWindow@@YAPEAUtagWND@@PEAU1@K_KPEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@3HPEAH.c)
 *     ?TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z @ 0x1C022BD14 (-TouchTargetingEnabledForInput@@YAHUtagPOINT@@PEBUtagPOINTEREVENTINT@@@Z.c)
 *     ?_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z @ 0x1C022BF0C (-_GetDeviceRects@@YAHPEBUtagPOINTEREVENTINT@@PEAUtagRECT@@1@Z.c)
 *     ?_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z @ 0x1C022BF74 (-_SetHimetricToPixelRatio@@YAXUtagRECT@@0PEAUtagTOUCHTARGETINGCONTACT@@@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x1C022D268 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHKPEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x1C022D5C4 (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x1C024B880 (TouchTargetingCreateContact.c)
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
  struct tagRECT *v15; // rcx
  __int128 v16; // xmm0
  int v17; // eax
  int *v18; // r9
  unsigned int v19; // edx
  struct tagWND *v20; // rax
  struct tagRECT v21; // xmm0
  HWND v22; // rbx
  struct tagPOINT v23; // rcx
  struct tagRECT v26; // [rsp+70h] [rbp-90h] BYREF
  struct tagRECT v27; // [rsp+80h] [rbp-80h] BYREF
  _BYTE v28[4]; // [rsp+90h] [rbp-70h] BYREF
  struct tagPOINT v29; // [rsp+94h] [rbp-6Ch]
  __int128 v30; // [rsp+9Ch] [rbp-64h]
  __int128 v31; // [rsp+ACh] [rbp-54h]
  int v32; // [rsp+BCh] [rbp-44h]
  unsigned int v33; // [rsp+C0h] [rbp-40h] BYREF
  __int64 v34; // [rsp+C8h] [rbp-38h]
  __int64 v35; // [rsp+D0h] [rbp-30h]
  __int64 v36; // [rsp+D8h] [rbp-28h]
  int v37; // [rsp+E0h] [rbp-20h]
  unsigned int v38; // [rsp+E4h] [rbp-1Ch]
  _OWORD *v39; // [rsp+E8h] [rbp-18h]
  struct tagPOINT v40; // [rsp+F0h] [rbp-10h]
  HWND v41; // [rsp+F8h] [rbp-8h]
  int v42; // [rsp+100h] [rbp+0h]
  int v43; // [rsp+114h] [rbp+14h]
  int v44; // [rsp+118h] [rbp+18h]
  int *v45; // [rsp+120h] [rbp+20h]
  void *v46; // [rsp+168h] [rbp+68h]
  int *v47; // [rsp+170h] [rbp+70h]
  struct tagRECT v48; // [rsp+180h] [rbp+80h] BYREF
  _OWORD v49[11]; // [rsp+190h] [rbp+90h] BYREF
  __int128 v50; // [rsp+240h] [rbp+140h]
  _OWORD v51[12]; // [rsp+250h] [rbp+150h] BYREF

  EtwTraceTouchTargetingWindowHitTestStart();
  if ( (unsigned int)TouchTargetingEnabledForInput(a6, a9) )
  {
    if ( gSqmIsOptedIn )
      WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 1000LL);
    *(_QWORD *)&v27.left = 0LL;
    v48 = 0LL;
    v26 = 0LL;
    *a11 = 0LL;
    *((_QWORD *)&v50 + 1) = 0LL;
    if ( (unsigned int)_GetDeviceRects(a9, &v48, &v26) )
    {
      v27 = v48;
      _SetHimetricToPixelRatio(&v27, &v26, (struct tagTOUCHTARGETINGCONTACT *)v49);
      v15 = &v48;
    }
    else
    {
      v15 = *(struct tagRECT **)&v27.left;
    }
    v16 = *((_OWORD *)a9 + 7);
    v17 = *((_DWORD *)a9 + 27);
    v29 = a6;
    v31 = v16;
    v30 = v16;
    if ( (v17 & 2) != 0 )
      v32 = *((_DWORD *)a9 + 36);
    else
      v32 = 0;
    TouchTargetingCreateContact(v28, v15, v14, v49);
    v34 = a4;
    v35 = a5;
    v36 = a10;
    v37 = *a7;
    v38 = a8;
    v39 = v49;
    v40 = *a11;
    v33 = a3;
    v41 = 0LL;
    v42 = 0;
    v43 = IsThreadDesktopComposed((__int64)a1);
    v51[0] = v49[0];
    v44 = (int)v18;
    v45 = v18;
    v51[1] = v49[1];
    v46 = v18;
    v47 = v18;
    v51[2] = v49[2];
    *(struct tagPOINT *)&v48.left = a6;
    v51[3] = v49[3];
    v51[4] = v49[4];
    v51[5] = v49[5];
    v51[6] = v49[6];
    v19 = *((_DWORD *)a9 + 2);
    v51[7] = v49[7];
    v51[8] = v49[8];
    v51[9] = v49[9];
    v51[10] = v49[10];
    v51[11] = v50;
    v20 = TargetTopLevelWindow(
            a2,
            v19,
            *((_QWORD *)a9 + 11),
            (struct tagTOUCHTARGETINGCONTACT *)v51,
            (struct tagPOINT *)&v48,
            a11,
            v43,
            &v27.left,
            v18,
            (unsigned int *)v18);
    v21 = (struct tagRECT)*((_OWORD *)a2 + 7);
    v46 = v20;
    v26 = v21;
    xxxWindowHitTestWithTargeting((__int64)a2, a6, (__int64)&v33, &v26, 0);
    if ( !HIDWORD(v47) )
    {
      v23 = v40;
      v22 = v41;
      *a7 = v37;
      *a11 = v23;
      TTSqm(v23, (const struct tagTOUCHTARGETINGCONTACT *)v49);
      goto LABEL_17;
    }
  }
  else if ( gSqmIsOptedIn && *((_DWORD *)a9 + 2) == 2 && (*((_DWORD *)a9 + 5) & 0x10000) != 0 )
  {
    WinSqmAddToAverageDWORD(&SqmGlobalSessionGuid, 8633LL, 0LL);
  }
  v22 = xxxWindowHitTestWithoutTargeting(a1, a2, a3, a4, a5, a6, a7, a8);
LABEL_17:
  EtwTraceTouchTargetingWindowHitTestStop();
  return v22;
}

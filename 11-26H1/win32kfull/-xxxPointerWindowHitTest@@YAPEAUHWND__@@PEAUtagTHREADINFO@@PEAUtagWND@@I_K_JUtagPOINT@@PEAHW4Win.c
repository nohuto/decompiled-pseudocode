/*
 * XREFs of ?xxxPointerWindowHitTest@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@2PEAU4@@Z @ 0x1400869B0
 * Callers:
 *     EditionPointerWindowHitTest @ 0x140086830 (EditionPointerWindowHitTest.c)
 * Callees:
 *     ?IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z @ 0x1400197A4 (-IsThreadDesktopComposed@@YAHPEBUtagTHREADINFO@@@Z.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ?xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@PEAHW4WindowHitTestOption@@PEBUtagPOINTEREVENTINT@@PEAU4@@Z @ 0x140086DFC (-xxxWindowHitTestWithoutTargeting@@YAPEAUHWND__@@PEAUtagTHREADINFO@@PEAUtagWND@@I_K_JUtagPOINT@@.c)
 *     TouchTargetingCreateContact @ 0x140086EF8 (TouchTargetingCreateContact.c)
 *     ?TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z @ 0x14008837C (-TopLevelTouchTarget@@YAPEAUtagWND@@PEAU1@PEAUtagTOUCHTARGETINGCONTACT@@PEAUtagPOINT@@2H@Z.c)
 *     ?xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTARGS@@UtagRECT@@W4tagTARGETING_PROPERTY@@@Z @ 0x14008A1B8 (-xxxWindowHitTestWithTargeting@@YAPEAUHWND__@@PEAUtagWND@@UtagPOINT@@PEAUtagPNTRWINDOWHITTTESTAR.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

__int64 __fastcall xxxPointerWindowHitTest(
        struct tagPOINT a1,
        struct tagWND *a2,
        unsigned int a3,
        __int64 a4,
        __int64 a5,
        struct tagPOINT a6,
        _DWORD *a7,
        int a8,
        __int64 a9,
        __int64 a10,
        struct tagPOINT *a11)
{
  __int64 v14; // rbx
  _QWORD *v16; // rsi
  __int64 v17; // rcx
  __int64 v18; // rdi
  struct tagTHREADINFO *v19; // rax
  struct tagTHREADINFO *v20; // rax
  __int128 *v21; // rcx
  __int128 v22; // xmm0
  int v23; // eax
  const struct tagTHREADINFO *v24; // rsi
  __int64 v25; // r8
  __int64 v26; // rax
  _OWORD *v27; // rcx
  __int128 v28; // xmm0
  struct tagWND *v29; // rax
  void *v30; // rcx
  struct tagPOINT v33; // [rsp+68h] [rbp-98h] BYREF
  __int128 v34; // [rsp+70h] [rbp-90h] BYREF
  __int128 v35; // [rsp+80h] [rbp-80h] BYREF
  _QWORD v36[2]; // [rsp+90h] [rbp-70h] BYREF
  __int64 v37; // [rsp+A0h] [rbp-60h]
  _QWORD v38[3]; // [rsp+A8h] [rbp-58h] BYREF
  __int128 v39; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v40; // [rsp+D0h] [rbp-30h] BYREF
  _OWORD v41[3]; // [rsp+E0h] [rbp-20h] BYREF

  v33 = a1;
  EtwTraceTouchTargetingWindowHitTestStart();
  if ( !(unsigned int)((__int64 (__fastcall *)(_QWORD, _QWORD))TouchTargetingEnabledForInput)(a6, a9 + 8) )
  {
    v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithoutTargeting)(
            a1,
            a2,
            a3,
            a4,
            a5,
            a6,
            a7,
            a8);
LABEL_3:
    EtwTraceTouchTargetingWindowHitTestStop();
    return v14;
  }
  v16 = (_QWORD *)Win32AllocPoolZInit(192LL, 1920103253LL);
  if ( v16 )
  {
    v18 = Win32AllocPoolZInit(184LL, 1920103253LL);
    if ( v18 )
    {
      v19 = PtiCurrent(v17);
      v38[0] = *((_QWORD *)v19 + 47);
      *((_QWORD *)v19 + 47) = v38;
      v38[2] = Win32FreePool;
      v38[1] = v16;
      v20 = PtiCurrent((__int64)v38);
      v39 = 0LL;
      v40 = 0LL;
      v36[0] = *((_QWORD *)v20 + 47);
      *((_QWORD *)v20 + 47) = v36;
      v37 = (__int64)Win32FreePool;
      *a11 = 0LL;
      v36[1] = v18;
      v16[23] = 0LL;
      *(_QWORD *)&v34 = 0LL;
      memset(v41, 0, sizeof(v41));
      if ( (unsigned int)_GetDeviceRects(a9 + 8, &v39, &v40) )
      {
        v34 = v40;
        v35 = v39;
        _SetHimetricToPixelRatio(&v35, &v34, v16);
        v21 = &v39;
      }
      else
      {
        v21 = (__int128 *)v34;
      }
      v22 = *(_OWORD *)(a9 + 112);
      v23 = *(_DWORD *)(a9 + 108);
      *(struct tagPOINT *)((char *)v41 + 4) = a6;
      *(_OWORD *)((char *)v41 + 12) = v22;
      *(_OWORD *)((char *)&v41[1] + 12) = v22;
      if ( (v23 & 2) != 0 )
        HIDWORD(v41[2]) = *(_DWORD *)(a9 + 144);
      else
        HIDWORD(v41[2]) = 0;
      TouchTargetingCreateContact(v41, v21, 1LL, v16);
      *(_QWORD *)(v18 + 8) = a4;
      *(_QWORD *)(v18 + 16) = a5;
      *(_QWORD *)(v18 + 24) = a10;
      *(_DWORD *)v18 = a3;
      *(_DWORD *)(v18 + 32) = *a7;
      *(_QWORD *)(v18 + 40) = v16;
      v24 = (const struct tagTHREADINFO *)v33;
      *(_DWORD *)(v18 + 36) = a8;
      *(struct tagPOINT *)(v18 + 48) = *a11;
      *(_QWORD *)(v18 + 56) = 0LL;
      *(_DWORD *)(v18 + 64) = 0;
      *(_DWORD *)(v18 + 84) = IsThreadDesktopComposed(v24);
      *(_DWORD *)(v18 + 88) = v25;
      *(_QWORD *)(v18 + 96) = v25;
      *(_QWORD *)(v18 + 168) = v25;
      *(_QWORD *)(v18 + 176) = v25;
      v33 = a6;
      v26 = Win32AllocPoolZInit(192LL, 1920103253LL);
      *(_QWORD *)&v34 = v26;
      if ( v26 )
      {
        v27 = *(_OWORD **)(v18 + 40);
        *(_OWORD *)v26 = *v27;
        *(_OWORD *)(v26 + 16) = v27[1];
        *(_OWORD *)(v26 + 32) = v27[2];
        *(_OWORD *)(v26 + 48) = v27[3];
        *(_OWORD *)(v26 + 64) = v27[4];
        *(_OWORD *)(v26 + 80) = v27[5];
        *(_OWORD *)(v26 + 96) = v27[6];
        v28 = v27[7];
        v27 += 8;
        *(_OWORD *)(v26 + 112) = v28;
        *(_OWORD *)(v26 + 128) = *v27;
        *(_OWORD *)(v26 + 144) = v27[1];
        *(_OWORD *)(v26 + 160) = v27[2];
        *(_OWORD *)(v26 + 176) = v27[3];
        v29 = TopLevelTouchTarget(a2, (struct tagTOUCHTARGETINGCONTACT *)v26, &v33, a11, *(_DWORD *)(v18 + 84));
        v30 = (void *)v34;
        *(_QWORD *)(v18 + 168) = v29;
        Win32FreePool(v30);
      }
      v35 = *(_OWORD *)(*((_QWORD *)a2 + 5) + 88LL);
      ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithTargeting)(a2, a6, v18, &v35, 0);
      if ( *(_DWORD *)(v18 + 180) )
      {
        v14 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, _DWORD))xxxWindowHitTestWithoutTargeting)(
                v24,
                a2,
                a3,
                a4,
                a5,
                a6,
                a7,
                a8);
      }
      else
      {
        *a7 = *(_DWORD *)(v18 + 32);
        *a11 = *(struct tagPOINT *)(v18 + 48);
        v14 = *(_QWORD *)(v18 + 56);
      }
      PopAndFreeW32ThreadLock((__int64)v36);
      v37 = -1LL;
      PopAndFreeW32ThreadLock((__int64)v38);
      goto LABEL_3;
    }
    Win32FreePool(v16);
  }
  return 0LL;
}

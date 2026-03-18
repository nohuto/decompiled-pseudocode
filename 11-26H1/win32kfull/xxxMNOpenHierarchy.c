/*
 * XREFs of xxxMNOpenHierarchy @ 0x14024D400
 * Callers:
 *     xxxMNMouseMove @ 0x14000F5A4 (xxxMNMouseMove.c)
 *     xxxMNButtonUp @ 0x1402375A8 (xxxMNButtonUp.c)
 *     xxxMenuWindowProc @ 0x140242410 (xxxMenuWindowProc.c)
 *     xxxMNButtonDown @ 0x14024D270 (xxxMNButtonDown.c)
 *     xxxMNKeyDown @ 0x1402D9B18 (xxxMNKeyDown.c)
 *     xxxMNKeyFilter @ 0x1402FC2DC (xxxMNKeyFilter.c)
 * Callees:
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z @ 0x14000C04C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@PEAUtagMENU@@@Z.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     ??4?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z @ 0x14000D8A4 (--4-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAAAEAV0@QEAUtagPOPUPMENU@@@Z.c)
 *     ??1?$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ @ 0x14000EBC4 (--1-$SmartObjStackRefBase@UtagPOPUPMENU@@@@IEAA@XZ.c)
 *     safe_cast_fnid_to_PMENUWND @ 0x14000EC74 (safe_cast_fnid_to_PMENUWND.c)
 *     ??0?$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z @ 0x14000F0FC (--0-$Win32HMThreadLockBase@UtagWND@@$0A@$0A@@@QEAA@PEAUtagWND@@@Z.c)
 *     ??1?$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ @ 0x140013998 (--1-$Win32HMThreadLockAlways@UtagWND@@@@QEAA@XZ.c)
 *     FindTimer @ 0x14001FEF4 (FindTimer.c)
 *     GetMonitorRectForWindow @ 0x1400313D4 (GetMonitorRectForWindow.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z @ 0x140032BC8 (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@H@Z.c)
 *     ?MNIsUAHMenu@@YAHPEAUtagMENU@@@Z @ 0x1400341BC (-MNIsUAHMenu@@YAHPEAUtagMENU@@@Z.c)
 *     ??1?$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ @ 0x140034200 (--1-$Win32HMOptionalThreadLock@UtagHOOK@@@@QEAA@XZ.c)
 *     ??$ManualUnlock@X@?$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ @ 0x140034424 (--$ManualUnlock@X@-$Win32HMThreadLockBase@UtagCURSOR@@$00$00@@QEAAPEAUtagCURSOR@@XZ.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     xxxSendTransformableMessageTimeout @ 0x140036F84 (xxxSendTransformableMessageTimeout.c)
 *     xxxWindowEvent @ 0x140043360 (xxxWindowEvent.c)
 *     ??$ManualLock@X@?$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z @ 0x140046914 (--$ManualLock@X@-$Win32HMThreadLockBase@UtagMENU@@$00$00@@QEAAXPEAUtagMENU@@@Z.c)
 *     xxxSetWindowPos @ 0x140048EC0 (xxxSetWindowPos.c)
 *     GetWindowDpiLastNotify @ 0x14004ABD8 (GetWindowDpiLastNotify.c)
 *     xxxInheritWindowMonitor @ 0x14004C544 (xxxInheritWindowMonitor.c)
 *     SetOrClrWF @ 0x14004EE90 (SetOrClrWF.c)
 *     xxxDestroyWindow @ 0x140084380 (xxxDestroyWindow.c)
 *     ?xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z @ 0x14011E2E4 (-xxxInternalUpdateWindow@@YAXPEAUtagWND@@K@Z.c)
 *     ?Init@?$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z @ 0x14011F644 (-Init@-$SmartObjStackRefBase@UtagPOPUPMENU@@@@AEAAXPEAUtagPOPUPMENU@@@Z.c)
 *     IntersectRect @ 0x14012B290 (IntersectRect.c)
 *     ?xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z @ 0x1401663E8 (-xxxEnableChildWindowDpiMessageX@@YA_NPEAUtagWND@@H@Z.c)
 *     ?xxxMNPositionHierarchy@@YAIAEBV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUtagMONITOR@@@Z @ 0x140175A04 (-xxxMNPositionHierarchy@@YAIAEBV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagITEM@@HHPEAH2PEAPEAUt.c)
 *     ?MNGetPopupBoundsRect@@YAXV?$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z @ 0x140175E24 (-MNGetPopupBoundsRect@@YAXV-$SmartObjStackRef@UtagPOPUPMENU@@@@PEAUtagMONITOR@@PEAUtagRECT@@H@Z.c)
 *     xxxPlayEventSound @ 0x140176A50 (xxxPlayEventSound.c)
 *     LockPopupMenu @ 0x140176F40 (LockPopupMenu.c)
 *     xxxCreateWindowEx @ 0x14017B3B8 (xxxCreateWindowEx.c)
 *     MNClearCachedPopupSizes @ 0x140235800 (MNClearCachedPopupSizes.c)
 *     MNRefreshUAHCachedSizes @ 0x140235884 (MNRefreshUAHCachedSizes.c)
 *     xxxMNCloseHierarchy @ 0x140248D60 (xxxMNCloseHierarchy.c)
 *     MNMarkDelayedFreePopup @ 0x140289C9C (MNMarkDelayedFreePopup.c)
 *     ?GetMenuRightAlignHint@@YA_NXZ @ 0x140295A68 (-GetMenuRightAlignHint@@YA_NXZ.c)
 *     xxxUserModeCallback @ 0x1402D8670 (xxxUserModeCallback.c)
 */

__int64 __fastcall xxxMNOpenHierarchy(__int64 **a1, __int64 a2)
{
  __int64 v4; // r14
  unsigned __int64 v5; // r15
  unsigned __int64 v6; // rsi
  __int64 *v7; // rax
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 v10; // rbx
  __int64 *v11; // rax
  __int128 **v12; // r12
  __int128 *v13; // rcx
  __int64 v14; // r14
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rax
  _QWORD *CurrentProcessWin32Process; // rax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rcx
  int v22; // eax
  void *v23; // rbx
  struct tagWND *Window; // rsi
  __int64 v25; // rbx
  __int64 v26; // rcx
  __int64 *v27; // rax
  __int64 v28; // rcx
  int *v29; // r8
  int v30; // edx
  __int64 v31; // rdx
  __int64 v32; // rcx
  struct tagWND *v33; // rbx
  int v34; // edx
  __int64 v35; // rax
  int v36; // ecx
  __int16 WindowDpiLastNotify; // dx
  __int64 v38; // rax
  int v39; // r10d
  __int64 *v40; // rax
  int v41; // r15d
  int v42; // eax
  _DWORD *v43; // r9
  int v44; // esi
  int v45; // r14d
  int v46; // edx
  int v47; // r12d
  int v48; // ecx
  __int64 *v49; // rax
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int64 v52; // rcx
  int v53; // r12d
  int v54; // r15d
  int v55; // r14d
  int v56; // esi
  unsigned int *v57; // rcx
  unsigned int v58; // eax
  __int64 *v59; // rax
  int v60; // r9d
  __int64 v61; // rcx
  char v63; // [rsp+20h] [rbp-F0h]
  _QWORD v64[2]; // [rsp+90h] [rbp-80h] BYREF
  ULONG_PTR BugCheckParameter3[2]; // [rsp+A0h] [rbp-70h] BYREF
  int v66; // [rsp+B0h] [rbp-60h]
  __int64 v67; // [rsp+B8h] [rbp-58h] BYREF
  int v68; // [rsp+C0h] [rbp-50h]
  int v69; // [rsp+C4h] [rbp-4Ch]
  __m128i v70; // [rsp+C8h] [rbp-48h] BYREF
  ULONG_PTR v71[2]; // [rsp+E0h] [rbp-30h] BYREF
  __int64 v72; // [rsp+F0h] [rbp-20h] BYREF
  unsigned __int64 v73; // [rsp+F8h] [rbp-18h]
  int v74[4]; // [rsp+100h] [rbp-10h] BYREF
  ULONG_PTR v75[2]; // [rsp+110h] [rbp+0h] BYREF
  ULONG_PTR v76[2]; // [rsp+120h] [rbp+10h] BYREF
  __int64 v77[4]; // [rsp+130h] [rbp+20h] BYREF
  __int128 v78; // [rsp+150h] [rbp+40h]
  __int128 v79; // [rsp+190h] [rbp+80h]
  __int64 v80; // [rsp+200h] [rbp+F0h] BYREF
  unsigned int v81; // [rsp+210h] [rbp+100h] BYREF
  int v82; // [rsp+218h] [rbp+108h]

  v67 = 0LL;
  v4 = 0LL;
  SmartObjStackRefBase<tagPOPUPMENU>::Init(v64, 0LL);
  v71[1] = 0LL;
  v71[0] = -1LL;
  LODWORD(v5) = 0;
  v75[0] = -1LL;
  LODWORD(v6) = 0;
  v7 = *a1;
  v75[1] = 0LL;
  LODWORD(v80) = 0;
  v81 = 0;
  v8 = *v7;
  v82 = 0;
  v73 = 0LL;
  v72 = 0LL;
  if ( *(_DWORD *)(v8 + 80) != -1
    && *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
  {
    if ( (*(_DWORD *)**a1 & 0x20) == 0 )
      goto LABEL_6;
    if ( (*(_DWORD *)**a1 & 0x4000) != 0 )
    {
      xxxMNCloseHierarchy(**a1, a2);
LABEL_6:
      if ( (*(_DWORD *)**a1 & 0x2000) != 0 )
      {
        FindTimer(*(_QWORD *)(**a1 + 16), 65534LL, 0, 1, 0LL);
        *(_DWORD *)**a1 &= ~0x2000u;
      }
      v9 = MNGetpItemFromIndex(*(_QWORD *)(**a1 + 40), *(_DWORD *)(**a1 + 80));
      v10 = v9;
      if ( !v9 || !*(_QWORD *)(v9 + 16) )
        goto LABEL_112;
      if ( (*(_DWORD *)**a1 & 0x800) == 0 && *(_QWORD *)(**a1 + 8) )
      {
        Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(BugCheckParameter3, *(_QWORD *)(**a1 + 8));
        v11 = *a1;
        v73 = **(_QWORD **)(v10 + 16);
        xxxSendTransformableMessageTimeout(
          *(struct tagTHREADINFO ***)(**a1 + 8),
          279LL,
          v73,
          *(unsigned __int16 *)(*v11 + 80) | (unsigned __int64)((*(_DWORD *)**a1 & 4) != 0 ? 0x10000 : 0),
          0,
          0,
          0LL,
          1u,
          1);
        v82 = 1;
        Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(BugCheckParameter3);
      }
      if ( (*(_DWORD *)(a2 + 8) & 4) == 0 )
      {
        v4 = -1LL;
        goto LABEL_109;
      }
      if ( *(_DWORD *)(**a1 + 80) < *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 40LL) + 44LL) )
      {
        v12 = (__int128 **)(*(_QWORD *)(*(_QWORD *)(**a1 + 40) + 88LL) + 96LL * *(int *)(**a1 + 80));
        v13 = *v12;
        if ( (*((_DWORD *)*v12 + 1) & 3) == 0 )
        {
          v14 = (__int64)v12[2];
          if ( v14 && *(_DWORD *)(*(_QWORD *)(v14 + 40) + 44LL) )
          {
            v15 = (__int64)v12[2];
            v78 = *v13;
            v79 = v13[4];
            Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v75, v15);
            if ( *(_QWORD *)(**a1 + 8) )
            {
              Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(v76, *(_QWORD *)(**a1 + 8));
              if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) == 2
                || (v16 = *(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL), (*(_BYTE *)(v16 + 288) & 0xF) == 3) )
              {
                v17 = ValidateHmonitor(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 256LL));
                v5 = GetMonitorRectForWindow(&v70, v17, *(const struct tagWND **)(**a1 + 16))->m128i_i64[0];
                v6 = HIDWORD(v5);
              }
              CurrentProcessWin32Process = (_QWORD *)PsGetCurrentProcessWin32Process(v16);
              if ( !CurrentProcessWin32Process || !*CurrentProcessWin32Process )
                goto LABEL_28;
              v20 = PsGetCurrentProcessWin32Process(v19);
              v21 = v20;
              if ( v20 )
                v21 = ((unsigned __int128)-(__int128)*(unsigned __int64 *)v20 >> 64) & v20;
              v22 = IsImmersiveAppRestricted(v21);
              v66 = 1;
              if ( !v22 )
LABEL_28:
                v66 = 0;
              v23 = *(void **)(*(_QWORD *)(*(_QWORD *)(**a1 + 8) + 40LL) + 32LL);
              SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v77, 0);
              Window = (struct tagWND *)xxxCreateWindowEx(
                                          385,
                                          (wchar_t *)0x8000,
                                          0x8000LL,
                                          0LL,
                                          0x80800000,
                                          v5,
                                          v6,
                                          100,
                                          100,
                                          *(struct tagWND **)(**a1 + 8),
                                          (__int64 **)v77,
                                          v23,
                                          0LL,
                                          0,
                                          0xA00u,
                                          v66,
                                          0LL);
              SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v77);
              Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(v76);
              if ( Window )
              {
                v25 = safe_cast_fnid_to_PMENUWND((__int64)Window);
                if ( !v25 )
                {
                  xxxDestroyWindow(Window);
                  v4 = v67;
                  goto LABEL_106;
                }
                SetOrClrWF(0, Window, 0x408u, 1);
                SmartObjStackRefBase<tagPOPUPMENU>::operator=((__int64)v64, *(_QWORD *)(v25 + 8));
                if ( *(_QWORD *)v64[0] )
                {
                  SmartObjStackRefBase<tagPOPUPMENU>::Init(BugCheckParameter3, *(_QWORD *)(**a1 + 64));
                  MNMarkDelayedFreePopup(v64, BugCheckParameter3);
                  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)BugCheckParameter3);
                  SetOrClrWF(
                    (*(unsigned __int8 *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 26LL) >> 6) & 1,
                    Window,
                    0xA40u,
                    1);
                  v26 = *(_QWORD *)v64[0] + 8LL;
                  BugCheckParameter3[1] = *(_QWORD *)(**a1 + 8);
                  BugCheckParameter3[0] = v26;
                  HMAssignmentLock(BugCheckParameter3, 0LL);
                  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v70, v14);
                  LockPopupMenu((__int64)v64, (__int64 *)(*(_QWORD *)v64[0] + 40LL), (__int64)&v70);
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v70.m128i_i64);
                  v27 = *a1;
                  BugCheckParameter3[1] = (ULONG_PTR)Window;
                  BugCheckParameter3[0] = *v27 + 24;
                  HMAssignmentLock(BugCheckParameter3, 0LL);
                  *(_DWORD *)(**a1 + 84) = *(_DWORD *)(**a1 + 80);
                  v28 = *(_QWORD *)v64[0] + 32LL;
                  BugCheckParameter3[1] = *(_QWORD *)(**a1 + 16);
                  BugCheckParameter3[0] = v28;
                  HMAssignmentLock(BugCheckParameter3, 0LL);
                  *(_QWORD *)(*(_QWORD *)v64[0] + 64LL) = *(_QWORD *)(**a1 + 64);
                  v29 = *(int **)v64[0];
                  v4 = 0LL;
                  v30 = **(_DWORD **)v64[0] ^ (*(_DWORD *)**a1 ^ **(_DWORD **)v64[0]) & 2;
                  v82 = 0;
                  *v29 = v30;
                  **(_DWORD **)v64[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v64[0]) & 4;
                  **(_DWORD **)v64[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v64[0]) & 0x800;
                  **(_DWORD **)v64[0] |= 0x200000u;
                  **(_DWORD **)v64[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v64[0]) & 0x400000;
                  **(_DWORD **)v64[0] ^= (*(_DWORD *)**a1 ^ **(_DWORD **)v64[0]) & 0x10;
                  v31 = *(_QWORD *)v64[0];
                  **(_DWORD **)v64[0] = *(_DWORD *)**a1 ^ (**(_DWORD **)v64[0] ^ *(_DWORD *)**a1) & 0x7FFFFFFF;
                  v32 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 40LL);
                  if ( (*(_DWORD *)(a2 + 8) & 0x20) != 0 )
                    *(_DWORD *)(v32 + 40) |= 4u;
                  else
                    *(_DWORD *)(v32 + 40) &= ~4u;
                  **(_DWORD **)v64[0] &= ~0x1000u;
                  if ( (unsigned int)MNIsUAHMenu(*(struct tagMENU **)(*(_QWORD *)v64[0] + 40LL), v31)
                    && (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 40LL) + 40LL) & 1) != 0 )
                  {
                    MNRefreshUAHCachedSizes(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL));
                  }
                  Win32HMThreadLockBase<tagMENU,1,1>::ManualLock<void>((__int64 *)v71, (__int64)Window);
                  if ( (*(_DWORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 456LL) + 808LL) & 0x100000) == 0 )
                  {
                    v33 = Window;
                    if ( (*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 288LL) & 0xF) != 2 )
                    {
LABEL_53:
                      v35 = *((_QWORD *)v33 + 5);
                      v36 = *(_DWORD *)(v35 + 288) & 0xF;
                      if ( v36 == 3 )
                      {
                        WindowDpiLastNotify = (*(_DWORD *)(v35 + 288) >> 8) & 0x1FF;
                      }
                      else if ( (*(_DWORD *)(v35 + 232) & 0x400) != 0 )
                      {
                        WindowDpiLastNotify = GetWindowDpiLastNotify((__int64)v33);
                      }
                      else if ( !v36
                             && (v38 = *(_QWORD *)(*((_QWORD *)Window + 2) + 488LL)) != 0
                             && (*(_DWORD *)(**(_QWORD **)(v38 + 8) + 64LL) & 1) != 0 )
                      {
                        WindowDpiLastNotify = 96;
                      }
                      else
                      {
                        WindowDpiLastNotify = *(_WORD *)(*(_QWORD *)(*((_QWORD *)Window + 2) + 456LL) + 272LL);
                      }
                      if ( WindowDpiLastNotify != *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 76LL) )
                      {
                        *(_WORD *)(*(_QWORD *)(*(_QWORD *)v64[0] + 40LL) + 76LL) = WindowDpiLastNotify;
                        MNClearCachedPopupSizes(*(_QWORD **)(*(_QWORD *)v64[0] + 40LL));
                      }
                      if ( (unsigned int)xxxSendTransformableMessageTimeout(
                                           (struct tagTHREADINFO **)v33,
                                           482LL,
                                           1uLL,
                                           0LL,
                                           0,
                                           0,
                                           0LL,
                                           1u,
                                           1)
                        && *(_QWORD *)(**a1 + 40)
                        && MNIspItemValid(*(_QWORD *)(**a1 + 40), (__int64)v12) )
                      {
                        v40 = *a1;
                        v41 = (unsigned __int16)v39 + 6;
                        v66 = v41;
                        *(_DWORD *)*v40 |= 0x20u;
                        v42 = xxxMNPositionHierarchy(
                                a1,
                                (__int64)v12,
                                v41,
                                (unsigned int)HIWORD(v39) + 6,
                                (int *)&v80,
                                (int *)&v81,
                                (__int64)&v72);
                        **(_DWORD **)v64[0] ^= (**(_DWORD **)v64[0] ^ (v42 << 23)) & 0xF800000;
                        if ( (*(_DWORD *)**a1 & 1) != 0 && (_GetAsyncKeyState(1LL) & 0x8000u) != 0LL )
                        {
                          v43 = (_DWORD *)*((_QWORD *)v33 + 5);
                          v44 = v80;
                          v45 = v79;
                          v46 = v43[23];
                          v47 = DWORD2(v79);
                          v74[2] = v43[24] + v80 - v43[22];
                          v48 = v81 - v46 + v43[25];
                          v74[0] = v80;
                          v74[3] = v48;
                          v74[1] = v81;
                          v49 = *a1;
                          *(_OWORD *)BugCheckParameter3 = 0LL;
                          v50 = **a1;
                          v51 = v50;
                          LODWORD(v67) = v79 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(*v49 + 16) + 40LL) + 88LL);
                          v52 = *(_QWORD *)(*(_QWORD *)(v50 + 16) + 40LL);
                          v68 = DWORD2(v79) + v67;
                          HIDWORD(v67) = DWORD1(v79) + *(_DWORD *)(v52 + 92);
                          v69 = HIDWORD(v79) + HIDWORD(v67);
                          SmartObjStackRefBase<tagPOPUPMENU>::Init(&v70, v51);
                          MNGetPopupBoundsRect((__int64)&v70, v72, (struct tagRECT *)BugCheckParameter3, 0);
                          if ( (unsigned int)IntersectRect(v74, v74, (int *)&v67) )
                          {
                            v53 = v45 + v47;
                            v54 = v53 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL) + v41;
                            if ( v54 > SLODWORD(BugCheckParameter3[1]) )
                              v54 = 0;
                            v55 = v45 - v66;
                            v56 = v55 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                            if ( v56 < SLODWORD(BugCheckParameter3[0]) )
                              v56 = 0;
                            if ( (GetMenuRightAlignHint() || (v78 & 0x2000) != 0) && v56 || !v54 )
                            {
                              v57 = *(unsigned int **)v64[0];
                              v44 = v55 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              v58 = **(_DWORD **)v64[0] & 0xF07FFFFF | 0x1000000;
                            }
                            else
                            {
                              v57 = *(unsigned int **)v64[0];
                              v44 = v53 + *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16) + 40LL) + 88LL);
                              v58 = **(_DWORD **)v64[0] & 0xF07FFFFF | 0x800000;
                            }
                            *v57 = v58;
                            if ( v44 <= SLODWORD(BugCheckParameter3[0]) )
                            {
                              v44 = v68;
                              **(_DWORD **)v64[0] = **(_DWORD **)v64[0] & 0xF07FFFFF | 0x1000000;
                            }
                          }
                        }
                        else
                        {
                          v44 = v80;
                        }
                        if ( (*(_DWORD *)**a1 & 1) != 0 )
                        {
                          if ( (*(_DWORD *)**a1 & 0x400) == 0 )
                            **(_DWORD **)v64[0] |= 0x8000000u;
                          if ( (*(_DWORD *)**a1 & 0x10) != 0 || (**(_DWORD **)v64[0] & 0xF800000) == 0x1000000 )
                            **(_DWORD **)v64[0] |= 0x10u;
                          *(_DWORD *)**a1 |= 0x400u;
                        }
                        else
                        {
                          **(_DWORD **)v64[0] |= 0x8000000u;
                          if ( (**(_DWORD **)v64[0] & 0xF800000) == 0x1000000 )
                            **(_DWORD **)v64[0] |= 0x10u;
                        }
                        v59 = *a1;
                        BugCheckParameter3[1] = (ULONG_PTR)v33;
                        BugCheckParameter3[0] = *(_QWORD *)(*v59 + 64) + 56LL;
                        HMAssignmentLock(BugCheckParameter3, 0LL);
                        if ( *(_QWORD *)(*(_QWORD *)v64[0] + 8LL) )
                        {
                          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(
                            &v70,
                            *(_QWORD *)(*(_QWORD *)v64[0] + 8LL));
                          xxxInternalUpdateWindow(*(struct tagWND **)(*(_QWORD *)v64[0] + 8LL), 1u);
                          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&v70);
                        }
                        if ( (*(_DWORD *)(a2 + 8) & 0x400) != 0 )
                        {
                          v80 = *(_QWORD *)v33;
                          xxxUserModeCallback(100, (unsigned int)&v80, 8, v60, v63);
                        }
                        xxxPlayEventSound(5LL);
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v61) & 0xF) == 2 )
                          *(_DWORD *)(*((_QWORD *)v33 + 5) + 288LL) = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(**a1 + 16)
                                                                                            + 40LL)
                                                                                + 288LL);
                        xxxSetWindowPos(
                          v33,
                          ((*(_DWORD *)(a2 + 8) & 0x100) != 0) - 1LL,
                          (unsigned int)v44,
                          v81,
                          0,
                          0,
                          (*(_DWORD *)(a2 + 8) & 0x100) != 0 ? 577 : 593);
                        xxxInheritWindowMonitor(v33, *(struct tagWND **)(**a1 + 16), 1);
                        xxxWindowEvent(6u, v33, -4, 0, 0);
                        if ( *(_DWORD *)(a2 + 20) == 1 )
                          xxxSendTransformableMessageTimeout(
                            (struct tagTHREADINFO **)v33,
                            485LL,
                            0LL,
                            0LL,
                            0,
                            0,
                            0LL,
                            1u,
                            1);
                        xxxInternalUpdateWindow(v33, 1u);
                        v4 = (__int64)v33;
                        Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v71);
                      }
                      else
                      {
                        if ( Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v71) )
                          xxxDestroyWindow(v33);
                        HMAssignmentUnlock(**a1 + 24);
                      }
                      goto LABEL_106;
                    }
                    if ( !_bittest((const signed __int32 *)(*(_QWORD *)(**a1 + 16) + 380LL), 0x14u) )
                    {
                      if ( (*(_DWORD *)**a1 & 2) == 0 && (*(_DWORD *)**a1 & 4) == 0 )
                        goto LABEL_53;
                      if ( (*(_DWORD *)(*(_QWORD *)(**a1 + 16) + 380LL) & 0x80000) == 0 )
                      {
                        v33 = Window;
                        goto LABEL_53;
                      }
                    }
                  }
                  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(&v70, *(_QWORD *)(*(_QWORD *)v64[0] + 40LL));
                  v34 = 0;
                  v33 = Window;
                  if ( *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v70.m128i_i64[0] + 40LL) + 44LL) )
                  {
                    while ( (**(_DWORD **)(96LL * v34 + *(_QWORD *)(*(_QWORD *)v70.m128i_i64[0] + 88LL)) & 0x100) == 0
                         && *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)v70.m128i_i64[0] + 88LL) + 96LL * v34) + 96LL) != -1LL )
                    {
                      if ( (unsigned int)++v34 >= *(_DWORD *)(*(_QWORD *)(*(_QWORD *)v70.m128i_i64[0] + 40LL) + 44LL) )
                        goto LABEL_51;
                    }
                  }
                  else
                  {
LABEL_51:
                    xxxEnableChildWindowDpiMessageX(Window);
                  }
                  SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>(v70.m128i_i64);
                  goto LABEL_53;
                }
                xxxDestroyWindow(Window);
              }
              v4 = 0LL;
            }
            else
            {
              v4 = 0LL;
            }
LABEL_106:
            Win32HMThreadLockBase<tagCURSOR,1,1>::ManualUnlock<void>(v75);
            goto LABEL_109;
          }
          v4 = 0LL;
        }
      }
LABEL_109:
      if ( v82 )
      {
        if ( *(_QWORD *)(**a1 + 8) )
        {
          Win32HMThreadLockBase<tagWND,0,0>::Win32HMThreadLockBase<tagWND,0,0>(&v70, *(_QWORD *)(**a1 + 8));
          xxxSendTransformableMessageTimeout(
            *(struct tagTHREADINFO ***)(**a1 + 8),
            293LL,
            v73,
            (*(_DWORD *)**a1 & 4) != 0 ? 0x20000000 : 0,
            0,
            0,
            0LL,
            1u,
            1);
          Win32HMThreadLockAlways<tagWND>::~Win32HMThreadLockAlways<tagWND>(&v70);
        }
      }
LABEL_112:
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v75);
      Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v71);
      SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v64);
      return v4;
    }
  }
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v75);
  Win32HMOptionalThreadLock<tagHOOK>::~Win32HMOptionalThreadLock<tagHOOK>(v71);
  SmartObjStackRefBase<tagPOPUPMENU>::~SmartObjStackRefBase<tagPOPUPMENU>((__int64)v64);
  return 0LL;
}

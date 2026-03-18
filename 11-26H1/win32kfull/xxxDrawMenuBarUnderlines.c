/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x14017819C
 * Callers:
 *     xxxRealDefWindowProc @ 0x14012F36C (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x14028CF70 (xxxEndMenuLoop.c)
 * Callees:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x14000B04C (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@HHPE.c)
 *     MNIsFlatMenu @ 0x14000B3F8 (MNIsFlatMenu.c)
 *     MNIspItemValid @ 0x14000C5A8 (MNIspItemValid.c)
 *     ?MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z @ 0x14000CF40 (-MNIsOwnerDrawItem@@YAHPEAUtagMENU@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemFromIndex @ 0x14000D208 (MNGetpItemFromIndex.c)
 *     GreSetTextColor @ 0x140027BB0 (GreSetTextColor.c)
 *     ??4?$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z @ 0x140032F44 (--4-$SmartObjStackRefBase@UtagMENU@@@@IEAAAEAV0@QEAUtagMENU@@@Z.c)
 *     ??1?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x140034678 (--1-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     ?PtiCurrent@@YAPEAUtagTHREADINFO@@XZ @ 0x140036890 (-PtiCurrent@@YAPEAUtagTHREADINFO@@XZ.c)
 *     PopAndFreeW32ThreadLock @ 0x14004B8D0 (PopAndFreeW32ThreadLock.c)
 *     ??0?$SmartObjStackRef@UtagMENU@@@@QEAA@XZ @ 0x14004D13C (--0-$SmartObjStackRef@UtagMENU@@@@QEAA@XZ.c)
 *     GetAppCompatFlags2 @ 0x14004E590 (GetAppCompatFlags2.c)
 *     GreSetViewportOrg @ 0x14012045C (GreSetViewportOrg.c)
 *     ?CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z @ 0x140123D9C (-CALL_LPK@@YAHQEAUtagTHREADINFO@@@Z.c)
 *     GetOemBitmapInfo @ 0x140124E90 (GetOemBitmapInfo.c)
 *     GreSelectFont @ 0x140126190 (GreSelectFont.c)
 *     GetNonChildAncestor @ 0x14017A1F0 (GetNonChildAncestor.c)
 *     ??$ManualLock@X@?$Win32RawLockedItemBase@G$1?Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEAX@Z@Z @ 0x1401DABA8 (--$ManualLock@X@-$Win32RawLockedItemBase@G$1-Win32FreePool@@YAXPEAX@Z$00$00$00@@QEAAXPEAGP6AXPEA.c)
 *     xxxPSMGetTextExtent @ 0x1401FB45C (xxxPSMGetTextExtent.c)
 *     GetPrefixCount @ 0x1401FB59C (GetPrefixCount.c)
 *     xxxPSMTextOut @ 0x1401FB8A8 (xxxPSMTextOut.c)
 *     ??0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z @ 0x14021A924 (--0Win32HMThreadLockAlwaysMenuNoModify@@QEAA@PEAUtagTHREADINFO@@PEAUtagMENU@@@Z.c)
 *     ??1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ @ 0x14023B12C (--1Win32HMThreadLockAlwaysMenuNoModify@@QEAA@XZ.c)
 *     ?xxxDrawItemUnderline@@YAXAEBV?$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x14028F650 (-xxxDrawItemUnderline@@YAXAEBV-$SmartObjStackRef@UtagMENU@@@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     GetDpiMetricsForCurrentThread @ 0x1403023CC (GetDpiMetricsForCurrentThread.c)
 *     GetDpiMetricsForWindow @ 0x140302474 (GetDpiMetricsForWindow.c)
 *     __security_check_cookie @ 0x14034FCD0 (__security_check_cookie.c)
 */

_QWORD *__fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  int v3; // r12d
  __int64 v4; // rcx
  __int64 v5; // rdx
  __int64 v6; // rcx
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 NonChildAncestor; // rax
  __int64 v12; // r13
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // rdx
  BOOL v18; // r14d
  __int64 v19; // rcx
  __int64 v20; // r15
  __int64 v21; // rcx
  __int64 v22; // rdi
  __int64 DCEx; // rax
  struct tagMENU *v24; // r8
  Gre::Base *v25; // rsi
  unsigned int v26; // edx
  struct tagMENU *v27; // rcx
  struct tagMENU *v28; // r10
  __int64 v29; // rdx
  __int64 v30; // rcx
  int v31; // ebx
  __int64 v32; // r8
  __int64 *DpiMetricsForWindow; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 *DpiMetricsForCurrentThread; // rax
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  _DWORD *v41; // rax
  int v42; // r15d
  unsigned int v43; // r12d
  __int64 v44; // rcx
  int v45; // ebx
  __int64 v46; // rdx
  __int64 v47; // rcx
  _DWORD *v48; // rcx
  int v49; // edx
  int v50; // ebx
  __int64 v51; // rcx
  __int64 v52; // rax
  unsigned int v53; // eax
  ULONG_PTR v54; // rax
  char *v55; // rbx
  unsigned __int16 PrefixCount; // ax
  __int64 v57; // rcx
  unsigned int v58; // edx
  __int64 v59; // rax
  struct tagMENU **v60[2]; // [rsp+48h] [rbp-C0h] BYREF
  struct tagMENU *v61; // [rsp+58h] [rbp-B0h]
  int v62; // [rsp+60h] [rbp-A8h]
  int v63; // [rsp+64h] [rbp-A4h]
  __int64 v64; // [rsp+68h] [rbp-A0h]
  __int64 v65; // [rsp+70h] [rbp-98h]
  __int64 v66; // [rsp+78h] [rbp-90h]
  struct tagTHREADINFO *v67; // [rsp+80h] [rbp-88h]
  __int64 v68; // [rsp+88h] [rbp-80h]
  ULONG_PTR BugCheckParameter2[2]; // [rsp+90h] [rbp-78h] BYREF
  __int64 v70; // [rsp+A0h] [rbp-68h]
  _BYTE v71[48]; // [rsp+A8h] [rbp-60h] BYREF
  char v72; // [rsp+D8h] [rbp-30h] BYREF

  v62 = a2;
  v3 = a2;
  SmartObjStackRef<tagMENU>::SmartObjStackRef<tagMENU>(v60);
  v67 = PtiCurrent(v4);
  v66 = 0LL;
  if ( (*(_DWORD *)(W32GetUserSessionState(v6, v5) + 66792) & 0x20000) == 0 )
  {
    v9 = *(unsigned int *)(W32GetUserSessionState(v8, v7) + 66796);
    if ( (v9 & 0x20) == 0
      && *(int *)(W32GetUserSessionState(v10, v9) + 66796) < 0
      && (GetAppCompatFlags2(1024LL) & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v12 = NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(*(_QWORD *)(NonChildAncestor + 40) + 16LL) & 1) != 0 )
        {
          v14 = *(_QWORD *)(NonChildAncestor + 168);
          v61 = 0LL;
          SmartObjStackRefBase<tagMENU>::operator=((__int64)v60, v14);
          if ( v61 || *v60[0] )
          {
            v18 = MNIsFlatMenu(v16, v15) && (*(_DWORD *)(*((_QWORD *)*v60[0] + 5) + 40LL) & 1) == 0;
            v19 = *(unsigned int *)(*((_QWORD *)*v60[0] + 5) + 40LL);
            if ( v3 )
            {
              if ( (v19 & 4) != 0 )
                return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v60);
              v20 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v19, v17) + 19904) + 4752LL);
              *(_DWORD *)(*((_QWORD *)*v60[0] + 5) + 40LL) |= 4u;
            }
            else
            {
              if ( (v19 & 4) == 0 )
                return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v60);
              if ( *(_QWORD *)(*((_QWORD *)*v60[0] + 5) + 24LL) )
              {
                v20 = *(_QWORD *)(*((_QWORD *)*v60[0] + 5) + 24LL);
              }
              else
              {
                v21 = *(_QWORD *)(W32GetUserSessionState(*v60[0], v17) + 19904);
                if ( v18 )
                  v20 = *(_QWORD *)(v21 + 4936);
                else
                  v20 = *(_QWORD *)(v21 + 4728);
              }
              *(_DWORD *)(*((_QWORD *)*v60[0] + 5) + 40LL) &= ~4u;
            }
            v64 = v20;
            v22 = *((_QWORD *)*v60[0] + 11);
            DCEx = _GetDCEx(v12, 0LL, 65539LL);
            v24 = v61;
            v25 = (Gre::Base *)DCEx;
            if ( !v61 )
              v24 = *v60[0];
            Win32HMThreadLockAlwaysMenuNoModify::Win32HMThreadLockAlwaysMenuNoModify(
              (Win32HMThreadLockAlwaysMenuNoModify *)v71,
              v67,
              v24);
            v26 = 0;
            v63 = 0;
            while ( v26 < *(_DWORD *)(*((_QWORD *)*v60[0] + 5) + 44LL) )
            {
              v27 = v61 ? v61 : *v60[0];
              if ( !MNIspItemValid((__int64)v27, v22) )
                break;
              if ( !v28 )
                v28 = *v60[0];
              v31 = MNIsOwnerDrawItem(v28, (struct tagITEM *)v22);
              v68 = *(_QWORD *)(v22 + 88);
              v65 = *(_QWORD *)(v22 + 24);
              if ( v65 || v31 )
              {
                if ( v31 )
                {
                  DpiMetricsForWindow = (__int64 *)GetDpiMetricsForWindow(v12);
                  GreSelectFont(v25, *DpiMetricsForWindow);
                  GreSetViewportOrg((HDC)v25, 0, 0);
                }
                else
                {
                  DpiMetricsForCurrentThread = (__int64 *)GetDpiMetricsForCurrentThread(v30, v29, v32);
                  GreSelectFont(v25, *DpiMetricsForCurrentThread);
                  GreSetViewportOrg((HDC)v25, *(_DWORD *)(*(_QWORD *)v22 + 64LL), *(_DWORD *)(*(_QWORD *)v22 + 68LL));
                }
                if ( v3 && (*(_DWORD *)(*(_QWORD *)v22 + 4LL) & 0x100) != 0 )
                  v37 = *(_QWORD *)(*(_QWORD *)(W32GetUserSessionState(v35, v34) + 19904) + 4904LL);
                else
                  v37 = v20;
                GreSelectBrush(v25, v37);
                if ( v31 )
                {
                  xxxSendMenuDrawItemMessage((__int64)v25, 1, v60, (struct tagMENU ***)v22, 0, 0, 0LL);
                }
                else
                {
                  v41 = (_DWORD *)GetDpiMetricsForCurrentThread(v39, v38, v40);
                  v42 = v41[5];
                  if ( *(_DWORD *)(*(_QWORD *)v22 + 76LL) - v41[3] - v42 != 1 )
                    v42 += (unsigned int)(*(_DWORD *)(*(_QWORD *)v22 + 76LL) - v41[3] - v42 - 1) >> 1;
                  v43 = v41[2];
                  if ( (**(_DWORD **)v22 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent((HDC)v25);
                    v44 = (__int64)v61;
                    if ( !v61 )
                      v44 = (__int64)*v60[0];
                    if ( !MNIspItemValid(v44, v22) || v68 != *(_QWORD *)(v22 + 88) )
                      break;
                    v45 = *(_DWORD *)(*(_QWORD *)v22 + 72LL);
                    v43 = v45 - *((__int16 *)GetOemBitmapInfo(0x3Fu) + 2) - v66 + v43 - 2;
                  }
                  if ( (unsigned int)CALL_LPK(v67) )
                  {
                    v48 = *(_DWORD **)(W32GetUserSessionState(v47, v46) + 19904);
                    if ( v62 )
                    {
                      v49 = v48[1149];
                    }
                    else if ( v18 )
                    {
                      v49 = v48[1172];
                    }
                    else
                    {
                      v49 = v48[1146];
                    }
                    v50 = GreSetTextColor((HDC)v25, v49);
                    xxxPSMTextOut((HDC)v25, *(_DWORD *)(*(_QWORD *)v22 + 48LL), 0x200000);
                    v51 = (__int64)v61;
                    if ( !v61 )
                      v51 = (__int64)*v60[0];
                    if ( !MNIspItemValid(v51, v22) || v68 != *(_QWORD *)(v22 + 88) )
                      break;
                    GreSetTextColor((HDC)v25, v50);
                  }
                  else
                  {
                    v52 = *(_QWORD *)v22;
                    *(_OWORD *)BugCheckParameter2 = 0LL;
                    v70 = -1LL;
                    v53 = *(_DWORD *)(v52 + 48);
                    if ( v53 < 0xFF )
                    {
                      v55 = &v72;
                    }
                    else
                    {
                      v54 = Win32AllocPoolZInit(2LL * (v53 + 1), 1953657685LL);
                      v55 = (char *)v54;
                      if ( !v54 )
                      {
                        if ( v70 != -1 )
                          PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
                        break;
                      }
                      Win32RawLockedItemBase<unsigned short,&void Win32FreePool(void *),1,1,1>::ManualLock<void>(
                        (ULONG_PTR)BugCheckParameter2,
                        v54);
                    }
                    PrefixCount = GetPrefixCount(
                                    v65,
                                    *(unsigned int *)(*(_QWORD *)v22 + 48LL),
                                    v55,
                                    *(unsigned int *)(*(_QWORD *)v22 + 48LL));
                    xxxDrawItemUnderline(v60, v22, v25, v43, v42, v55, PrefixCount);
                    if ( v70 != -1 )
                      PopAndFreeW32ThreadLock((__int64)BugCheckParameter2);
                  }
                  v3 = v62;
                }
              }
              v57 = (__int64)v61;
              v58 = ++v63;
              if ( !v61 )
                v57 = (__int64)*v60[0];
              v59 = MNGetpItemFromIndex(v57, v58);
              v20 = v64;
              v22 = v59;
            }
            _ReleaseDC(v25);
            Win32HMThreadLockAlwaysMenuNoModify::~Win32HMThreadLockAlwaysMenuNoModify((Win32HMThreadLockAlwaysMenuNoModify *)v71);
          }
        }
      }
    }
  }
  return SmartObjStackRef<tagMENU>::~SmartObjStackRef<tagMENU>((__int64 *)v60);
}

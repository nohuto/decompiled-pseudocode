/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C0131828
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C007D1E4 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C0142C30 (xxxEndMenuLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C0044EEC (W32GetThreadWin32Thread.c)
 *     MNGetpItemIndex @ 0x1C006B8B4 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C006EA84 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C006EAAC (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C006F66C (GetAppCompatFlags2.c)
 *     W32GetCurrentThreadDpiAwarenessContext @ 0x1C0088728 (W32GetCurrentThreadDpiAwarenessContext.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C009F940 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C009F990 (PushW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C00A8D2C (GetNonChildAncestor.c)
 *     GreSetTextColor @ 0x1C00B112C (GreSetTextColor.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C00B48AC (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     MNIsOwnerDrawItem @ 0x1C00B6AB4 (MNIsOwnerDrawItem.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00B78D0 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     xxxPSMGetTextExtent @ 0x1C00B92A4 (xxxPSMGetTextExtent.c)
 *     CALL_LPK @ 0x1C00B98EC (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00B9920 (GetPrefixCount.c)
 *     GreSetViewportOrg @ 0x1C00B99DC (GreSetViewportOrg.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C0236574 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C023C4C4 (xxxPSMTextOut.c)
 *     GreSelectFontInternal @ 0x1C0292FA8 (GreSelectFontInternal.c)
 */

char __fastcall xxxDrawMenuBarUnderlines(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  __int64 v6; // r9
  __int64 NonChildAncestor; // rax
  __int64 v8; // r8
  struct tagWND *v9; // r14
  __int64 v10; // rbx
  BOOL v11; // edi
  int v12; // edx
  unsigned int v13; // edx
  __int64 v14; // r13
  __int64 v15; // rsi
  __int64 DCEx; // rax
  unsigned int v17; // r12d
  HDC v18; // r15
  __int64 v19; // rdx
  __int64 v20; // rcx
  int v21; // edi
  __int64 v22; // r8
  __int64 v23; // r9
  int v24; // r8d
  int v25; // edx
  __int64 v26; // rdx
  __int64 v27; // rdx
  unsigned __int64 v28; // rcx
  __int64 v29; // r8
  __int64 v30; // r9
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // r8
  __int64 v34; // r9
  __int64 v35; // rdx
  __int64 v36; // r8
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // ecx
  __int64 v42; // rdx
  __int64 v43; // rcx
  __int64 v44; // r8
  __int64 v45; // r9
  __int64 v46; // rdx
  __int64 v47; // r8
  __int64 v48; // r9
  __int64 v49; // rdx
  __int64 v50; // r8
  __int64 v51; // r9
  _DWORD *v53; // rdi
  int v54; // r14d
  unsigned int v55; // r14d
  int v56; // r14d
  __int64 v57; // r8
  __int64 v58; // r9
  __int64 v59; // rdx
  __int64 v60; // r8
  __int64 v61; // r9
  __int64 v62; // rdx
  __int64 v63; // r8
  __int64 v64; // r9
  int v65; // ecx
  _QWORD *v66; // r9
  __int64 v67; // rdi
  __int64 v68; // rdx
  unsigned __int64 v69; // rcx
  __int64 v70; // r8
  __int64 v71; // r9
  __int64 v72; // rdx
  __int64 v73; // rcx
  __int64 v74; // r8
  _QWORD *v75; // r9
  __int64 v76; // rdx
  __int64 v77; // r8
  __int64 v78; // r9
  __int64 v79; // rdx
  __int64 v80; // r8
  __int64 v81; // r9
  __int64 v83; // rdx
  __int64 v84; // rcx
  __int64 v85; // r8
  __int64 v86; // r9
  __int64 v87; // rdx
  __int64 v88; // r8
  __int64 v89; // r9
  __int64 v90; // rdx
  __int64 v91; // r8
  __int64 v92; // r9
  _DWORD *v94; // rdx
  _QWORD *v95; // r9
  _DWORD *v96; // rax
  int v97; // edx
  int v98; // edi
  unsigned int v99; // eax
  __int64 v100; // rax
  __int64 v101; // r9
  unsigned __int16 *v102; // rdi
  unsigned __int16 PrefixCount; // ax
  __int64 v104; // r8
  __int64 v105; // r9
  int v107; // [rsp+48h] [rbp-C0h]
  int v108; // [rsp+4Ch] [rbp-BCh]
  unsigned __int16 *SourceString; // [rsp+50h] [rbp-B8h]
  struct tagWND *v110; // [rsp+58h] [rbp-B0h]
  struct tagSIZE v111; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v112; // [rsp+68h] [rbp-A0h]
  __int64 ThreadWin32Thread; // [rsp+70h] [rbp-98h]
  _BOOL8 v114; // [rsp+78h] [rbp-90h]
  __int64 v115; // [rsp+80h] [rbp-88h] BYREF
  __int64 v116; // [rsp+88h] [rbp-80h]
  _QWORD v117[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v118[512]; // [rsp+B8h] [rbp-50h] BYREF

  v108 = a2;
  v5 = a2;
  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), a2, a3, a4);
  LOBYTE(NonChildAncestor) = 0;
  v111 = 0LL;
  if ( (gdwPUDFlags & 0x20000) == 0 )
  {
    v8 = (unsigned int)gpdwCPUserPreferencesMask & 0x80000020;
    if ( (_DWORD)v8 == 0x80000000 )
    {
      LOBYTE(NonChildAncestor) = GetAppCompatFlags2(0x400u, (__int64)gpdwCPUserPreferencesMask, v8, v6);
      if ( (NonChildAncestor & 2) == 0 )
      {
        NonChildAncestor = GetNonChildAncestor(a1);
        v110 = (struct tagWND *)NonChildAncestor;
        v9 = (struct tagWND *)NonChildAncestor;
        if ( NonChildAncestor )
        {
          if ( (*(_BYTE *)(NonChildAncestor + 40) & 1) != 0 )
          {
            v10 = *(_QWORD *)(NonChildAncestor + 192);
            if ( v10 )
            {
              LOBYTE(NonChildAncestor) = 0;
              if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
              {
                LOBYTE(NonChildAncestor) = ~*(_BYTE *)(v10 + 40);
                v11 = (*(_BYTE *)(v10 + 40) & 1) == 0;
              }
              else
              {
                v11 = 0;
              }
              v12 = *(_DWORD *)(v10 + 40);
              if ( v5 )
              {
                if ( (v12 & 4) != 0 )
                  return NonChildAncestor;
                v13 = v12 | 4;
                v14 = *(_QWORD *)(gpsi + 5144LL);
              }
              else
              {
                if ( (v12 & 4) == 0 )
                  return NonChildAncestor;
                v14 = *(_QWORD *)(v10 + 112);
                if ( !v14 )
                {
                  if ( v11 )
                    v14 = *(_QWORD *)(gpsi + 5328LL);
                  else
                    v14 = *(_QWORD *)(gpsi + 5120LL);
                }
                v13 = v12 & 0xFFFFFFFB;
              }
              v15 = *(_QWORD *)(v10 + 80);
              *(_DWORD *)(v10 + 40) = v13;
              DCEx = _GetDCEx(v9, 0LL, 65539LL);
              *(_DWORD *)(v10 + 40) |= 0x200u;
              v17 = 0;
              v18 = (HDC)DCEx;
              v19 = gptiCurrent;
              v20 = *(_QWORD *)(gptiCurrent + 368LL);
              v115 = v20;
              *(_QWORD *)(gptiCurrent + 368LL) = &v115;
              v116 = v10;
              ++*(_DWORD *)(v10 + 8);
              if ( *(_DWORD *)(v10 + 52) )
              {
                v114 = v11;
                do
                {
                  if ( (unsigned int)MNGetpItemIndex(v10, v15) == -1 )
                    break;
                  v21 = MNIsOwnerDrawItem(v10, (_DWORD *)v15);
                  v112 = *(_QWORD *)(v15 + 56);
                  SourceString = *(unsigned __int16 **)(v15 + 40);
                  if ( SourceString || v21 )
                  {
                    if ( v21 )
                    {
                      GetDPIMETRICS(v9, v19, v22, v23);
                      GreSelectFontInternal(v18);
                      v24 = 0;
                      v25 = 0;
                    }
                    else
                    {
                      GetDPIMetrics();
                      GreSelectFontInternal(v18);
                      v24 = *(_DWORD *)(v15 + 76);
                      v25 = *(_DWORD *)(v15 + 72);
                    }
                    GreSetViewportOrg(v18, v25, v24);
                    if ( v108 && (*(_DWORD *)(v15 + 4) & 0x100) != 0 )
                      v26 = *(_QWORD *)(gpsi + 5296LL);
                    else
                      v26 = v14;
                    GreSelectBrush(v18, v26);
                    if ( !v21 )
                    {
                      v107 = *(_DWORD *)(GetDPIMetrics() + 60);
                      if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
                      {
                        if ( (W32GetCurrentThreadDpiAwarenessContext(v28, v27, v29, v30) & 0xF) != 0 )
                        {
LABEL_35:
                          if ( IsDPIDWMSysMet(6uLL)
                            && (W32GetCurrentThreadDpiAwarenessContext(v32, v31, v33, v34) & 0xF) == 1
                            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v35, v36, v37) + 408)
                              ? (v41 = 0)
                              : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                             (__int64)KeGetCurrentThread(),
                                                                             v38,
                                                                             v39,
                                                                             v40)
                                                                         + 408)
                                                             + 8LL)
                                                 + 244LL) & 1),
                                v41) )
                          {
                            v53 = (_DWORD *)(gpsi + 2680LL);
                          }
                          else
                          {
                            v53 = (_DWORD *)(gpsi + 1904LL);
                          }
LABEL_50:
                          v54 = *(_DWORD *)(v15 + 84) - *(_DWORD *)(GetDPIMetrics() + 60);
                          v55 = v54 - *(_DWORD *)(GetDPIMetrics() + 52) - *v53;
                          if ( v55 )
                            v107 += v55 >> 1;
                          v56 = *(_DWORD *)(GetDPIMetrics() + 48);
                          if ( (*(_DWORD *)v15 & 0x2000) != 0 )
                          {
                            xxxPSMGetTextExtent(v18, SourceString, *(unsigned int *)(v15 + 48), &v111);
                            if ( (unsigned int)MNGetpItemIndex(v10, v15) == -1 || v112 != *(_QWORD *)(v15 + 56) )
                              break;
                            if ( (W32GetCurrentThreadDpiAwarenessContext(v20, v19, v57, v58) & 0xF) != 0
                              || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v59, v60, v61)
                                             + 408)
                                ? (v65 = 0)
                                : (v65 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                               (__int64)KeGetCurrentThread(),
                                                                               v62,
                                                                               v63,
                                                                               v64)
                                                                           + 408)
                                                               + 8LL)
                                                   + 244LL) & 1),
                                  !v65) )
                            {
                              v66 = (_QWORD *)gpsi;
                            }
                            else
                            {
                              v66 = (_QWORD *)gpsi;
                              if ( *(_WORD *)(gpsi + 8678LL) != 96 )
                              {
                                v67 = gpsi + 7140LL;
                                goto LABEL_64;
                              }
                            }
                            v67 = *v66 + 5652LL;
LABEL_64:
                            if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
                            {
                              if ( (W32GetCurrentThreadDpiAwarenessContext(v69, v68, v70, v71) & 0xF) != 0 )
                                goto LABEL_66;
LABEL_76:
                              v94 = (_DWORD *)(gpsi + 2448LL);
                            }
                            else
                            {
                              if ( IsDPIDWMSysMet(v69)
                                && (W32GetCurrentThreadDpiAwarenessContext(v84, v83, v85, v86) & 0xF) == 0
                                && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v87, v88, v89)
                                             + 408)
                                && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                         (__int64)KeGetCurrentThread(),
                                                                         v90,
                                                                         v91,
                                                                         v92)
                                                                     + 408)
                                                         + 8LL)
                                             + 244LL) & 1 )
                              {
                                goto LABEL_76;
                              }
LABEL_66:
                              if ( IsDPIDWMSysMet(0x2DuLL) )
                              {
                                if ( (W32GetCurrentThreadDpiAwarenessContext(v73, v72, v74, (__int64)v75) & 0xF) == 1
                                  && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v76, v77, v78)
                                               + 408)
                                  && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                           (__int64)KeGetCurrentThread(),
                                                                           v79,
                                                                           v80,
                                                                           v81)
                                                                       + 408)
                                                           + 8LL)
                                               + 244LL) & 1 )
                                {
                                  v94 = (_DWORD *)(gpsi + 2836LL);
                                  goto LABEL_82;
                                }
                                v75 = (_QWORD *)gpsi;
                              }
                              v94 = (_DWORD *)(*v75 + 2060LL);
                            }
LABEL_82:
                            v56 += *(_DWORD *)(v15 + 80) - *(_DWORD *)(v67 + 1016) - *v94 - v111.cx;
                          }
                          if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                          {
                            v96 = (_DWORD *)*v95;
                            if ( v108 )
                            {
                              v97 = v96[1247];
                            }
                            else if ( v114 )
                            {
                              v97 = v96[1270];
                            }
                            else
                            {
                              v97 = v96[1244];
                            }
                            v98 = GreSetTextColor(v18, v97);
                            xxxPSMTextOut(v18, v56, v107, SourceString, *(_DWORD *)(v15 + 48), 0x200000);
                            if ( (unsigned int)MNGetpItemIndex(v10, v15) == -1 || v112 != *(_QWORD *)(v15 + 56) )
                              break;
                            GreSetTextColor(v18, v98);
                          }
                          else
                          {
                            v99 = *(_DWORD *)(v15 + 48);
                            if ( v99 < 0xFF )
                            {
                              v102 = (unsigned __int16 *)v118;
                            }
                            else
                            {
                              v100 = Win32AllocPool(2LL * (v99 + 1), 1953657685LL);
                              v102 = (unsigned __int16 *)v100;
                              if ( !v100 )
                                break;
                              PushW32ThreadLock(v100, v117, (__int64)Win32FreePool, v101);
                            }
                            PrefixCount = GetPrefixCount(
                                            (__int16 *)SourceString,
                                            *(_DWORD *)(v15 + 48),
                                            (__int64)v102,
                                            *(_DWORD *)(v15 + 48));
                            xxxDrawItemUnderline(
                              (struct tagMENU *)v10,
                              (struct tagITEM *)v15,
                              v18,
                              v56,
                              v107,
                              v102,
                              PrefixCount);
                            if ( v102 != (unsigned __int16 *)v118 )
                              PopAndFreeAlwaysW32ThreadLock((__int64)v117, v19, v104, v105);
                          }
                          v9 = v110;
                          goto LABEL_99;
                        }
                      }
                      else
                      {
                        if ( !IsDPIDWMSysMet(v28)
                          || (W32GetCurrentThreadDpiAwarenessContext(v43, v42, v44, v45) & 0xF) != 0 )
                        {
                          goto LABEL_35;
                        }
                        if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread(), v46, v47, v48) + 408)
                          || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(
                                                                     (__int64)KeGetCurrentThread(),
                                                                     v49,
                                                                     v50,
                                                                     v51)
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1) )
                        {
                          goto LABEL_35;
                        }
                      }
                      v53 = (_DWORD *)(gpsi + 2292LL);
                      goto LABEL_50;
                    }
                    xxxSendMenuDrawItemMessage(v18, 1u, (struct tagMENU *)v10, (struct tagITEM *)v15, 0, 0, 0LL);
                  }
LABEL_99:
                  if ( ++v17 == -1 || v17 >= *(_DWORD *)(v10 + 52) )
                    v15 = 0LL;
                  else
                    v15 = *(_QWORD *)(v10 + 80) + 152LL * v17;
                }
                while ( v17 < *(_DWORD *)(v10 + 52) );
              }
              *(_DWORD *)(v116 + 40) &= ~0x200u;
              ThreadUnlock1(v20, v19);
              LOBYTE(NonChildAncestor) = _ReleaseDC(v18);
            }
          }
        }
      }
    }
  }
  return NonChildAncestor;
}

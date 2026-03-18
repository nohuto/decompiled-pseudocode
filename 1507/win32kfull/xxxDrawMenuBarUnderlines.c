/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C00F8334
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C0063E28 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C010E5F0 (xxxEndMenuLoop.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     GreSetTextColor @ 0x1C005184C (GreSetTextColor.c)
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0051984 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     MNIsOwnerDrawItem @ 0x1C0055E1C (MNIsOwnerDrawItem.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C005B560 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0063490 (PushW32ThreadLock.c)
 *     GetNonChildAncestor @ 0x1C0081140 (GetNonChildAncestor.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00956B8 (GetAppCompatFlags2.c)
 *     GreSetViewportOrg @ 0x1C00F8B4C (GreSetViewportOrg.c)
 *     CALL_LPK @ 0x1C0128938 (CALL_LPK.c)
 *     xxxPSMGetTextExtent @ 0x1C013821C (xxxPSMGetTextExtent.c)
 *     GetPrefixCount @ 0x1C01382E8 (GetPrefixCount.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EA14 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C0244864 (xxxPSMTextOut.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

char __fastcall xxxDrawMenuBarUnderlines(__int64 a1, int a2)
{
  __int64 NonChildAncestor; // rax
  __int64 v5; // r9
  __int64 v6; // rbx
  BOOL v7; // edi
  int v8; // edx
  unsigned int v9; // edx
  __int64 v10; // rax
  __int64 v11; // rsi
  HDC DCEx; // r12
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // rdx
  __int64 v17; // rcx
  unsigned int v18; // r13d
  int v19; // r15d
  __int64 v20; // rdx
  __int64 v21; // rcx
  __int64 v22; // r8
  unsigned __int64 v23; // rcx
  __int64 v24; // rcx
  __int64 v25; // rdx
  __int64 v26; // rcx
  __int64 v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  _DWORD *v30; // rdi
  int v31; // r14d
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // r8
  unsigned int v35; // r14d
  int v36; // edi
  __int64 v37; // rdx
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // r8
  int v41; // r14d
  __int64 v42; // r15
  __int64 v43; // rcx
  int v44; // ecx
  _QWORD *v45; // r9
  __int64 v46; // rdi
  unsigned __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  _QWORD *v50; // r9
  __int64 v52; // rcx
  __int64 v53; // rcx
  _DWORD *v55; // rdx
  int v56; // ecx
  _QWORD *v57; // r9
  _DWORD *v58; // rax
  int v59; // edx
  int v60; // edi
  unsigned int v61; // eax
  __int64 v62; // rax
  unsigned __int16 *v63; // rdi
  unsigned __int16 PrefixCount; // ax
  int v66; // [rsp+48h] [rbp-C0h]
  __int64 v68; // [rsp+50h] [rbp-B8h]
  unsigned __int16 *SourceString; // [rsp+58h] [rbp-B0h]
  __int64 v70; // [rsp+60h] [rbp-A8h]
  _BOOL8 v71; // [rsp+70h] [rbp-98h]
  __int64 ThreadWin32Thread; // [rsp+78h] [rbp-90h]
  __int64 v73; // [rsp+80h] [rbp-88h] BYREF
  __int64 v74; // [rsp+88h] [rbp-80h]
  _QWORD v75[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v76[512]; // [rsp+B8h] [rbp-50h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LOBYTE(NonChildAncestor) = 0;
  if ( (gdwPUDFlags & 0x20000) == 0 && ((unsigned int)gpdwCPUserPreferencesMask & 0x80000020) == 0x80000000 )
  {
    LOBYTE(NonChildAncestor) = GetAppCompatFlags2(0x400u);
    if ( (NonChildAncestor & 2) == 0 )
    {
      NonChildAncestor = GetNonChildAncestor(a1);
      v5 = NonChildAncestor;
      if ( NonChildAncestor )
      {
        if ( (*(_BYTE *)(NonChildAncestor + 40) & 1) != 0 )
        {
          v6 = *(_QWORD *)(NonChildAncestor + 192);
          if ( v6 )
          {
            LOBYTE(NonChildAncestor) = 0;
            if ( ((unsigned int)gpdwCPUserPreferencesMask & 0x80020000) == 0x80020000 )
            {
              LOBYTE(NonChildAncestor) = ~*(_BYTE *)(v6 + 40);
              v7 = (*(_BYTE *)(v6 + 40) & 1) == 0;
            }
            else
            {
              v7 = 0;
            }
            v8 = *(_DWORD *)(v6 + 40);
            if ( a2 )
            {
              if ( (v8 & 4) != 0 )
                return NonChildAncestor;
              v9 = v8 | 4;
              v68 = *(_QWORD *)(gpsi + 3752LL);
            }
            else
            {
              if ( (v8 & 4) == 0 )
                return NonChildAncestor;
              v68 = *(_QWORD *)(v6 + 112);
              if ( !v68 )
              {
                if ( v7 )
                  v10 = *(_QWORD *)(gpsi + 3936LL);
                else
                  v10 = *(_QWORD *)(gpsi + 3728LL);
                v68 = v10;
              }
              v9 = v8 & 0xFFFFFFFB;
            }
            v11 = *(_QWORD *)(v6 + 80);
            *(_DWORD *)(v6 + 40) = v9;
            DCEx = (HDC)_GetDCEx(v5, 0LL, 65539LL);
            GetDPIMetrics(v14, v13, v15);
            GreSelectFontInternal(DCEx);
            *(_DWORD *)(v6 + 40) |= 0x200u;
            v16 = gptiCurrent;
            v17 = *(_QWORD *)(gptiCurrent + 376LL);
            v73 = v17;
            *(_QWORD *)(gptiCurrent + 376LL) = &v73;
            v74 = v6;
            ++*(_DWORD *)(v6 + 8);
            v18 = 0;
            if ( *(_DWORD *)(v6 + 52) )
            {
              v71 = v7;
              do
              {
                if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 )
                  break;
                v19 = MNIsOwnerDrawItem(v6, (_DWORD *)v11);
                v70 = *(_QWORD *)(v11 + 56);
                SourceString = *(unsigned __int16 **)(v11 + 40);
                if ( !SourceString && !v19 )
                  goto LABEL_102;
                GreSetViewportOrg(DCEx);
                v66 = *(_DWORD *)(GetDPIMetrics(v21, v20, v22) + 60);
                if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_28;
                  }
                }
                else if ( !IsDPIDWMSysMet(v23)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                         ? (v26 = 0LL)
                         : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 416)
                                                        + 8LL)
                                            + 260LL) & 1),
                           !(_DWORD)v26) )
                {
LABEL_28:
                  if ( IsDPIDWMSysMet(6uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                      ? (v26 = 0LL)
                      : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 416)
                                                     + 8LL)
                                         + 260LL) & 1),
                        (_DWORD)v26) )
                  {
                    v30 = (_DWORD *)(gpsi + 2680LL);
                  }
                  else
                  {
                    v30 = (_DWORD *)(gpsi + 1904LL);
                  }
                  goto LABEL_44;
                }
                v30 = (_DWORD *)(gpsi + 2292LL);
LABEL_44:
                v31 = *(_DWORD *)(v11 + 84) - *(_DWORD *)(GetDPIMetrics(v26, v25, v27) + 60);
                v35 = v31 - *(_DWORD *)(GetDPIMetrics(v33, v32, v34) + 52) - *v30;
                if ( v35 )
                  v66 += v35 >> 1;
                v36 = a2;
                if ( a2 && (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
                  v37 = *(_QWORD *)(gpsi + 3904LL);
                else
                  v37 = v68;
                GreSelectBrush(DCEx, v37);
                if ( !v19 )
                {
                  v41 = *(_DWORD *)(GetDPIMetrics(v39, v38, v40) + 48);
                  if ( (*(_DWORD *)v11 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(DCEx, SourceString);
                    if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 )
                      break;
                    v42 = v70;
                    if ( v70 != *(_QWORD *)(v11 + 56) )
                      break;
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0
                      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        ? (v44 = 0)
                        : (v44 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                          !v44) )
                    {
                      v45 = (_QWORD *)gpsi;
                    }
                    else
                    {
                      v45 = (_QWORD *)gpsi;
                      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
                      {
                        v46 = gpsi + 5748LL;
                        goto LABEL_65;
                      }
                    }
                    v46 = *v45 + 4260LL;
LABEL_65:
                    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_68;
                      }
LABEL_79:
                      v55 = (_DWORD *)(gpsi + 2448LL);
                    }
                    else
                    {
                      if ( IsDPIDWMSysMet(v47)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) == 0
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) == 0
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 416)
                                                 + 8LL)
                                     + 260LL) & 1 )
                      {
                        goto LABEL_79;
                      }
LABEL_68:
                      if ( IsDPIDWMSysMet(0x2DuLL) )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x2000) != 0
                          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1 )
                        {
                          v55 = (_DWORD *)(gpsi + 2836LL);
                          goto LABEL_85;
                        }
                        v50 = (_QWORD *)gpsi;
                      }
                      v55 = (_DWORD *)(*v50 + 2060LL);
                    }
LABEL_85:
                    v56 = *(_DWORD *)(v11 + 80) - *(_DWORD *)(v46 + 1016) - *v55;
                    v36 = a2;
                    v41 += v56;
                  }
                  else
                  {
                    v42 = v70;
                  }
                  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                  {
                    v58 = (_DWORD *)*v57;
                    if ( v36 )
                    {
                      v59 = v58[899];
                    }
                    else if ( v71 )
                    {
                      v59 = v58[922];
                    }
                    else
                    {
                      v59 = v58[896];
                    }
                    v60 = GreSetTextColor(DCEx, v59);
                    xxxPSMTextOut(DCEx, v41, v66, SourceString, *(_DWORD *)(v11 + 48), 0x200000);
                    if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 || v42 != *(_QWORD *)(v11 + 56) )
                      break;
                    GreSetTextColor(DCEx, v60);
                  }
                  else
                  {
                    v61 = *(_DWORD *)(v11 + 48);
                    if ( v61 < 0xFF )
                    {
                      v63 = (unsigned __int16 *)v76;
                    }
                    else
                    {
                      v62 = Win32AllocPool(2LL * (v61 + 1), 1953657685LL);
                      v63 = (unsigned __int16 *)v62;
                      if ( !v62 )
                        break;
                      PushW32ThreadLock(v62, v75, (__int64)Win32FreePool);
                    }
                    PrefixCount = GetPrefixCount(
                                    SourceString,
                                    *(unsigned int *)(v11 + 48),
                                    v63,
                                    *(unsigned int *)(v11 + 48));
                    xxxDrawItemUnderline((struct tagMENU *)v6, (struct tagITEM *)v11, DCEx, v41, v66, v63, PrefixCount);
                    if ( v63 != (unsigned __int16 *)v76 )
                      PopAndFreeAlwaysW32ThreadLock((__int64)v75);
                  }
                  goto LABEL_102;
                }
                xxxSendMenuDrawItemMessage(DCEx, 1u, (struct tagMENU *)v6, (struct tagITEM *)v11, 0, 0, 0LL);
LABEL_102:
                if ( ++v18 == -1 || v18 >= *(_DWORD *)(v6 + 52) )
                  v11 = 0LL;
                else
                  v11 = *(_QWORD *)(v6 + 80) + 152LL * v18;
              }
              while ( v18 < *(_DWORD *)(v6 + 52) );
            }
            *(_DWORD *)(v74 + 40) &= ~0x200u;
            ThreadUnlock1(v17, v16);
            LOBYTE(NonChildAncestor) = _ReleaseDC(DCEx);
          }
        }
      }
    }
  }
  return NonChildAncestor;
}

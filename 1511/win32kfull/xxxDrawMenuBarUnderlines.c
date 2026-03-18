/*
 * XREFs of xxxDrawMenuBarUnderlines @ 0x1C010E45C
 * Callers:
 *     xxxRealDefWindowProc @ 0x1C006FB88 (xxxRealDefWindowProc.c)
 *     xxxEndMenuLoop @ 0x1C013A060 (xxxEndMenuLoop.c)
 * Callees:
 *     ?xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z @ 0x1C0014734 (-xxxSendMenuDrawItemMessage@@YAXPEAUHDC__@@IPEAUtagMENU@@PEAUtagITEM@@HHPEAUtagWND@@@Z.c)
 *     GreSetTextColor @ 0x1C00155BC (GreSetTextColor.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     PopAndFreeAlwaysW32ThreadLock @ 0x1C0050200 (PopAndFreeAlwaysW32ThreadLock.c)
 *     PushW32ThreadLock @ 0x1C0051990 (PushW32ThreadLock.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     MNIsOwnerDrawItem @ 0x1C006E6E0 (MNIsOwnerDrawItem.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetAppCompatFlags2 @ 0x1C00722A8 (GetAppCompatFlags2.c)
 *     GetNonChildAncestor @ 0x1C00905C8 (GetNonChildAncestor.c)
 *     xxxPSMGetTextExtent @ 0x1C00CD07C (xxxPSMGetTextExtent.c)
 *     CALL_LPK @ 0x1C00CD148 (CALL_LPK.c)
 *     GetPrefixCount @ 0x1C00CD17C (GetPrefixCount.c)
 *     GreSetViewportOrg @ 0x1C0101830 (GreSetViewportOrg.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 *     ?xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z @ 0x1C023EBC4 (-xxxDrawItemUnderline@@YAXPEAUtagMENU@@PEAUtagITEM@@PEAUHDC__@@HHPEAGJ@Z.c)
 *     xxxPSMTextOut @ 0x1C02449F4 (xxxPSMTextOut.c)
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
  __int64 DPIMetrics; // rax
  unsigned int v14; // r13d
  __int64 v15; // rdx
  __int64 v16; // rcx
  int v17; // r15d
  int v18; // r8d
  int v19; // edx
  unsigned __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // rcx
  int v23; // ecx
  __int64 v24; // rcx
  __int64 v25; // rcx
  int v26; // ecx
  _DWORD *v27; // rdi
  int v28; // r14d
  unsigned int v29; // r14d
  int v30; // edi
  __int64 v31; // rdx
  int v32; // r14d
  __int64 v33; // r15
  __int64 v34; // rcx
  int v35; // ecx
  _QWORD *v36; // r9
  __int64 v37; // rdi
  unsigned __int64 v38; // rcx
  __int64 v39; // rcx
  __int64 v40; // rcx
  _QWORD *v41; // r9
  __int64 v43; // rcx
  __int64 v44; // rcx
  _DWORD *v46; // rdx
  int v47; // ecx
  _QWORD *v48; // r9
  _DWORD *v49; // rax
  int v50; // edx
  int v51; // edi
  unsigned int v52; // eax
  __int64 v53; // rax
  unsigned __int16 *v54; // rdi
  unsigned __int16 PrefixCount; // ax
  int v57; // [rsp+48h] [rbp-C0h]
  __int64 v59; // [rsp+50h] [rbp-B8h]
  unsigned __int16 *SourceString; // [rsp+58h] [rbp-B0h]
  __int64 v61; // [rsp+60h] [rbp-A8h]
  __int64 v62; // [rsp+68h] [rbp-A0h] BYREF
  _BOOL8 v63; // [rsp+70h] [rbp-98h]
  __int64 ThreadWin32Thread; // [rsp+78h] [rbp-90h]
  __int64 v65; // [rsp+80h] [rbp-88h] BYREF
  __int64 v66; // [rsp+88h] [rbp-80h]
  _QWORD v67[4]; // [rsp+98h] [rbp-70h] BYREF
  _BYTE v68[512]; // [rsp+B8h] [rbp-50h] BYREF

  ThreadWin32Thread = W32GetThreadWin32Thread((__int64)KeGetCurrentThread());
  LOBYTE(NonChildAncestor) = 0;
  v62 = 0LL;
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
              v59 = *(_QWORD *)(gpsi + 3752LL);
            }
            else
            {
              if ( (v8 & 4) == 0 )
                return NonChildAncestor;
              v59 = *(_QWORD *)(v6 + 112);
              if ( !v59 )
              {
                if ( v7 )
                  v10 = *(_QWORD *)(gpsi + 3936LL);
                else
                  v10 = *(_QWORD *)(gpsi + 3728LL);
                v59 = v10;
              }
              v9 = v8 & 0xFFFFFFFB;
            }
            v11 = *(_QWORD *)(v6 + 80);
            *(_DWORD *)(v6 + 40) = v9;
            DCEx = (HDC)_GetDCEx(v5, 0LL, 65539LL);
            DPIMetrics = GetDPIMetrics();
            GreSelectFont((__int64)DCEx, *(_QWORD *)(DPIMetrics + 8));
            *(_DWORD *)(v6 + 40) |= 0x200u;
            v14 = 0;
            v15 = gptiCurrent;
            v16 = *(_QWORD *)(gptiCurrent + 368LL);
            v65 = v16;
            *(_QWORD *)(gptiCurrent + 368LL) = &v65;
            v66 = v6;
            ++*(_DWORD *)(v6 + 8);
            if ( *(_DWORD *)(v6 + 52) )
            {
              v63 = v7;
              do
              {
                if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 )
                  break;
                v17 = MNIsOwnerDrawItem(v6, (_DWORD *)v11);
                v61 = *(_QWORD *)(v11 + 56);
                SourceString = *(unsigned __int16 **)(v11 + 40);
                if ( !SourceString && !v17 )
                  goto LABEL_105;
                if ( v17 )
                {
                  v18 = 0;
                  v19 = 0;
                }
                else
                {
                  v18 = *(_DWORD *)(v11 + 76);
                  v19 = *(_DWORD *)(v11 + 72);
                }
                GreSetViewportOrg(DCEx, v19, v18);
                v57 = *(_DWORD *)(GetDPIMetrics() + 60);
                if ( (unsigned int)IsDPIAbsoluteSysMet(6uLL) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_31;
                  }
                }
                else if ( !IsDPIDWMSysMet(v20)
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) != 0
                       || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x4000) != 0
                       || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                         ? (v26 = 0)
                         : (v26 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                    + 408)
                                                        + 8LL)
                                            + 244LL) & 1),
                           !v26) )
                {
LABEL_31:
                  if ( IsDPIDWMSysMet(6uLL)
                    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) != 0
                    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                      ? (v23 = 0)
                      : (v23 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                 + 408)
                                                     + 8LL)
                                         + 244LL) & 1),
                        v23) )
                  {
                    v27 = (_DWORD *)(gpsi + 2680LL);
                  }
                  else
                  {
                    v27 = (_DWORD *)(gpsi + 1904LL);
                  }
                  goto LABEL_47;
                }
                v27 = (_DWORD *)(gpsi + 2292LL);
LABEL_47:
                v28 = *(_DWORD *)(v11 + 84) - *(_DWORD *)(GetDPIMetrics() + 60);
                v29 = v28 - *(_DWORD *)(GetDPIMetrics() + 52) - *v27;
                if ( v29 )
                  v57 += v29 >> 1;
                v30 = a2;
                if ( a2 && (*(_DWORD *)(v11 + 4) & 0x100) != 0 )
                  v31 = *(_QWORD *)(gpsi + 3904LL);
                else
                  v31 = v59;
                GreSelectBrush(DCEx, v31);
                if ( !v17 )
                {
                  v32 = *(_DWORD *)(GetDPIMetrics() + 48);
                  if ( (*(_DWORD *)v11 & 0x2000) != 0 )
                  {
                    xxxPSMGetTextExtent(DCEx, SourceString, *(_DWORD *)(v11 + 48), (__int64)&v62);
                    if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 )
                      break;
                    v33 = v61;
                    if ( v61 != *(_QWORD *)(v11 + 56) )
                      break;
                    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
                      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0
                      || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        ? (v35 = 0)
                        : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                          !v35) )
                    {
                      v36 = (_QWORD *)gpsi;
                    }
                    else
                    {
                      v36 = (_QWORD *)gpsi;
                      if ( *(_WORD *)(gpsi + 7286LL) != 96 )
                      {
                        v37 = gpsi + 5748LL;
                        goto LABEL_68;
                      }
                    }
                    v37 = *v36 + 4260LL;
LABEL_68:
                    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2DuLL) )
                    {
                      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
                        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0 )
                      {
                        goto LABEL_71;
                      }
LABEL_82:
                      v46 = (_DWORD *)(gpsi + 2448LL);
                    }
                    else
                    {
                      if ( IsDPIDWMSysMet(v38)
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) == 0
                        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) == 0
                        && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                        && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                             + 408)
                                                 + 8LL)
                                     + 244LL) & 1 )
                      {
                        goto LABEL_82;
                      }
LABEL_71:
                      if ( IsDPIDWMSysMet(0x2DuLL) )
                      {
                        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
                          && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                          && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 408)
                                                   + 8LL)
                                       + 244LL) & 1 )
                        {
                          v46 = (_DWORD *)(gpsi + 2836LL);
                          goto LABEL_88;
                        }
                        v41 = (_QWORD *)gpsi;
                      }
                      v46 = (_DWORD *)(*v41 + 2060LL);
                    }
LABEL_88:
                    v47 = *(_DWORD *)(v11 + 80) - *(_DWORD *)(v37 + 1016) - *v46 - v62;
                    v30 = a2;
                    v32 += v47;
                  }
                  else
                  {
                    v33 = v61;
                  }
                  if ( (unsigned int)CALL_LPK(ThreadWin32Thread) )
                  {
                    v49 = (_DWORD *)*v48;
                    if ( v30 )
                    {
                      v50 = v49[899];
                    }
                    else if ( v63 )
                    {
                      v50 = v49[922];
                    }
                    else
                    {
                      v50 = v49[896];
                    }
                    v51 = GreSetTextColor(DCEx, v50);
                    xxxPSMTextOut(DCEx, v32, v57, SourceString, *(_DWORD *)(v11 + 48), 0x200000);
                    if ( (unsigned int)MNGetpItemIndex(v6, v11) == -1 || v33 != *(_QWORD *)(v11 + 56) )
                      break;
                    GreSetTextColor(DCEx, v51);
                  }
                  else
                  {
                    v52 = *(_DWORD *)(v11 + 48);
                    if ( v52 < 0xFF )
                    {
                      v54 = (unsigned __int16 *)v68;
                    }
                    else
                    {
                      v53 = Win32AllocPool(2LL * (v52 + 1));
                      v54 = (unsigned __int16 *)v53;
                      if ( !v53 )
                        break;
                      PushW32ThreadLock(v53, v67, (__int64)Win32FreePool);
                    }
                    PrefixCount = GetPrefixCount(
                                    (__int16 *)SourceString,
                                    *(_DWORD *)(v11 + 48),
                                    v54,
                                    *(_DWORD *)(v11 + 48));
                    xxxDrawItemUnderline((struct tagMENU *)v6, (struct tagITEM *)v11, DCEx, v32, v57, v54, PrefixCount);
                    if ( v54 != (unsigned __int16 *)v68 )
                      PopAndFreeAlwaysW32ThreadLock((__int64)v67);
                  }
                  goto LABEL_105;
                }
                xxxSendMenuDrawItemMessage(DCEx, 1u, (struct tagMENU *)v6, (struct tagITEM *)v11, 0, 0, 0LL);
LABEL_105:
                if ( ++v14 == -1 || v14 >= *(_DWORD *)(v6 + 52) )
                  v11 = 0LL;
                else
                  v11 = *(_QWORD *)(v6 + 80) + 152LL * v14;
              }
              while ( v14 < *(_DWORD *)(v6 + 52) );
            }
            *(_DWORD *)(v66 + 40) &= ~0x200u;
            ThreadUnlock1(v16, v15);
            LOBYTE(NonChildAncestor) = _ReleaseDC(DCEx);
          }
        }
      }
    }
  }
  return NonChildAncestor;
}

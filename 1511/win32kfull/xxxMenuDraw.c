/*
 * XREFs of xxxMenuDraw @ 0x1C0014214
 * Callers:
 *     xxxPaintMenuBar @ 0x1C000FE34 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C0215850 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240734 (xxxDrawMenuBarTemp.c)
 *     xxxMenuBarDraw @ 0x1C0241E10 (xxxMenuBarDraw.c)
 * Callees:
 *     xxxSendUAHMenuMessage @ 0x1C000FF8C (xxxSendUAHMenuMessage.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C00141C0 (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00146B4 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     GreSelectFont @ 0x1C0018350 (GreSelectFont.c)
 *     GreSetBkMode @ 0x1C0018468 (GreSetBkMode.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     ThreadLockExchange @ 0x1C006D548 (ThreadLockExchange.c)
 *     MNGetpItemIndex @ 0x1C006EE50 (MNGetpItemIndex.c)
 *     MNIsUAHMenu @ 0x1C00707A8 (MNIsUAHMenu.c)
 *     DrawEdge @ 0x1C0071B9C (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GreSetTextAlign @ 0x1C00CCFB8 (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00CD038 (GreGetTextAlign.c)
 *     GreSetViewportOrg @ 0x1C0101830 (GreSetViewportOrg.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C010834C (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  int v4; // ebx
  __int64 v5; // rsi
  int v8; // ebx
  int v9; // r13d
  struct tagDPIMETRICS *DPIMETRICS; // rax
  int TextAlign; // eax
  __int64 v12; // rdx
  _DWORD *v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // r14
  __int64 v17; // rax
  __int64 v18; // rcx
  int v19; // ecx
  int v20; // ecx
  _DWORD *v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  int v24; // ecx
  int v25; // ecx
  int *v26; // rcx
  int v27; // eax
  int v28; // ecx
  __int64 v29; // rcx
  int v30; // ecx
  int v31; // ecx
  _DWORD *v32; // rcx
  int v33; // ecx
  __int64 v34; // rcx
  int v35; // ecx
  int v36; // ecx
  int *v37; // rcx
  int v38; // ecx
  int v39; // eax
  __int64 v40; // rcx
  int v41; // ecx
  _DWORD *v43; // rcx
  int v44; // ebx
  int v45; // ecx
  __int64 v46; // rcx
  int v47; // ecx
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // [rsp+30h] [rbp-49h] BYREF
  int v52; // [rsp+38h] [rbp-41h]
  int v53; // [rsp+40h] [rbp-39h]
  int v54; // [rsp+44h] [rbp-35h]
  int v55; // [rsp+48h] [rbp-31h]
  int v56; // [rsp+4Ch] [rbp-2Dh]
  int v57; // [rsp+50h] [rbp-29h]
  int v58; // [rsp+58h] [rbp-21h]
  int v59; // [rsp+5Ch] [rbp-1Dh]
  int v60; // [rsp+60h] [rbp-19h]
  int v61; // [rsp+64h] [rbp-15h]
  __int64 v62; // [rsp+68h] [rbp-11h]
  __int64 v63; // [rsp+70h] [rbp-9h]
  __int64 v64; // [rsp+78h] [rbp-1h]
  _QWORD v65[10]; // [rsp+80h] [rbp+7h] BYREF
  int v66; // [rsp+E8h] [rbp+6Fh]

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 40);
  v5 = a3;
  v66 = 0;
  v51 = 0LL;
  v8 = v4 & 1;
  v64 = gptiCurrent;
  v9 = 0;
  if ( gihmodUserApiHook < 0 || !a3 )
    v5 = *(_QWORD *)(a2 + 72);
  GreGetDCPoint(a1, 4LL, &v51);
  DPIMETRICS = GetDPIMETRICS((struct tagWND *)v5);
  v63 = GreSelectFont(a1, *((_QWORD *)DPIMETRICS + 1));
  TextAlign = GreGetTextAlign(a1);
  v13 = *(_DWORD **)(a2 + 80);
  v57 = TextAlign;
  if ( v13 && (*v13 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v14 = gptiCurrent;
  v65[0] = *(_QWORD *)(gptiCurrent + 368LL);
  *(_QWORD *)(gptiCurrent + 368LL) = v65;
  v65[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  if ( *(_QWORD *)(a2 + 112) )
    goto LABEL_35;
  if ( gihmodUserApiHook >= 0 && v8 )
  {
    if ( !v5 || !(unsigned int)xxxSendUAHInitMenuMessage(v5, a2, (__int64)a1) )
    {
      v5 = *(_QWORD *)(a2 + 72);
      ThreadLockExchange(v5, v65);
      goto LABEL_12;
    }
    xxxSendUAHMenuMessage(v5, 145LL, a2, (__int64)a1);
LABEL_35:
    v9 = GreSetBkMode(a1);
    v66 = v9;
  }
LABEL_12:
  if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
  {
    v17 = *(unsigned int *)(a2 + 120);
    if ( (_DWORD)v17 == -1 || (unsigned int)v17 >= *(_DWORD *)(a2 + 52) )
      v15 = 0LL;
    else
      v15 = *(_QWORD *)(a2 + 80) + 152 * v17;
    GreSetViewportOrg(a1);
    v3 = *(_DWORD *)(a2 + 120);
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 80);
  }
  v52 = 0;
  if ( v3 < *(_DWORD *)(a2 + 52) )
  {
    v14 = v8;
    v62 = v8;
    while ( 1 )
    {
      if ( !v15 )
      {
LABEL_26:
        v9 = v66;
        goto LABEL_27;
      }
      if ( (*(_DWORD *)v15 & 0x20) != 0 && v14 )
        break;
LABEL_18:
      if ( (*(_DWORD *)v15 & 0x800) != 0 )
      {
        if ( (*(_DWORD *)v15 & 0x100) == 0 || (v14 = 1024LL, *(_WORD *)(v64 + 552) < 0x400u) )
        {
          if ( !(unsigned int)MNIsUAHMenu(a2) )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
            {
              if ( (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
                || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
              {
LABEL_130:
                if ( (unsigned int)IsDPIDWMSysMet(6LL)
                  && (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                    ? (v41 = 0)
                    : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                                                   + 8LL)
                                       + 244LL) & 1),
                      v41) )
                {
                  v43 = (_DWORD *)(gpsi + 2680LL);
                }
                else
                {
                  v43 = (_DWORD *)(gpsi + 1904LL);
                }
LABEL_146:
                v44 = *(_DWORD *)(v15 + 76) + (*(_DWORD *)(v15 + 84) >> 1) - *v43;
                v45 = *(_DWORD *)(v15 + 72);
                v59 = v44;
                v58 = v45 + 1;
                v60 = *(_DWORD *)(v15 + 80) - 1 + v45;
                if ( (unsigned int)IsDPIAbsoluteSysMet(46LL) )
                {
                  if ( (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
                    || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
                  {
LABEL_149:
                    if ( (unsigned int)IsDPIDWMSysMet(46LL)
                      && (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                        ? (v47 = 0)
                        : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                                                       + 8LL)
                                           + 244LL) & 1),
                          v47) )
                    {
                      v49 = (_DWORD *)(gpsi + 2840LL);
                    }
                    else
                    {
                      v49 = (_DWORD *)(gpsi + 2064LL);
                    }
                    goto LABEL_165;
                  }
                }
                else
                {
                  if ( !(unsigned int)IsDPIDWMSysMet(v46)
                    || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
                    || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_149;
                  }
                  if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                    || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1) )
                  {
                    goto LABEL_149;
                  }
                }
                v49 = (_DWORD *)(gpsi + 2452LL);
LABEL_165:
                v61 = v44 + *v49;
                DrawEdge(a1);
                MNDrawInsertionBar(a1, (struct tagITEM *)v15);
LABEL_21:
                if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
                {
                  v14 = (unsigned int)(*(_DWORD *)(v15 + 84) + v52);
                  v52 = v14;
                  if ( (unsigned int)v14 > *(_DWORD *)(a2 + 60) )
                    goto LABEL_26;
                }
                goto LABEL_22;
              }
            }
            else
            {
              if ( !(unsigned int)IsDPIDWMSysMet(v40)
                || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
                || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
              {
                goto LABEL_130;
              }
              if ( !*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1) )
              {
                goto LABEL_130;
              }
            }
            v43 = (_DWORD *)(gpsi + 2292LL);
            goto LABEL_146;
          }
        }
      }
      if ( !v5 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) == 0 )
        PsGetCurrentProcessWin32Process(v50);
      xxxDrawMenuItem(a1, 0, v5);
      if ( (unsigned int)MNGetpItemIndex(a2, v15) != -1 )
        goto LABEL_21;
LABEL_22:
      if ( ++v3 == -1 || v3 >= *(_DWORD *)(a2 + 52) )
        v15 = 0LL;
      else
        v15 = *(_QWORD *)(a2 + 80) + 152LL * v3;
      v14 = v62;
      if ( v3 >= *(_DWORD *)(a2 + 52) )
        goto LABEL_26;
    }
    if ( (*(_DWORD *)v15 & 0x2000) != 0 && v3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
      {
        if ( (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
          || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
        {
          goto LABEL_48;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v18)
             || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
             || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
               ? (v20 = 0)
               : (v20 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                  + 244LL) & 1),
                 !v20) )
      {
LABEL_48:
        if ( (unsigned int)IsDPIDWMSysMet(7LL)
          && (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v19 = 0)
            : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              v19) )
        {
          v21 = (_DWORD *)(gpsi + 2684LL);
        }
        else
        {
          v21 = (_DWORD *)(gpsi + 1908LL);
        }
LABEL_64:
        v22 = *(_DWORD *)(v15 - 80) - *v21;
        v54 = 0;
        v53 = v22;
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
            || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
          {
            goto LABEL_67;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v23)
               || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
               || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                 ? (v25 = 0)
                 : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                    + 244LL) & 1),
                   !v25) )
        {
LABEL_67:
          if ( (unsigned int)IsDPIDWMSysMet(5LL)
            && (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v24 = 0)
              : (v24 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v24) )
          {
            v26 = (int *)(gpsi + 2676LL);
          }
          else
          {
            v26 = (int *)(gpsi + 1900LL);
          }
          goto LABEL_83;
        }
        v26 = (int *)(gpsi + 2288LL);
LABEL_83:
        v27 = *v26;
        v28 = *(_DWORD *)(v15 - 80);
LABEL_123:
        v38 = v28 - v27;
        v39 = *(_DWORD *)(a2 + 60);
        v55 = v38;
        v56 = v39;
        DrawEdge(a1);
        goto LABEL_18;
      }
      v21 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_64;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
    {
      if ( (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
        || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
      {
        goto LABEL_87;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v29)
           || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
           || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             ? (v31 = 0)
             : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                + 244LL) & 1),
               !v31) )
    {
LABEL_87:
      if ( (unsigned int)IsDPIDWMSysMet(7LL)
        && (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v30 = 0)
          : (v30 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                             + 244LL) & 1),
            v30) )
      {
        v32 = (_DWORD *)(gpsi + 2684LL);
      }
      else
      {
        v32 = (_DWORD *)(gpsi + 1908LL);
      }
LABEL_103:
      v33 = *(_DWORD *)(v15 + 72) - *v32;
      v54 = 0;
      v53 = v33;
      if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
      {
        if ( (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
          || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0 )
        {
          goto LABEL_106;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v34)
             || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
             || (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
               ? (v36 = 0)
               : (v36 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                  + 244LL) & 1),
                 !v36) )
      {
LABEL_106:
        if ( (unsigned int)IsDPIDWMSysMet(5LL)
          && (*(_DWORD *)(((__int64 (*)(void))PsGetCurrentProcessWin32Process)() + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v35 = 0)
            : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              v35) )
        {
          v37 = (int *)(gpsi + 2676LL);
        }
        else
        {
          v37 = (int *)(gpsi + 1900LL);
        }
        goto LABEL_122;
      }
      v37 = (int *)(gpsi + 2288LL);
LABEL_122:
      v27 = *v37;
      v28 = *(_DWORD *)(v15 + 72);
      goto LABEL_123;
    }
    v32 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_103;
  }
LABEL_27:
  ThreadUnlock1(v14, v12);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFont(a1, v63);
}

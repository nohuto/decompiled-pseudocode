/*
 * XREFs of xxxMenuDraw @ 0x1C0050108
 * Callers:
 *     xxxPaintMenuBar @ 0x1C00F6114 (xxxPaintMenuBar.c)
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z @ 0x1C02159A0 (-xxxHandleMenuPainting@@YAXPEAUtagWND@@PEAUtagMENU@@@Z.c)
 *     xxxDrawMenuBarTemp @ 0x1C0240598 (xxxDrawMenuBarTemp.c)
 *     xxxMenuBarDraw @ 0x1C0241C80 (xxxMenuBarDraw.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C001A694 (W32GetThreadWin32Thread.c)
 *     xxxSendUAHInitMenuMessage @ 0x1C004FB68 (xxxSendUAHInitMenuMessage.c)
 *     xxxDrawMenuItem @ 0x1C0051CE0 (xxxDrawMenuItem.c)
 *     ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C0052498 (-MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z.c)
 *     MNGetpItemIndex @ 0x1C00557A0 (MNGetpItemIndex.c)
 *     GreSetBkMode @ 0x1C00567EC (GreSetBkMode.c)
 *     MNIsUAHMenu @ 0x1C005E724 (MNIsUAHMenu.c)
 *     ThreadLockExchange @ 0x1C0062A1C (ThreadLockExchange.c)
 *     DrawEdge @ 0x1C0094D78 (DrawEdge.c)
 *     IsDPIDWMSysMet @ 0x1C0095430 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C0095458 (IsDPIAbsoluteSysMet.c)
 *     xxxSendUAHMenuMessage @ 0x1C00F626C (xxxSendUAHMenuMessage.c)
 *     GreSetViewportOrg @ 0x1C00F8B4C (GreSetViewportOrg.c)
 *     GreSetTextAlign @ 0x1C00FA3AC (GreSetTextAlign.c)
 *     GreGetTextAlign @ 0x1C00FAEBC (GreGetTextAlign.c)
 *     ?GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z @ 0x1C00FBD44 (-GetDPIMETRICS@@YAPEAUtagDPIMETRICS@@PEAUtagWND@@@Z.c)
 *     GreSelectFontInternal @ 0x1C0293D18 (GreSelectFontInternal.c)
 */

__int64 __fastcall xxxMenuDraw(HDC a1, __int64 a2, __int64 a3)
{
  unsigned int v3; // r12d
  int v4; // ebx
  __int64 v5; // rsi
  int v8; // ebx
  int v9; // r13d
  int TextAlign; // eax
  __int64 v11; // rdx
  _DWORD *v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rax
  __int64 v15; // r14
  __int64 v16; // rcx
  __int64 v17; // rcx
  __int64 v18; // rcx
  int v19; // ecx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  _DWORD *v23; // rcx
  int v24; // ecx
  __int64 v25; // rcx
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v28; // ecx
  __int64 v29; // rcx
  __int64 v30; // rcx
  int v31; // ecx
  int *v32; // rcx
  int v33; // eax
  int v34; // ecx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  int v38; // ecx
  __int64 v39; // rcx
  __int64 v40; // rcx
  int v41; // ecx
  _DWORD *v42; // rcx
  int v43; // ecx
  __int64 v44; // rcx
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // ecx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  int *v51; // rcx
  int v52; // ecx
  int v53; // eax
  __int64 v54; // rcx
  __int64 v55; // rcx
  __int64 v56; // rcx
  int v57; // ecx
  __int64 v58; // rcx
  __int64 v59; // rcx
  _DWORD *v61; // rcx
  int v62; // ebx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  __int64 v66; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  _DWORD *v71; // rcx
  __int64 v72; // rcx
  __int64 v74; // [rsp+30h] [rbp-49h] BYREF
  int v75; // [rsp+38h] [rbp-41h]
  int v76; // [rsp+40h] [rbp-39h]
  int v77; // [rsp+44h] [rbp-35h]
  int v78; // [rsp+48h] [rbp-31h]
  int v79; // [rsp+4Ch] [rbp-2Dh]
  int v80; // [rsp+50h] [rbp-29h]
  int v81; // [rsp+58h] [rbp-21h]
  int v82; // [rsp+5Ch] [rbp-1Dh]
  int v83; // [rsp+60h] [rbp-19h]
  int v84; // [rsp+64h] [rbp-15h]
  __int64 v85; // [rsp+68h] [rbp-11h]
  __int64 v86; // [rsp+70h] [rbp-9h]
  __int64 v87; // [rsp+78h] [rbp-1h]
  _QWORD v88[10]; // [rsp+80h] [rbp+7h] BYREF
  int v89; // [rsp+E8h] [rbp+6Fh]

  v3 = 0;
  v4 = *(_DWORD *)(a2 + 40);
  v5 = a3;
  v89 = 0;
  v74 = 0LL;
  v8 = v4 & 1;
  v87 = gptiCurrent;
  v9 = 0;
  if ( gihmodUserApiHook < 0 || !a3 )
    v5 = *(_QWORD *)(a2 + 72);
  GreGetDCPoint(a1, 4LL, &v74);
  GetDPIMETRICS((struct tagWND *)v5);
  v86 = GreSelectFontInternal(a1);
  TextAlign = GreGetTextAlign(a1);
  v12 = *(_DWORD **)(a2 + 80);
  v80 = TextAlign;
  if ( v12 && (*v12 & 0x2000) != 0 )
    GreSetTextAlign(a1);
  v13 = gptiCurrent;
  v88[0] = *(_QWORD *)(gptiCurrent + 376LL);
  *(_QWORD *)(gptiCurrent + 376LL) = v88;
  v88[1] = v5;
  if ( v5 )
    ++*(_DWORD *)(v5 + 8);
  if ( *(_QWORD *)(a2 + 112) )
    goto LABEL_15;
  if ( gihmodUserApiHook >= 0 && v8 )
  {
    if ( v5 && (unsigned int)xxxSendUAHInitMenuMessage(v5, a2) )
    {
      xxxSendUAHMenuMessage(v5, 145LL, a2, a1);
LABEL_15:
      v9 = GreSetBkMode(a1);
      v89 = v9;
      goto LABEL_17;
    }
    v5 = *(_QWORD *)(a2 + 72);
    ThreadLockExchange(v5, v88);
  }
LABEL_17:
  if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
  {
    v14 = *(unsigned int *)(a2 + 120);
    if ( (_DWORD)v14 == -1 || (unsigned int)v14 >= *(_DWORD *)(a2 + 52) )
      v15 = 0LL;
    else
      v15 = *(_QWORD *)(a2 + 80) + 152 * v14;
    GreSetViewportOrg(a1);
    v3 = *(_DWORD *)(a2 + 120);
  }
  else
  {
    v15 = *(_QWORD *)(a2 + 80);
  }
  v75 = 0;
  if ( v3 < *(_DWORD *)(a2 + 52) )
  {
    v13 = v8;
    v85 = v8;
    while ( 1 )
    {
      if ( !v15 )
      {
LABEL_164:
        v9 = v89;
        goto LABEL_165;
      }
      if ( (*(_DWORD *)v15 & 0x20) != 0 && v13 )
        break;
LABEL_110:
      if ( (*(_DWORD *)v15 & 0x800) != 0 )
      {
        if ( (*(_DWORD *)v15 & 0x100) == 0 || (v13 = 1024LL, *(_WORD *)(v87 + 560) < 0x400u) )
        {
          if ( !(unsigned int)MNIsUAHMenu(a2) )
          {
            if ( (unsigned int)IsDPIAbsoluteSysMet(6LL) )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0 )
              {
LABEL_117:
                if ( (unsigned int)IsDPIDWMSysMet(6LL)
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x2000) != 0
                  && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    ? (v57 = 0)
                    : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                               + 416)
                                                   + 8LL)
                                       + 260LL) & 1),
                      v57) )
                {
                  v61 = (_DWORD *)(gpsi + 2680LL);
                }
                else
                {
                  v61 = (_DWORD *)(gpsi + 1904LL);
                }
LABEL_133:
                v62 = *(_DWORD *)(v15 + 76) + (*(_DWORD *)(v15 + 84) >> 1) - *v61;
                v63 = *(_DWORD *)(v15 + 72);
                v82 = v62;
                v81 = v63 + 1;
                v83 = *(_DWORD *)(v15 + 80) - 1 + v63;
                if ( (unsigned int)IsDPIAbsoluteSysMet(46LL) )
                {
                  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) != 0 )
                  {
LABEL_136:
                    if ( (unsigned int)IsDPIDWMSysMet(46LL)
                      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v66) + 776) & 0x2000) != 0
                      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                        ? (v67 = 0)
                        : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                                   + 416)
                                                       + 8LL)
                                           + 260LL) & 1),
                          v67) )
                    {
                      v71 = (_DWORD *)(gpsi + 2840LL);
                    }
                    else
                    {
                      v71 = (_DWORD *)(gpsi + 2064LL);
                    }
                    goto LABEL_152;
                  }
                }
                else
                {
                  if ( !(unsigned int)IsDPIDWMSysMet(v64)
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x2000) != 0
                    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) != 0 )
                  {
                    goto LABEL_136;
                  }
                  if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                    || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                               + 8LL)
                                   + 260LL) & 1) )
                  {
                    goto LABEL_136;
                  }
                }
                v71 = (_DWORD *)(gpsi + 2452LL);
LABEL_152:
                v84 = v62 + *v71;
                DrawEdge(a1);
                MNDrawInsertionBar(a1, (struct tagITEM *)v15);
LABEL_157:
                if ( (*(_DWORD *)(a2 + 128) & 3) != 0 )
                {
                  v13 = (unsigned int)(*(_DWORD *)(v15 + 84) + v75);
                  v75 = v13;
                  if ( (unsigned int)v13 > *(_DWORD *)(a2 + 60) )
                    goto LABEL_164;
                }
                goto LABEL_159;
              }
            }
            else
            {
              if ( !(unsigned int)IsDPIDWMSysMet(v54)
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v58) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v59) + 776) & 0x4000) != 0 )
              {
                goto LABEL_117;
              }
              if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1) )
              {
                goto LABEL_117;
              }
            }
            v61 = (_DWORD *)(gpsi + 2292LL);
            goto LABEL_133;
          }
        }
      }
      if ( !v5 && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0 )
        PsGetCurrentProcessWin32Process(v72);
      xxxDrawMenuItem(a1, 0, (struct tagWND *)v5);
      if ( (unsigned int)MNGetpItemIndex(a2, v15) != -1 )
        goto LABEL_157;
LABEL_159:
      if ( ++v3 == -1 || v3 >= *(_DWORD *)(a2 + 52) )
        v15 = 0LL;
      else
        v15 = *(_QWORD *)(a2 + 80) + 152LL * v3;
      v13 = v85;
      if ( v3 >= *(_DWORD *)(a2 + 52) )
        goto LABEL_164;
    }
    if ( (*(_DWORD *)v15 & 0x2000) != 0 && v3 )
    {
      if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x4000) != 0 )
        {
          goto LABEL_34;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v16)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v22 = 0)
               : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v22) )
      {
LABEL_34:
        if ( (unsigned int)IsDPIDWMSysMet(7LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v19 = 0)
            : (v19 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v19) )
        {
          v23 = (_DWORD *)(gpsi + 2684LL);
        }
        else
        {
          v23 = (_DWORD *)(gpsi + 1908LL);
        }
LABEL_50:
        v24 = *(_DWORD *)(v15 - 80) - *v23;
        v77 = 0;
        v76 = v24;
        if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) != 0 )
          {
            goto LABEL_53;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(v25)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                 ? (v31 = 0)
                 : (v31 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 416)
                                                + 8LL)
                                    + 260LL) & 1),
                   !v31) )
        {
LABEL_53:
          if ( (unsigned int)IsDPIDWMSysMet(5LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
              ? (v28 = 0)
              : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                             + 8LL)
                                 + 260LL) & 1),
                v28) )
          {
            v32 = (int *)(gpsi + 2676LL);
          }
          else
          {
            v32 = (int *)(gpsi + 1900LL);
          }
          goto LABEL_69;
        }
        v32 = (int *)(gpsi + 2288LL);
LABEL_69:
        v33 = *v32;
        v34 = *(_DWORD *)(v15 - 80);
LABEL_109:
        v52 = v34 - v33;
        v53 = *(_DWORD *)(a2 + 60);
        v78 = v52;
        v79 = v53;
        DrawEdge(a1);
        goto LABEL_110;
      }
      v23 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_50;
    }
    if ( (unsigned int)IsDPIAbsoluteSysMet(7LL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x4000) != 0 )
      {
        goto LABEL_73;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v35)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
             ? (v41 = 0)
             : (v41 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                            + 8LL)
                                + 260LL) & 1),
               !v41) )
    {
LABEL_73:
      if ( (unsigned int)IsDPIDWMSysMet(7LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
          ? (v38 = 0)
          : (v38 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                         + 8LL)
                             + 260LL) & 1),
            v38) )
      {
        v42 = (_DWORD *)(gpsi + 2684LL);
      }
      else
      {
        v42 = (_DWORD *)(gpsi + 1908LL);
      }
LABEL_89:
      v43 = *(_DWORD *)(v15 + 72) - *v42;
      v77 = 0;
      v76 = v43;
      if ( (unsigned int)IsDPIAbsoluteSysMet(5LL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x4000) != 0 )
        {
          goto LABEL_92;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v44)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
               ? (v50 = 0)
               : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                              + 8LL)
                                  + 260LL) & 1),
                 !v50) )
      {
LABEL_92:
        if ( (unsigned int)IsDPIDWMSysMet(5LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
            ? (v47 = 0)
            : (v47 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 416)
                                           + 8LL)
                               + 260LL) & 1),
              v47) )
        {
          v51 = (int *)(gpsi + 2676LL);
        }
        else
        {
          v51 = (int *)(gpsi + 1900LL);
        }
        goto LABEL_108;
      }
      v51 = (int *)(gpsi + 2288LL);
LABEL_108:
      v33 = *v51;
      v34 = *(_DWORD *)(v15 + 72);
      goto LABEL_109;
    }
    v42 = (_DWORD *)(gpsi + 2296LL);
    goto LABEL_89;
  }
LABEL_165:
  ThreadUnlock1(v13, v11);
  if ( v9 )
    GreSetBkMode(a1);
  GreSetViewportOrg(a1);
  GreSetTextAlign(a1);
  return GreSelectFontInternal(a1);
}

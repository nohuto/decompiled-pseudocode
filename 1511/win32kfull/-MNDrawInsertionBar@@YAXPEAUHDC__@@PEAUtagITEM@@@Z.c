/*
 * XREFs of ?MNDrawInsertionBar@@YAXPEAUHDC__@@PEAUtagITEM@@@Z @ 0x1C00146B4
 * Callers:
 *     xxxMenuDraw @ 0x1C0014214 (xxxMenuDraw.c)
 *     xxxDrawMenuItem @ 0x1C00144C0 (xxxDrawMenuItem.c)
 * Callees:
 *     GrePolyPatBlt @ 0x1C003C84C (GrePolyPatBlt.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

void __fastcall MNDrawInsertionBar(HDC a1, struct tagITEM *a2)
{
  __int64 v4; // rcx
  int v5; // r14d
  __int64 v6; // rcx
  __int64 v7; // rcx
  int v8; // ecx
  __int64 v9; // rcx
  __int64 v10; // rcx
  int v11; // ecx
  __int64 v12; // rcx
  __int64 v13; // rcx
  __int64 v14; // rcx
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v18; // rcx
  int v19; // ebx
  __int64 v20; // rcx
  __int64 v21; // rcx
  int v22; // ecx
  __int64 v23; // rcx
  __int64 v24; // rcx
  int v25; // ecx
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v32; // ecx
  _DWORD *v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  _DWORD *v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  _DWORD *v49; // rcx
  __int64 v50; // rcx
  __int64 v51; // rcx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx

  if ( *((int *)a2 + 1) < 0 || (*((_DWORD *)a2 + 1) & 0x40000000) != 0 )
  {
    v5 = IsDPIAbsoluteSysMet(68LL);
    if ( v5 )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v4) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v6) + 776) & 0x4000) != 0 )
      {
        goto LABEL_6;
      }
    }
    else if ( !(unsigned int)IsDPIDWMSysMet(v4)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             ? (v11 = 0)
             : (v11 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                + 244LL) & 1),
               !v11) )
    {
LABEL_6:
      if ( (unsigned int)IsDPIDWMSysMet(68LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
          ? (v8 = 0)
          : (v8 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1),
            v8) )
      {
        v12 = gpsi + 2928LL;
      }
      else
      {
        v12 = gpsi + 2152LL;
      }
LABEL_22:
      if ( v5 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x4000) == 0 )
        {
          goto LABEL_36;
        }
      }
      else if ( (unsigned int)IsDPIDWMSysMet(68LL)
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) == 0
             && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x4000) == 0
             && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
             && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL) + 244LL) & 1 )
      {
        goto LABEL_36;
      }
      if ( (unsigned int)IsDPIDWMSysMet(68LL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v14) + 776) & 0x2000) != 0
        && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) )
      {
        W32GetThreadWin32Thread(KeGetCurrentThread());
      }
LABEL_36:
      v19 = IsDPIAbsoluteSysMet(69LL);
      if ( v19 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x4000) != 0 )
        {
          goto LABEL_39;
        }
      }
      else if ( !(unsigned int)IsDPIDWMSysMet(v18)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v23) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
               ? (v25 = 0)
               : (v25 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                  + 244LL) & 1),
                 !v25) )
      {
LABEL_39:
        if ( (unsigned int)IsDPIDWMSysMet(69LL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v21) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
            ? (v22 = 0)
            : (v22 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                               + 244LL) & 1),
              v22) )
        {
          v26 = gpsi;
        }
        else
        {
          v26 = gpsi;
        }
LABEL_55:
        if ( v5 )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0 )
          {
            goto LABEL_58;
          }
        }
        else if ( !(unsigned int)IsDPIDWMSysMet(68LL)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                 ? (v32 = 0)
                 : (v32 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                    + 244LL) & 1),
                   !v32) )
        {
LABEL_58:
          if ( (unsigned int)IsDPIDWMSysMet(68LL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
              ? (v29 = 0)
              : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                 + 244LL) & 1),
                v29) )
          {
            v33 = (_DWORD *)(gpsi + 2928LL);
          }
          else
          {
            v33 = (_DWORD *)(gpsi + 2152LL);
          }
LABEL_74:
          v34 = (unsigned int)(*((_DWORD *)a2 + 18) + 2 * *v33);
          if ( v5 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
            {
              goto LABEL_77;
            }
          }
          else if ( !(unsigned int)IsDPIDWMSysMet(68LL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                   ? (v40 = 0)
                   : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v40) )
          {
LABEL_77:
            if ( (unsigned int)IsDPIDWMSysMet(68LL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                ? (v37 = 0)
                : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                   + 244LL) & 1),
                  v37) )
            {
              v41 = (_DWORD *)(gpsi + 2928LL);
            }
            else
            {
              v41 = (_DWORD *)(gpsi + 2152LL);
            }
LABEL_93:
            v42 = (unsigned int)(4 * *v41);
            if ( v19 )
            {
              if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
                || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
              {
                goto LABEL_96;
              }
            }
            else if ( !(unsigned int)IsDPIDWMSysMet(69LL)
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
                   || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
                   || (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                     ? (v48 = 0)
                     : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                                                    + 8LL)
                                        + 244LL) & 1),
                       !v48) )
            {
LABEL_96:
              if ( (unsigned int)IsDPIDWMSysMet(69LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
                && (!*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                  ? (v45 = 0)
                  : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                     + 244LL) & 1),
                    v45) )
              {
                v49 = (_DWORD *)(gpsi + 2932LL);
              }
              else
              {
                v49 = (_DWORD *)(gpsi + 2156LL);
              }
LABEL_112:
              v50 = (unsigned int)(*v49 / 2);
              if ( v5 )
              {
                if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v50) + 776) & 0x2000) == 0
                  && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v51) + 776) & 0x4000) == 0 )
                {
LABEL_126:
                  GrePolyPatBlt(a1);
                  return;
                }
              }
              else if ( (unsigned int)IsDPIDWMSysMet(68LL)
                     && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x2000) == 0
                     && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x4000) == 0
                     && *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408)
                     && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) + 8LL)
                                  + 244LL) & 1 )
              {
                goto LABEL_126;
              }
              if ( (unsigned int)IsDPIDWMSysMet(68LL)
                && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0 )
              {
                if ( *(_QWORD *)(W32GetThreadWin32Thread(KeGetCurrentThread()) + 408) )
                  W32GetThreadWin32Thread(KeGetCurrentThread());
              }
              goto LABEL_126;
            }
            v49 = (_DWORD *)(gpsi + 2544LL);
            goto LABEL_112;
          }
          v41 = (_DWORD *)(gpsi + 2540LL);
          goto LABEL_93;
        }
        v33 = (_DWORD *)(gpsi + 2540LL);
        goto LABEL_74;
      }
      v26 = gpsi;
      goto LABEL_55;
    }
    v12 = gpsi + 2540LL;
    goto LABEL_22;
  }
}

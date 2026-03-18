/*
 * XREFs of SetTiledRect @ 0x1C0073CCC
 * Callers:
 *     xxxCreateWindowEx @ 0x1C004C640 (xxxCreateWindowEx.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     _GetDesktopWindow @ 0x1C00573D0 (_GetDesktopWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     InternalGetRealClientRect @ 0x1C00E9948 (InternalGetRealClientRect.c)
 */

__int64 __fastcall SetTiledRect(__int64 a1, _DWORD *a2, __int64 a3)
{
  int DesktopWindow; // eax
  int v6; // r8d
  __int64 v7; // rcx
  __int64 v8; // rcx
  _DWORD *v9; // rbx
  unsigned __int64 v10; // rcx
  int v11; // ebp
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  int v14; // edi
  __int64 v15; // rcx
  _DWORD *v16; // rbx
  unsigned __int64 v17; // rcx
  int v18; // r15d
  __int64 v19; // rcx
  _DWORD *v20; // rdx
  int v21; // r14d
  int v22; // ecx
  int v23; // edi
  int v24; // ecx
  __int64 result; // rax
  unsigned __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // rcx
  _DWORD *v29; // rbx
  __int64 v30; // rcx
  __int64 v31; // rcx
  _DWORD *v32; // rcx
  unsigned __int64 v33; // rcx
  __int64 v34; // rcx
  __int64 v35; // rcx
  _DWORD *v36; // rbx
  __int64 v37; // rcx
  __int64 v38; // rcx
  _DWORD *v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v46; // rcx
  __int64 v47; // rcx
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v50; // ecx
  int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rcx
  __int64 v54; // rcx
  __int64 v55; // rcx
  int v56; // ecx
  int v57; // ecx
  int v58; // [rsp+30h] [rbp-38h] BYREF
  int v59; // [rsp+34h] [rbp-34h]
  int v60; // [rsp+38h] [rbp-30h]
  int v61; // [rsp+3Ch] [rbp-2Ch]

  DesktopWindow = GetDesktopWindow(a1);
  InternalGetRealClientRect(DesktopWindow, (unsigned int)&v58, 2, v6, 0);
  ++*(_WORD *)(a3 + 154);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x4000) != 0 )
  {
    v9 = (_DWORD *)(gpsi + 2008LL);
  }
  else
  {
    v9 = (_DWORD *)(gpsi + 2396LL);
  }
  v11 = IsDPIAbsoluteSysMet(0x1EuLL);
  if ( !v11 )
  {
    if ( !IsDPIDWMSysMet(v10)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x4000) != 0 )
    {
      goto LABEL_7;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_7;
    }
LABEL_19:
    v13 = (_DWORD *)(gpsi + 2388LL);
    goto LABEL_8;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x4000) == 0 )
  {
    goto LABEL_19;
  }
LABEL_7:
  v13 = (_DWORD *)(gpsi + 2000LL);
LABEL_8:
  v14 = *(__int16 *)(a3 + 154) * (*v9 + *v13);
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
    || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x4000) != 0 )
  {
    v16 = (_DWORD *)(gpsi + 2012LL);
  }
  else
  {
    v16 = (_DWORD *)(gpsi + 2400LL);
  }
  v18 = IsDPIAbsoluteSysMet(0x1FuLL);
  if ( !v18 )
  {
    if ( !IsDPIDWMSysMet(v17)
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) != 0
      || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x4000) != 0 )
    {
      goto LABEL_14;
    }
    if ( !*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      || !(*(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                     + 244LL) & 1) )
    {
      goto LABEL_14;
    }
LABEL_21:
    v20 = (_DWORD *)(gpsi + 2392LL);
    goto LABEL_15;
  }
  if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v17) + 776) & 0x2000) == 0
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x4000) == 0 )
  {
    goto LABEL_21;
  }
LABEL_14:
  v20 = (_DWORD *)(gpsi + 2004LL);
LABEL_15:
  v21 = v60 - v58;
  v22 = *(__int16 *)(a3 + 154) * (*v20 + *v16);
  if ( v14 > (v60 - v58) / 4 || v22 > (v61 - v59) / 4 )
  {
    *(_WORD *)(a3 + 154) = 0;
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x20uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) != 0 )
      {
        goto LABEL_25;
      }
    }
    else if ( !IsDPIDWMSysMet(v26)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v28 = 0LL)
             : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !(_DWORD)v28) )
    {
LABEL_25:
      if ( IsDPIDWMSysMet(0x20uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v28 = 0LL)
          : (v28 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            (_DWORD)v28) )
      {
        v29 = (_DWORD *)(gpsi + 2784LL);
      }
      else
      {
        v29 = (_DWORD *)(gpsi + 2008LL);
      }
LABEL_27:
      if ( v11 )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) != 0 )
        {
          goto LABEL_30;
        }
      }
      else if ( !IsDPIDWMSysMet(0x1EuLL)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v50 = 0)
               : (v50 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v50) )
      {
LABEL_30:
        if ( IsDPIDWMSysMet(0x1EuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v51 = 0)
            : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v51) )
        {
          v32 = (_DWORD *)(gpsi + 2776LL);
        }
        else
        {
          v32 = (_DWORD *)(gpsi + 2000LL);
        }
LABEL_32:
        v14 = *v29 + *v32;
        if ( (unsigned int)IsDPIAbsoluteSysMet(0x21uLL) )
        {
          if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) != 0
            || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x4000) != 0 )
          {
            goto LABEL_35;
          }
        }
        else if ( !IsDPIDWMSysMet(v33)
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x2000) != 0
               || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) != 0
               || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                 ? (v35 = 0LL)
                 : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                            + 408)
                                                + 8LL)
                                    + 244LL) & 1),
                   !(_DWORD)v35) )
        {
LABEL_35:
          if ( IsDPIDWMSysMet(0x21uLL)
            && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
            && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
              ? (v35 = 0LL)
              : (v35 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                             + 8LL)
                                 + 244LL) & 1),
                (_DWORD)v35) )
          {
            v36 = (_DWORD *)(gpsi + 2788LL);
          }
          else
          {
            v36 = (_DWORD *)(gpsi + 2012LL);
          }
LABEL_37:
          if ( v18 )
          {
            if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) != 0
              || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x4000) != 0 )
            {
              goto LABEL_40;
            }
          }
          else if ( !IsDPIDWMSysMet(0x1FuLL)
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v54) + 776) & 0x2000) != 0
                 || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v55) + 776) & 0x4000) != 0
                 || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                   ? (v56 = 0)
                   : (v56 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread())
                                                              + 408)
                                                  + 8LL)
                                      + 244LL) & 1),
                     !v56) )
          {
LABEL_40:
            if ( IsDPIDWMSysMet(0x1FuLL)
              && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
              && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                ? (v57 = 0)
                : (v57 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                               + 8LL)
                                   + 244LL) & 1),
                  v57) )
            {
              v39 = (_DWORD *)(gpsi + 2780LL);
            }
            else
            {
              v39 = (_DWORD *)(gpsi + 2004LL);
            }
            goto LABEL_42;
          }
          v39 = (_DWORD *)(gpsi + 2392LL);
LABEL_42:
          v22 = *v36 + *v39;
          goto LABEL_17;
        }
        v36 = (_DWORD *)(gpsi + 2400LL);
        goto LABEL_37;
      }
      v32 = (_DWORD *)(gpsi + 2388LL);
      goto LABEL_32;
    }
    v29 = (_DWORD *)(gpsi + 2396LL);
    goto LABEL_27;
  }
LABEL_17:
  v23 = v58 + v14;
  v24 = v59 + v22;
  *a2 = v23;
  a2[1] = v24;
  a2[2] = v23 + (v21 + 2 * (v21 + 1)) / 4;
  result = (unsigned int)(v24 + (3 * (v61 - v59) + 2) / 4);
  a2[3] = result;
  return result;
}

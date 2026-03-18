/*
 * XREFs of ParkIcon @ 0x1C00C95F4
 * Callers:
 *     xxxMinMaximizeEx @ 0x1C00C83F4 (xxxMinMaximizeEx.c)
 *     NtUserGetWindowMinimizeRect @ 0x1C00FF0D0 (NtUserGetWindowMinimizeRect.c)
 * Callees:
 *     _GetProp @ 0x1C00540EC (_GetProp.c)
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsTrayWindow @ 0x1C0058750 (IsTrayWindow.c)
 *     IntersectRect @ 0x1C006B798 (IntersectRect.c)
 *     GetSystemMetricsForWindow @ 0x1C00720B4 (GetSystemMetricsForWindow.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     GetRect @ 0x1C0077D54 (GetRect.c)
 *     InternalGetRealClientRect @ 0x1C00E9948 (InternalGetRealClientRect.c)
 */

__int64 __fastcall ParkIcon(__int64 a1, unsigned int *a2)
{
  int v4; // r12d
  int v5; // r13d
  __int64 result; // rax
  unsigned __int64 v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rcx
  _DWORD *v10; // rbx
  unsigned __int64 v11; // rcx
  __int64 v12; // rcx
  __int64 v13; // rcx
  _DWORD *v14; // rcx
  int v15; // edi
  int v16; // esi
  int v17; // ebx
  int v18; // ecx
  int v19; // r14d
  int v20; // r13d
  __int64 v21; // rdi
  char v22; // al
  __int64 Prop; // rax
  int v24; // r10d
  int v25; // r11d
  __int64 v26; // rcx
  __int64 v27; // rcx
  int v29; // ecx
  __int64 v30; // rcx
  __int64 v31; // rcx
  int v33; // ecx
  unsigned __int64 v34; // rcx
  __int64 v35; // rcx
  __int64 v36; // rcx
  int v37; // ecx
  __int64 v38; // rcx
  __int64 v39; // rcx
  int v40; // ecx
  _DWORD *v41; // rbx
  unsigned __int64 v42; // rcx
  __int64 v43; // rcx
  __int64 v44; // rcx
  int v45; // ecx
  __int64 v46; // rcx
  __int64 v47; // rcx
  int v48; // ecx
  _DWORD *v49; // rcx
  int v50; // ecx
  int v51; // eax
  unsigned int v52; // [rsp+30h] [rbp-39h] BYREF
  int v53; // [rsp+34h] [rbp-35h]
  unsigned int v54; // [rsp+38h] [rbp-31h]
  int v55; // [rsp+3Ch] [rbp-2Dh]
  int v56; // [rsp+40h] [rbp-29h] BYREF
  int v57; // [rsp+44h] [rbp-25h]
  int v58; // [rsp+48h] [rbp-21h]
  int v59; // [rsp+4Ch] [rbp-1Dh]
  int v60; // [rsp+50h] [rbp-19h]
  unsigned int v61; // [rsp+54h] [rbp-15h]
  int v62; // [rsp+58h] [rbp-11h]
  int v63; // [rsp+5Ch] [rbp-Dh]
  int SystemMetricsForWindow; // [rsp+60h] [rbp-9h]
  int v65; // [rsp+64h] [rbp-5h]
  __int64 v66; // [rsp+68h] [rbp-1h]
  __int64 v67; // [rsp+70h] [rbp+7h]
  unsigned __int16 v70; // [rsp+E0h] [rbp+77h]
  int v71; // [rsp+E8h] [rbp+7Fh]

  SystemMetricsForWindow = GetSystemMetricsForWindow(a1, 0x2Fu);
  v4 = SystemMetricsForWindow;
  v65 = GetSystemMetricsForWindow(a1, 0x30u);
  v5 = v65;
  if ( (unsigned int)IsTrayWindow(a1) )
  {
    result = 4294935296LL;
    *a2 = -32000;
    a2[1] = -32000;
    return result;
  }
  v66 = *(_QWORD *)(a1 + 88);
  InternalGetRealClientRect(v66, (unsigned int)&v56, 1, 0, 1);
  if ( (GetSystemMetricsForWindow(a1, 0x38u) & 1) == 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v7) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v26) + 776) & 0x4000) == 0 )
      {
LABEL_38:
        v10 = (_DWORD *)(gpsi + 2456LL);
        goto LABEL_8;
      }
    }
    else if ( IsDPIDWMSysMet(v7)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v8) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v27) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_38;
    }
    if ( IsDPIDWMSysMet(0x2FuLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v29 = 0)
        : (v29 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v29) )
    {
      v10 = (_DWORD *)(gpsi + 2844LL);
    }
    else
    {
      v10 = (_DWORD *)(gpsi + 2068LL);
    }
LABEL_8:
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x39uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) == 0
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x4000) == 0 )
      {
LABEL_54:
        v14 = (_DWORD *)(gpsi + 2496LL);
LABEL_12:
        v61 = v56 + *v10 - *v14;
        v52 = v61;
        v71 = v4;
        goto LABEL_13;
      }
    }
    else if ( IsDPIDWMSysMet(v11)
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v12) + 776) & 0x2000) == 0
           && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v31) + 776) & 0x4000) == 0
           && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
           && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                        + 244LL) & 1 )
    {
      goto LABEL_54;
    }
    if ( IsDPIDWMSysMet(0x39uLL)
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) != 0
      && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
        ? (v33 = 0)
        : (v33 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                           + 244LL) & 1),
          v33) )
    {
      v14 = (_DWORD *)(gpsi + 2884LL);
    }
    else
    {
      v14 = (_DWORD *)(gpsi + 2108LL);
    }
    goto LABEL_12;
  }
  v61 = v58 - v4;
  v71 = -v4;
  v52 = v58 - v4;
LABEL_13:
  if ( (GetSystemMetricsForWindow(a1, 0x38u) & 2) != 0 )
  {
    if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
    {
      if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
        || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x4000) != 0 )
      {
        goto LABEL_64;
      }
    }
    else if ( !IsDPIDWMSysMet(v34)
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v38) + 776) & 0x2000) != 0
           || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x4000) != 0
           || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
             ? (v40 = 0)
             : (v40 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                            + 8LL)
                                + 244LL) & 1),
               !v40) )
    {
LABEL_64:
      if ( IsDPIDWMSysMet(0x30uLL)
        && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) != 0
        && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
          ? (v37 = 0)
          : (v37 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                         + 8LL)
                             + 244LL) & 1),
            v37) )
      {
        v41 = (_DWORD *)(gpsi + 2848LL);
      }
      else
      {
        v41 = (_DWORD *)(gpsi + 2072LL);
      }
LABEL_80:
      if ( (unsigned int)IsDPIAbsoluteSysMet(0x3AuLL) )
      {
        if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v42) + 776) & 0x2000) != 0
          || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x4000) != 0 )
        {
          goto LABEL_83;
        }
      }
      else if ( !IsDPIDWMSysMet(v42)
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v46) + 776) & 0x2000) != 0
             || (*(_DWORD *)(PsGetCurrentProcessWin32Process(v47) + 776) & 0x4000) != 0
             || (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
               ? (v48 = 0)
               : (v48 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                              + 8LL)
                                  + 244LL) & 1),
                 !v48) )
      {
LABEL_83:
        if ( IsDPIDWMSysMet(0x3AuLL)
          && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) != 0
          && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
            ? (v45 = 0)
            : (v45 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
                                           + 8LL)
                               + 244LL) & 1),
              v45) )
        {
          v49 = (_DWORD *)(gpsi + 2888LL);
        }
        else
        {
          v49 = (_DWORD *)(gpsi + 2112LL);
        }
        goto LABEL_99;
      }
      v49 = (_DWORD *)(gpsi + 2500LL);
LABEL_99:
      v16 = *v41 + v57 - *v49;
      v15 = v59;
      v63 = v5;
      goto LABEL_15;
    }
    v41 = (_DWORD *)(gpsi + 2460LL);
    goto LABEL_80;
  }
  v15 = v59;
  v16 = v59 - v5;
  v63 = -v5;
LABEL_15:
  v17 = v16;
  v62 = v16;
  v53 = v16;
  if ( (GetSystemMetricsForWindow(a1, 0x38u) & 4) != 0 )
  {
    v18 = 0;
    v19 = v15 / v5;
    if ( v15 / v5 < 1 )
      v19 = 1;
  }
  else
  {
    v18 = 1;
    v19 = v58 / v4;
    if ( v58 / v4 < 1 )
      v19 = 1;
  }
  v20 = 0;
  v67 = v18;
  v70 = atomCheckpointProp;
  v60 = v19;
  do
  {
    v54 = SystemMetricsForWindow + v52;
    v55 = v17 + v65;
    v21 = *(_QWORD *)(v66 + 96);
    if ( !v21 )
      break;
    do
    {
      v22 = *(_BYTE *)(v21 + 55);
      if ( (v22 & 0x10) == 0 || v21 == a1 )
        goto LABEL_21;
      if ( (v22 & 0x20) != 0 )
      {
        GetRect(v21, (__int64)&v56, 66);
      }
      else
      {
        Prop = GetProp(v21, v70, 1LL);
        if ( !Prop || (*(_BYTE *)(Prop + 32) & 9) != 9 )
          goto LABEL_21;
        v50 = *(_DWORD *)(Prop + 16);
        v51 = *(_DWORD *)(Prop + 20);
        v56 = v50;
        v57 = v51;
        v59 = v25 + v51;
        v58 = v24 + v50;
      }
      ++v20;
      if ( (unsigned int)IntersectRect(&v56, &v56, (int *)&v52) )
        break;
LABEL_21:
      v21 = *(_QWORD *)(v21 + 72);
    }
    while ( v21 );
    if ( !v21 )
      break;
    if ( --v19 )
    {
      if ( !v67 )
      {
LABEL_111:
        v17 += v63;
        goto LABEL_112;
      }
      v52 += v71;
    }
    else
    {
      v19 = v60;
      if ( v67 )
      {
        v52 = v61;
        goto LABEL_111;
      }
      v17 = v62;
      v52 += v71;
LABEL_112:
      v53 = v17;
    }
  }
  while ( v20 < 5000 );
  result = v52;
  *a2 = v52;
  a2[1] = v17;
  return result;
}

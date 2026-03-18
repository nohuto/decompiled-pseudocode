/*
 * XREFs of SetMinMetrics @ 0x1C00D7844
 * Callers:
 *     xxxInitWindowStation @ 0x1C00D7374 (xxxInitWindowStation.c)
 *     ?xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z @ 0x1C00D7698 (-xxxSetAndDrawMinMetrics@@YAHPEAU_UNICODE_STRING@@PEAUtagMINIMIZEDMETRICS@@@Z.c)
 *     xxxUpdatePerUserSystemParameters @ 0x1C012420C (xxxUpdatePerUserSystemParameters.c)
 * Callees:
 *     W32GetThreadWin32Thread @ 0x1C005592C (W32GetThreadWin32Thread.c)
 *     IsDPIDWMSysMet @ 0x1C0072254 (IsDPIDWMSysMet.c)
 *     IsDPIAbsoluteSysMet @ 0x1C007227C (IsDPIAbsoluteSysMet.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

__int64 __fastcall SetMinMetrics(__int64 a1, char *a2)
{
  char *v2; // r14
  int v4; // ecx
  int v5; // eax
  int v6; // ecx
  int v7; // eax
  int v8; // ecx
  unsigned __int64 v9; // rcx
  __int64 v10; // rcx
  __int64 v11; // rcx
  _DWORD *v12; // rbx
  unsigned __int64 v13; // rcx
  int v14; // esi
  __int64 v15; // rcx
  __int64 v16; // rcx
  _DWORD *v17; // rdx
  unsigned __int64 v18; // rcx
  __int64 v19; // rcx
  __int64 v20; // rcx
  _DWORD *v21; // rbx
  unsigned __int64 v22; // rcx
  int v23; // edi
  __int64 v24; // rcx
  __int64 v25; // rcx
  __int64 v26; // rdx
  _DWORD *v27; // r8
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // rcx
  _DWORD *v31; // rbx
  unsigned __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  _DWORD *v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // rcx
  _DWORD *v38; // rbx
  unsigned __int64 v39; // rcx
  __int64 v40; // rcx
  __int64 v41; // rcx
  _DWORD *v42; // rcx
  unsigned __int64 v43; // rcx
  __int64 v44; // rcx
  __int64 v45; // rcx
  _DWORD *v46; // rcx
  __int64 result; // rax
  __int64 v48; // rcx
  __int64 v49; // rcx
  int v51; // ecx
  __int64 v52; // rcx
  __int64 v53; // rcx
  int v55; // ecx
  __int64 v56; // rcx
  __int64 v57; // rcx
  int v59; // ecx
  __int64 v60; // rcx
  __int64 v61; // rcx
  int v63; // ecx
  __int64 v64; // rcx
  __int64 v65; // rcx
  int v67; // ecx
  __int64 v68; // rcx
  __int64 v69; // rcx
  int v71; // ecx
  __int64 v72; // rcx
  __int64 v73; // rcx
  int v75; // ecx
  __int64 v76; // rcx
  __int64 v77; // rcx
  int v79; // ecx
  __int64 v80; // rcx
  __int64 v81; // rcx
  int v83; // ecx
  int v84; // [rsp+30h] [rbp-30h] BYREF
  int v85; // [rsp+34h] [rbp-2Ch] BYREF
  int v86; // [rsp+38h] [rbp-28h] BYREF
  int v87; // [rsp+3Ch] [rbp-24h] BYREF
  char v88; // [rsp+40h] [rbp-20h] BYREF
  int v89; // [rsp+44h] [rbp-1Ch]
  int v90; // [rsp+48h] [rbp-18h]
  int v91; // [rsp+4Ch] [rbp-14h]
  int v92; // [rsp+50h] [rbp-10h]

  v2 = a2;
  if ( !a2 )
  {
    FastGetProfileIntFromID(a1, 23LL, 146LL, 154LL, &v85, 0);
    v89 = v85;
    FastGetProfileIntFromID(a1, 23LL, 147LL, 0LL, &v87, 0);
    v90 = v87;
    FastGetProfileIntFromID(a1, 23LL, 148LL, 0LL, &v84, 0);
    v91 = v84;
    FastGetProfileIntFromID(a1, 23LL, 150LL, 0LL, &v86, 0);
    v2 = &v88;
    v92 = v86;
  }
  v4 = 0;
  if ( *((int *)v2 + 1) > 0 )
    v4 = *((_DWORD *)v2 + 1);
  v5 = *((_DWORD *)v2 + 2);
  *((_DWORD *)v2 + 1) = v4;
  v6 = 0;
  if ( v5 > 0 )
    v6 = v5;
  v7 = *((_DWORD *)v2 + 3);
  *((_DWORD *)v2 + 2) = v6;
  v8 = 0;
  if ( v7 > 0 )
    v8 = v7;
  *((_DWORD *)v2 + 4) &= 0xFu;
  *((_DWORD *)v2 + 3) = v8;
  if ( (unsigned int)IsDPIAbsoluteSysMet(7uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v9) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v48) + 776) & 0x4000) == 0 )
    {
LABEL_55:
      v12 = (_DWORD *)(gpsi + 2296LL);
      goto LABEL_13;
    }
  }
  else if ( IsDPIDWMSysMet(v9)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v10) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v49) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_55;
  }
  if ( IsDPIDWMSysMet(7uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v11) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v51 = 0)
      : (v51 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v51) )
  {
    v12 = (_DWORD *)(gpsi + 2684LL);
  }
  else
  {
    v12 = (_DWORD *)(gpsi + 1908LL);
  }
LABEL_13:
  v14 = IsDPIAbsoluteSysMet(0x39uLL);
  if ( v14 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v13) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v52) + 776) & 0x4000) == 0 )
    {
LABEL_71:
      v17 = (_DWORD *)(gpsi + 2496LL);
      goto LABEL_17;
    }
  }
  else if ( IsDPIDWMSysMet(v13)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v15) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v53) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_71;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v16) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v55 = 0)
      : (v55 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v55) )
  {
    v17 = (_DWORD *)(gpsi + 2884LL);
  }
  else
  {
    v17 = (_DWORD *)(gpsi + 2108LL);
  }
LABEL_17:
  *v17 = *((_DWORD *)v2 + 1) + 2 * *v12;
  if ( (unsigned int)IsDPIAbsoluteSysMet(8uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v18) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v56) + 776) & 0x4000) == 0 )
    {
LABEL_87:
      v21 = (_DWORD *)(gpsi + 2300LL);
      goto LABEL_21;
    }
  }
  else if ( IsDPIDWMSysMet(v18)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v19) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v57) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_87;
  }
  if ( IsDPIDWMSysMet(8uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v20) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v59 = 0)
      : (v59 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v59) )
  {
    v21 = (_DWORD *)(gpsi + 2688LL);
  }
  else
  {
    v21 = (_DWORD *)(gpsi + 1912LL);
  }
LABEL_21:
  v23 = IsDPIAbsoluteSysMet(0x3AuLL);
  if ( v23 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v22) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v60) + 776) & 0x4000) == 0 )
    {
LABEL_103:
      v26 = gpsi;
      v27 = (_DWORD *)(gpsi + 2500LL);
      goto LABEL_25;
    }
  }
  else if ( IsDPIDWMSysMet(v22)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v24) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v61) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_103;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v25) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v63 = 0)
      : (v63 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v63) )
  {
    v26 = gpsi;
    v27 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v26 = gpsi;
    v27 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_25:
  v28 = (unsigned int)(*(_DWORD *)(v26 + 2004) + 2 * *v21);
  *v27 = v28;
  if ( v14 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v28) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v64) + 776) & 0x4000) == 0 )
    {
LABEL_119:
      v31 = (_DWORD *)(gpsi + 2496LL);
      goto LABEL_29;
    }
  }
  else if ( IsDPIDWMSysMet(0x39uLL)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v29) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v65) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_119;
  }
  if ( IsDPIDWMSysMet(0x39uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v30) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v67 = 0)
      : (v67 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v67) )
  {
    v31 = (_DWORD *)(gpsi + 2884LL);
  }
  else
  {
    v31 = (_DWORD *)(gpsi + 2108LL);
  }
LABEL_29:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x2FuLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v32) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v68) + 776) & 0x4000) == 0 )
    {
LABEL_135:
      v35 = (_DWORD *)(gpsi + 2456LL);
      goto LABEL_33;
    }
  }
  else if ( IsDPIDWMSysMet(v32)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v33) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v69) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_135;
  }
  if ( IsDPIDWMSysMet(0x2FuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v34) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v71 = 0)
      : (v71 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v71) )
  {
    v35 = (_DWORD *)(gpsi + 2844LL);
  }
  else
  {
    v35 = (_DWORD *)(gpsi + 2068LL);
  }
LABEL_33:
  *v35 = *v31 + *((_DWORD *)v2 + 2);
  if ( v23 )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v35) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v72) + 776) & 0x4000) == 0 )
    {
LABEL_151:
      v38 = (_DWORD *)(gpsi + 2500LL);
      goto LABEL_37;
    }
  }
  else if ( IsDPIDWMSysMet(0x3AuLL)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v36) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v73) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_151;
  }
  if ( IsDPIDWMSysMet(0x3AuLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v37) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v75 = 0)
      : (v75 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v75) )
  {
    v38 = (_DWORD *)(gpsi + 2888LL);
  }
  else
  {
    v38 = (_DWORD *)(gpsi + 2112LL);
  }
LABEL_37:
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x30uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v39) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v76) + 776) & 0x4000) == 0 )
    {
LABEL_167:
      v42 = (_DWORD *)(gpsi + 2460LL);
      goto LABEL_41;
    }
  }
  else if ( IsDPIDWMSysMet(v39)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v40) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v77) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_167;
  }
  if ( IsDPIDWMSysMet(0x30uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v41) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v79 = 0)
      : (v79 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v79) )
  {
    v42 = (_DWORD *)(gpsi + 2848LL);
  }
  else
  {
    v42 = (_DWORD *)(gpsi + 2072LL);
  }
LABEL_41:
  *v42 = *v38 + *((_DWORD *)v2 + 3);
  if ( (unsigned int)IsDPIAbsoluteSysMet(0x38uLL) )
  {
    if ( (*(_DWORD *)(PsGetCurrentProcessWin32Process(v43) + 776) & 0x2000) == 0
      && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v80) + 776) & 0x4000) == 0 )
    {
LABEL_183:
      v46 = (_DWORD *)(gpsi + 2492LL);
      goto LABEL_45;
    }
  }
  else if ( IsDPIDWMSysMet(v43)
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v44) + 776) & 0x2000) == 0
         && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v81) + 776) & 0x4000) == 0
         && *(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
         && *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                      + 244LL) & 1 )
  {
    goto LABEL_183;
  }
  if ( IsDPIDWMSysMet(0x38uLL)
    && (*(_DWORD *)(PsGetCurrentProcessWin32Process(v45) + 776) & 0x2000) != 0
    && (!*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408)
      ? (v83 = 0)
      : (v83 = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(W32GetThreadWin32Thread((__int64)KeGetCurrentThread()) + 408) + 8LL)
                         + 244LL) & 1),
        v83) )
  {
    v46 = (_DWORD *)(gpsi + 2880LL);
  }
  else
  {
    v46 = (_DWORD *)(gpsi + 2104LL);
  }
LABEL_45:
  result = *((unsigned int *)v2 + 4);
  *v46 = result;
  return result;
}

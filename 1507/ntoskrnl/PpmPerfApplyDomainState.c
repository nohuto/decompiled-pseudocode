/*
 * XREFs of PpmPerfApplyDomainState @ 0x1400EA8F0
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x1400E8500 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmPerfApplyCapsAndFloors @ 0x1400EACE0 (PpmPerfApplyCapsAndFloors.c)
 *     PpmEventDomainPerfStateChange @ 0x14015A2B8 (PpmEventDomainPerfStateChange.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  unsigned int v1; // esi
  __int64 v2; // rbx
  char v3; // r8
  __int64 *v4; // r13
  char v5; // al
  int v6; // r12d
  unsigned int v7; // ecx
  unsigned int v8; // edx
  unsigned int v9; // r15d
  unsigned int v10; // eax
  char v11; // r8
  unsigned __int16 v12; // ax
  __int64 *v13; // r14
  __int64 v14; // rdi
  unsigned __int16 v15; // r13
  unsigned int v16; // r14d
  unsigned int v17; // edi
  unsigned int v18; // r15d
  __int64 v19; // rdx
  int v20; // r8d
  unsigned int v21; // eax
  unsigned int v22; // edx
  unsigned int v23; // eax
  unsigned int v24; // esi
  unsigned int v25; // eax
  char v26; // r12
  unsigned int k; // ecx
  __int64 v29; // r8
  int v30; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  bool v32; // cc
  unsigned __int16 v33; // r8
  unsigned __int16 i; // dx
  __int64 v35; // rax
  __int64 v36; // rax
  unsigned __int16 *v37; // r9
  unsigned __int16 v38; // dx
  unsigned __int16 v39; // r8
  unsigned __int16 v40; // ax
  unsigned __int16 j; // dx
  __int64 v42; // rax
  __int64 v43; // rax
  unsigned __int16 *v44; // r9
  unsigned __int16 v45; // dx
  bool v46; // zf
  char v47; // [rsp+40h] [rbp-C0h]
  int v48; // [rsp+44h] [rbp-BCh]
  unsigned int v49; // [rsp+48h] [rbp-B8h] BYREF
  unsigned int v50; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v51; // [rsp+50h] [rbp-B0h] BYREF
  unsigned __int16 v52; // [rsp+54h] [rbp-ACh]
  int v53; // [rsp+58h] [rbp-A8h] BYREF
  __int64 v54; // [rsp+60h] [rbp-A0h] BYREF
  __int64 *v55; // [rsp+68h] [rbp-98h]
  __int64 v56; // [rsp+70h] [rbp-90h]
  unsigned __int16 v57; // [rsp+80h] [rbp-80h] BYREF
  unsigned __int16 v58; // [rsp+82h] [rbp-7Eh]
  int v59; // [rsp+84h] [rbp-7Ch]
  _QWORD v60[21]; // [rsp+88h] [rbp-78h]
  unsigned __int16 v61; // [rsp+130h] [rbp+30h] BYREF
  unsigned __int16 v62; // [rsp+132h] [rbp+32h]
  int v63; // [rsp+134h] [rbp+34h]
  _QWORD v64[21]; // [rsp+138h] [rbp+38h]

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 24176);
  v3 = 0;
  v48 = 0;
  v56 = *(_QWORD *)(*(_QWORD *)(a1 + 24184) + 8LL);
  v4 = &PpmCurrentProfile[174 * dword_14032E84C + 5];
  v55 = v4;
  v5 = *((_BYTE *)v4 + 16);
  v6 = *((_DWORD *)v4 + 12);
  if ( v5 == 1 || v5 == 2 && *(_BYTE *)(v2 + 331) )
    v3 = 1;
  v7 = *(_DWORD *)(v2 + 348);
  v8 = *(_DWORD *)(v2 + 352);
  v9 = *(_DWORD *)(v2 + 304);
  v49 = v7;
  v50 = v8;
  if ( v3 )
  {
    v48 = 1;
    v10 = v9;
  }
  else
  {
    v10 = *(_DWORD *)(v2 + 300);
  }
  if ( v7 <= v10 )
    v49 = v10;
  if ( v8 <= v10 )
    v50 = v10;
  v51 = 100;
  v11 = PpmPerfApplyCapsAndFloors(&v49, &v50, &v51, v2);
  v47 = v11;
  v12 = PpmPerfNewCoreParkingMask[0];
  v52 = PpmPerfNewCoreParkingMask[0];
  if ( !PpmPerfArtificialDomainEnabled )
    goto LABEL_11;
  v33 = *(_WORD *)(v2 + 24);
  if ( v33 < LOWORD(PpmPerfNewCoreParkingMask[0]) )
    v12 = *(_WORD *)(v2 + 24);
  v57 = v12;
  for ( i = 0; i < v57; v12 = v57 )
  {
    v35 = i++;
    v60[v35] = *(_QWORD *)&PpmPerfNewCoreParkingMask[2 * v35 + 2] & *(_QWORD *)(8 * v35 + v2 + 32);
  }
  v58 = 20;
  v59 = 0;
  if ( i < 0x14u )
  {
    do
    {
      v36 = i++;
      v60[v36] = 0LL;
    }
    while ( i < v58 );
    v12 = v57;
  }
  if ( v33 >= v12 )
  {
    v37 = (unsigned __int16 *)(v2 + 24);
    v33 = v12;
  }
  else
  {
    v37 = &v57;
  }
  v38 = 0;
  if ( v33 )
  {
    while ( *(_QWORD *)(8LL * v38 + v2 + 32) == v60[v38] )
    {
      if ( ++v38 >= v33 )
        goto LABEL_83;
    }
    goto LABEL_87;
  }
LABEL_83:
  if ( v38 < *v37 )
  {
    while ( !*(_QWORD *)&v37[4 * v38 + 4] )
    {
      if ( ++v38 >= *v37 )
        goto LABEL_86;
    }
LABEL_87:
    v14 = PpmPerfDomainHead;
    v13 = &PpmPerfDomainHead;
    v11 = v47;
    goto LABEL_12;
  }
LABEL_86:
  v11 = v47;
LABEL_11:
  v13 = *(__int64 **)v2;
  v14 = v2;
LABEL_12:
  if ( (__int64 *)v14 == v13 )
    goto LABEL_22;
  v15 = v52;
  do
  {
    if ( v14 != v2 )
    {
      v39 = *(_WORD *)(v14 + 24);
      v40 = v39;
      if ( v39 >= v15 )
        v40 = v15;
      v61 = v40;
      for ( j = 0; j < v61; v40 = v61 )
      {
        v42 = j++;
        v64[v42] = *(_QWORD *)&PpmPerfNewCoreParkingMask[2 * v42 + 2] & *(_QWORD *)(8 * v42 + v14 + 32);
      }
      v62 = 20;
      v63 = 0;
      if ( j < 0x14u )
      {
        do
        {
          v43 = j++;
          v64[v43] = 0LL;
        }
        while ( j < v62 );
        v40 = v61;
      }
      if ( v39 >= v40 )
      {
        v44 = (unsigned __int16 *)(v14 + 24);
        v39 = v40;
      }
      else
      {
        v44 = &v61;
      }
      v45 = 0;
      if ( v39 )
      {
        while ( *(_QWORD *)(8LL * v45 + v14 + 32) == v64[v45] )
        {
          if ( ++v45 >= v39 )
            goto LABEL_101;
        }
      }
      else
      {
LABEL_101:
        if ( v45 >= *v44 )
        {
LABEL_104:
          v11 = v47;
          goto LABEL_20;
        }
        while ( !*(_QWORD *)&v44[4 * v45 + 4] )
        {
          if ( ++v45 >= *v44 )
            goto LABEL_104;
        }
      }
      v11 = v47;
    }
    if ( *(_QWORD *)(*(_QWORD *)(v2 + 16) + 1600LL) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 1600LL)
      && *(_BYTE *)(v2 + 196) == *(_BYTE *)(v14 + 196) )
    {
      if ( *(_DWORD *)(v14 + 344) > v1 )
        v1 = *(_DWORD *)(v14 + 344);
      v11 = PpmPerfApplyCapsAndFloors(&v49, &v50, &v51, v14) | v47;
      v47 = v11;
    }
LABEL_20:
    v14 = *(_QWORD *)v14;
  }
  while ( (__int64 *)v14 != v13 );
  v4 = v55;
LABEL_22:
  v16 = v49;
  if ( v49 <= v9 )
    v16 = v9;
  v17 = v50;
  if ( v50 <= v9 )
    v17 = v9;
  if ( v17 >= v16 )
    v17 = v16;
  v18 = v51;
  if ( !v6 )
  {
    if ( !PpmPerfBoostAtGuaranteed )
      goto LABEL_31;
    if ( v51 <= v16 )
    {
      v16 = v51;
      goto LABEL_32;
    }
    goto LABEL_109;
  }
  if ( v16 == 100 )
    v16 = *(_DWORD *)(v2 + 296);
LABEL_31:
  if ( v51 > v16 )
LABEL_109:
    v18 = v16;
LABEL_32:
  if ( v17 >= v18 )
    v17 = v18;
  v19 = v1;
  if ( v1 > v16 )
  {
    v46 = v11 == 0;
    v19 = v16;
    v20 = v48;
    if ( !v46 )
      v20 = v48 | 2;
  }
  else
  {
    v20 = v48;
    if ( v1 < v17 )
      v19 = v17;
  }
  if ( ((v6 - 2) & 0xFFFFFFFD) == 0 )
  {
    v21 = v18;
    if ( !PpmPerfBoostAtGuaranteed )
      v21 = 100;
    if ( (unsigned int)v19 >= v21 )
      v19 = v16;
  }
  v22 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int *, __int64 *))(v2 + 272))(
          v56,
          v19,
          v17,
          v16,
          v20,
          &v53,
          &v54);
  v23 = *((_DWORD *)v4 + 13);
  if ( v23 >= v1 )
    v24 = 0;
  else
    v24 = v1 - v23;
  if ( v24 < v17 )
    v24 = v17;
  if ( v18 < v22 )
    v25 = v18;
  else
    v25 = v22;
  if ( v24 > v25 )
  {
    v24 = v22;
    if ( v18 < v22 )
      v24 = v18;
  }
  v26 = !*((_BYTE *)v4 + 64) || !*(_BYTE *)(v2 + 332);
  if ( !*(_BYTE *)(v2 + 396)
    && v26 == *(_BYTE *)(v2 + 397)
    && v17 == *(_DWORD *)(v2 + 360)
    && v16 == *(_DWORD *)(v2 + 356)
    && v18 == *(_DWORD *)(v2 + 364)
    && (!v26 || v24 == *(_DWORD *)(v2 + 368) && v54 == *(_QWORD *)(v2 + 376)) )
  {
    return 0;
  }
  for ( k = 0; k < *(_DWORD *)(v2 + 192); ++k )
  {
    v29 = *(_QWORD *)(v2 + 200) + 88LL * k;
    v30 = *(_DWORD *)(v29 + 52);
    if ( v30 != v22 )
    {
      *(_DWORD *)(v29 + 64) = v30;
      *(_DWORD *)(v29 + 60) = *(_DWORD *)(v29 + 56);
      *(_DWORD *)(v29 + 52) = v22;
      *(_DWORD *)(v29 + 56) = v53;
      *(_QWORD *)(v29 + 72) = v54;
    }
  }
  *(_BYTE *)(v2 + 396) = 0;
  *(_DWORD *)(v2 + 364) = v18;
  *(_DWORD *)(v2 + 336) = v22;
  *(_DWORD *)(v2 + 340) = v53;
  *(_QWORD *)(v2 + 376) = v54;
  *(_DWORD *)(v2 + 368) = v24;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v32 = *(_DWORD *)(v2 + 192) <= 1u;
  *(LARGE_INTEGER *)(v2 + 384) = PerformanceCounter;
  *(_DWORD *)(v2 + 392) = 0;
  *(_BYTE *)(v2 + 397) = v26;
  *(_DWORD *)(v2 + 356) = v16;
  *(_DWORD *)(v2 + 360) = v17;
  if ( !v32 )
    PpmEventDomainPerfStateChange(v2);
  return 1;
}

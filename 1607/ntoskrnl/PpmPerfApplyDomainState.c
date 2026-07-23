/*
 * XREFs of PpmPerfApplyDomainState @ 0x1400D1F60
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x1400D3180 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmGetHeterogeneousClass @ 0x1400D1E68 (PpmGetHeterogeneousClass.c)
 *     PpmPerfApplyCapsAndFloors @ 0x1400D2410 (PpmPerfApplyCapsAndFloors.c)
 *     PpmEventDomainPerfStateChange @ 0x1401322C4 (PpmEventDomainPerfStateChange.c)
 *     KeIsSubsetAffinityEx @ 0x1401D3D04 (KeIsSubsetAffinityEx.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  char v2; // r9
  __int64 *v3; // r10
  _BOOL8 HeterogeneousClass; // r8
  char v5; // al
  int v6; // r13d
  unsigned int v7; // edx
  unsigned int v8; // ecx
  unsigned int v9; // r8d
  unsigned int v10; // eax
  unsigned int v11; // r12d
  unsigned int v12; // eax
  char v13; // r15
  __int64 v14; // rdi
  __int64 *v15; // rbp
  unsigned int i; // esi
  unsigned __int64 v17; // rcx
  unsigned int v18; // edi
  unsigned int v19; // r14d
  unsigned int v20; // ebp
  bool v21; // cc
  __int64 v22; // rdx
  int v23; // r8d
  unsigned int v24; // eax
  unsigned int v25; // r8d
  unsigned int v26; // eax
  unsigned int v27; // esi
  unsigned int v28; // eax
  char v29; // r15
  __int64 v30; // rcx
  __int64 v32; // rdx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v35; // eax
  LARGE_INTEGER PerformanceCounter; // rax
  bool v37; // zf
  unsigned int v38; // [rsp+40h] [rbp-68h] BYREF
  int v39; // [rsp+44h] [rbp-64h] BYREF
  __int64 v40; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v41; // [rsp+50h] [rbp-58h]
  __int64 v42; // [rsp+58h] [rbp-50h]
  char v43; // [rsp+B0h] [rbp+8h]
  int v44; // [rsp+B8h] [rbp+10h]
  unsigned int v45; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v46; // [rsp+C8h] [rbp+20h] BYREF

  v2 = 0;
  v42 = *(_QWORD *)(*(_QWORD *)(a1 + 200) + 8LL);
  v44 = 0;
  v3 = &PpmCurrentProfile[174 * dword_140303D4C + 5];
  v41 = v3;
  if ( *(_BYTE *)(a1 + 199) )
    HeterogeneousClass = 0LL;
  else
    HeterogeneousClass = PpmGetHeterogeneousClass(*(_QWORD *)(a1 + 16));
  v5 = *((_BYTE *)v3 + 16);
  v6 = *((_DWORD *)v3 + 12);
  if ( v5 == 1 || v5 == 2 && *(_BYTE *)(a1 + 339) )
    v2 = 1;
  v7 = *(_DWORD *)(a1 + 356);
  v8 = *(_DWORD *)(a1 + 360);
  v43 = PpmPerfMaxOverrideEnabled;
  if ( PpmPerfMaxOverrideEnabled )
  {
    v8 = *(_DWORD *)(a1 + 356);
  }
  else if ( PpmCheckLatencyBoostActive )
  {
    v9 = *((unsigned __int8 *)v3 + HeterogeneousClass + 65);
    v10 = *(_DWORD *)(a1 + 356);
    if ( v9 < v7 )
      v10 = v9;
    if ( v8 <= v10 )
    {
      v8 = *(_DWORD *)(a1 + 356);
      if ( v9 < v7 )
        v8 = v9;
    }
  }
  v11 = *(_DWORD *)(a1 + 312);
  if ( v2 )
  {
    v44 = 1;
    v12 = *(_DWORD *)(a1 + 312);
  }
  else
  {
    v12 = *(_DWORD *)(a1 + 308);
  }
  v38 = 100;
  if ( v7 <= v12 )
    v7 = v12;
  v45 = v7;
  if ( v8 <= v12 )
    v8 = v12;
  v46 = v8;
  v13 = PpmPerfApplyCapsAndFloors(&v45, &v46, &v38, a1);
  if ( !PpmPerfArtificialDomainEnabled
    || (unsigned int)KeIsSubsetAffinityEx(a1 + 24, &PpmPerfNewCoreParkingMask)
    || *(_BYTE *)(a1 + 199) )
  {
    v15 = *(__int64 **)a1;
    v14 = a1;
  }
  else
  {
    v14 = PpmPerfDomainHead;
    v15 = &PpmPerfDomainHead;
  }
  for ( i = 0; (__int64 *)v14 != v15; v14 = *(_QWORD *)v14 )
  {
    if ( v14 == a1
      || !*(_BYTE *)(v14 + 199)
      && !(unsigned int)KeIsSubsetAffinityEx(v14 + 24, &PpmPerfNewCoreParkingMask)
      && *(_QWORD *)(*(_QWORD *)(a1 + 16) + 1600LL) == *(_QWORD *)(*(_QWORD *)(v14 + 16) + 1600LL)
      && *(_BYTE *)(a1 + 196) == *(_BYTE *)(v14 + 196) )
    {
      v17 = *(unsigned int *)(v14 + 352);
      if ( *(_BYTE *)(a1 + 197) != *(_BYTE *)(v14 + 197) )
      {
        v17 = (*(_QWORD *)(v14 + 328) * v17 + (*(_QWORD *)(v14 + 328) >> 1)) / *(_QWORD *)(a1 + 328);
        if ( (unsigned int)v17 > *(_DWORD *)(a1 + 304) )
          LODWORD(v17) = *(_DWORD *)(a1 + 304);
      }
      if ( (unsigned int)v17 > i )
        i = v17;
      v13 |= PpmPerfApplyCapsAndFloors(&v45, &v46, &v38, v14);
    }
  }
  v18 = v45;
  v19 = v46;
  v20 = v38;
  if ( v45 <= v11 )
    v18 = v11;
  if ( v46 <= v11 )
    v19 = v11;
  if ( v19 >= v18 )
    v19 = v18;
  if ( v6 )
  {
    if ( v18 == 100 )
      v18 = *(_DWORD *)(a1 + 304);
    goto LABEL_53;
  }
  if ( !PpmPerfBoostAtGuaranteed )
  {
LABEL_53:
    v21 = v38 <= v18;
    goto LABEL_54;
  }
  v21 = v38 <= v18;
  if ( v38 <= v18 )
  {
    v18 = v38;
    goto LABEL_56;
  }
LABEL_54:
  if ( !v21 )
    v20 = v18;
LABEL_56:
  if ( v19 >= v20 )
    v19 = v20;
  if ( v43 )
  {
    i = v18;
    v22 = v18;
    goto LABEL_60;
  }
  v22 = i;
  if ( i <= v18 )
  {
LABEL_60:
    v23 = v44;
    if ( i < v19 )
      v22 = v19;
    goto LABEL_62;
  }
  v23 = v44;
  v22 = v18;
  if ( v13 )
    v23 = v44 | 2;
LABEL_62:
  if ( ((v6 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v6 == 5 )
    {
LABEL_67:
      v24 = v20;
      goto LABEL_68;
    }
    if ( v6 != 6 )
      goto LABEL_70;
  }
  if ( (unsigned int)(v6 - 5) <= 1 )
    goto LABEL_67;
  v24 = 100;
  if ( PpmPerfBoostAtGuaranteed )
    goto LABEL_67;
LABEL_68:
  if ( (unsigned int)v22 >= v24 )
    v22 = v18;
LABEL_70:
  v25 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int *, __int64 *))(a1 + 272))(
          v42,
          v22,
          v19,
          v18,
          v23,
          &v39,
          &v40);
  if ( PpmPerfMaxOverrideEnabled )
    v26 = 0;
  else
    v26 = *((_DWORD *)v41 + 13);
  if ( v26 >= i )
    v27 = 0;
  else
    v27 = i - v26;
  v28 = v25;
  if ( v27 < v19 )
    v27 = v19;
  if ( v20 < v25 )
    v28 = v20;
  if ( v27 > v28 )
  {
    v27 = v25;
    if ( v20 < v25 )
      v27 = v20;
  }
  v29 = !*((_BYTE *)v41 + 64) || !*(_BYTE *)(a1 + 340);
  v30 = v40;
  if ( !*(_BYTE *)(a1 + 404)
    && v29 == *(_BYTE *)(a1 + 405)
    && v19 == *(_DWORD *)(a1 + 368)
    && v18 == *(_DWORD *)(a1 + 364)
    && v20 == *(_DWORD *)(a1 + 372)
    && (!v29 || v27 == *(_DWORD *)(a1 + 376) && v40 == *(_QWORD *)(a1 + 384)) )
  {
    return 0;
  }
  v32 = 0LL;
  if ( *(_DWORD *)(a1 + 192) )
  {
    do
    {
      v33 = 3 * v32;
      v32 = (unsigned int)(v32 + 1);
      v34 = *(_QWORD *)(a1 + 200) + 32 * v33;
      *(_DWORD *)(v34 + 72) = *(_DWORD *)(v34 + 60);
      *(_DWORD *)(v34 + 68) = *(_DWORD *)(v34 + 64);
      *(_DWORD *)(v34 + 60) = v25;
      *(_DWORD *)(v34 + 64) = v39;
      *(_QWORD *)(v34 + 80) = v40;
    }
    while ( (unsigned int)v32 < *(_DWORD *)(a1 + 192) );
    v30 = v40;
  }
  v35 = v39;
  *(_QWORD *)(a1 + 384) = v30;
  *(_BYTE *)(a1 + 404) = 0;
  *(_DWORD *)(a1 + 372) = v20;
  *(_DWORD *)(a1 + 344) = v25;
  *(_DWORD *)(a1 + 348) = v35;
  *(_DWORD *)(a1 + 376) = v27;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v37 = *(_BYTE *)(a1 + 199) == 0;
  *(LARGE_INTEGER *)(a1 + 392) = PerformanceCounter;
  *(_DWORD *)(a1 + 400) = 0;
  *(_BYTE *)(a1 + 405) = v29;
  *(_DWORD *)(a1 + 364) = v18;
  *(_DWORD *)(a1 + 368) = v19;
  if ( v37 && *(_DWORD *)(a1 + 192) > 1u )
    PpmEventDomainPerfStateChange(a1);
  return 1;
}

/*
 * XREFs of PpmPerfApplyDomainState @ 0x1400D1E40
 * Callers:
 *     PpmPerfApplyDomainStates @ 0x140074E40 (PpmPerfApplyDomainStates.c)
 * Callees:
 *     PpmPerfApplyCapsAndFloors @ 0x1400D2240 (PpmPerfApplyCapsAndFloors.c)
 *     PpmEventDomainPerfStateChange @ 0x1401268BC (PpmEventDomainPerfStateChange.c)
 *     KeIsSubsetAffinityEx @ 0x1401C4D7C (KeIsSubsetAffinityEx.c)
 */

char __fastcall PpmPerfApplyDomainState(__int64 a1)
{
  char v1; // r8
  __int64 v2; // rbx
  int v3; // r13d
  char v4; // al
  unsigned int v5; // ecx
  unsigned int v6; // edx
  unsigned int v7; // r15d
  unsigned int v8; // eax
  char v9; // r12
  __int64 v10; // rdi
  __int64 *v11; // rbp
  unsigned int i; // esi
  unsigned int v13; // edi
  unsigned int v14; // r14d
  unsigned int v15; // ebp
  bool v16; // cc
  __int64 v17; // rdx
  int v18; // r8d
  unsigned int v19; // eax
  unsigned int v20; // r8d
  unsigned int v21; // eax
  unsigned int v22; // esi
  unsigned int v23; // eax
  char v24; // r15
  unsigned int j; // edx
  __int64 v27; // rax
  __int64 v28; // rcx
  LARGE_INTEGER PerformanceCounter; // rax
  int v30; // [rsp+40h] [rbp-68h] BYREF
  __int64 v31; // [rsp+48h] [rbp-60h] BYREF
  __int64 *v32; // [rsp+50h] [rbp-58h]
  __int64 v33; // [rsp+58h] [rbp-50h]
  int v34; // [rsp+B0h] [rbp+8h]
  unsigned int v35; // [rsp+B8h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+C0h] [rbp+18h] BYREF
  unsigned int v37; // [rsp+C8h] [rbp+20h] BYREF

  v1 = 0;
  v2 = *(_QWORD *)(a1 + 24176);
  v33 = *(_QWORD *)(*(_QWORD *)(a1 + 24184) + 8LL);
  v34 = 0;
  v32 = &PpmCurrentProfile[174 * dword_1402DE28C + 5];
  v3 = *((_DWORD *)v32 + 12);
  v4 = *((_BYTE *)v32 + 16);
  if ( v4 == 1 || v4 == 2 && *(_BYTE *)(v2 + 331) )
    v1 = 1;
  v5 = *(_DWORD *)(v2 + 348);
  v6 = *(_DWORD *)(v2 + 352);
  v7 = *(_DWORD *)(v2 + 304);
  if ( v1 )
  {
    v34 = 1;
    v8 = *(_DWORD *)(v2 + 304);
  }
  else
  {
    v8 = *(_DWORD *)(v2 + 300);
  }
  v37 = 100;
  if ( v5 <= v8 )
    v5 = v8;
  v35 = v5;
  if ( v6 <= v8 )
    v6 = v8;
  v36 = v6;
  v9 = PpmPerfApplyCapsAndFloors(&v35, &v36, &v37, v2);
  if ( !PpmPerfArtificialDomainEnabled || (unsigned int)KeIsSubsetAffinityEx(v2 + 24, &PpmPerfNewCoreParkingMask) )
  {
    v11 = *(__int64 **)v2;
    v10 = v2;
  }
  else
  {
    v10 = PpmPerfDomainHead;
    v11 = &PpmPerfDomainHead;
  }
  for ( i = 0; (__int64 *)v10 != v11; v10 = *(_QWORD *)v10 )
  {
    if ( (v10 == v2 || !(unsigned int)KeIsSubsetAffinityEx(v10 + 24, &PpmPerfNewCoreParkingMask))
      && *(_QWORD *)(*(_QWORD *)(v2 + 16) + 1600LL) == *(_QWORD *)(*(_QWORD *)(v10 + 16) + 1600LL)
      && *(_BYTE *)(v2 + 196) == *(_BYTE *)(v10 + 196) )
    {
      if ( *(_DWORD *)(v10 + 344) > i )
        i = *(_DWORD *)(v10 + 344);
      v9 |= PpmPerfApplyCapsAndFloors(&v35, &v36, &v37, v10);
    }
  }
  v13 = v35;
  v14 = v36;
  v15 = v37;
  if ( v35 <= v7 )
    v13 = v7;
  if ( v36 <= v7 )
    v14 = v7;
  if ( v14 >= v13 )
    v14 = v13;
  if ( v3 )
  {
    if ( v13 == 100 )
      v13 = *(_DWORD *)(v2 + 296);
    goto LABEL_37;
  }
  if ( !PpmPerfBoostAtGuaranteed )
  {
LABEL_37:
    v16 = v37 <= v13;
    goto LABEL_38;
  }
  v16 = v37 <= v13;
  if ( v37 <= v13 )
  {
    v13 = v37;
    goto LABEL_40;
  }
LABEL_38:
  if ( !v16 )
    v15 = v13;
LABEL_40:
  if ( v14 >= v15 )
    v14 = v15;
  if ( PpmPerfMaxOverrideEnabled )
  {
    i = v13;
    v17 = v13;
    goto LABEL_44;
  }
  v17 = i;
  if ( i <= v13 )
  {
LABEL_44:
    v18 = v34;
    if ( i < v14 )
      v17 = v14;
    goto LABEL_46;
  }
  v18 = v34;
  v17 = v13;
  if ( v9 )
    v18 = v34 | 2;
LABEL_46:
  if ( ((v3 - 2) & 0xFFFFFFFD) != 0 )
  {
    if ( v3 == 5 )
    {
LABEL_51:
      v19 = v15;
      goto LABEL_52;
    }
    if ( v3 != 6 )
      goto LABEL_54;
  }
  if ( (unsigned int)(v3 - 5) <= 1 )
    goto LABEL_51;
  v19 = 100;
  if ( PpmPerfBoostAtGuaranteed )
    goto LABEL_51;
LABEL_52:
  if ( (unsigned int)v17 >= v19 )
    v17 = v13;
LABEL_54:
  v20 = (*(__int64 (__fastcall **)(__int64, __int64, _QWORD, _QWORD, int, int *, __int64 *))(v2 + 272))(
          v33,
          v17,
          v14,
          v13,
          v18,
          &v30,
          &v31);
  if ( PpmPerfMaxOverrideEnabled )
    v21 = 0;
  else
    v21 = *((_DWORD *)v32 + 13);
  if ( v21 >= i )
    v22 = 0;
  else
    v22 = i - v21;
  v23 = v20;
  if ( v22 < v14 )
    v22 = v14;
  if ( v15 < v20 )
    v23 = v15;
  if ( v22 > v23 )
  {
    v22 = v20;
    if ( v15 < v20 )
      v22 = v15;
  }
  v24 = !*((_BYTE *)v32 + 64) || !*(_BYTE *)(v2 + 332);
  if ( !*(_BYTE *)(v2 + 396)
    && v24 == *(_BYTE *)(v2 + 397)
    && v14 == *(_DWORD *)(v2 + 360)
    && v13 == *(_DWORD *)(v2 + 356)
    && v15 == *(_DWORD *)(v2 + 364)
    && (!v24 || v22 == *(_DWORD *)(v2 + 368) && v31 == *(_QWORD *)(v2 + 376)) )
  {
    return 0;
  }
  for ( j = 0; j < *(_DWORD *)(v2 + 192); *(_QWORD *)(v28 + 72) = v31 )
  {
    v27 = j++;
    v28 = *(_QWORD *)(v2 + 200) + 88 * v27;
    *(_DWORD *)(v28 + 64) = *(_DWORD *)(v28 + 52);
    *(_DWORD *)(v28 + 60) = *(_DWORD *)(v28 + 56);
    *(_DWORD *)(v28 + 52) = v20;
    *(_DWORD *)(v28 + 56) = v30;
  }
  *(_BYTE *)(v2 + 396) = 0;
  *(_DWORD *)(v2 + 364) = v15;
  *(_DWORD *)(v2 + 336) = v20;
  *(_DWORD *)(v2 + 340) = v30;
  *(_QWORD *)(v2 + 376) = v31;
  *(_DWORD *)(v2 + 368) = v22;
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  v16 = *(_DWORD *)(v2 + 192) <= 1u;
  *(LARGE_INTEGER *)(v2 + 384) = PerformanceCounter;
  *(_DWORD *)(v2 + 392) = 0;
  *(_BYTE *)(v2 + 397) = v24;
  *(_DWORD *)(v2 + 356) = v13;
  *(_DWORD *)(v2 + 360) = v14;
  if ( !v16 )
    PpmEventDomainPerfStateChange(v2);
  return 1;
}

/*
 * XREFs of PpmPerfSelectProcessorState @ 0x1400757F0
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x140075720 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwpLevelKeywordEnabled @ 0x140076480 (EtwpLevelKeywordEnabled.c)
 *     EtwWrite @ 0x14009DEC0 (EtwWrite.c)
 *     __security_check_cookie @ 0x140143620 (__security_check_cookie.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // r14
  int v2; // r12d
  unsigned __int8 v3; // r9
  unsigned int v4; // esi
  __int64 v5; // rbx
  __int64 v7; // r10
  _BYTE *v8; // r8
  __int64 *v9; // r11
  unsigned int v10; // ecx
  int v11; // r9d
  char v12; // r15
  unsigned int v13; // ecx
  int v14; // r13d
  unsigned int v15; // ebx
  unsigned __int8 v16; // r11
  unsigned int v17; // r15d
  unsigned int v18; // r9d
  int v19; // r11d
  unsigned int v20; // edx
  unsigned int v21; // eax
  bool v22; // cf
  unsigned __int8 v23; // al
  unsigned __int8 v24; // al
  __int64 v25; // rax
  __int64 v26; // rdx
  bool v27; // zf
  REGHANDLE v28; // r10
  unsigned int v29; // eax
  char v30; // al
  char v31; // al
  __int64 v32; // rcx
  char v34; // [rsp+40h] [rbp-89h]
  char v35; // [rsp+41h] [rbp-88h]
  unsigned int v36; // [rsp+44h] [rbp-85h]
  unsigned int v37; // [rsp+50h] [rbp-79h] BYREF
  unsigned int v38; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-69h] BYREF
  __int16 v40; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v41; // [rsp+70h] [rbp-59h] BYREF
  char v42[8]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v43; // [rsp+80h] [rbp-49h]
  char v44[8]; // [rsp+88h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  __int64 v46; // [rsp+A0h] [rbp-29h]
  __int64 v47; // [rsp+A8h] [rbp-21h]
  unsigned int *v48; // [rsp+B0h] [rbp-19h]
  __int64 v49; // [rsp+B8h] [rbp-11h]
  unsigned int *v50; // [rsp+C0h] [rbp-9h]
  __int64 v51; // [rsp+C8h] [rbp-1h]
  unsigned int *v52; // [rsp+D0h] [rbp+7h]
  __int64 v53; // [rsp+D8h] [rbp+Fh]
  unsigned int *v54; // [rsp+E0h] [rbp+17h]
  __int64 v55; // [rsp+E8h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v4 = 0;
  v5 = *(unsigned __int8 *)(a1 + 23858);
  v7 = *(_QWORD *)(a1 + 24176);
  v8 = *(_BYTE **)(a1 + 24168);
  v43 = *(_QWORD *)(v1 + 8);
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v9 = &PpmCurrentProfile[174 * dword_1402DE28C + 5];
  if ( v8 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_1402DE2CC && v8[185] < v3 )
  {
    v2 = 4096;
    v9 = (__int64 *)((char *)&unk_1402DC388 + 1392 * dword_1402DE28C);
  }
  v10 = *((unsigned __int8 *)v9 + v5 + 30);
  v11 = *((_DWORD *)v9 + 12);
  v12 = *((_BYTE *)v9 + v5 + 70);
  v38 = *((unsigned __int8 *)v9 + v5 + 40);
  v41 = v10;
  v39 = *((unsigned __int8 *)v9 + v5 + 32);
  v35 = *((_BYTE *)v9 + v5 + 34);
  v34 = *((_BYTE *)v9 + v5 + 36);
  v13 = *((unsigned __int8 *)v9 + v5 + 38);
  v37 = v13;
  v14 = (int)(v13 + v38) / 2;
  if ( ((v11 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( (unsigned int)(v11 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
      v15 = *(_DWORD *)(v1 + 24);
    else
      v15 = 100;
  }
  else
  {
    v15 = *(_DWORD *)(v7 + 296);
  }
  v36 = v15;
  if ( *(_BYTE *)(a1 + 24218) && v12 )
  {
    v20 = v15;
    v2 |= 1u;
    v19 = 1;
    if ( v12 == 1 )
      v15 = 1;
    goto LABEL_32;
  }
  v16 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v16 = 100;
  if ( !(_BYTE)v14 )
  {
    v30 = v34;
    if ( !v34 )
      v30 = 2;
    v34 = v30;
    v31 = v35;
    if ( !v35 )
      v31 = 2;
    v35 = v31;
  }
  v15 = *(_DWORD *)(v1 + 48);
  v17 = *(_DWORD *)(a1 + 24236);
  if ( PpmPerfCalculateActualUtilization )
  {
    v4 = v17 / *(_DWORD *)(a1 + 24224);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v15 = *(_DWORD *)(v1 + 52);
  }
  else if ( v15 == 100 )
  {
    v4 = v17 / 0x64;
  }
  else
  {
    v4 = v17 / v15;
  }
  v18 = v15;
  if ( v4 > v38 )
  {
    v20 = v36;
    if ( v15 >= v36 )
    {
LABEL_24:
      v19 = 1;
      goto LABEL_25;
    }
    switch ( v34 )
    {
      case 2:
        v2 |= 0x40u;
LABEL_50:
        v15 = v20;
        goto LABEL_24;
      case 0:
        v29 = v17 / (unsigned __int8)v14;
        v2 |= 0x10u;
LABEL_54:
        v20 = v36;
        v15 = v29;
        break;
      case 1:
        v15 += PpmPerfSingleStepSize;
        v2 |= 0x20u;
        break;
      case 3:
        if ( v4 < v16 )
          v29 = v17 / (unsigned __int8)v14;
        else
          v29 = v17 / v37;
        v2 |= 0x80u;
        goto LABEL_54;
    }
    if ( v15 < v20 )
      goto LABEL_24;
    goto LABEL_50;
  }
  if ( v4 >= v37 || v15 <= 1 )
  {
    v20 = v36;
    goto LABEL_24;
  }
  v19 = 3;
  if ( v35 )
  {
    if ( v35 == 1 )
    {
      v2 |= 0x200u;
      if ( v15 > PpmPerfSingleStepSize )
      {
        v20 = v36;
        v15 -= PpmPerfSingleStepSize;
        goto LABEL_25;
      }
    }
    else if ( v35 != 2 )
    {
      v20 = v36;
      goto LABEL_25;
    }
    v20 = v36;
    v15 = 1;
    v2 |= 0x400u;
  }
  else
  {
    if ( (unsigned __int8)v14 == 85 )
      v15 = v17 / 0x55;
    else
      v15 = v17 / (unsigned __int8)v14;
    v20 = v36;
    v2 |= 0x100u;
  }
LABEL_25:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_29;
  v21 = *(_DWORD *)(v7 + 392);
  v22 = v15 < v18;
  if ( v15 > v18 )
  {
    if ( v21 < v39 )
    {
LABEL_81:
      v2 |= 0x800u;
      v15 = v18;
      goto LABEL_29;
    }
    v22 = v15 < v18;
  }
  if ( v22 && v21 < v41 )
    goto LABEL_81;
LABEL_29:
  if ( v8 )
  {
    v23 = v8[186];
    if ( v23 )
    {
      v8[186] = 0;
      if ( v15 <= v23 )
        v15 = v23;
      v2 |= 0x10000u;
    }
    v24 = v8[187];
    if ( v24 )
    {
      v8[187] = 0;
      if ( v15 <= v24 )
        v15 = v24;
      v2 |= 0x20000u;
    }
  }
LABEL_32:
  LODWORD(v25) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, char *, char *))(v7 + 272))(
                   v43,
                   v15,
                   *(unsigned int *)(v7 + 304),
                   v20,
                   v19,
                   v42,
                   v44);
  v27 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 48) = v25;
  v38 = v25;
  v37 = v2;
  v39 = v15;
  v41 = v4;
  if ( !v27 )
  {
    v28 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v25 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v25 + 80))
        && (unsigned __int8)(*(_BYTE *)(v25 + 84) - 1) > 2u
        && (*(_BYTE *)(v25 + 96) & 0x20) != 0
        && (v32 = *(_QWORD *)(v25 + 104), LODWORD(v25) = v32 & 0x20, (v32 & 0x20) == v32)
        || *(_BYTE *)(PpmEtwHandle + 100)
        && (LOBYTE(v26) = 4,
            LODWORD(v25) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v26, 32LL),
            (_BYTE)v25) )
      {
        v40 = *(unsigned __int8 *)(a1 + 1616);
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v40;
        v47 = 1LL;
        v46 = a1 + 1617;
        v49 = 4LL;
        v48 = &v41;
        v50 = &v39;
        v52 = &v38;
        v54 = &v37;
        v51 = 4LL;
        v53 = 4LL;
        v55 = 4LL;
        LODWORD(v25) = EtwWrite(v28, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 6u, &UserData);
      }
    }
  }
  return v25;
}

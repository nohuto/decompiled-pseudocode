/*
 * XREFs of PpmPerfSelectProcessorState @ 0x1400D2C80
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x1400D2BB0 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

int __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // r14
  int v2; // ebx
  unsigned __int8 v3; // r9
  unsigned int v4; // esi
  __int64 v5; // r10
  _BYTE *v7; // r8
  __int64 *v8; // r11
  __int64 v9; // rax
  int v10; // r9d
  char v11; // r15
  unsigned int v12; // r13d
  int v13; // r12d
  unsigned __int8 v14; // r11
  unsigned int v15; // ebx
  unsigned int v16; // r15d
  unsigned int v17; // r9d
  int v18; // r11d
  int v19; // r15d
  unsigned int v20; // eax
  bool v21; // cf
  unsigned __int8 v22; // al
  unsigned __int8 v23; // al
  __int64 v24; // rax
  __int64 v25; // rdx
  bool v26; // zf
  REGHANDLE v27; // r10
  unsigned int v28; // eax
  unsigned int v29; // eax
  unsigned int v30; // eax
  char v31; // al
  char v32; // al
  unsigned int v33; // eax
  __int64 v34; // rcx
  char v36; // [rsp+40h] [rbp-89h]
  char v37; // [rsp+41h] [rbp-88h]
  int v38; // [rsp+44h] [rbp-85h]
  int v39; // [rsp+44h] [rbp-85h]
  unsigned int v40; // [rsp+48h] [rbp-81h] BYREF
  int v41; // [rsp+50h] [rbp-79h]
  unsigned int v42; // [rsp+58h] [rbp-71h] BYREF
  __int16 v43; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v44; // [rsp+68h] [rbp-61h] BYREF
  unsigned int v45; // [rsp+70h] [rbp-59h] BYREF
  char v46[8]; // [rsp+78h] [rbp-51h] BYREF
  __int64 v47; // [rsp+80h] [rbp-49h]
  char v48[8]; // [rsp+88h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  __int64 v50; // [rsp+A0h] [rbp-29h]
  __int64 v51; // [rsp+A8h] [rbp-21h]
  unsigned int *v52; // [rsp+B0h] [rbp-19h]
  __int64 v53; // [rsp+B8h] [rbp-11h]
  unsigned int *v54; // [rsp+C0h] [rbp-9h]
  __int64 v55; // [rsp+C8h] [rbp-1h]
  unsigned int *v56; // [rsp+D0h] [rbp+7h]
  __int64 v57; // [rsp+D8h] [rbp+Fh]
  unsigned int *v58; // [rsp+E0h] [rbp+17h]
  __int64 v59; // [rsp+E8h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v4 = 0;
  v5 = *(_QWORD *)(a1 + 24176);
  v7 = *(_BYTE **)(a1 + 24168);
  v47 = *(_QWORD *)(v1 + 8);
  v38 = 0;
  v41 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v8 = &PpmCurrentProfile[174 * dword_140303D4C + 5];
  if ( v7 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_140303D8C && v7[185] < v3 )
  {
    v2 = 4096;
    v8 = (__int64 *)((char *)&unk_1403017C8 + 1392 * dword_140303D4C);
    v38 = 4096;
  }
  LOBYTE(v9) = *(_BYTE *)(a1 + 23858);
  if ( !(_BYTE)v9 )
  {
    v9 = *(_QWORD *)(a1 + 24176);
    if ( v9 )
      LOBYTE(v9) = *(_BYTE *)(v9 + 197) != 0;
  }
  v10 = *((_DWORD *)v8 + 12);
  v11 = *((_BYTE *)v8 + (unsigned __int8)v9 + 70);
  v45 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 30);
  v44 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 32);
  v37 = *((_BYTE *)v8 + (unsigned __int8)v9 + 34);
  v36 = *((_BYTE *)v8 + (unsigned __int8)v9 + 36);
  v12 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 40);
  v42 = *((unsigned __int8 *)v8 + (unsigned __int8)v9 + 38);
  v13 = (int)(v42 + v12) / 2;
  if ( ((v10 - 1) & 0xFFFFFFFD) == 0 )
  {
    v29 = *(_DWORD *)(v5 + 304);
LABEL_43:
    v40 = v29;
    goto LABEL_12;
  }
  if ( (unsigned int)(v10 - 5) <= 1 || PpmPerfBoostAtGuaranteed )
  {
    v29 = *(_DWORD *)(v1 + 32);
    goto LABEL_43;
  }
  v40 = 100;
LABEL_12:
  if ( *(_BYTE *)(a1 + 24218) && v11 )
  {
    v39 = v2 | 1;
    v26 = v11 == 1;
    v15 = v40;
    v18 = 1;
    v19 = v39;
    if ( v26 )
      v15 = 1;
    goto LABEL_33;
  }
  v14 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v14 = 100;
  if ( !(_BYTE)v13 )
  {
    v31 = v36;
    if ( !v36 )
      v31 = 2;
    v36 = v31;
    v32 = v37;
    if ( !v37 )
      v32 = 2;
    v37 = v32;
  }
  v15 = *(_DWORD *)(v1 + 56);
  v16 = *(_DWORD *)(a1 + 24236);
  if ( PpmPerfCalculateActualUtilization )
  {
    v4 = v16 / *(_DWORD *)(a1 + 24224);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v15 = *(_DWORD *)(v1 + 60);
  }
  else if ( v15 == 100 )
  {
    v4 = v16 / 0x64;
  }
  else
  {
    v4 = v16 / v15;
  }
  v17 = v15;
  if ( v4 > v12 )
  {
    v28 = v40;
    if ( v15 < v40 )
    {
      if ( v36 == 2 )
      {
        v19 = v38 | 0x40;
      }
      else
      {
        if ( v36 )
        {
          if ( v36 == 1 )
          {
            v15 += PpmPerfSingleStepSize;
            v19 = v38 | 0x20;
          }
          else if ( v36 == 3 )
          {
            if ( v4 < v14 )
              v33 = v16 / (unsigned __int8)v13;
            else
              v33 = v16 / v42;
            v15 = v33;
            v19 = v38 | 0x80;
          }
          else
          {
            v19 = v38;
          }
        }
        else
        {
          v30 = v16 / (unsigned __int8)v13;
          v19 = v38 | 0x10;
          v15 = v30;
        }
        v28 = v40;
        if ( v15 < v40 )
        {
          v18 = v41;
          goto LABEL_26;
        }
      }
      v18 = v41;
      v15 = v28;
      goto LABEL_26;
    }
LABEL_41:
    v19 = v38;
    v18 = v41;
    goto LABEL_26;
  }
  if ( v4 >= v42 || v15 <= 1 )
    goto LABEL_41;
  v18 = 3;
  if ( v37 )
  {
    v19 = v38;
    if ( v37 == 1 )
    {
      v19 = v38 | 0x200;
      if ( v15 > PpmPerfSingleStepSize )
      {
        v15 -= PpmPerfSingleStepSize;
        goto LABEL_26;
      }
    }
    else if ( v37 != 2 )
    {
      goto LABEL_26;
    }
    v15 = 1;
    v19 |= 0x400u;
  }
  else
  {
    if ( (unsigned __int8)v13 == 85 )
      v15 = v16 / 0x55;
    else
      v15 = v16 / (unsigned __int8)v13;
    v19 = v38 | 0x100;
  }
LABEL_26:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_30;
  v20 = *(_DWORD *)(v5 + 400);
  v21 = v15 < v17;
  if ( v15 > v17 )
  {
    if ( v20 < v44 )
    {
LABEL_84:
      v19 |= 0x800u;
      v15 = v17;
      goto LABEL_30;
    }
    v21 = v15 < v17;
  }
  if ( v21 && v20 < v45 )
    goto LABEL_84;
LABEL_30:
  if ( v7 )
  {
    v22 = v7[186];
    if ( v22 )
    {
      v7[186] = 0;
      if ( v15 <= v22 )
        v15 = v22;
      v19 |= 0x10000u;
    }
    v23 = v7[187];
    if ( v23 )
    {
      v7[187] = 0;
      if ( v15 <= v23 )
        v15 = v23;
      v19 |= 0x20000u;
    }
  }
LABEL_33:
  LODWORD(v24) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, char *, char *))(v5 + 272))(
                   v47,
                   v15,
                   *(unsigned int *)(v5 + 312),
                   v40,
                   v18,
                   v46,
                   v48);
  v26 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 56) = v24;
  v42 = v24;
  v40 = v19;
  v44 = v15;
  v45 = v4;
  if ( !v26 )
  {
    v27 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      if ( (v24 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v24 + 80))
        && (unsigned __int8)(*(_BYTE *)(v24 + 84) - 1) > 2u
        && (*(_BYTE *)(v24 + 96) & 0x20) != 0
        && (v34 = *(_QWORD *)(v24 + 104), LODWORD(v24) = v34 & 0x20, (v34 & 0x20) == v34)
        || *(_BYTE *)(PpmEtwHandle + 101)
        && (LOBYTE(v25) = 4,
            LODWORD(v24) = EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v25, 32LL),
            (_BYTE)v24) )
      {
        v43 = *(unsigned __int8 *)(a1 + 1616);
        *(_QWORD *)&UserData.Size = 2LL;
        UserData.Ptr = (ULONGLONG)&v43;
        v51 = 1LL;
        v50 = a1 + 1617;
        v53 = 4LL;
        v52 = &v45;
        v54 = &v44;
        v56 = &v42;
        v58 = &v40;
        v55 = 4LL;
        v57 = 4LL;
        v59 = 4LL;
        LODWORD(v24) = EtwWrite(v27, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 6u, &UserData);
      }
    }
  }
  return v24;
}

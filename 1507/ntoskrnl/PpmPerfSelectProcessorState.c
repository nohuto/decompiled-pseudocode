/*
 * XREFs of PpmPerfSelectProcessorState @ 0x1400E9140
 * Callers:
 *     PpmPerfSelectProcessorStates @ 0x1400E9070 (PpmPerfSelectProcessorStates.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     DbgPrint @ 0x140131E68 (DbgPrint.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

char __fastcall PpmPerfSelectProcessorState(__int64 a1)
{
  __int64 v1; // r13
  int v2; // ebx
  unsigned __int8 v3; // r8
  unsigned int v4; // r15d
  __int64 v5; // r10
  __int64 v7; // r14
  _BYTE *v8; // rsi
  __int64 *v9; // r9
  __int64 v10; // rax
  int v11; // r8d
  char v12; // cl
  char v13; // r10
  unsigned int v14; // r12d
  int v15; // r11d
  int v16; // eax
  unsigned __int8 v17; // r9
  unsigned int v18; // ebx
  unsigned int v19; // r10d
  unsigned int v20; // r8d
  int v21; // r12d
  unsigned int v22; // edx
  unsigned int v23; // eax
  bool v24; // cf
  unsigned __int8 v25; // al
  unsigned __int8 v26; // al
  __int64 v27; // rax
  bool v28; // zf
  char v29; // al
  char v30; // al
  unsigned int v31; // eax
  __int64 v32; // rcx
  __int64 v33; // rcx
  __int64 v34; // rcx
  int v36; // [rsp+40h] [rbp-89h]
  int v37; // [rsp+40h] [rbp-89h]
  char v38; // [rsp+44h] [rbp-85h]
  char v39; // [rsp+45h] [rbp-84h]
  unsigned int v40; // [rsp+48h] [rbp-81h]
  int v41; // [rsp+4Ch] [rbp-7Dh]
  unsigned int v42; // [rsp+50h] [rbp-79h] BYREF
  __int16 v43; // [rsp+58h] [rbp-71h] BYREF
  unsigned int v44; // [rsp+60h] [rbp-69h] BYREF
  unsigned int v45; // [rsp+68h] [rbp-61h] BYREF
  int v46; // [rsp+70h] [rbp-59h] BYREF
  __int64 v47; // [rsp+78h] [rbp-51h]
  char v48[8]; // [rsp+80h] [rbp-49h] BYREF
  char v49[8]; // [rsp+88h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+90h] [rbp-39h] BYREF
  __int64 v51; // [rsp+A0h] [rbp-29h]
  __int64 v52; // [rsp+A8h] [rbp-21h]
  unsigned int *v53; // [rsp+B0h] [rbp-19h]
  __int64 v54; // [rsp+B8h] [rbp-11h]
  unsigned int *v55; // [rsp+C0h] [rbp-9h]
  __int64 v56; // [rsp+C8h] [rbp-1h]
  unsigned int *v57; // [rsp+D0h] [rbp+7h]
  __int64 v58; // [rsp+D8h] [rbp+Fh]
  int *v59; // [rsp+E0h] [rbp+17h]
  __int64 v60; // [rsp+E8h] [rbp+1Fh]

  v1 = *(_QWORD *)(a1 + 24184);
  v2 = 0;
  v3 = PpmMfBufferingThreshold;
  v4 = 0;
  v5 = *(unsigned __int8 *)(a1 + 23858);
  v7 = *(_QWORD *)(a1 + 24176);
  v8 = *(_BYTE **)(a1 + 24168);
  v47 = *(_QWORD *)(v1 + 8);
  v36 = 0;
  v41 = 1;
  if ( (unsigned int)PpmMfBufferingThreshold > 0x64 )
    v3 = 100;
  v9 = &PpmCurrentProfile[174 * dword_14032E84C + 5];
  if ( v8 && PpmCurrentProfile == (__int64 *)PpmLowPowerProfile && byte_14032E88C && v8[185] < v3 )
  {
    v2 = 4096;
    v9 = (__int64 *)((char *)&unk_14032C768 + 1392 * dword_14032E84C);
    v36 = 4096;
  }
  v10 = v5;
  v11 = *((_DWORD *)v9 + 12);
  v45 = *((unsigned __int8 *)v9 + v5 + 30);
  v44 = *((unsigned __int8 *)v9 + v5 + 32);
  v38 = *((_BYTE *)v9 + v5 + 34);
  v12 = *((_BYTE *)v9 + v5 + 36);
  v13 = *((_BYTE *)v9 + v5 + 70);
  v39 = v12;
  v14 = *((unsigned __int8 *)v9 + v10 + 40);
  v42 = *((unsigned __int8 *)v9 + v10 + 38);
  v15 = (int)(v42 + v14) / 2;
  if ( ((v11 - 1) & 0xFFFFFFFD) != 0 )
  {
    if ( PpmPerfBoostAtGuaranteed )
      v16 = *(_DWORD *)(v1 + 24);
    else
      v16 = 100;
  }
  else
  {
    v16 = *(_DWORD *)(v7 + 296);
  }
  v40 = v16;
  if ( *(_BYTE *)(a1 + 24218) && v13 )
  {
    v37 = v2 | 1;
    v18 = v16;
    if ( v13 == 1 )
      v18 = 1;
    if ( (PoDebug & 0x40000) != 0 )
      DbgPrint("PPM: Parked Processor %d set to %d%%\n", *(_DWORD *)(a1 + 36), v18);
    v21 = v37;
    goto LABEL_30;
  }
  v17 = PpmPerfIdealAggressiveIncreaseThreshold;
  if ( (unsigned __int8)PpmPerfIdealAggressiveIncreaseThreshold > 0x64u )
    v17 = 100;
  if ( !(_BYTE)v15 )
  {
    v29 = v12;
    if ( !v12 )
      v29 = 2;
    v39 = v29;
    v30 = v38;
    if ( !v38 )
      v30 = 2;
    v38 = v30;
  }
  v18 = *(_DWORD *)(v1 + 48);
  v19 = *(_DWORD *)(a1 + 24236);
  if ( PpmPerfCalculateActualUtilization )
  {
    v4 = v19 / *(_DWORD *)(a1 + 24224);
    if ( PpmPerfCalculateActualUtilization == 2 )
      v18 = *(_DWORD *)(v1 + 52);
  }
  else if ( v18 == 100 )
  {
    v4 = v19 / 0x64;
  }
  else
  {
    v4 = v19 / v18;
  }
  v20 = v18;
  if ( v4 > v14 )
  {
    v22 = v40;
    if ( v18 < v40 )
    {
      if ( v39 == 2 )
      {
        v21 = v36 | 0x40;
      }
      else
      {
        if ( v39 )
        {
          if ( v39 == 1 )
          {
            v18 += PpmPerfSingleStepSize;
            v21 = v36 | 0x20;
          }
          else if ( v39 == 3 )
          {
            if ( v4 < v17 )
              v31 = v19 / (unsigned __int8)v15;
            else
              v31 = v19 / v42;
            v18 = v31;
            v22 = v40;
            v21 = v36 | 0x80;
          }
          else
          {
            v21 = v36;
          }
        }
        else
        {
          v22 = v40;
          v21 = v36 | 0x10;
          v18 = v19 / (unsigned __int8)v15;
        }
        if ( v18 < v22 )
          goto LABEL_23;
      }
      v18 = v22;
      goto LABEL_23;
    }
LABEL_22:
    v21 = v36;
    goto LABEL_23;
  }
  if ( v4 >= v42 || v18 <= 1 )
    goto LABEL_22;
  v41 = 3;
  if ( v38 )
  {
    v21 = v36;
    if ( v38 == 1 )
    {
      v21 = v36 | 0x200;
      if ( v18 > PpmPerfSingleStepSize )
      {
        v18 -= PpmPerfSingleStepSize;
        goto LABEL_23;
      }
    }
    else if ( v38 != 2 )
    {
      goto LABEL_23;
    }
    v21 |= 0x400u;
    v18 = 1;
  }
  else
  {
    if ( (unsigned __int8)v15 == 85 )
      v18 = v19 / 0x55;
    else
      v18 = v19 / (unsigned __int8)v15;
    v21 = v36 | 0x100;
  }
LABEL_23:
  if ( PpmCheckCurrentPipelineId == 5 )
    goto LABEL_27;
  v23 = *(_DWORD *)(v7 + 392);
  v24 = v18 < v20;
  if ( v18 > v20 )
  {
    if ( v23 < v44 )
    {
LABEL_80:
      v21 |= 0x800u;
      v18 = v20;
      goto LABEL_27;
    }
    v24 = v18 < v20;
  }
  if ( v24 && v23 < v45 )
    goto LABEL_80;
LABEL_27:
  if ( v8 )
  {
    v25 = v8[186];
    if ( v25 )
    {
      v8[186] = 0;
      if ( v18 <= v25 )
        v18 = v25;
      v21 |= 0x10000u;
      if ( (PoDebug & 0x40000) != 0 )
        DbgPrint("PPM: Class0 Floor Processor %d set to %d%%\n", *(_DWORD *)(a1 + 36), v18);
    }
    v26 = v8[187];
    if ( v26 )
    {
      v8[187] = 0;
      if ( v18 <= v26 )
        v18 = v26;
      v21 |= 0x20000u;
      if ( (PoDebug & 0x40000) != 0 )
        DbgPrint("PPM: Class1 MinPerf Processor %d set to %d%%\n", *(_DWORD *)(a1 + 36), v18);
    }
  }
LABEL_30:
  LODWORD(v27) = (*(__int64 (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, int, char *, char *))(v7 + 272))(
                   v47,
                   v18,
                   *(unsigned int *)(v7 + 304),
                   v40,
                   v41,
                   v48,
                   v49);
  v28 = PpmEtwRegistered == 0;
  *(_DWORD *)(v1 + 48) = v27;
  v42 = v27;
  v46 = v21;
  v44 = v18;
  v45 = v4;
  if ( !v28 && PpmEtwHandle )
  {
    if ( (v27 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v27 + 80))
      && (unsigned __int8)(*(_BYTE *)(v27 + 84) - 1) > 2u
      && (*(_BYTE *)(v27 + 96) & 0x20) != 0
      && (v32 = *(_QWORD *)(v27 + 104), LOBYTE(v27) = v32 & 0x20, (v32 & 0x20) == v32)
      || *(_BYTE *)(PpmEtwHandle + 100)
      && (v33 = *(_QWORD *)(PpmEtwHandle + 40), *(_DWORD *)(v33 + 80))
      && (LOBYTE(v27) = *(_BYTE *)(v33 + 84) - 1, (unsigned __int8)v27 > 2u)
      && (*(_BYTE *)(v33 + 96) & 0x20) != 0
      && (v34 = *(_QWORD *)(v33 + 104), v27 = v34 & 0x20, v27 == v34) )
    {
      v43 = *(unsigned __int8 *)(a1 + 1616);
      *(_QWORD *)&UserData.Size = 2LL;
      UserData.Ptr = (ULONGLONG)&v43;
      v52 = 1LL;
      v51 = a1 + 1617;
      v54 = 4LL;
      v53 = &v45;
      v55 = &v44;
      v57 = &v42;
      v59 = &v46;
      v56 = 4LL;
      v58 = 4LL;
      v60 = 4LL;
      LOBYTE(v27) = EtwWrite(PpmEtwHandle, &PPM_ETW_PERF_SELECT_PROCESSOR_STATE, 0LL, 6u, &UserData);
    }
  }
  return v27;
}

/*
 * XREFs of PpmPerfRecordUtility @ 0x1400D5420
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1400D5370 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWrite @ 0x140012EA0 (EtwWrite.c)
 *     EtwpLevelKeywordEnabled @ 0x1400D6090 (EtwpLevelKeywordEnabled.c)
 *     PpmPerfResetHistory @ 0x1401447E8 (PpmPerfResetHistory.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 */

__int64 __fastcall PpmPerfRecordUtility(__int64 a1)
{
  _QWORD *v1; // rdi
  char v2; // r13
  __int64 result; // rax
  unsigned __int8 *v5; // r12
  __int64 v6; // r15
  __int64 v7; // rsi
  unsigned __int64 v8; // r9
  __int64 v9; // r11
  __int64 v10; // r14
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // r10
  int v13; // esi
  unsigned __int64 v14; // r14
  __int64 v15; // rdx
  unsigned __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r15
  REGHANDLE v19; // r10
  __int64 v20; // rcx
  int *v21; // r8
  char *v22; // rdi
  unsigned __int64 v23; // rax
  unsigned int *v24; // r11
  _DWORD *v25; // r9
  unsigned __int16 *v26; // rdx
  unsigned __int8 *v27; // r10
  int v28; // eax
  int v29; // eax
  signed __int64 v30; // rdi
  __int64 v31; // rdx
  int v32; // eax
  unsigned int v33; // r9d
  __int16 *v34; // rcx
  int v35; // eax
  unsigned int v36; // eax
  unsigned __int8 v37; // cl
  unsigned int v38; // r8d
  __int16 v39; // [rsp+38h] [rbp-D0h] BYREF
  __int16 v40; // [rsp+40h] [rbp-C8h] BYREF
  __int16 v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+50h] [rbp-B8h] BYREF
  int v43; // [rsp+58h] [rbp-B0h] BYREF
  int v44; // [rsp+60h] [rbp-A8h] BYREF
  __int64 v45; // [rsp+68h] [rbp-A0h] BYREF
  unsigned __int64 v46; // [rsp+70h] [rbp-98h] BYREF
  unsigned __int64 v47; // [rsp+78h] [rbp-90h] BYREF
  unsigned __int64 v48; // [rsp+80h] [rbp-88h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+88h] [rbp-80h] BYREF
  unsigned __int64 *v50; // [rsp+98h] [rbp-70h]
  __int64 v51; // [rsp+A0h] [rbp-68h]
  unsigned __int64 *v52; // [rsp+A8h] [rbp-60h]
  __int64 v53; // [rsp+B0h] [rbp-58h]
  int *v54; // [rsp+B8h] [rbp-50h]
  __int64 v55; // [rsp+C0h] [rbp-48h]
  __int64 *v56; // [rsp+C8h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  int *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  __int16 *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  int *v64; // [rsp+108h] [rbp+0h]
  __int64 v65; // [rsp+110h] [rbp+8h]
  __int16 *v66; // [rsp+118h] [rbp+10h]
  __int64 v67; // [rsp+120h] [rbp+18h]
  char *v68; // [rsp+128h] [rbp+20h]
  __int64 v69; // [rsp+130h] [rbp+28h]
  unsigned __int64 *v70; // [rsp+138h] [rbp+30h]
  __int64 v71; // [rsp+140h] [rbp+38h]

  v1 = *(_QWORD **)(a1 + 24168);
  v2 = 0;
  result = (unsigned int)PpmCheckMakeupCount;
  v5 = *(unsigned __int8 **)(a1 + 24200);
  v6 = *(_QWORD *)(a1 + 24184);
  if ( !v1 )
    return result;
  v7 = *v1;
  v8 = v1[4] - *v1;
  v9 = v1[1];
  v10 = v1[2];
  v11 = v1[3] - v9;
  v12 = v1[5] - v10;
  v40 = 0;
  if ( PpmCheckMakeupCount )
  {
    v23 = v11 / (unsigned int)(PpmCheckMakeupCount + 1);
    v11 = v23;
    if ( v8 >= v23 )
      v8 = v23;
    if ( v12 >= v23 )
      v12 = v23;
  }
  v1[1] = v9 + v11;
  *v1 = v7 + v8;
  v1[2] = v10 + v12;
  if ( v8 > v11 )
    v8 = v11;
  if ( v12 > v11 )
    v12 = v11;
  if ( v11 <= 1 )
    v11 = 1LL;
  if ( v5 )
  {
    result = *v5;
    *(_DWORD *)(a1 + 24236) = *v5 * v5[1];
    return result;
  }
  v13 = *(_DWORD *)(a1 + 24220);
  v14 = v8 * (unsigned int)(100 * v13) / v11;
  v15 = 100LL;
  v16 = v8 * (unsigned int)(v13 * *(_DWORD *)(a1 + 24228)) / v11;
  if ( v6 )
    v17 = *(_DWORD *)(v6 + 76);
  else
    v17 = 100;
  LOBYTE(v39) = 100;
  v18 = 2LL;
  LOWORD(v42) = v16;
  v41 = v8 * (unsigned int)(100 * v13) / v11;
  v44 = v13;
  v43 = v17;
  v48 = v12;
  v47 = v8;
  v46 = v11 - v8;
  if ( PpmEtwRegistered )
  {
    v19 = PpmEtwHandle;
    if ( PpmEtwHandle )
    {
      v20 = *(_QWORD *)(PpmEtwHandle + 32);
      if ( *(_DWORD *)(v20 + 80)
        && (unsigned __int8)(*(_BYTE *)(v20 + 84) - 1) > 3u
        && (*(_BYTE *)(v20 + 96) & 2) != 0
        && (*(_QWORD *)(v20 + 104) & 2LL) == *(_QWORD *)(v20 + 104) )
      {
        goto LABEL_33;
      }
      if ( !*(_BYTE *)(PpmEtwHandle + 101) )
        goto LABEL_18;
      LOBYTE(v15) = 5;
      if ( (unsigned __int8)EtwpLevelKeywordEnabled(*(_QWORD *)(PpmEtwHandle + 40) + 80LL, v15, 2LL) )
      {
LABEL_33:
        *(_QWORD *)&UserData.Size = 8LL;
        UserData.Ptr = (ULONGLONG)&PpmCheckTime;
        v51 = 8LL;
        v50 = &v46;
        v53 = 8LL;
        v52 = &v47;
        v55 = 4LL;
        v54 = &v43;
        LOWORD(v45) = *(unsigned __int8 *)(a1 + 1616);
        v56 = &v45;
        v58 = a1 + 1617;
        v60 = &v44;
        v62 = &v41;
        v64 = &v42;
        v66 = &v39;
        v68 = (char *)v1 + 185;
        v70 = &v48;
        v57 = 2LL;
        v59 = 1LL;
        v61 = 4LL;
        v63 = 2LL;
        v65 = 2LL;
        v67 = 1LL;
        v69 = 1LL;
        v71 = 8LL;
        EtwWrite(v19, &PPM_ETW_RECORDED_UTILITY, 0LL, 0xCu, &UserData);
      }
      v15 = 100LL;
    }
  }
LABEL_18:
  v21 = *(int **)(a1 + 24208);
  v22 = (char *)(v1 + 23);
  if ( v21 )
  {
    v43 = *v21;
    v24 = (unsigned int *)(v21 + 5);
    v25 = v21 + 5;
    v44 = v21[1];
    v26 = (unsigned __int16 *)&v21[2 * v44 + 7];
    v27 = (unsigned __int8 *)v26 + 5;
    v21[2] += (unsigned __int16)v14 - *v26;
    v28 = v26[1];
    *v26 = v14;
    v21[3] += (unsigned __int16)v16 - v28;
    v29 = *((unsigned __int8 *)v26 + 4);
    v26[1] = v16;
    v21[4] += (unsigned __int8)v13 - v29;
    v30 = v22 - (char *)v26;
    *((_BYTE *)v26 + 4) = v13;
    v31 = 2LL;
    do
    {
      v32 = *v27++;
      *v25++ -= v32;
      *(v25 - 1) += v27[v30 - 6];
      *(v27 - 1) = v27[v30 - 6];
      --v31;
    }
    while ( v31 );
    v33 = v43;
    v34 = &v40;
    v35 = v44 + 1;
    if ( v44 + 1 == v43 )
      v35 = 0;
    v21[1] = v35;
    LODWORD(v14) = v21[2] / v33;
    LODWORD(v16) = v21[3] / v33;
    v13 = v21[4] / v33;
    do
    {
      v36 = *v24;
      v34 = (__int16 *)((char *)v34 + 1);
      ++v24;
      result = v36 / v33;
      *((_BYTE *)v34 - 1) = result;
      --v18;
    }
    while ( v18 );
    v15 = 100LL;
  }
  else
  {
    result = *(unsigned __int16 *)v22;
    v40 = *(_WORD *)v22;
  }
  if ( PpmCheckCurrentPipelineId == 5 )
  {
    v2 = 1;
    v37 = HIBYTE(v40);
    if ( HIBYTE(v40) >= 0x64u )
      v37 = 100;
    v38 = v16 * v37;
    LODWORD(v14) = v14 - (unsigned int)v14 * v37 / 0x64;
    result = 1374389535 * v38;
    v15 = v38 / 0x64;
    LODWORD(v16) = v16 - v15;
  }
  *(_DWORD *)(a1 + 24236) = v14;
  *(_DWORD *)(a1 + 24240) = v16;
  *(_DWORD *)(a1 + 24224) = v13;
  if ( v2 )
    return PpmPerfResetHistory(a1, v15);
  return result;
}

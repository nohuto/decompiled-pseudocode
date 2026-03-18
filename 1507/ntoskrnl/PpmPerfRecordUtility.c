/*
 * XREFs of PpmPerfRecordUtility @ 0x1400E9720
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1400E9670 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     PpmPerfResetHistory @ 0x140167DA4 (PpmPerfResetHistory.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
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
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // r12
  int v17; // eax
  __int64 v18; // r15
  __int64 v19; // rcx
  int *v20; // r8
  char *v21; // rdi
  unsigned __int64 v22; // rax
  __int64 v23; // rcx
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
  int *v34; // rcx
  int v35; // eax
  unsigned int v36; // eax
  unsigned __int8 v37; // cl
  unsigned int v38; // r8d
  __int16 v39; // [rsp+38h] [rbp-D0h] BYREF
  int v40; // [rsp+40h] [rbp-C8h] BYREF
  int v41; // [rsp+48h] [rbp-C0h] BYREF
  int v42; // [rsp+50h] [rbp-B8h] BYREF
  __int16 v43; // [rsp+58h] [rbp-B0h] BYREF
  __int16 v44; // [rsp+60h] [rbp-A8h] BYREF
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
  __int16 *v56; // [rsp+C8h] [rbp-40h]
  __int64 v57; // [rsp+D0h] [rbp-38h]
  __int64 v58; // [rsp+D8h] [rbp-30h]
  __int64 v59; // [rsp+E0h] [rbp-28h]
  int *v60; // [rsp+E8h] [rbp-20h]
  __int64 v61; // [rsp+F0h] [rbp-18h]
  __int64 *v62; // [rsp+F8h] [rbp-10h]
  __int64 v63; // [rsp+100h] [rbp-8h]
  __int16 *v64; // [rsp+108h] [rbp+0h]
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
  if ( v1 )
  {
    v7 = *v1;
    v8 = v1[4] - *v1;
    v9 = v1[1];
    v10 = v1[2];
    v11 = v1[3] - v9;
    v12 = v1[5] - v10;
    LOWORD(v40) = 0;
    if ( PpmCheckMakeupCount )
    {
      v22 = v11 / (unsigned int)(PpmCheckMakeupCount + 1);
      v11 = v22;
      if ( v8 >= v22 )
        v8 = v22;
      if ( v12 >= v22 )
        v12 = v22;
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
    }
    else
    {
      v13 = *(_DWORD *)(a1 + 24220);
      v14 = v8 * (unsigned int)(100 * v13) / v11;
      v15 = v8 * (unsigned int)(v13 * *(_DWORD *)(a1 + 24228)) % v11;
      v16 = v8 * (unsigned int)(v13 * *(_DWORD *)(a1 + 24228)) / v11;
      if ( v6 )
        v17 = *(_DWORD *)(v6 + 68);
      else
        v17 = 100;
      LOBYTE(v39) = 100;
      v18 = 2LL;
      v44 = v16;
      LOWORD(v45) = v8 * (unsigned int)(100 * v13) / v11;
      v42 = v13;
      v41 = v17;
      v47 = v12;
      v48 = v8;
      v46 = v11 - v8;
      if ( PpmEtwRegistered && PpmEtwHandle )
      {
        if ( (v19 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v19 + 80))
          && (unsigned __int8)(*(_BYTE *)(v19 + 84) - 1) > 2u
          && (*(_BYTE *)(v19 + 96) & 2) != 0
          && (*(_QWORD *)(v19 + 104) & 2LL) == *(_QWORD *)(v19 + 104)
          || *(_BYTE *)(PpmEtwHandle + 100)
          && (v23 = *(_QWORD *)(PpmEtwHandle + 40), *(_DWORD *)(v23 + 80))
          && (unsigned __int8)(*(_BYTE *)(v23 + 84) - 1) > 2u
          && (*(_BYTE *)(v23 + 96) & 2) != 0
          && (*(_QWORD *)(v23 + 104) & 2LL) == *(_QWORD *)(v23 + 104) )
        {
          *(_QWORD *)&UserData.Size = 8LL;
          UserData.Ptr = (ULONGLONG)&PpmCheckTime;
          v51 = 8LL;
          v50 = &v46;
          v53 = 8LL;
          v52 = &v48;
          v55 = 4LL;
          v54 = &v41;
          v43 = *(unsigned __int8 *)(a1 + 1616);
          v56 = &v43;
          v58 = a1 + 1617;
          v60 = &v42;
          v62 = &v45;
          v64 = &v44;
          v66 = &v39;
          v68 = (char *)v1 + 185;
          v70 = &v47;
          v57 = 2LL;
          v59 = 1LL;
          v61 = 4LL;
          v63 = 2LL;
          v65 = 2LL;
          v67 = 1LL;
          v69 = 1LL;
          v71 = 8LL;
          EtwWrite(PpmEtwHandle, &PPM_ETW_RECORDED_UTILITY, 0LL, 0xCu, &UserData);
        }
      }
      v20 = *(int **)(a1 + 24208);
      v21 = (char *)(v1 + 23);
      if ( v20 )
      {
        v41 = *v20;
        v24 = (unsigned int *)(v20 + 5);
        v25 = v20 + 5;
        v42 = v20[1];
        v26 = (unsigned __int16 *)&v20[2 * v42 + 7];
        v27 = (unsigned __int8 *)v26 + 5;
        v20[2] += (unsigned __int16)v14 - *v26;
        v28 = v26[1];
        *v26 = v14;
        v20[3] += (unsigned __int16)v16 - v28;
        v29 = *((unsigned __int8 *)v26 + 4);
        v26[1] = v16;
        v20[4] += (unsigned __int8)v13 - v29;
        v30 = v21 - (char *)v26;
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
        v33 = v41;
        v34 = &v40;
        v35 = v42 + 1;
        if ( v42 + 1 == v41 )
          v35 = 0;
        v20[1] = v35;
        LODWORD(v14) = v20[2] / v33;
        LODWORD(v16) = v20[3] / v33;
        v13 = v20[4] / v33;
        do
        {
          v36 = *v24;
          v34 = (int *)((char *)v34 + 1);
          LODWORD(v15) = *v24++ % v33;
          v15 = (unsigned int)v15;
          result = v36 / v33;
          *((_BYTE *)v34 - 1) = result;
          --v18;
        }
        while ( v18 );
      }
      else
      {
        result = *(unsigned __int16 *)v21;
        LOWORD(v40) = *(_WORD *)v21;
      }
      if ( PpmCheckCurrentPipelineId == 5 )
      {
        v2 = 1;
        v37 = BYTE1(v40);
        if ( BYTE1(v40) >= 0x64u )
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
    }
  }
  return result;
}

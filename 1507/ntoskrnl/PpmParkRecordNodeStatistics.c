/*
 * XREFs of PpmParkRecordNodeStatistics @ 0x1400E9940
 * Callers:
 *     PpmCheckRecordAllUtility @ 0x1400E9670 (PpmCheckRecordAllUtility.c)
 * Callees:
 *     EtwWrite @ 0x140014D30 (EtwWrite.c)
 *     __security_check_cookie @ 0x1401716B0 (__security_check_cookie.c)
 */

__int64 PpmParkRecordNodeStatistics()
{
  __int64 result; // rax
  unsigned __int16 v1; // di
  unsigned int v2; // esi
  int v3; // r14d
  __int64 v4; // rcx
  __int64 v5; // r12
  unsigned __int8 i; // r15
  char *v7; // rcx
  unsigned __int64 v8; // r11
  int j; // ebx
  __int64 v10; // rax
  int v11; // r9d
  int v12; // edx
  unsigned __int64 v13; // r8
  int v14; // edx
  unsigned __int64 v15; // r8
  unsigned __int64 v16; // rdx
  __int64 v17; // rax
  __int64 v18; // r8
  int v19; // edx
  __int64 v20; // rcx
  __int64 v21; // rcx
  char v22; // [rsp+38h] [rbp-69h] BYREF
  char v23; // [rsp+40h] [rbp-61h] BYREF
  __int16 v24; // [rsp+48h] [rbp-59h] BYREF
  int v25; // [rsp+50h] [rbp-51h] BYREF
  __int64 v26; // [rsp+60h] [rbp-41h] BYREF
  struct _EVENT_DATA_DESCRIPTOR UserData; // [rsp+68h] [rbp-39h] BYREF
  __int64 *v28; // [rsp+78h] [rbp-29h]
  __int64 v29; // [rsp+80h] [rbp-21h]
  char *v30; // [rsp+88h] [rbp-19h]
  __int64 v31; // [rsp+90h] [rbp-11h]
  int *v32; // [rsp+98h] [rbp-9h]
  __int64 v33; // [rsp+A0h] [rbp-1h]
  __int64 v34; // [rsp+A8h] [rbp+7h]
  int v35; // [rsp+B0h] [rbp+Fh]
  int v36; // [rsp+B4h] [rbp+13h]
  char *v37; // [rsp+B8h] [rbp+17h]
  __int64 v38; // [rsp+C0h] [rbp+1Fh]

  result = dword_14032E84C;
  v1 = 0;
  v2 = PpmParkNumNodes;
  v3 = PpmCheckMakeupCount;
  v4 = 174LL * dword_14032E84C;
  v5 = BYTE2(PpmCurrentProfile[v4 + 14]);
  for ( i = BYTE4(PpmCurrentProfile[v4 + 14]); v1 < v2; result = v1 )
  {
    v7 = (char *)PpmParkNodes + 120 * v1;
    v8 = *((_QWORD *)v7 + 10) - *((_QWORD *)v7 + 11);
    if ( v3 )
      v8 /= (unsigned int)(v3 + 1);
    if ( v8 )
    {
      for ( j = 0;
            j < (unsigned __int8)v7[6] + 1;
            *(_QWORD *)(8 * v10 + *((_QWORD *)v7 + 9)) = *(_QWORD *)(8 * v10 + *((_QWORD *)v7 + 7))
                                                       - *(_QWORD *)(8 * v10 + *((_QWORD *)v7 + 8)) )
      {
        v10 = j++;
      }
      v11 = (unsigned __int8)v7[6];
      v12 = v11;
      v13 = 0LL;
      do
      {
        v13 += *(_QWORD *)(*((_QWORD *)v7 + 9) + 8LL * v12);
        if ( v13 >= v8 - v8 * i / 0x64 )
          break;
        --v12;
      }
      while ( v12 >= 0 );
      v7[110] = v12;
      v14 = v11;
      v15 = 0LL;
      do
      {
        v15 += *(_QWORD *)(*((_QWORD *)v7 + 9) + 8LL * v14);
        if ( v15 >= v8 - v5 * v8 / 0x64 )
          break;
        --v14;
      }
      while ( v14 >= 0 );
      v7[108] = v14;
      if ( v14 <= 0 )
        v7[109] = 0;
      else
        v7[109] = 100LL * *(_QWORD *)(*((_QWORD *)v7 + 9) + 8LL * v14) / v8;
      *((_QWORD *)v7 + 11) += v8;
      while ( 1 )
      {
        v16 = *(_QWORD *)(8LL * v11 + *((_QWORD *)v7 + 9));
        v17 = *((_QWORD *)v7 + 8);
        if ( v16 > v8 )
          break;
        *(_QWORD *)(v17 + 8LL * v11) += v16;
        v8 -= v16;
        if ( --v11 < 0 )
          goto LABEL_20;
      }
      *(_QWORD *)(v17 + 8LL * v11) += v8;
LABEL_20:
      v22 = v7[110];
      v18 = *((_QWORD *)v7 + 8);
      v19 = (unsigned __int8)v7[6] + 1;
      v25 = v19;
      v23 = v7[108];
      v26 = *((_QWORD *)v7 + 1);
      v24 = *((_WORD *)v7 + 2);
      if ( PpmEtwRegistered && PpmEtwHandle )
      {
        if ( (v20 = *(_QWORD *)(PpmEtwHandle + 32), *(_DWORD *)(v20 + 80))
          && (unsigned __int8)(*(_BYTE *)(v20 + 84) - 1) > 3u
          && (*(_BYTE *)(v20 + 96) & 2) != 0
          && (*(_QWORD *)(v20 + 104) & 2LL) == *(_QWORD *)(v20 + 104)
          || *(_BYTE *)(PpmEtwHandle + 100)
          && (v21 = *(_QWORD *)(PpmEtwHandle + 40), *(_DWORD *)(v21 + 80))
          && (unsigned __int8)(*(_BYTE *)(v21 + 84) - 1) > 3u
          && (*(_BYTE *)(v21 + 96) & 2) != 0
          && (*(_QWORD *)(v21 + 104) & 2LL) == *(_QWORD *)(v21 + 104) )
        {
          v34 = v18;
          UserData.Ptr = (ULONGLONG)&v24;
          *(_QWORD *)&UserData.Size = 2LL;
          v28 = &v26;
          v29 = 8LL;
          v30 = &v23;
          v31 = 1LL;
          v32 = &v25;
          v35 = 8 * v19;
          v33 = 4LL;
          v37 = &v22;
          v36 = 0;
          v38 = 1LL;
          EtwWrite(PpmEtwHandle, &PPM_ETW_PARK_NODE_STATS, 0LL, 6u, &UserData);
          v2 = PpmParkNumNodes;
        }
      }
    }
    ++v1;
  }
  return result;
}

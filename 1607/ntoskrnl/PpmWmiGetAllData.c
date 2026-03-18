/*
 * XREFs of PpmWmiGetAllData @ 0x140673278
 * Callers:
 *     PpmWmiDispatch @ 0x140575768 (PpmWmiDispatch.c)
 * Callees:
 *     PopReleaseRwLock @ 0x14000DCD8 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14000E0B0 (PopAcquireRwLockShared.c)
 *     PpmPerfGetCurrentState @ 0x1400FAEEC (PpmPerfGetCurrentState.c)
 *     memset @ 0x1401715C0 (memset.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v7; // rdx
  __int64 v11; // r9
  int v12; // ebx
  char v13; // r13
  __int64 v14; // rbp
  __int64 v15; // rcx
  unsigned int v16; // edx
  unsigned __int64 v17; // rdx
  __int64 v18; // rcx
  unsigned int v19; // ecx
  int v20; // r15d
  int v21; // edi
  __int64 v22; // rax
  _DWORD *v23; // rdi
  __int64 v24; // rax
  __int64 v25; // rcx
  unsigned __int64 v26; // rcx
  __int64 v27; // r9
  unsigned int v28; // eax
  __int64 v29; // r8
  _DWORD *v30; // rdi
  __int64 v31; // r10
  __int64 v32; // rcx
  __int64 result; // rax
  __int64 v34; // [rsp+60h] [rbp+8h]

  v34 = (__int64)(a1 - 2976);
  v7 = PPM_IDLESTATES_DATA_GUID;
  v11 = PPM_IDLESTATES_DATA_GUID - *a2;
  if ( PPM_IDLESTATES_DATA_GUID == *a2 )
    v11 = 0xE710D47A1ACF1686uLL - a2[1];
  v12 = 0;
  if ( v11 )
  {
    v13 = 0;
  }
  else
  {
    v13 = 1;
    PopAcquireRwLockShared(&PpmIdlePolicyLock);
    v7 = PPM_IDLESTATES_DATA_GUID;
  }
  v14 = a1[46];
  v15 = PPM_PERFSTATES_DATA_GUID - *a2;
  if ( PPM_PERFSTATES_DATA_GUID == *a2 )
    v15 = 0x26018D33012BAAB4LL - a2[1];
  if ( v15 || !v14 )
  {
    v17 = v7 - *a2;
    if ( !v17 )
      v17 = 0xE710D47A1ACF1686uLL - a2[1];
    if ( v17 || !*a1 )
    {
      v18 = PPM_PERFMON_PERFSTATE_GUID - *a2;
      if ( PPM_PERFMON_PERFSTATE_GUID == *a2 )
        v18 = 0x9E75876A060BA1B0uLL - a2[1];
      if ( v18 || !v14 )
      {
        v21 = -1073741808;
        v20 = 0;
        goto LABEL_48;
      }
      v16 = 12;
    }
    else
    {
      v16 = 32 * *(_DWORD *)(*a1 + 28LL) + 56;
    }
  }
  else
  {
    v16 = 80;
  }
  v19 = (a6 != 0 ? 79 : 71) & 0xFFFFFFF8;
  v20 = v19 + v16;
  if ( a3 >= v19 + v16 )
  {
    *(_DWORD *)a4 = v20;
    if ( a6 )
    {
      v22 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v22;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v19;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v19;
    }
    *(_DWORD *)(a4 + 60) = v16;
    v23 = (_DWORD *)(a4 + v19);
    memset(v23, 0, v16);
    v24 = *a2;
    v25 = PPM_PERFSTATES_DATA_GUID - *a2;
    if ( PPM_PERFSTATES_DATA_GUID == *a2 )
      v25 = 0x26018D33012BAAB4LL - a2[1];
    if ( v25 || !v14 )
    {
      v26 = PPM_IDLESTATES_DATA_GUID - v24;
      if ( PPM_IDLESTATES_DATA_GUID == v24 )
        v26 = 0xE710D47A1ACF1686uLL - a2[1];
      if ( v26 || !*a1 )
      {
        v32 = PPM_PERFMON_PERFSTATE_GUID - *a2;
        if ( PPM_PERFMON_PERFSTATE_GUID == *a2 )
          v32 = 0x9E75876A060BA1B0uLL - a2[1];
        if ( !v32 && v14 )
          PpmPerfGetCurrentState(v34, v23, 0LL, v23 + 2, v23 + 1, 0LL);
      }
      else
      {
        v23[1] = *(_DWORD *)(*a1 + 28LL);
        v23[2] = *(_DWORD *)(*a1 + 12LL);
        v23[3] = *(_DWORD *)(*a1 + 20LL);
        *((_QWORD *)v23 + 2) = *(a1 - 2775);
        v27 = *a1;
        v28 = *(_DWORD *)(*a1 + 28LL);
        if ( v28 )
        {
          v29 = 0LL;
          v30 = v23 + 8;
          v31 = v28;
          do
          {
            v29 += 248LL;
            *(v30 - 2) = *(_DWORD *)(v29 + *a1 + 736) / 0xAu;
            *(v30 - 1) = *(_DWORD *)(v29 + *a1 + 744);
            *v30 = *(_DWORD *)(v27 + 516);
            v30 += 8;
            *((_BYTE *)v30 - 28) = *(_BYTE *)(v27 + 520);
            *((_BYTE *)v30 - 27) = *(_BYTE *)(v27 + 521);
            *((_BYTE *)v30 - 26) = *(_BYTE *)(v29 + *a1 + 792);
            *((_QWORD *)v30 - 3) = *(unsigned int *)(v29 + *a1 + 748);
            *(v30 - 4) = 1;
            --v31;
          }
          while ( v31 );
        }
      }
    }
    else
    {
      *v23 = 0;
      v23[1] = *(_DWORD *)(v14 + 300);
      *((_QWORD *)v23 + 1) = 0LL;
      *((_QWORD *)v23 + 2) = 0LL;
      *((_BYTE *)v23 + 28) = 100;
      *((_BYTE *)v23 + 29) = *(_BYTE *)(v14 + 336);
      v23[8] = HIDWORD(PpmCurrentProfile[174 * dword_140303E0C + 7]);
      *((_QWORD *)v23 + 5) = *(_QWORD *)(v14 + 32);
      v23[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v21 = -1073741789;
      goto LABEL_48;
    }
    *(_DWORD *)(a4 + 48) = v20;
    v20 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v21 = 0;
LABEL_48:
  if ( v13 )
    PopReleaseRwLock(&PpmIdlePolicyLock);
  result = (unsigned int)v21;
  if ( v21 >= 0 )
    v12 = v20;
  *a5 = v12;
  return result;
}

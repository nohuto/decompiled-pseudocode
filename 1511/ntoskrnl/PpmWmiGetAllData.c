/*
 * XREFs of PpmWmiGetAllData @ 0x14063BEEC
 * Callers:
 *     PpmWmiDispatch @ 0x1405403EC (PpmWmiDispatch.c)
 * Callees:
 *     PpmPerfGetCurrentState @ 0x14009ACEC (PpmPerfGetCurrentState.c)
 *     PopReleaseRwLock @ 0x14009D768 (PopReleaseRwLock.c)
 *     PopAcquireRwLockShared @ 0x14009DB3C (PopAcquireRwLockShared.c)
 *     memset @ 0x140166CC0 (memset.c)
 */

__int64 __fastcall PpmWmiGetAllData(_QWORD *a1, __int64 *a2, unsigned int a3, __int64 a4, int *a5, char a6)
{
  __int64 v6; // r10
  __int64 v8; // rdx
  __int64 v12; // r9
  int v13; // ebx
  char v14; // r13
  __int64 v15; // rbp
  __int64 v16; // rcx
  unsigned int v17; // edx
  __int64 v18; // rdx
  __int64 v19; // rcx
  unsigned int v20; // ecx
  int v21; // r15d
  int v22; // edi
  __int64 v23; // rax
  _DWORD *v24; // rdi
  __int64 v25; // rax
  __int64 v26; // rcx
  __int64 v27; // rcx
  __int64 v28; // r9
  unsigned int v29; // eax
  __int64 v30; // r8
  _DWORD *v31; // rdi
  __int64 v32; // r10
  __int64 v33; // rcx
  __int64 result; // rax
  __int64 v35; // [rsp+60h] [rbp+8h]

  v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
  v35 = (__int64)(a1 - 2976);
  v8 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  v12 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == *a2 )
    v12 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
  v13 = 0;
  if ( v12 )
  {
    v14 = 0;
  }
  else
  {
    v14 = 1;
    PopAcquireRwLockShared((volatile signed __int64 *)&PpmIdlePolicyLock);
    v6 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4;
    v8 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1;
  }
  v15 = a1[46];
  v16 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
  if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
    v16 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
  if ( v16 || !v15 )
  {
    v18 = v8 - *a2;
    if ( !v18 )
      v18 = v6 - a2[1];
    if ( v18 || !*a1 )
    {
      v19 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
      if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
        v19 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
      if ( v19 || !v15 )
      {
        v22 = -1073741808;
        v21 = 0;
        goto LABEL_48;
      }
      v17 = 12;
    }
    else
    {
      v17 = 32 * *(_DWORD *)(*a1 + 28LL) + 56;
    }
  }
  else
  {
    v17 = 80;
  }
  v20 = (a6 != 0 ? 79 : 71) & 0xFFFFFFF8;
  v21 = v20 + v17;
  if ( a3 >= v20 + v17 )
  {
    *(_DWORD *)a4 = v21;
    if ( a6 )
    {
      v23 = MEMORY[0xFFFFF78000000014];
      *(_DWORD *)(a4 + 44) |= 0x10u;
      *(_QWORD *)(a4 + 16) = v23;
      *(_DWORD *)(a4 + 52) = 1;
      *(_DWORD *)(a4 + 48) = v20;
    }
    else
    {
      *(_DWORD *)(a4 + 56) = v20;
    }
    *(_DWORD *)(a4 + 60) = v17;
    v24 = (_DWORD *)(a4 + v20);
    memset(v24, 0, v17);
    v25 = *a2;
    v26 = *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 - *a2;
    if ( *(_QWORD *)&PPM_PERFSTATES_DATA_GUID.Data1 == *a2 )
      v26 = *(_QWORD *)PPM_PERFSTATES_DATA_GUID.Data4 - a2[1];
    if ( v26 || !v15 )
    {
      v27 = *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 - v25;
      if ( *(_QWORD *)&PPM_IDLESTATES_DATA_GUID.Data1 == v25 )
        v27 = *(_QWORD *)PPM_IDLESTATES_DATA_GUID.Data4 - a2[1];
      if ( v27 || !*a1 )
      {
        v33 = *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 - *a2;
        if ( *(_QWORD *)&PPM_PERFMON_PERFSTATE_GUID.Data1 == *a2 )
          v33 = *(_QWORD *)PPM_PERFMON_PERFSTATE_GUID.Data4 - a2[1];
        if ( !v33 && v15 )
          PpmPerfGetCurrentState(v35, v24, 0LL, v24 + 2, v24 + 1, 0LL);
      }
      else
      {
        v24[1] = *(_DWORD *)(*a1 + 28LL);
        v24[2] = *(_DWORD *)(*a1 + 12LL);
        v24[3] = *(_DWORD *)(*a1 + 20LL);
        *((_QWORD *)v24 + 2) = *(a1 - 2775);
        v28 = *a1;
        v29 = *(_DWORD *)(*a1 + 28LL);
        if ( v29 )
        {
          v30 = 0LL;
          v31 = v24 + 8;
          v32 = v29;
          do
          {
            v30 += 248LL;
            *(v31 - 2) = *(_DWORD *)(v30 + *a1 + 736) / 0xAu;
            *(v31 - 1) = *(_DWORD *)(v30 + *a1 + 744);
            *v31 = *(_DWORD *)(v28 + 516);
            v31 += 8;
            *((_BYTE *)v31 - 28) = *(_BYTE *)(v28 + 520);
            *((_BYTE *)v31 - 27) = *(_BYTE *)(v28 + 521);
            *((_BYTE *)v31 - 26) = *(_BYTE *)(v30 + *a1 + 792);
            *((_QWORD *)v31 - 3) = *(unsigned int *)(v30 + *a1 + 748);
            *(v31 - 4) = 1;
            --v32;
          }
          while ( v32 );
        }
      }
    }
    else
    {
      *v24 = 0;
      v24[1] = *(_DWORD *)(v15 + 292);
      *((_QWORD *)v24 + 1) = 0LL;
      *((_QWORD *)v24 + 2) = 0LL;
      *((_BYTE *)v24 + 28) = 100;
      *((_BYTE *)v24 + 29) = *(_BYTE *)(v15 + 328);
      v24[8] = HIDWORD(PpmCurrentProfile[174 * dword_1402DE28C + 7]);
      *((_QWORD *)v24 + 5) = *(_QWORD *)(v15 + 32);
      v24[16] = 1;
    }
  }
  else
  {
    if ( a3 < 0x38 )
    {
      v22 = -1073741789;
      goto LABEL_48;
    }
    *(_DWORD *)(a4 + 48) = v21;
    v21 = 56;
    *(_DWORD *)(a4 + 44) = 32;
  }
  v22 = 0;
LABEL_48:
  if ( v14 )
    PopReleaseRwLock((signed __int64 *)&PpmIdlePolicyLock);
  result = (unsigned int)v22;
  if ( v22 >= 0 )
    v13 = v21;
  *a5 = v13;
  return result;
}

/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x14066B1AC
 * Callers:
 *     <none>
 * Callees:
 *     KeGetProcessorIndexFromNumber @ 0x14000D810 (KeGetProcessorIndexFromNumber.c)
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     KeQueryActiveProcessorAffinity @ 0x1401448E4 (KeQueryActiveProcessorAffinity.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmResetPlatformIdleAccounting @ 0x140200D54 (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14066AC0C (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x1406764B8 (PpmIdleUpdatePlatformDependencies.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1)
{
  __int64 v1; // rbp
  ULONG v2; // esi
  unsigned int v3; // edi
  ULONG v4; // r15d
  unsigned int v5; // ecx
  unsigned int v6; // edx
  _DWORD *v7; // rax
  int v8; // ebx
  int v9; // eax
  ULONG v10; // r14d
  __int64 v11; // rcx
  int v12; // eax
  unsigned int v13; // r12d
  unsigned int v14; // ecx
  size_t v15; // rbx
  PVOID PoolWithTag; // rax
  __int64 v17; // r14
  bool v18; // zf
  int *v19; // rax
  __int64 v20; // r13
  unsigned int v21; // edi
  __int64 v22; // rbx
  _DWORD *v23; // rcx
  _QWORD *v24; // rax
  unsigned int v25; // ecx
  __int64 v26; // r13
  __int64 v27; // rdi
  __int64 v28; // rdx
  __int64 v29; // r12
  __int128 v30; // xmm0
  __int64 v31; // rbp
  __int64 v32; // rbx
  __int64 v33; // rcx
  int v34; // eax
  ULONG v35; // ebx
  unsigned int v36; // r12d
  __int64 Prcb; // rax
  unsigned int v38; // r9d
  __int64 v39; // r10
  __int64 v40; // rcx
  __int64 v41; // rdx
  __int64 v42; // r8
  unsigned int v43; // r12d
  unsigned int v44; // r9d
  __int64 v45; // r13
  __int64 v46; // rbx
  __int64 v47; // r11
  unsigned int v48; // ecx
  __int64 v49; // r15
  __int64 v50; // rdi
  unsigned int v51; // eax
  __int64 v52; // r8
  __int64 v53; // rdx
  ULONG ProcessorIndexFromNumber; // eax
  __int64 v55; // rbx
  __int64 v56; // rdi
  int v57; // edx
  __int64 v58; // rcx
  __int64 v59; // rax
  ULONG i; // ebx
  unsigned int v61; // edi
  __int64 v62; // r13
  unsigned int v63; // eax
  __int64 v64; // r12
  __int64 v65; // rcx
  char v66; // al
  unsigned int v68; // [rsp+20h] [rbp-58h]
  unsigned int v69; // [rsp+24h] [rbp-54h]
  unsigned int v71; // [rsp+88h] [rbp+10h]
  int v72; // [rsp+88h] [rbp+10h]
  __int64 v73; // [rsp+88h] [rbp+10h]
  ULONG v74; // [rsp+90h] [rbp+18h]
  unsigned int v75; // [rsp+98h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
  v2 = 0;
  if ( PpmPlatformStates && !*(_BYTE *)(v1 + 48) )
  {
    v2 = -1073741431;
    goto LABEL_68;
  }
  v3 = *(_DWORD *)(v1 + 4);
  if ( !v3 || *(_DWORD *)(v1 + 8) > v3 )
    goto LABEL_67;
  PpmIdleUpdatePlatformDependencies(v1);
  v4 = KeNumberProcessors_0;
  v5 = 0;
  v6 = *(_DWORD *)(v1 + 8);
  v74 = KeNumberProcessors_0;
  if ( v6 )
  {
    v7 = (_DWORD *)(v1 + 72);
    while ( *v7 <= (unsigned int)KeNumberProcessors_0 )
    {
      ++v5;
      v7 += 12;
      if ( v5 >= v6 )
        goto LABEL_10;
    }
    goto LABEL_67;
  }
LABEL_10:
  v8 = 0;
  v9 = 0;
  if ( v6 )
  {
    v10 = 0;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      do
      {
        v11 = *(_QWORD *)(KeGetPrcb(v10) + 23808);
        if ( !v11 )
          goto LABEL_67;
        v8 += *(_DWORD *)(v11 + 28);
      }
      while ( ++v10 < v4 );
    }
    v12 = *(_DWORD *)(v1 + 8);
    v8 = v12 * (v4 + v8);
    v9 = v4 * v12;
  }
  if ( !PpmPlatformStates )
  {
    v71 = (384 * v3 + 71) & 0xFFFFFFF8;
    v75 = (v71 + 24 * v9 + 7) & 0xFFFFFFF8;
    v13 = (v75 + 7 + 24 * v8) & 0xFFFFFFF8;
    v69 = (4 * v3 + 15) & 0xFFFFFFF8;
    v68 = (v13 + 1000 * v3 + 31) & 0xFFFFFFF8;
    v14 = (v4 * v69 + 7 + v68) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v14 += (v3 * *(_DWORD *)PpmIdleVetoList) << 6;
    v15 = v14;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v14, 0x694D5050u);
    v17 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v2 = -1073741670;
      goto LABEL_68;
    }
    memset(PoolWithTag, 0, v15);
    *(_DWORD *)v17 = v3;
    v18 = *(_DWORD *)(v1 + 8) == 0;
    *(_DWORD *)(v17 + 8) = v4;
    *(_DWORD *)(v17 + 4) = !v18;
    *(_QWORD *)(v17 + 16) = *(_QWORD *)(v1 + 16);
    *(_QWORD *)(v17 + 24) = *(_QWORD *)(v1 + 24);
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(v1 + 32);
    *(_QWORD *)(v17 + 40) = *(_QWORD *)(v1 + 40);
    v19 = (int *)(v17 + v13);
    *(_QWORD *)(v17 + 48) = v19;
    v19[1] = v3;
    PpmResetPlatformIdleAccounting(v19);
    v20 = v17 + ((v4 * v69 + 7 + v68) & 0xFFFFFFF8);
    v21 = 0;
    if ( *(_DWORD *)(v1 + 4) )
    {
      do
      {
        v22 = 384LL * v21;
        *(_BYTE *)(v22 + v17 + 113) = 1;
        KeQueryActiveProcessorAffinity(v22 + v17 + 120);
        v23 = (_DWORD *)PpmIdleVetoList;
        v24 = (_QWORD *)(v22 + v17 + 80);
        v24[1] = v24;
        *v24 = v24;
        *(_BYTE *)(v22 + v17 + 96) = 7;
        if ( v23 )
        {
          if ( v21 == *(_DWORD *)(v1 + 4) - 1 )
            *(_BYTE *)(v22 + v17 + 97) = 1;
          *(_DWORD *)(v22 + v17 + 100) = *v23;
          *(_QWORD *)(v22 + v17 + 104) = v20;
          v20 += (unsigned __int64)(unsigned int)*v23 << 6;
          *(_QWORD *)(1000LL * v21 + v17 + v13 + 184) = v22 + v17 + 72;
        }
        ++v21;
      }
      while ( v21 < *(_DWORD *)(v1 + 4) );
      v4 = v74;
    }
    v25 = 0;
    v26 = v17 + v71;
    v27 = v17 + v75;
    v72 = 0;
    if ( *(_DWORD *)(v1 + 8) )
    {
      v28 = 24LL * v4;
      do
      {
        v29 = 384LL * v25;
        v30 = *(_OWORD *)(v1 + 48LL * v25 + 80);
        *(_QWORD *)(v29 + v17 + 304) = v26;
        v26 += v28;
        *(_DWORD *)(v29 + v17 + 116) = v4;
        *(_OWORD *)(v29 + v17 + 288) = v30;
        if ( v4 )
        {
          v31 = 0LL;
          do
          {
            v32 = *(_QWORD *)(v29 + v17 + 304);
            v33 = *(_QWORD *)(KeGetPrcb(v2) + 23808);
            *(_DWORD *)(v32 + v31) = v2++;
            v31 += 24LL;
            v34 = *(_DWORD *)(v33 + 28);
            *(_QWORD *)(v32 + v31 - 8) = v27;
            *(_DWORD *)(v32 + v31 - 16) = v34;
            v27 += 24LL * *(unsigned int *)(v33 + 28);
          }
          while ( v2 < v4 );
          v1 = a1;
          v2 = 0;
          v25 = v72;
          v28 = 24LL * v4;
        }
        v72 = ++v25;
      }
      while ( v25 < *(_DWORD *)(v1 + 8) );
    }
    v35 = 0;
    if ( v4 )
    {
      v36 = v68;
      do
      {
        Prcb = KeGetPrcb(v35);
        v38 = 0;
        v39 = *(_QWORD *)(Prcb + 23808);
        *(_QWORD *)(v39 + 736) = v17 + v36;
        *(_DWORD *)(v39 + 760) = *(_DWORD *)(v1 + 8);
        *(_QWORD *)(v39 + 768) = v27;
        v40 = *(unsigned int *)(v1 + 8);
        v27 += 24 * v40;
        if ( (_DWORD)v40 )
        {
          do
          {
            v41 = 3LL * ((unsigned int)v40 - v38 - 1);
            v42 = 384LL * v38;
            v40 = *(_QWORD *)(v39 + 768);
            *(_DWORD *)(v40 + 8 * v41 + 4) = v38++;
            *(_DWORD *)(v40 + 8 * v41 + 8) = *(_DWORD *)(v42 + v17 + 116);
            *(_QWORD *)(v40 + 8 * v41 + 16) = *(_QWORD *)(v42 + v17 + 304);
            LODWORD(v40) = *(_DWORD *)(v1 + 8);
          }
          while ( v38 < (unsigned int)v40 );
        }
        ++v35;
        v36 += v69;
      }
      while ( v35 < v4 );
    }
    goto LABEL_43;
  }
  v17 = PpmPlatformStates;
  if ( *(_DWORD *)(PpmPlatformStates + 8) != v4
    || *(_DWORD *)PpmPlatformStates != v3
    || *(_DWORD *)(PpmPlatformStates + 4) != 1 )
  {
LABEL_67:
    v2 = -1073741811;
    goto LABEL_68;
  }
LABEL_43:
  v43 = 0;
  if ( *(_DWORD *)(v1 + 8) )
  {
    do
    {
      v44 = 0;
      v45 = v1 + 48LL * v43;
      v46 = 384LL * v43;
      *(_DWORD *)(v46 + v17 + 64) = *(_DWORD *)(v45 + 64);
      *(_DWORD *)(v46 + v17 + 68) = *(_DWORD *)(v45 + 68);
      if ( *(_DWORD *)(v45 + 72) )
      {
        do
        {
          v47 = *(_QWORD *)(v45 + 96);
          v48 = 0;
          v49 = *(_QWORD *)(v46 + v17 + 304);
          v50 = 3LL * *(unsigned int *)(v47 + 8LL * v44);
          v51 = *(_DWORD *)(v49 + 24LL * *(unsigned int *)(v47 + 8LL * v44) + 8);
          if ( v51 )
          {
            do
            {
              v52 = *(_QWORD *)(v49 + 8 * v50 + 16);
              v53 = 3LL * (v51 - v48 - 1);
              *(_QWORD *)(v52 + 8 * v53) = 0LL;
              *(_QWORD *)(v52 + 8 * v53 + 8) = 0LL;
              *(_QWORD *)(v52 + 8 * v53 + 16) = 0LL;
              *(_DWORD *)(v52 + 8 * v53 + 4) = v48;
              if ( !*(_BYTE *)(v45 + 60) && v48 == *(unsigned __int8 *)(v45 + 61) )
                *(_BYTE *)(v52 + 24LL * (v51 - v48 - 1) + 1) = 1;
              if ( v48 >= *(unsigned __int8 *)(v47 + 8LL * v44 + 4) )
              {
                *(_BYTE *)(v52 + 24LL * (v51 - v48 - 1) + 2) = 1;
                if ( !*(_BYTE *)(v47 + 8LL * v44 + 6) )
                  *(_BYTE *)(v52 + 24LL * (v51 - v48 - 1)) = 1;
              }
              v51 = *(_DWORD *)(v49 + 8 * v50 + 8);
              ++v48;
            }
            while ( v48 < v51 );
          }
          ++v44;
        }
        while ( v44 < *(_DWORD *)(v45 + 72) );
      }
      if ( *(_BYTE *)(v45 + 60) )
      {
        ProcessorIndexFromNumber = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)(v45 + 56));
        v55 = *(_QWORD *)(v46 + v17 + 304);
        v56 = 3LL * ProcessorIndexFromNumber;
        memset(
          *(void **)(v55 + 24LL * ProcessorIndexFromNumber + 16),
          0,
          24LL * *(unsigned int *)(v55 + 24LL * ProcessorIndexFromNumber + 8));
        v57 = *(unsigned __int8 *)(v45 + 61);
        v58 = 3LL * (unsigned int)(*(_DWORD *)(v55 + 8 * v56 + 8) - v57 - 1);
        v59 = *(_QWORD *)(v55 + 8 * v56 + 16);
        *(_DWORD *)(v59 + 8 * v58 + 4) = v57;
        *(_BYTE *)(v59 + 8 * v58 + 1) = 1;
      }
      ++v43;
    }
    while ( v43 < *(_DWORD *)(v1 + 8) );
    v4 = v74;
  }
  for ( i = 0; i < v4; ++i )
  {
    v61 = 0;
    v62 = *(_QWORD *)(KeGetPrcb(i) + 23808);
    v63 = *(_DWORD *)(v62 + 760);
    if ( v63 )
    {
      do
      {
        v64 = 3LL * (v63 - v61 - 1);
        v73 = *(_QWORD *)(v62 + 768);
        v65 = v1 + 48LL * v61 + 56;
        if ( !*(_BYTE *)(v65 + 4) || (v18 = KeGetProcessorIndexFromNumber((PPROCESSOR_NUMBER)v65) == i, v66 = 0, v18) )
          v66 = 1;
        ++v61;
        *(_BYTE *)(v73 + 8 * v64 + 1) = v66;
        v63 = *(_DWORD *)(v62 + 760);
      }
      while ( v61 < v63 );
    }
  }
  if ( !PpmPlatformStates )
    PpmEnableCoordinatedIdleStates((int *)v17, 0);
LABEL_68:
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return v2;
}

/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x14066AC3C
 * Callers:
 *     <none>
 * Callees:
 *     PopReleaseRwLock @ 0x14000D858 (PopReleaseRwLock.c)
 *     KeCopyAffinityEx @ 0x140030B70 (KeCopyAffinityEx.c)
 *     KeGetPrcb @ 0x1400D1E98 (KeGetPrcb.c)
 *     PopAcquireRwLockExclusive @ 0x1400F9D28 (PopAcquireRwLockExclusive.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x1401FF538 (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x140200D54 (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x14066AC0C (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x14067634C (PpmIdleUpdateCoordinatedDependencies.c)
 */

__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1)
{
  unsigned int *v1; // rsi
  int updated; // ebx
  __int64 v3; // rdi
  ULONG v4; // r12d
  int v5; // r9d
  int v6; // r10d
  _DWORD *v7; // rdx
  __int64 v8; // r11
  int v9; // eax
  unsigned int v10; // r14d
  unsigned int v11; // ecx
  unsigned int v12; // r15d
  unsigned int v13; // ecx
  __int64 v14; // r13
  size_t v15; // rbp
  PVOID PoolWithTag; // rax
  __int64 v17; // rbx
  int *v18; // rbp
  __int64 v19; // rdx
  __int64 v20; // r8
  _DWORD *v21; // r10
  __int64 v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r15
  __int64 v25; // r13
  unsigned __int16 *v26; // r14
  __int64 v27; // rsi
  __int64 v28; // rbp
  __int64 v29; // rdx
  __int64 v30; // rcx
  __int64 v31; // rcx
  ULONG v32; // r14d
  __int64 v33; // rbp
  __int64 Prcb; // rax
  unsigned int v35; // r9d
  __int64 v36; // r8
  _QWORD *v37; // r10
  __int64 v38; // rcx
  __int64 v39; // rdx
  __int64 v40; // rax
  __int64 v41; // r8
  unsigned int *v42; // rsi
  __int64 v43; // r15
  __int64 v44; // rbp
  __int64 v45; // r12
  __int64 v46; // r13
  __int64 v47; // r14
  __int64 v48; // r9
  unsigned int v49; // eax
  __int64 v50; // rcx
  __int64 v51; // r11
  __int64 v52; // r10
  unsigned int v53; // eax
  __int64 v54; // rcx
  ULONG i; // esi
  unsigned int v56; // ebp
  __int64 v57; // r14
  char v58; // al
  __int64 v59; // r10
  __int64 v60; // r11
  int v62; // [rsp+20h] [rbp-58h]
  ULONG v63; // [rsp+24h] [rbp-54h]
  unsigned int v65; // [rsp+88h] [rbp+10h]
  unsigned int v66; // [rsp+90h] [rbp+18h]
  unsigned int v67; // [rsp+98h] [rbp+20h]

  v1 = a1;
  PopAcquireRwLockExclusive((unsigned __int64 *)&PpmIdlePolicyLock);
  if ( PpmPlatformStates && !*((_BYTE *)v1 + 40) )
  {
    updated = -1073741431;
    goto LABEL_48;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v1);
  if ( updated < 0 )
    goto LABEL_48;
  v3 = *v1;
  if ( !(_DWORD)v3 )
    goto LABEL_47;
  v4 = KeNumberProcessors_0;
  v5 = 0;
  v63 = KeNumberProcessors_0;
  v6 = v3 * KeNumberProcessors_0;
  v7 = v1 + 61;
  v8 = (unsigned int)v3;
  do
  {
    v9 = *v7 * *(v7 - 1);
    v5 += *v7;
    v7 += 54;
    v6 += v9;
    --v8;
  }
  while ( v8 );
  if ( !PpmPlatformStates )
  {
    v10 = (384 * v3 + 71) & 0xFFFFFFF8;
    v66 = (v10 + 7 + 24 * v5) & 0xFFFFFFF8;
    v11 = v66 + 24 * v6;
    v67 = (v11 + 3) & 0xFFFFFFFC;
    v12 = (v11 + 4 * v3 * KeNumberProcessors_0 + 7) & 0xFFFFFFF8;
    v62 = (4 * v3 + 15) & 0xFFFFFFF8;
    v65 = (v12 + 1000 * v3 + 31) & 0xFFFFFFF8;
    v13 = (KeNumberProcessors_0 * v62 + 7 + v65) & 0xFFFFFFF8;
    v14 = v13;
    if ( PpmIdleVetoList )
      v13 += ((_DWORD)v3 * *(_DWORD *)PpmIdleVetoList) << 6;
    v15 = v13;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v13, 0x694D5050u);
    v17 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      updated = -1073741670;
      goto LABEL_48;
    }
    memset(PoolWithTag, 0, v15);
    *(_DWORD *)v17 = v3;
    *(_DWORD *)(v17 + 4) = 1;
    *(_BYTE *)(v17 + 12) = 1;
    *(_DWORD *)(v17 + 8) = v4;
    *(_QWORD *)(v17 + 16) = *((_QWORD *)v1 + 1);
    *(_QWORD *)(v17 + 24) = *((_QWORD *)v1 + 2);
    *(_QWORD *)(v17 + 32) = *((_QWORD *)v1 + 3);
    *(_QWORD *)(v17 + 40) = *((_QWORD *)v1 + 4);
    v18 = (int *)(v17 + v12);
    *(_QWORD *)(v17 + 48) = v18;
    v18[1] = v3;
    PpmResetPlatformIdleAccounting(v18);
    v19 = 0LL;
    v20 = v17 + v14;
    if ( *v1 )
    {
      v21 = (_DWORD *)PpmIdleVetoList;
      do
      {
        v22 = 384 * v19;
        v23 = (_QWORD *)(384 * v19 + v17 + 80);
        v23[1] = v23;
        *v23 = v23;
        *(_BYTE *)(384 * v19 + v17 + 96) = 7;
        if ( v21 )
        {
          if ( (_DWORD)v19 == *v1 - 1 )
            *(_BYTE *)(v22 + v17 + 97) = 1;
          *(_DWORD *)(v22 + v17 + 100) = *v21;
          *(_QWORD *)(v22 + v17 + 104) = v20;
          v20 += (unsigned __int64)(unsigned int)*v21 << 6;
          *(_QWORD *)&v18[250 * (unsigned int)v19 + 46] = v17 + v22 + 72;
        }
        v19 = (unsigned int)(v19 + 1);
      }
      while ( (unsigned int)v19 < *v1 );
    }
    v24 = v17 + v66;
    v25 = v17 + v10;
    v26 = (unsigned __int16 *)(v1 + 61);
    v27 = v3;
    v28 = v17 + 120;
    do
    {
      *(_OWORD *)(v28 + 168) = *(_OWORD *)(v26 - 14);
      KeCopyAffinityEx(v28, v26 - 98);
      v29 = 0LL;
      *(_DWORD *)(v28 - 4) = *(_DWORD *)v26;
      *(_QWORD *)(v28 + 184) = v25;
      v30 = *(unsigned int *)v26;
      v25 += 24 * v30;
      if ( (_DWORD)v30 )
      {
        do
        {
          v31 = 3 * v29;
          v29 = (unsigned int)(v29 + 1);
          *(_QWORD *)(*(_QWORD *)(v28 + 184) + 8 * v31 + 16) = v24;
          v24 += 24LL * *((unsigned int *)v26 - 1);
        }
        while ( (unsigned int)v29 < *(_DWORD *)v26 );
      }
      v26 += 108;
      v28 += 384LL;
      --v27;
    }
    while ( v27 );
    v1 = a1;
    v32 = 0;
    v33 = v17 + v67;
    if ( v4 )
    {
      do
      {
        Prcb = KeGetPrcb(v32);
        v35 = 0;
        v36 = *(_QWORD *)(Prcb + 23808);
        *(_QWORD *)(v36 + 768) = v24;
        v24 += 24 * v3;
        *(_QWORD *)(v36 + 792) = v33;
        v33 += 4 * v3;
        *(_QWORD *)(v36 + 736) = v17 + v65;
        *(_DWORD *)(v36 + 760) = v3;
        *(_DWORD *)(v36 + 776) = v3;
        v37 = (_QWORD *)(v17 + 304);
        do
        {
          v38 = *(_QWORD *)(v36 + 768);
          v39 = 3LL * ((unsigned int)v3 - v35 - 1);
          *(_DWORD *)(v38 + 8 * v39 + 4) = v35++;
          *(_DWORD *)(v38 + 8 * v39 + 8) = *((_DWORD *)v37 - 47);
          v40 = *v37;
          v37 += 48;
          *(_QWORD *)(v38 + 8 * v39 + 16) = v40;
        }
        while ( v35 < (unsigned int)v3 );
        ++v32;
        v65 += v62;
      }
      while ( v32 < v4 );
      v1 = a1;
    }
    goto LABEL_31;
  }
  v17 = PpmPlatformStates;
  if ( *(_DWORD *)(PpmPlatformStates + 8) != (_DWORD)KeNumberProcessors_0
    || *(_QWORD *)PpmPlatformStates != ((unsigned int)v3 | 0x100000000LL) )
  {
LABEL_47:
    updated = -1073741811;
    goto LABEL_48;
  }
LABEL_31:
  v41 = v17 + 113;
  v42 = v1 + 59;
  v43 = v3;
  do
  {
    v44 = 0LL;
    *(_DWORD *)(v41 - 49) = *(v42 - 1);
    *(_DWORD *)(v41 - 45) = *v42;
    for ( *(_BYTE *)v41 = *((_BYTE *)v42 + 12); (unsigned int)v44 < v42[2]; v44 = (unsigned int)(v44 + 1) )
    {
      v45 = *(_QWORD *)(v41 + 191);
      v46 = 3 * v44;
      v47 = 0LL;
      v48 = *(_QWORD *)(v42 + 5) + 16LL * (unsigned int)v44;
      *(_DWORD *)(v45 + 8 * v46) = *(_DWORD *)v48;
      *(_DWORD *)(v45 + 8 * v46 + 8) = *(_DWORD *)(v48 + 4);
      v49 = *(_DWORD *)(v48 + 4);
      if ( v49 )
      {
        do
        {
          v50 = *(_QWORD *)(v48 + 8);
          v51 = *(_QWORD *)(v45 + 24 * v44 + 16);
          v52 = 3LL * (v49 - (unsigned int)v47 - 1);
          v53 = *(unsigned __int8 *)(v50 + 4 * v47);
          *(_DWORD *)(v51 + 8 * v52 + 4) = v53;
          *(_BYTE *)(v51 + 8 * v52) = *(_BYTE *)(v50 + 4 * v47 + 1) == 0;
          *(_BYTE *)(v51 + 8 * v52 + 1) = *(_BYTE *)(v50 + 4 * v47 + 2);
          *(_BYTE *)(v51 + 8 * v52 + 2) = *(_BYTE *)(v50 + 4 * v47 + 3);
          if ( *(_DWORD *)(v45 + 24 * v44) == -1 )
          {
            v54 = 384LL * v53;
            *(_DWORD *)(v51 + 8 * v52 + 8) = *(_DWORD *)(v54 + v17 + 116);
            *(_QWORD *)(v51 + 8 * v52 + 16) = *(_QWORD *)(v54 + v17 + 304);
          }
          else
          {
            *(_DWORD *)(v51 + 8 * v52 + 8) = 0;
            *(_QWORD *)(v51 + 8 * v52 + 16) = 0LL;
          }
          v49 = *(_DWORD *)(v48 + 4);
          v47 = (unsigned int)(v47 + 1);
        }
        while ( (unsigned int)v47 < v49 );
      }
    }
    v41 += 384LL;
    v42 += 54;
    --v43;
  }
  while ( v43 );
  for ( i = 0; i < v63; ++i )
  {
    v56 = 0;
    v57 = *(_QWORD *)(KeGetPrcb(i) + 23808);
    do
    {
      v58 = PpmCheckCoordinatedStateInitiator(
              i,
              *(_DWORD *)(*(_QWORD *)(v57 + 768) + 24LL * ((unsigned int)v3 - v56 - 1) + 8),
              *(_QWORD *)(*(_QWORD *)(v57 + 768) + 24LL * ((unsigned int)v3 - v56 - 1) + 16));
      ++v56;
      *(_BYTE *)(v59 + 8 * v60 + 1) = v58;
    }
    while ( v56 < (unsigned int)v3 );
  }
  if ( !PpmPlatformStates )
    PpmEnableCoordinatedIdleStates((int *)v17, 1);
  updated = 0;
LABEL_48:
  PopReleaseRwLock(&PpmIdlePolicyLock);
  return (unsigned int)updated;
}

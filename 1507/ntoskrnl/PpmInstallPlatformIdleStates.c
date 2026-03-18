/*
 * XREFs of PpmInstallPlatformIdleStates @ 0x1406B1428
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     KeQueryActiveProcessorAffinity @ 0x140167D5C (KeQueryActiveProcessorAffinity.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmResetPlatformIdleAccounting @ 0x1402357E0 (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1406B0D08 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdatePlatformDependencies @ 0x1406BE504 (PpmIdleUpdatePlatformDependencies.c)
 */

__int64 __fastcall PpmInstallPlatformIdleStates(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rbx
  unsigned int v10; // ebx
  unsigned int v11; // ebx
  __int64 v12; // r15
  unsigned int v13; // ecx
  _DWORD *v14; // rax
  int v15; // ecx
  int v16; // eax
  __int64 *v17; // r8
  __int64 v18; // rax
  __int64 v19; // r9
  int v20; // eax
  unsigned int v21; // ebp
  unsigned int v22; // r13d
  unsigned int v23; // r12d
  unsigned int v24; // ecx
  size_t v25; // rdi
  PVOID PoolWithTag; // rax
  __int64 v27; // r14
  bool v28; // zf
  int *v29; // rcx
  __int64 v30; // rdi
  __int64 i; // r12
  __int64 v32; // rbx
  unsigned int *v33; // rcx
  _QWORD *v34; // rax
  int v35; // eax
  __int64 v36; // r9
  __int64 v37; // r8
  unsigned int j; // r10d
  unsigned int v39; // r11d
  __int64 v40; // rdx
  __int128 v41; // xmm0
  __int64 v42; // rbx
  __int64 *v43; // rbp
  __int64 v44; // r12
  __int64 v45; // rcx
  __int64 v46; // rcx
  int v47; // eax
  unsigned int v48; // r10d
  unsigned int v49; // r12d
  __int64 *v50; // rdi
  __int64 v51; // rbp
  __int64 v52; // rbp
  __int64 v53; // rbx
  __int64 v54; // r11
  __int64 v55; // rcx
  __int64 v56; // r8
  __int64 v57; // rdx
  unsigned int v58; // r12d
  unsigned int v59; // r9d
  __int64 v60; // rbx
  __int64 v61; // r11
  unsigned int v62; // ecx
  __int64 v63; // r13
  __int64 v64; // rdi
  unsigned int v65; // eax
  __int64 v66; // r8
  __int64 v67; // rdx
  unsigned __int16 v68; // ax
  __int64 v69; // rax
  unsigned __int8 v70; // dl
  __int64 v71; // rbx
  __int64 v72; // rdi
  int v73; // edx
  __int64 v74; // rcx
  __int64 v75; // rax
  __int64 *v76; // rbp
  __int64 v77; // rax
  __int64 v78; // r10
  unsigned int v79; // r8d
  unsigned int v80; // eax
  unsigned __int16 v81; // r11
  __int64 v82; // rbx
  unsigned __int16 v83; // ax
  int v84; // eax
  unsigned __int8 v85; // r9
  char v86; // al
  signed __int64 v87; // rcx
  ULONG_PTR v88; // rtt
  struct _KTHREAD *v89; // rdx
  __int16 v90; // ax
  unsigned int v92; // [rsp+20h] [rbp-48h]
  int v93; // [rsp+78h] [rbp+10h]
  unsigned int v94; // [rsp+88h] [rbp+20h]

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
  v9 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v6, (ULONG_PTR)&PpmIdlePolicyLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_14032E288 = (__int64)KeGetCurrentThread();
  if ( PpmPlatformStates && !*(_BYTE *)(a1 + 48) )
  {
    v10 = -1073741431;
    goto LABEL_104;
  }
  v11 = *(_DWORD *)(a1 + 4);
  if ( !v11 || *(_DWORD *)(a1 + 8) > v11 )
    goto LABEL_103;
  PpmIdleUpdatePlatformDependencies(a1);
  v12 = (unsigned int)KeNumberProcessors_0;
  v13 = 0;
  v7 = *(unsigned int *)(a1 + 8);
  v93 = KeNumberProcessors_0;
  if ( (_DWORD)v7 )
  {
    v14 = (_DWORD *)(a1 + 72);
    while ( *v14 <= (unsigned int)KeNumberProcessors_0 )
    {
      ++v13;
      v14 += 12;
      if ( v13 >= (unsigned int)v7 )
        goto LABEL_14;
    }
LABEL_103:
    v10 = -1073741811;
    goto LABEL_104;
  }
LABEL_14:
  v15 = 0;
  v16 = 0;
  if ( (_DWORD)v7 )
  {
    v7 = 0LL;
    if ( (_DWORD)KeNumberProcessors_0 )
    {
      v17 = KiProcessorBlock;
      do
      {
        v18 = (unsigned int)v7 >= (unsigned int)KeNumberProcessors_0 ? 0LL : *v17;
        v19 = *(_QWORD *)(v18 + 23808);
        if ( !v19 )
          goto LABEL_103;
        v15 += *(_DWORD *)(v19 + 28);
        v7 = (unsigned int)(v7 + 1);
        ++v17;
      }
      while ( (unsigned int)v7 < (unsigned int)KeNumberProcessors_0 );
    }
    v20 = *(_DWORD *)(a1 + 8);
    v15 = v20 * (KeNumberProcessors_0 + v15);
    v16 = KeNumberProcessors_0 * v20;
  }
  if ( PpmPlatformStates )
  {
    v27 = PpmPlatformStates;
    if ( *(_DWORD *)(PpmPlatformStates + 8) != (_DWORD)KeNumberProcessors_0
      || *(_DWORD *)PpmPlatformStates != v11
      || *(_DWORD *)(PpmPlatformStates + 4) != 1 )
    {
      goto LABEL_103;
    }
  }
  else
  {
    v21 = (384 * v11 + 71) & 0xFFFFFFF8;
    v22 = (v21 + 7 + 24 * v16) & 0xFFFFFFF8;
    v23 = (v22 + 7 + 24 * v15) & 0xFFFFFFF8;
    v92 = (4 * v11 + 15) & 0xFFFFFFF8;
    v94 = (v23 + 992 * v11 + 31) & 0xFFFFFFF8;
    v24 = (KeNumberProcessors_0 * v92 + 7 + v94) & 0xFFFFFFF8;
    if ( PpmIdleVetoList )
      v24 += 24 * v11 * *(_DWORD *)PpmIdleVetoList;
    v25 = v24;
    PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v24, 0x694D5050u);
    v27 = (__int64)PoolWithTag;
    if ( !PoolWithTag )
    {
      v10 = -1073741670;
      goto LABEL_104;
    }
    memset(PoolWithTag, 0, v25);
    *(_DWORD *)v27 = v11;
    v28 = *(_DWORD *)(a1 + 8) == 0;
    *(_DWORD *)(v27 + 8) = v12;
    *(_DWORD *)(v27 + 4) = !v28;
    v29 = (int *)(v27 + v23);
    *(_QWORD *)(v27 + 16) = *(_QWORD *)(a1 + 16);
    *(_QWORD *)(v27 + 24) = *(_QWORD *)(a1 + 24);
    *(_QWORD *)(v27 + 32) = *(_QWORD *)(a1 + 32);
    *(_QWORD *)(v27 + 40) = *(_QWORD *)(a1 + 40);
    *(_QWORD *)(v27 + 48) = v29;
    v29[1] = v11;
    PpmResetPlatformIdleAccounting(v29);
    v30 = 0LL;
    for ( i = v27 + (((_DWORD)v12 * v92 + 7 + v94) & 0xFFFFFFF8);
          (unsigned int)v30 < *(_DWORD *)(a1 + 4);
          v30 = (unsigned int)(v30 + 1) )
    {
      v32 = 384 * v30;
      *(_BYTE *)(384 * v30 + v27 + 113) = 1;
      KeQueryActiveProcessorAffinity((_DWORD *)(384 * v30 + v27 + 120));
      v33 = (unsigned int *)PpmIdleVetoList;
      v34 = (_QWORD *)(384 * v30 + v27 + 80);
      v34[1] = v34;
      *v34 = v34;
      if ( v33 )
      {
        v35 = *v33;
        *(_QWORD *)(v32 + v27 + 104) = i;
        *(_DWORD *)(v32 + v27 + 96) = v35;
        i += 24LL * *v33;
      }
    }
    v36 = v27 + v22;
    v37 = v27 + v21;
    for ( j = 0; j < *(_DWORD *)(a1 + 8); ++j )
    {
      v39 = 0;
      v40 = 384LL * j;
      v41 = *(_OWORD *)(a1 + 48LL * j + 80);
      *(_QWORD *)(v40 + v27 + 304) = v37;
      v37 += 24 * v12;
      *(_DWORD *)(v40 + v27 + 116) = v12;
      *(_OWORD *)(v40 + v27 + 288) = v41;
      if ( (_DWORD)v12 )
      {
        v42 = 0LL;
        v43 = KiProcessorBlock;
        do
        {
          v44 = *(_QWORD *)(v40 + v27 + 304);
          if ( v39 >= (unsigned int)KeNumberProcessors_0 )
            v45 = 0LL;
          else
            v45 = *v43;
          v46 = *(_QWORD *)(v45 + 23808);
          ++v43;
          *(_DWORD *)(v42 + v44) = v39++;
          v47 = *(_DWORD *)(v46 + 28);
          *(_QWORD *)(v42 + v44 + 16) = v36;
          *(_DWORD *)(v42 + v44 + 8) = v47;
          v42 += 24LL;
          v36 += 24LL * *(unsigned int *)(v46 + 28);
        }
        while ( v39 < (unsigned int)v12 );
      }
    }
    v48 = 0;
    if ( (_DWORD)v12 )
    {
      v49 = v94;
      v50 = KiProcessorBlock;
      do
      {
        if ( v48 >= (unsigned int)KeNumberProcessors_0 )
          v51 = 0LL;
        else
          v51 = *v50;
        v52 = *(_QWORD *)(v51 + 23808);
        v53 = 0LL;
        *(_QWORD *)(v52 + 736) = v27 + v49;
        *(_DWORD *)(v52 + 760) = *(_DWORD *)(a1 + 8);
        *(_QWORD *)(v52 + 768) = v36;
        v54 = *(unsigned int *)(a1 + 8);
        v36 += 24 * v54;
        if ( (_DWORD)v54 )
        {
          do
          {
            v55 = *(_QWORD *)(v52 + 768);
            v56 = 384 * v53;
            v57 = 3LL * (unsigned int)(v54 - v53 - 1);
            *(_DWORD *)(v55 + 8 * v57 + 4) = v53;
            v53 = (unsigned int)(v53 + 1);
            *(_DWORD *)(v55 + 8 * v57 + 8) = *(_DWORD *)(v56 + v27 + 116);
            *(_QWORD *)(v55 + 8 * v57 + 16) = *(_QWORD *)(v56 + v27 + 304);
            LODWORD(v54) = *(_DWORD *)(a1 + 8);
          }
          while ( (unsigned int)v53 < (unsigned int)v54 );
        }
        ++v48;
        v49 += v92;
        ++v50;
      }
      while ( v48 < (unsigned int)v12 );
    }
  }
  v58 = 0;
  if ( !*(_DWORD *)(a1 + 8) )
    goto LABEL_77;
  do
  {
    v59 = 0;
    v60 = 384LL * v58;
    *(_DWORD *)(v60 + v27 + 64) = *(_DWORD *)(a1 + 48LL * v58 + 64);
    for ( *(_DWORD *)(v60 + v27 + 68) = *(_DWORD *)(a1 + 48LL * v58 + 68); v59 < *(_DWORD *)(a1 + 48LL * v58 + 72); ++v59 )
    {
      v61 = *(_QWORD *)(a1 + 48LL * v58 + 96);
      v62 = 0;
      v63 = *(_QWORD *)(v60 + v27 + 304);
      v64 = 3LL * *(unsigned int *)(v61 + 8LL * v59);
      v65 = *(_DWORD *)(v63 + 24LL * *(unsigned int *)(v61 + 8LL * v59) + 8);
      if ( v65 )
      {
        do
        {
          v66 = *(_QWORD *)(v63 + 8 * v64 + 16);
          v67 = 3LL * (v65 - v62 - 1);
          *(_QWORD *)(v66 + 8 * v67) = 0LL;
          *(_QWORD *)(v66 + 8 * v67 + 8) = 0LL;
          *(_QWORD *)(v66 + 8 * v67 + 16) = 0LL;
          *(_DWORD *)(v66 + 8 * v67 + 4) = v62;
          if ( !*(_BYTE *)(a1 + 48LL * v58 + 60) && v62 == *(unsigned __int8 *)(a1 + 48LL * v58 + 61) )
            *(_BYTE *)(v66 + 24LL * (v65 - v62 - 1) + 1) = 1;
          if ( v62 >= *(unsigned __int8 *)(v61 + 8LL * v59 + 4) )
          {
            *(_BYTE *)(v66 + 24LL * (v65 - v62 - 1) + 2) = 1;
            if ( !*(_BYTE *)(v61 + 8LL * v59 + 6) )
              *(_BYTE *)(v66 + 24LL * (v65 - v62 - 1)) = 1;
          }
          v65 = *(_DWORD *)(v63 + 8 * v64 + 8);
          ++v62;
        }
        while ( v62 < v65 );
      }
    }
    if ( *(_BYTE *)(a1 + 48LL * v58 + 60) )
    {
      if ( !*(_BYTE *)(a1 + 48LL * v58 + 59) )
      {
        v68 = *(_WORD *)(a1 + 48LL * v58 + 56);
        if ( !v68 && !*(_BYTE *)(a1 + 48LL * v58 + 58) )
        {
          v69 = 0LL;
LABEL_74:
          v71 = *(_QWORD *)(v60 + v27 + 304);
          v72 = 3 * v69;
          memset(*(void **)(v71 + 24 * v69 + 16), 0, 24LL * *(unsigned int *)(v71 + 24 * v69 + 8));
          v73 = *(unsigned __int8 *)(a1 + 48LL * v58 + 61);
          v74 = 3LL * (unsigned int)(*(_DWORD *)(v71 + 8 * v72 + 8) - v73 - 1);
          v75 = *(_QWORD *)(v71 + 8 * v72 + 16);
          *(_DWORD *)(v75 + 8 * v74 + 4) = v73;
          *(_BYTE *)(v75 + 8 * v74 + 1) = 1;
          goto LABEL_75;
        }
        if ( v68 < (unsigned __int16)KiMaximumGroups )
        {
          v70 = *(_BYTE *)(a1 + 48LL * v58 + 58);
          if ( v70 < 0x40u )
          {
            v69 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v68 + v70];
            if ( !(_DWORD)v69 )
              v69 = 0xFFFFFFFFLL;
            goto LABEL_74;
          }
        }
      }
      v69 = 0xFFFFFFFFLL;
      goto LABEL_74;
    }
LABEL_75:
    ++v58;
  }
  while ( v58 < *(_DWORD *)(a1 + 8) );
  LODWORD(v12) = v93;
LABEL_77:
  v7 = 0LL;
  if ( (_DWORD)v12 )
  {
    v76 = KiProcessorBlock;
    while ( 1 )
    {
      v77 = (unsigned int)v7 >= (unsigned int)KeNumberProcessors_0 ? 0LL : *v76;
      v78 = *(_QWORD *)(v77 + 23808);
      v79 = 0;
      v80 = *(_DWORD *)(v78 + 760);
      if ( v80 )
        break;
LABEL_99:
      v7 = (unsigned int)(v7 + 1);
      ++v76;
      if ( (unsigned int)v7 >= (unsigned int)v12 )
        goto LABEL_100;
    }
    v81 = KiMaximumGroups;
    while ( 2 )
    {
      v82 = 3LL * (v80 - v79 - 1);
      if ( !*(_BYTE *)(a1 + 48LL * v79 + 60) )
        goto LABEL_96;
      if ( *(_BYTE *)(a1 + 48LL * v79 + 59) )
        goto LABEL_94;
      v83 = *(_WORD *)(a1 + 48LL * v79 + 56);
      if ( !v83 && !*(_BYTE *)(a1 + 48LL * v79 + 58) )
      {
        v84 = 0;
        goto LABEL_95;
      }
      if ( v83 >= v81 || (v85 = *(_BYTE *)(a1 + 48LL * v79 + 58), v85 >= 0x40u) )
      {
LABEL_94:
        v84 = -1;
      }
      else
      {
        v84 = KiProcessorNumberToIndexMappingTable[64 * v83 + v85];
        if ( !v84 )
          v84 = -1;
      }
LABEL_95:
      v28 = v84 == (_DWORD)v7;
      v86 = 0;
      if ( v28 )
LABEL_96:
        v86 = 1;
      *(_BYTE *)(*(_QWORD *)(v78 + 768) + 8 * v82 + 1) = v86;
      ++v79;
      v80 = *(_DWORD *)(v78 + 760);
      if ( v79 >= v80 )
      {
        LODWORD(v12) = v93;
        goto LABEL_99;
      }
      continue;
    }
  }
LABEL_100:
  if ( !PpmPlatformStates )
    PpmEnableCoordinatedIdleStates((int *)v27, 0);
  v10 = 0;
LABEL_104:
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v87 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v87 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v88 = PpmIdlePolicyLock,
        v88 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v87, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  v89 = KeGetCurrentThread();
  v90 = v89->KernelApcDisable + 1;
  v89->KernelApcDisable = v90;
  if ( !v90
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v89->ApcState.ApcListHead[0].Flink != &v89->152
    && !v89->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return v10;
}

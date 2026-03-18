/*
 * XREFs of PpmInstallCoordinatedIdleStates @ 0x1406B0D4C
 * Callers:
 *     <none>
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLock @ 0x1400F35E0 (ExfReleasePushLock.c)
 *     memset @ 0x140195A80 (memset.c)
 *     PpmCheckCoordinatedStateInitiator @ 0x14023401C (PpmCheckCoordinatedStateInitiator.c)
 *     PpmResetPlatformIdleAccounting @ 0x1402357E0 (PpmResetPlatformIdleAccounting.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 *     PpmEnableCoordinatedIdleStates @ 0x1406B0D08 (PpmEnableCoordinatedIdleStates.c)
 *     PpmIdleUpdateCoordinatedDependencies @ 0x1406BE394 (PpmIdleUpdateCoordinatedDependencies.c)
 */

__int64 __fastcall PpmInstallCoordinatedIdleStates(unsigned int *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  unsigned int *v5; // rsi
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // r9
  __int64 v9; // rbx
  int updated; // ebx
  __int64 v11; // rdi
  unsigned int v12; // r14d
  int v13; // r9d
  int v14; // r10d
  __int64 v15; // r11
  int v16; // eax
  unsigned int v17; // r15d
  unsigned int v18; // r13d
  unsigned int v19; // ecx
  unsigned int v20; // r12d
  unsigned int v21; // ecx
  size_t v22; // rbp
  PVOID PoolWithTag; // rax
  __int64 v24; // rbx
  int *v25; // rcx
  __int64 v26; // r8
  unsigned int v27; // edx
  unsigned int *v28; // r9
  __int64 v29; // rcx
  _QWORD *v30; // rax
  int v31; // eax
  __int64 v32; // r10
  __int64 v33; // r9
  __int64 v34; // rbp
  __int64 v35; // r8
  unsigned __int16 v36; // r11
  __int64 v37; // rcx
  unsigned int v38; // r11d
  __int64 v39; // rcx
  __int64 v40; // rax
  unsigned int v41; // r11d
  __int64 v42; // r10
  unsigned int v43; // esi
  __int64 *v44; // r12
  __int64 v45; // rcx
  __int64 v46; // r8
  __int64 v47; // r8
  unsigned int v48; // ebp
  _QWORD *v49; // r15
  __int64 v50; // rcx
  __int64 v51; // rax
  unsigned int *v52; // rsi
  __int64 v53; // r8
  __int64 v54; // r12
  unsigned int v55; // ebp
  __int64 v56; // rdi
  unsigned int v57; // r15d
  __int64 v58; // r9
  __int64 v59; // r13
  unsigned int v60; // eax
  __int64 v61; // rcx
  __int64 v62; // r11
  __int64 v63; // r10
  unsigned int v64; // eax
  __int64 v65; // rcx
  unsigned int v66; // esi
  __int64 *v67; // r12
  __int64 v68; // rax
  __int64 v69; // r15
  unsigned int i; // ebp
  char v71; // al
  __int64 v72; // r10
  __int64 v73; // r11
  signed __int64 v74; // rcx
  ULONG_PTR v75; // rtt
  struct _KTHREAD *v76; // rcx
  __int16 v77; // ax
  int v79; // [rsp+20h] [rbp-58h]
  unsigned int v80; // [rsp+24h] [rbp-54h]
  unsigned int v81; // [rsp+28h] [rbp-50h]
  unsigned int v83; // [rsp+88h] [rbp+10h]
  unsigned int v84; // [rsp+90h] [rbp+18h]

  CurrentThread = KeGetCurrentThread();
  v5 = a1;
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)&PpmIdlePolicyLock, 0LL, 0LL, a4);
  v9 = v6;
  if ( _interlockedbittestandset64((volatile signed __int32 *)&PpmIdlePolicyLock, 0LL) )
    ExfAcquirePushLockExclusiveEx(&PpmIdlePolicyLock, v6, (ULONG_PTR)&PpmIdlePolicyLock, v8);
  if ( v9 )
    *(_BYTE *)(v9 + 26) |= 1u;
  qword_14032E288 = (__int64)KeGetCurrentThread();
  if ( PpmPlatformStates && !*((_BYTE *)v5 + 40) )
  {
    updated = -1073741431;
    goto LABEL_60;
  }
  updated = PpmIdleUpdateCoordinatedDependencies(v5);
  if ( updated >= 0 )
  {
    v11 = *v5;
    v80 = v11;
    if ( (_DWORD)v11 )
    {
      v12 = KeNumberProcessors_0;
      v13 = 0;
      v81 = KeNumberProcessors_0;
      v14 = v11 * KeNumberProcessors_0;
      v7 = (__int64)(v5 + 61);
      v15 = (unsigned int)v11;
      do
      {
        v16 = *(_DWORD *)v7 * *(_DWORD *)(v7 - 4);
        v13 += *(_DWORD *)v7;
        v7 += 216LL;
        v14 += v16;
        --v15;
      }
      while ( v15 );
      if ( !PpmPlatformStates )
      {
        v17 = (384 * v11 + 71) & 0xFFFFFFF8;
        v18 = (v17 + 7 + 24 * v13) & 0xFFFFFFF8;
        v19 = v18 + 24 * v14;
        v20 = (v19 + 4 * v11 * KeNumberProcessors_0 + 7) & 0xFFFFFFF8;
        v84 = (v19 + 3) & 0xFFFFFFFC;
        v79 = (4 * v11 + 15) & 0xFFFFFFF8;
        v21 = (KeNumberProcessors_0 * v79 + 7 + ((v20 + 992 * v11 + 31) & 0xFFFFFFF8)) & 0xFFFFFFF8;
        v83 = v21;
        if ( PpmIdleVetoList )
          v21 += 24 * v11 * *(_DWORD *)PpmIdleVetoList;
        v22 = v21;
        PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, v21, 0x694D5050u);
        v24 = (__int64)PoolWithTag;
        if ( !PoolWithTag )
        {
          updated = -1073741670;
          goto LABEL_60;
        }
        memset(PoolWithTag, 0, v22);
        *(_DWORD *)v24 = v11;
        *(_DWORD *)(v24 + 4) = 1;
        *(_BYTE *)(v24 + 12) = 1;
        *(_DWORD *)(v24 + 8) = v12;
        *(_QWORD *)(v24 + 16) = *((_QWORD *)v5 + 1);
        *(_QWORD *)(v24 + 24) = *((_QWORD *)v5 + 2);
        *(_QWORD *)(v24 + 32) = *((_QWORD *)v5 + 3);
        *(_QWORD *)(v24 + 40) = *((_QWORD *)v5 + 4);
        v25 = (int *)(v24 + v20);
        *(_QWORD *)(v24 + 48) = v25;
        v25[1] = v11;
        PpmResetPlatformIdleAccounting(v25);
        v26 = v24 + v83;
        v27 = 0;
        if ( *v5 )
        {
          v28 = (unsigned int *)PpmIdleVetoList;
          do
          {
            v29 = 384LL * v27;
            v30 = (_QWORD *)(v29 + v24 + 80);
            v30[1] = v30;
            *v30 = v30;
            if ( v28 )
            {
              v31 = *v28;
              *(_QWORD *)(v29 + v24 + 104) = v26;
              *(_DWORD *)(v29 + v24 + 96) = v31;
              v26 += 24LL * *v28;
            }
            ++v27;
          }
          while ( v27 < *v5 );
        }
        v32 = v24 + v17;
        v33 = v24 + v18;
        v7 = (__int64)(v5 + 61);
        v34 = v11;
        v35 = v24 + 124;
        do
        {
          v36 = 0;
          *(_OWORD *)(v35 + 164) = *(_OWORD *)(v7 - 28);
          *(_WORD *)(v35 - 4) = *(_WORD *)(v7 - 196);
          *(_WORD *)(v35 - 2) = *(_WORD *)(v7 - 194);
          for ( *(_DWORD *)v35 = 0;
                v36 < *(_WORD *)(v7 - 196);
                *(_QWORD *)(v35 + 8 * v37 + 4) = *(_QWORD *)(v7 + 8 * v37 - 188) )
          {
            v37 = v36++;
          }
          v38 = 0;
          *(_DWORD *)(v35 - 8) = *(_DWORD *)v7;
          *(_QWORD *)(v35 + 180) = v32;
          v39 = *(unsigned int *)v7;
          v32 += 24 * v39;
          if ( (_DWORD)v39 )
          {
            do
            {
              v40 = v38++;
              *(_QWORD *)(*(_QWORD *)(v35 + 180) + 24 * v40 + 16) = v33;
              v33 += 24LL * *(unsigned int *)(v7 - 4);
            }
            while ( v38 < *(_DWORD *)v7 );
          }
          v7 += 216LL;
          v35 += 384LL;
          --v34;
        }
        while ( v34 );
        v41 = 0;
        v42 = v24 + v84;
        if ( v12 )
        {
          v43 = (v20 + 992 * v11 + 31) & 0xFFFFFFF8;
          v44 = KiProcessorBlock;
          v45 = 4 * v11;
          do
          {
            if ( v41 >= (unsigned int)KeNumberProcessors_0 )
              v46 = 0LL;
            else
              v46 = *v44;
            v47 = *(_QWORD *)(v46 + 23808);
            v48 = 0;
            *(_QWORD *)(v47 + 768) = v33;
            v33 += 24 * v11;
            *(_QWORD *)(v47 + 792) = v42;
            v42 += v45;
            *(_QWORD *)(v47 + 736) = v24 + v43;
            *(_DWORD *)(v47 + 760) = v11;
            *(_DWORD *)(v47 + 776) = v11;
            v49 = (_QWORD *)(v24 + 304);
            do
            {
              v50 = *(_QWORD *)(v47 + 768);
              v7 = 3LL * ((unsigned int)v11 - v48 - 1);
              *(_DWORD *)(v50 + 8 * v7 + 4) = v48++;
              *(_DWORD *)(v50 + 8 * v7 + 8) = *((_DWORD *)v49 - 47);
              v51 = *v49;
              v49 += 48;
              *(_QWORD *)(v50 + 8 * v7 + 16) = v51;
            }
            while ( v48 < (unsigned int)v11 );
            v45 = 4 * v11;
            v43 += v79;
            ++v41;
            ++v44;
          }
          while ( v41 < v12 );
          v5 = a1;
        }
        goto LABEL_39;
      }
      v24 = PpmPlatformStates;
      if ( *(_DWORD *)(PpmPlatformStates + 8) == (_DWORD)KeNumberProcessors_0
        && *(_QWORD *)PpmPlatformStates == ((unsigned int)v11 | 0x100000000LL) )
      {
LABEL_39:
        v52 = v5 + 59;
        v53 = v24 + 113;
        v54 = v11;
        do
        {
          v55 = 0;
          *(_DWORD *)(v53 - 49) = *(v52 - 1);
          *(_DWORD *)(v53 - 45) = *v52;
          for ( *(_BYTE *)v53 = *((_BYTE *)v52 + 12); v55 < v52[2]; ++v55 )
          {
            v56 = *(_QWORD *)(v53 + 191);
            v57 = 0;
            v58 = *(_QWORD *)(v52 + 5) + 16LL * v55;
            v59 = 3LL * v55;
            *(_DWORD *)(v56 + 8 * v59) = *(_DWORD *)v58;
            *(_DWORD *)(v56 + 8 * v59 + 8) = *(_DWORD *)(v58 + 4);
            v60 = *(_DWORD *)(v58 + 4);
            if ( v60 )
            {
              do
              {
                v61 = *(_QWORD *)(v58 + 8);
                v62 = *(_QWORD *)(v56 + 24LL * v55 + 16);
                v7 = v57;
                v63 = 3LL * (v60 - v57 - 1);
                *(_QWORD *)(v62 + 8 * v63) = 0LL;
                *(_QWORD *)(v62 + 8 * v63 + 8) = 0LL;
                *(_QWORD *)(v62 + 8 * v63 + 16) = 0LL;
                v64 = *(unsigned __int8 *)(v61 + 4LL * v57);
                *(_DWORD *)(v62 + 8 * v63 + 4) = v64;
                *(_BYTE *)(v62 + 8 * v63) = *(_BYTE *)(v61 + 4LL * v57 + 1) == 0;
                *(_BYTE *)(v62 + 8 * v63 + 1) = *(_BYTE *)(v61 + 4LL * v57 + 2);
                *(_BYTE *)(v62 + 8 * v63 + 2) = *(_BYTE *)(v61 + 4LL * v57 + 3);
                if ( *(_DWORD *)(v56 + 24LL * v55) == -1 )
                {
                  v65 = 384LL * v64;
                  *(_DWORD *)(v62 + 8 * v63 + 8) = *(_DWORD *)(v65 + v24 + 116);
                  *(_QWORD *)(v62 + 8 * v63 + 16) = *(_QWORD *)(v65 + v24 + 304);
                }
                else
                {
                  *(_DWORD *)(v62 + 8 * v63 + 8) = 0;
                  *(_QWORD *)(v62 + 8 * v63 + 16) = 0LL;
                }
                v60 = *(_DWORD *)(v58 + 4);
                ++v57;
              }
              while ( v57 < v60 );
            }
          }
          v53 += 384LL;
          v52 += 54;
          --v54;
        }
        while ( v54 );
        v66 = 0;
        if ( v81 )
        {
          v67 = KiProcessorBlock;
          do
          {
            if ( v66 >= (unsigned int)KeNumberProcessors_0 )
              v68 = 0LL;
            else
              v68 = *v67;
            v69 = *(_QWORD *)(v68 + 23808);
            for ( i = 0; i < v80; *(_BYTE *)(v72 + 8 * v73 + 1) = v71 )
            {
              v71 = PpmCheckCoordinatedStateInitiator(
                      v66,
                      *(_DWORD *)(*(_QWORD *)(v69 + 768) + 24LL * (v80 - i - 1) + 8),
                      *(_QWORD *)(*(_QWORD *)(v69 + 768) + 24LL * (v80 - i - 1) + 16));
              ++i;
            }
            ++v66;
            ++v67;
          }
          while ( v66 < v81 );
        }
        if ( !PpmPlatformStates )
          PpmEnableCoordinatedIdleStates((int *)v24, 1);
        updated = 0;
        goto LABEL_60;
      }
    }
    updated = -1073741811;
  }
LABEL_60:
  if ( qword_14032E288 )
    qword_14032E288 = 0LL;
  _m_prefetchw(&PpmIdlePolicyLock);
  v74 = PpmIdlePolicyLock - 16;
  if ( (PpmIdlePolicyLock & 0xFFFFFFFFFFFFFFF0uLL) <= 0x10 )
    v74 = 0LL;
  if ( (PpmIdlePolicyLock & 2) != 0
    || (v75 = PpmIdlePolicyLock,
        v75 != _InterlockedCompareExchange64((volatile signed __int64 *)&PpmIdlePolicyLock, v74, PpmIdlePolicyLock)) )
  {
    ExfReleasePushLock(&PpmIdlePolicyLock, v7);
  }
  KeAbPostRelease((ULONG_PTR)&PpmIdlePolicyLock);
  v76 = KeGetCurrentThread();
  v77 = v76->KernelApcDisable + 1;
  v76->KernelApcDisable = v77;
  if ( !v77
    && ($CD287064E7C9F7953DE243E927CFCB99 *)v76->ApcState.ApcListHead[0].Flink != &v76->152
    && !v76->SpecialApcDisable )
  {
    KiCheckForKernelApcDelivery();
  }
  return (unsigned int)updated;
}

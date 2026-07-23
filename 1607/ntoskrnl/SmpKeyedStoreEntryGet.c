/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x1400C715C
 * Callers:
 *     SmpKeyedStoreSetVaRanges @ 0x140002228 (SmpKeyedStoreSetVaRanges.c)
 *     SmStoreExistsForProcess @ 0x1400C712C (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreReference @ 0x14011CD78 (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x1401357D4 (SmpProcessQueryStoreStats.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x1403E47D4 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x1403E4A60 (SmSwapStore.c)
 *     SmpKeyedStoreCreate @ 0x1403E4B74 (SmpKeyedStoreCreate.c)
 *     PspProcessDelete @ 0x14045F6F8 (PspProcessDelete.c)
 *     SmStoreCompressionStop @ 0x14054C23C (SmStoreCompressionStop.c)
 *     SmStoreCompressionStart @ 0x14054C2A8 (SmStoreCompressionStart.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14002BD30 (KeAbPreAcquire.c)
 *     KeLeaveCriticalRegion @ 0x140069880 (KeLeaveCriticalRegion.c)
 *     KeAbPostRelease @ 0x14006AA40 (KeAbPostRelease.c)
 *     MiDeleteSubsection @ 0x1400A6E14 (MiDeleteSubsection.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400C5F10 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400C6120 (ExfAcquirePushLockSharedEx.c)
 *     ExfReleasePushLockShared @ 0x1400C64E0 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400C65D8 (ExfTryToWakePushLock.c)
 *     ExAllocatePoolWithTag @ 0x140254A50 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, int a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // r14
  ULONG_PTR v10; // r15
  int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // r9
  _BYTE *v15; // rax
  _QWORD *v16; // rdx
  unsigned int v17; // r8d
  __int64 v18; // rcx
  __int64 v19; // rdx
  char v20; // r12
  unsigned __int64 v21; // r14
  ULONG_PTR *PoolWithTag; // r9
  ULONG_PTR *v23; // r8
  unsigned __int64 v24; // r10
  unsigned __int64 v25; // rcx
  unsigned int v26; // r8d
  __int64 v27; // r11
  struct _PRIVILEGE_SET *v28; // rcx
  int v29; // eax
  __int64 v30; // r15
  _QWORD *v31; // r10
  __int64 v32; // rdx
  __int64 v33; // [rsp+30h] [rbp-40h]
  __int64 v34; // [rsp+38h] [rbp-38h]
  __int64 v35; // [rsp+48h] [rbp-28h]
  _QWORD *v36; // [rsp+B8h] [rbp+48h]

  v36 = a2;
  if ( !a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
    {
      v15 = (_BYTE *)KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      v7 = (__int64)v15;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx((unsigned __int64 *)BugCheckParameter2, v15, BugCheckParameter2);
    }
    else
    {
      v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx((unsigned __int64 *)BugCheckParameter2, v7, BugCheckParameter2);
    }
    a2 = v36;
    if ( v7 )
      *(_BYTE *)(v7 + 26) |= 1u;
  }
  if ( !a3 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 24);
    if ( v8 && *(_QWORD *)(v8 + 8) == *a2 )
      goto LABEL_20;
    if ( *a2 == *(_QWORD *)(BugCheckParameter2 + 32) )
    {
      v8 = 0LL;
      goto LABEL_20;
    }
  }
  v9 = *a2;
  v10 = BugCheckParameter2 + 8;
  v11 = *(_DWORD *)(BugCheckParameter2 + 12) >> 5;
  v12 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
  v13 = v12 & *a2;
  if ( v11 )
  {
    v8 = *(_QWORD *)(BugCheckParameter2 + 16)
       + 8LL
       * ((37
         * (BYTE6(v13)
          + 37
          * (BYTE5(v13)
           + 37
           * (BYTE4(v13)
            + 37 * (BYTE3(v13) + 37 * (BYTE2(v13) + 37 * (BYTE1(v13) + 37 * ((unsigned __int8)v13 + 11623883)))))))
         + HIBYTE(v13)) & (unsigned int)(v11 - 1));
    while ( 1 )
    {
      v8 = *(_QWORD *)v8;
      if ( (v8 & 1) != 0 )
        break;
      if ( v13 == (v12 & *(_QWORD *)(v8 + 8)) )
        goto LABEL_15;
    }
    v8 = 0LL;
LABEL_15:
    if ( v8 )
    {
      if ( a3 == 2 )
      {
        v35 = *(_QWORD *)(v8 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
        v16 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                       + 8LL
                       * ((37
                         * (BYTE6(v35)
                          + 37
                          * (BYTE5(v35)
                           + 37
                           * (BYTE4(v35)
                            + 37
                            * (BYTE3(v35)
                             + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v35 + 11623883)))))))
                         + HIBYTE(v35)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
        if ( (*(_QWORD *)v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v16 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v35)
                            + 37
                            * (BYTE5(v35)
                             + 37
                             * (BYTE4(v35)
                              + 37
                              * (BYTE3(v35)
                               + 37 * (BYTE2(v35) + 37 * (BYTE1(v35) + 37 * ((unsigned __int8)v35 + 11623883)))))))
                           + HIBYTE(v35)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
        while ( (*v16 & 1) == 0 )
        {
          if ( *v16 == v8 )
          {
            *v16 = *(_QWORD *)v8;
            --*(_DWORD *)v10;
            *(_QWORD *)v8 |= 0x8000000000000002uLL;
            break;
          }
          v16 = (_QWORD *)*v16;
        }
        if ( *(_QWORD *)(BugCheckParameter2 + 24) == v8 )
          *(_QWORD *)(BugCheckParameter2 + 24) = 0LL;
      }
      else
      {
        *(_QWORD *)(BugCheckParameter2 + 24) = v8;
      }
      goto LABEL_20;
    }
    a2 = v36;
  }
  if ( a3 != 1 )
  {
    *(_QWORD *)(BugCheckParameter2 + 32) = v9;
LABEL_19:
    v8 = 0LL;
    goto LABEL_20;
  }
  v8 = (__int64)(a2 - 1);
  if ( *(_DWORD *)v10 >= (unsigned int)(2 * (*(_DWORD *)(BugCheckParameter2 + 12) >> 5)) )
  {
    v20 = -1;
    v21 = 2 * ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 12) >> 5);
    if ( v21 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v21 < 4 )
        v21 = 4LL;
      PoolWithTag = (ULONG_PTR *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v21, 0x54486D73u);
      if ( PoolWithTag )
      {
        if ( (((_DWORD)v21 - 1) & (unsigned int)v21) != 0 )
        {
          do
          {
            ++v20;
            LODWORD(v21) = (unsigned int)v21 >> 1;
          }
          while ( (_DWORD)v21 );
          v21 = (unsigned int)(1 << v20);
        }
        v23 = PoolWithTag;
        if ( (unsigned int)v21 > 0x4000000 )
          v21 = 0x4000000LL;
        v24 = 0LL;
        v25 = (8 * v21 + 7) >> 3;
        if ( PoolWithTag > &PoolWithTag[v21] )
          v25 = 0LL;
        if ( v25 )
        {
          do
          {
            ++v24;
            *v23++ = v10 | 1;
          }
          while ( v24 < v25 );
        }
        v26 = 0;
        v27 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v30 = *(_QWORD *)(v10 + 8);
            while ( 1 )
            {
              v31 = *(_QWORD **)(v30 + 8LL * v26);
              if ( ((unsigned __int8)v31 & 1) != 0 )
                break;
              *(_QWORD *)(v30 + 8LL * v26) = *v31;
              v33 = v27 & v31[1];
              v32 = (37
                   * (BYTE6(v33)
                    + 37
                    * (BYTE5(v33)
                     + 37
                     * (BYTE4(v33)
                      + 37
                      * (BYTE3(v33) + 37 * (BYTE2(v33) + 37 * (BYTE1(v33) + 37 * ((unsigned __int8)v33 + 11623883)))))))
                   + HIBYTE(v33)) & (unsigned int)(v21 - 1);
              *v31 = PoolWithTag[v32];
              PoolWithTag[v32] = (ULONG_PTR)v31;
            }
            v10 = BugCheckParameter2 + 8;
            ++v26;
          }
          while ( v26 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v28 = *(struct _PRIVILEGE_SET **)(v10 + 8);
        v29 = (32 * v21) | *(_DWORD *)(v10 + 4) & 0x1F;
        *(_QWORD *)(v10 + 8) = PoolWithTag;
        *(_DWORD *)(v10 + 4) = v29;
        if ( v28 )
          MiDeleteSubsection(v28);
      }
      else if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) == 0 )
      {
        goto LABEL_19;
      }
    }
  }
  v17 = *(_DWORD *)(v10 + 4);
  v34 = *(_QWORD *)(v8 + 8) & (-1LL << (v17 & 0x1F));
  v18 = *(_QWORD *)(v10 + 8);
  v19 = (37
       * (BYTE6(v34)
        + 37
        * (BYTE5(v34)
         + 37
         * (BYTE4(v34)
          + 37 * (BYTE3(v34) + 37 * (BYTE2(v34) + 37 * (BYTE1(v34) + 37 * ((unsigned __int8)v34 + 11623883)))))))
       + HIBYTE(v34)) & ((v17 >> 5) - 1);
  *(_QWORD *)v8 = *(_QWORD *)(v18 + 8 * v19);
  *(_QWORD *)(v18 + 8 * v19) = v8;
  ++*(_DWORD *)v10;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == *v36 )
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
LABEL_20:
  if ( !a4 )
  {
    if ( a3 > 0 )
    {
      if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
        ExfTryToWakePushLock((volatile signed __int64 *)BugCheckParameter2);
    }
    else if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
    {
      ExfReleasePushLockShared((signed __int64 *)BugCheckParameter2);
    }
    KeAbPostRelease(BugCheckParameter2);
    KeLeaveCriticalRegion();
  }
  return v8;
}

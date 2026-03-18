/*
 * XREFs of SmpKeyedStoreEntryGet @ 0x1400F0084
 * Callers:
 *     SmpKeyedStoreSetVaRanges @ 0x1400DC330 (SmpKeyedStoreSetVaRanges.c)
 *     SmStoreExistsForProcess @ 0x1400F0054 (SmStoreExistsForProcess.c)
 *     SmpKeyedStoreReference @ 0x14013FF18 (SmpKeyedStoreReference.c)
 *     SmpProcessQueryStoreStats @ 0x14025697C (SmpProcessQueryStoreStats.c)
 *     SmpKeyedStoreCreate @ 0x1404F9F74 (SmpKeyedStoreCreate.c)
 *     PspProcessDelete @ 0x140503E8C (PspProcessDelete.c)
 *     SmProcessStoreMemoryPriorityRequest @ 0x140547048 (SmProcessStoreMemoryPriorityRequest.c)
 *     SmSwapStore @ 0x14055D55C (SmSwapStore.c)
 *     SmStoreCompressionStart @ 0x1406D9F78 (SmStoreCompressionStart.c)
 *     SmStoreCompressionStop @ 0x1406D9FF0 (SmStoreCompressionStop.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     KeAbPostRelease @ 0x14004FA40 (KeAbPostRelease.c)
 *     KiCheckForKernelApcDelivery @ 0x1400F2E0C (KiCheckForKernelApcDelivery.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 *     ExfAcquirePushLockExclusiveEx @ 0x1400F30E0 (ExfAcquirePushLockExclusiveEx.c)
 *     ExfReleasePushLockShared @ 0x1400F3600 (ExfReleasePushLockShared.c)
 *     ExfTryToWakePushLock @ 0x1400F36F8 (ExfTryToWakePushLock.c)
 *     ExFreePoolWithTag @ 0x140288010 (ExFreePoolWithTag.c)
 *     ExAllocatePoolWithTag @ 0x140288E60 (ExAllocatePoolWithTag.c)
 */

__int64 __fastcall SmpKeyedStoreEntryGet(ULONG_PTR BugCheckParameter2, _QWORD *a2, int a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v7; // rsi
  __int64 v8; // rsi
  __int64 v9; // r14
  ULONG_PTR v10; // r15
  int v11; // r10d
  __int64 v12; // r11
  __int64 v13; // r9
  struct _KTHREAD *v14; // rdx
  __int16 v15; // ax
  struct _KTHREAD *v16; // rcx
  __int64 v18; // rax
  __int16 v19; // ax
  bool v20; // zf
  unsigned int v21; // r8d
  __int64 v22; // rcx
  __int64 v23; // rdx
  _QWORD *v24; // rdx
  char v25; // r12
  unsigned __int64 v26; // r14
  ULONG_PTR *PoolWithTag; // r9
  ULONG_PTR *v28; // r8
  unsigned __int64 v29; // r10
  unsigned __int64 v30; // rcx
  unsigned int v31; // r8d
  __int64 v32; // r11
  __int64 v33; // r15
  _QWORD *v34; // r10
  __int64 v35; // rdx
  void *v36; // rcx
  int v37; // eax
  __int64 v38; // [rsp+30h] [rbp-40h]
  __int64 v39; // [rsp+38h] [rbp-38h]
  __int64 v40; // [rsp+48h] [rbp-28h]
  _QWORD *v41; // [rsp+B8h] [rbp+48h]
  int v42; // [rsp+C8h] [rbp+58h]

  v42 = a4;
  v41 = a2;
  if ( !(_DWORD)a4 )
  {
    CurrentThread = KeGetCurrentThread();
    --CurrentThread->KernelApcDisable;
    if ( a3 > 0 )
    {
      v18 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
      v7 = v18;
      if ( _interlockedbittestandset64((volatile signed __int32 *)BugCheckParameter2, 0LL) )
        ExfAcquirePushLockExclusiveEx(BugCheckParameter2, v18, BugCheckParameter2);
    }
    else
    {
      v7 = KeAbPreAcquire(BugCheckParameter2, 0LL, 0LL, a4);
      if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 17LL, 0LL) )
        ExfAcquirePushLockSharedEx(BugCheckParameter2, v7, BugCheckParameter2);
    }
    a2 = v41;
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
        v40 = *(_QWORD *)(v8 + 8) & (-1LL << (*(_DWORD *)(BugCheckParameter2 + 12) & 0x1F));
        v24 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                       + 8LL
                       * ((37
                         * (BYTE6(v40)
                          + 37
                          * (BYTE5(v40)
                           + 37
                           * (BYTE4(v40)
                            + 37
                            * (BYTE3(v40)
                             + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                         + HIBYTE(v40)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
        if ( (*(_QWORD *)v8 & 0x8000000000000002uLL) == 0x8000000000000002uLL )
          v24 = (_QWORD *)(*(_QWORD *)(BugCheckParameter2 + 16)
                         + 8LL
                         * ((37
                           * (BYTE6(v40)
                            + 37
                            * (BYTE5(v40)
                             + 37
                             * (BYTE4(v40)
                              + 37
                              * (BYTE3(v40)
                               + 37 * (BYTE2(v40) + 37 * (BYTE1(v40) + 37 * ((unsigned __int8)v40 + 11623883)))))))
                           + HIBYTE(v40)) & (unsigned int)((*(_DWORD *)(BugCheckParameter2 + 12) >> 5) - 1)));
        while ( (*v24 & 1) == 0 )
        {
          if ( *v24 == v8 )
          {
            *v24 = *(_QWORD *)v8;
            --*(_DWORD *)v10;
            *(_QWORD *)v8 |= 0x8000000000000002uLL;
            break;
          }
          v24 = (_QWORD *)*v24;
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
    a2 = v41;
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
    v25 = -1;
    v26 = 2 * ((unsigned __int64)*(unsigned int *)(BugCheckParameter2 + 12) >> 5);
    if ( v26 <= 0xFFFFFFFF )
    {
      if ( (unsigned int)v26 < 4 )
        v26 = 4LL;
      PoolWithTag = (ULONG_PTR *)ExAllocatePoolWithTag(NonPagedPoolNx, 8LL * (unsigned int)v26, 0x54486D73u);
      if ( PoolWithTag )
      {
        if ( (((_DWORD)v26 - 1) & (unsigned int)v26) != 0 )
        {
          do
          {
            ++v25;
            LODWORD(v26) = (unsigned int)v26 >> 1;
          }
          while ( (_DWORD)v26 );
          v26 = (unsigned int)(1 << v25);
        }
        v28 = PoolWithTag;
        if ( (unsigned int)v26 > 0x4000000 )
          v26 = 0x4000000LL;
        v29 = 0LL;
        v30 = (8 * v26 + 7) >> 3;
        if ( PoolWithTag > &PoolWithTag[v26] )
          v30 = 0LL;
        if ( v30 )
        {
          do
          {
            ++v29;
            *v28++ = v10 | 1;
          }
          while ( v29 < v30 );
        }
        v31 = 0;
        v32 = -1LL << (*(_BYTE *)(BugCheckParameter2 + 12) & 0x1F);
        if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) != 0 )
        {
          do
          {
            v33 = *(_QWORD *)(v10 + 8);
            while ( 1 )
            {
              v34 = *(_QWORD **)(v33 + 8LL * v31);
              if ( ((unsigned __int8)v34 & 1) != 0 )
                break;
              *(_QWORD *)(v33 + 8LL * v31) = *v34;
              v38 = v32 & v34[1];
              v35 = (37
                   * (BYTE6(v38)
                    + 37
                    * (BYTE5(v38)
                     + 37
                     * (BYTE4(v38)
                      + 37
                      * (BYTE3(v38) + 37 * (BYTE2(v38) + 37 * (BYTE1(v38) + 37 * ((unsigned __int8)v38 + 11623883)))))))
                   + HIBYTE(v38)) & (unsigned int)(v26 - 1);
              *v34 = PoolWithTag[v35];
              PoolWithTag[v35] = (ULONG_PTR)v34;
            }
            v10 = BugCheckParameter2 + 8;
            ++v31;
          }
          while ( v31 < *(_DWORD *)(BugCheckParameter2 + 12) >> 5 );
        }
        v36 = *(void **)(v10 + 8);
        v37 = (32 * v26) | *(_DWORD *)(v10 + 4) & 0x1F;
        *(_QWORD *)(v10 + 8) = PoolWithTag;
        *(_DWORD *)(v10 + 4) = v37;
        if ( v36 )
          ExFreePoolWithTag(v36, 0);
      }
      else if ( (*(_DWORD *)(BugCheckParameter2 + 12) & 0xFFFFFFE0) == 0 )
      {
        goto LABEL_19;
      }
    }
  }
  v21 = *(_DWORD *)(v10 + 4);
  v39 = *(_QWORD *)(v8 + 8) & (-1LL << (v21 & 0x1F));
  v22 = *(_QWORD *)(v10 + 8);
  v23 = (37
       * (BYTE6(v39)
        + 37
        * (BYTE5(v39)
         + 37
         * (BYTE4(v39)
          + 37 * (BYTE3(v39) + 37 * (BYTE2(v39) + 37 * (BYTE1(v39) + 37 * ((unsigned __int8)v39 + 11623883)))))))
       + HIBYTE(v39)) & ((v21 >> 5) - 1);
  *(_QWORD *)v8 = *(_QWORD *)(v22 + 8 * v23);
  *(_QWORD *)(v22 + 8 * v23) = v8;
  ++*(_DWORD *)v10;
  if ( *(_QWORD *)(BugCheckParameter2 + 32) == *v41 )
    *(_QWORD *)(BugCheckParameter2 + 32) = 0LL;
LABEL_20:
  if ( v42 )
    return v8;
  if ( a3 <= 0 )
  {
    if ( _InterlockedCompareExchange64((volatile signed __int64 *)BugCheckParameter2, 0LL, 17LL) != 17 )
      ExfReleasePushLockShared(BugCheckParameter2);
    KeAbPostRelease(BugCheckParameter2);
    v14 = KeGetCurrentThread();
    v15 = v14->KernelApcDisable + 1;
    v14->KernelApcDisable = v15;
    if ( v15 )
      return v8;
    v16 = (struct _KTHREAD *)&v14->152;
    if ( *(struct _KTHREAD **)&v16->Header.Lock == v16 )
      return v8;
    v20 = v14->SpecialApcDisable == 0;
LABEL_36:
    if ( v20 )
      KiCheckForKernelApcDelivery(v16);
    return v8;
  }
  if ( (_InterlockedExchangeAdd64((volatile signed __int64 *)BugCheckParameter2, 0xFFFFFFFFFFFFFFFFuLL) & 6) == 2 )
    ExfTryToWakePushLock(BugCheckParameter2);
  KeAbPostRelease(BugCheckParameter2);
  v16 = KeGetCurrentThread();
  v19 = v16->KernelApcDisable + 1;
  v16->KernelApcDisable = v19;
  if ( !v19 && ($CD287064E7C9F7953DE243E927CFCB99 *)v16->ApcState.ApcListHead[0].Flink != &v16->152 )
  {
    v20 = v16->SpecialApcDisable == 0;
    goto LABEL_36;
  }
  return v8;
}

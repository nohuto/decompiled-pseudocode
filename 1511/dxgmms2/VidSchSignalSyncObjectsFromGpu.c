/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0008030
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C0046760 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z @ 0x1C0047410 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@IEAAXKEP6AXPEAX@Z0E@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C004A9A0 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     VidSchSignalPagingFences @ 0x1C00631E0 (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C007C784 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C0008540 (VidSchiSignalSyncObject.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000BE90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C000F82C (VidSchiFreeQueuePacket.c)
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C00102F8 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     memset @ 0x1C0016C00 (memset.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        _QWORD *a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r14
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // r12
  unsigned int v11; // r12d
  unsigned __int64 *v12; // rbx
  __int64 v13; // rax
  int v14; // ebx
  struct _VIDSCH_QUEUE_PACKET **PoolWithTag; // rbx
  unsigned int v16; // r13d
  _QWORD *v17; // rax
  KSPIN_LOCK *v18; // r8
  __int64 *v19; // rcx
  char *v20; // r12
  __int64 v21; // rax
  _DWORD *QueuePacket; // rax
  char *v23; // r8
  __int64 v24; // r11
  __int64 v25; // rax
  KSPIN_LOCK *v26; // rax
  unsigned int v27; // r13d
  unsigned int v28; // esi
  unsigned int v29; // r13d
  __int64 v30; // rsi
  unsigned __int64 v32; // rdx
  bool v33; // cl
  unsigned __int64 v34; // rax
  int v35; // eax
  unsigned int v36; // ebx
  int v37; // eax
  char *v38; // rsi
  unsigned __int64 *v39; // r12
  __int64 v40; // r13
  __int64 v41; // r9
  __int64 v42; // rdx
  __int64 v43; // rax
  __int64 v44; // rax
  unsigned __int64 v45; // rcx
  __int64 v46; // rax
  unsigned __int64 v47; // rcx
  __int64 v48; // rax
  __int64 v49; // rax
  __int64 v50; // rdi
  __int64 v51; // rdx
  _QWORD *v52; // rcx
  void *v53; // rcx
  __int64 v54; // [rsp+30h] [rbp-69h]
  unsigned __int64 v55; // [rsp+30h] [rbp-69h]
  __int64 v56; // [rsp+38h] [rbp-61h]
  unsigned __int64 v57; // [rsp+38h] [rbp-61h]
  KSPIN_LOCK *SpinLock; // [rsp+40h] [rbp-59h]
  PKSPIN_LOCK SpinLocka; // [rsp+40h] [rbp-59h]
  _QWORD *v60; // [rsp+48h] [rbp-51h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-49h] BYREF
  __int64 v62; // [rsp+68h] [rbp-31h]
  PVOID P; // [rsp+70h] [rbp-29h]
  _BYTE v64[16]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v65; // [rsp+88h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE v66; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v67; // [rsp+F0h] [rbp+57h]

  v6 = (unsigned int)a3;
  v8 = a1;
  if ( (_DWORD)a1 )
  {
    if ( a2 && a4 && (_DWORD)a3 )
      goto LABEL_5;
LABEL_70:
    v43 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v43 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v43);
    return 3221225485LL;
  }
  if ( !a4 || !(_DWORD)a3 )
    goto LABEL_70;
  v8 = 1;
LABEL_5:
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  v62 = v10;
  if ( (((unsigned __int8)a5 | (a5 >> 29)) & 4) != 0 )
    goto LABEL_13;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 1824), &LockHandle);
  v11 = 0;
  if ( !(_DWORD)v6 )
  {
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  v12 = a6;
  while ( 1 )
  {
    v13 = *(unsigned __int64 *)((char *)v12 + a4 - (char *)a6);
    if ( *(_DWORD *)(v13 + 40) != 4 || *(_BYTE *)(v13 + 28) )
      goto LABEL_9;
    v32 = *v12;
    v55 = *v12;
    v33 = *(_BYTE *)(v13 + 29) != 0;
    v34 = *(_QWORD *)(v13 + 80);
    v57 = v34;
    if ( !v33 )
      break;
    if ( v32 < v34 )
    {
      v46 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v46 + 24) = v55;
      v47 = v57;
      goto LABEL_74;
    }
    if ( v32 == v34 )
    {
      v44 = WdLogNewEntry5_WdWarning();
      v45 = v55;
      goto LABEL_71;
    }
LABEL_9:
    ++v11;
    ++v12;
    if ( v11 >= (unsigned int)v6 )
      goto LABEL_10;
  }
  v35 = v34 - v32;
  if ( v35 <= 0 )
  {
    if ( !v35 )
    {
      v44 = WdLogNewEntry5_WdWarning();
      v45 = (unsigned int)v55;
LABEL_71:
      *(_QWORD *)(v44 + 24) = v45;
      WdLogEvent5_WdWarning(v44);
      goto LABEL_9;
    }
    goto LABEL_9;
  }
  v46 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v46 + 24) = (unsigned int)v55;
  v47 = (unsigned int)v57;
LABEL_74:
  *(_QWORD *)(v46 + 32) = v47;
  WdLogEvent5_WdWarning(v46);
  v14 = -1073741811;
  v48 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v48 + 24) = a6[v11];
  *(_QWORD *)(v48 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v48);
LABEL_11:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v14 < 0 )
    return (unsigned int)v14;
  v10 = v62;
LABEL_13:
  v65 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  if ( v8 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 >= 8 )
    {
      PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v8, 0x6E795356u);
      P = PoolWithTag;
      goto LABEL_15;
    }
    goto LABEL_84;
  }
  PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)v64;
  P = v64;
LABEL_15:
  v65 = v8;
  if ( !PoolWithTag || (memset(PoolWithTag, 0, 8LL * v8), (PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P) == 0LL) )
  {
LABEL_84:
    v9 = -1073741801;
    goto LABEL_49;
  }
  v67 = 0;
  v16 = 0;
  v56 = 0LL;
  if ( v8 )
  {
    v17 = a2;
    v18 = (KSPIN_LOCK *)(v10 + 1824);
    SpinLock = (KSPIN_LOCK *)(v10 + 1824);
    v19 = a2;
    v60 = a2;
    v20 = (char *)P;
    do
    {
      if ( v17 )
        v21 = *v19;
      else
        v21 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8LL) + 184LL) + 64LL);
      v54 = v21;
      KeAcquireInStackQueuedSpinLock(v18, &LockHandle);
      if ( *(_QWORD *)(v54 + 664) == v54 + 664 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v54, *(_DWORD *)(v54 + 772) == 0);
        *(_QWORD *)v20 = QueuePacket;
        if ( !QueuePacket )
        {
          v49 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v49 + 24) = -1073741801LL;
          *(_QWORD *)(v49 + 32) = 8719LL;
          WdLogEvent5_WdWarning(v49);
          if ( v16 )
          {
            v50 = v16;
            do
            {
              if ( *PoolWithTag )
                VidSchiFreeQueuePacket(v54);
              ++PoolWithTag;
              --v50;
            }
            while ( v50 );
          }
          PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P;
          goto LABEL_84;
        }
        *QueuePacket = 1953189969;
        v67 = v16;
        *(_DWORD *)(*(_QWORD *)v20 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v20 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v20 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v20 + 80LL) = v54;
        *(_QWORD *)(*(_QWORD *)v20 + 88LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v20 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v20 + 256LL) ^= ((unsigned __int8)a5 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v20 + 256LL)) & 1;
        if ( (a5 & 4) != 0 )
          *(_DWORD *)(*(_QWORD *)v20 + 256LL) |= 4u;
        if ( *(_DWORD *)(*(_QWORD *)a4 + 40LL) == 2 )
          *(_QWORD *)(*(_QWORD *)v20 + 520LL) = *a6;
        if ( (_DWORD)v6 )
        {
          v23 = a4;
          v24 = v6;
          do
          {
            *(_QWORD *)&v23[264LL - (_QWORD)a4 + *(_QWORD *)v20] = *(_QWORD *)v23;
            if ( *(_DWORD *)(*(_QWORD *)v23 + 40LL) == 4 )
              *(_QWORD *)&v23[520LL - (_QWORD)a4 + *(_QWORD *)v20] = *(_QWORD *)&v23[(char *)a6 - a4];
            v23 += 8;
            --v24;
          }
          while ( v24 );
        }
        *(_DWORD *)(*(_QWORD *)v20 + 260LL) = v6;
        *(_QWORD *)(*(_QWORD *)v20 + 776LL) = 0LL;
        v25 = *(_QWORD *)v20;
        if ( v56 )
        {
          *(_QWORD *)(v25 + 784) = v56;
          *(_QWORD *)(v56 + 776) = *(_QWORD *)v20;
        }
        else
        {
          *(_QWORD *)(v25 + 784) = 0LL;
        }
        v56 = *(_QWORD *)v20;
      }
      ++v16;
      v17 = a2;
      v19 = v60 + 1;
      v18 = SpinLock;
      v20 += 8;
      ++v60;
    }
    while ( v16 < v8 );
    if ( !v56 )
      goto LABEL_57;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v26 = (KSPIN_LOCK *)PoolWithTag;
    v27 = v67;
    v28 = 0;
    SpinLocka = (PKSPIN_LOCK)PoolWithTag;
    do
    {
      if ( *v26 )
      {
        v29 = 0;
        if ( (_DWORD)v6 )
        {
          do
            VidSchiSignalSyncObject(v29++, (_DWORD)a4, a5, (_DWORD)a6, v28 == v67);
          while ( v29 < (unsigned int)v6 );
          v26 = SpinLocka;
          v9 = 0;
        }
        v27 = v67;
      }
      ++v26;
      ++v28;
      SpinLocka = v26;
    }
    while ( v28 <= v27 );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v30 = v27 + 1;
    do
    {
      if ( *PoolWithTag )
        VidSchiSubmitCommandPacketToQueue(*PoolWithTag);
      ++PoolWithTag;
      --v30;
    }
    while ( v30 );
  }
  else
  {
LABEL_57:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v62 + 1824), &LockHandle);
    v36 = 0;
    if ( (_DWORD)v6 )
    {
      v37 = (int)a6;
      v38 = a4;
      v39 = a6;
      do
      {
        v40 = *(_QWORD *)v38;
        VidSchiSignalSyncObject(v36, (_DWORD)a4, a5, v37, 1);
        LOBYTE(v41) = 1;
        VidSchiCompleteSignalSyncObject(v40, v42, v39, v41);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v40 + 32), 0xFFFFFFFF) == 1 )
        {
          if ( *(_DWORD *)(v40 + 40) == 3 )
          {
            ObfDereferenceObject(*(PVOID *)(v40 + 48));
            *(_QWORD *)(v40 + 48) = 0LL;
          }
          else if ( *(_DWORD *)(v40 + 40) == 4 && !*(_QWORD *)(v40 + 16) )
          {
            VIDMM_GLOBAL::FreeFenceStorageSlot(
              (struct VIDMM_MONITORED_FENCE_STORAGE *)(v40 + 48),
              *(_BYTE *)(v40 + 24) != 0);
          }
          if ( *(_BYTE *)(v40 + 27) )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v40 + 168) + 8LL), &v66);
            v51 = *(_QWORD *)(v40 + 120);
            v52 = *(_QWORD **)(v40 + 128);
            if ( *(_QWORD *)(v51 + 8) != v40 + 120 || *v52 != v40 + 120 )
              __fastfail(3u);
            *v52 = v51;
            *(_QWORD *)(v51 + 8) = v52;
            KeReleaseInStackQueuedSpinLock(&v66);
            v53 = *(void **)(v40 + 168);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v53, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v53, 0);
          }
          ExFreePoolWithTag((PVOID)v40, 0);
        }
        v37 = (int)a6;
        ++v36;
        ++v39;
        v38 += 8;
      }
      while ( v36 < (unsigned int)v6 );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P;
LABEL_49:
  if ( PoolWithTag != (struct _VIDSCH_QUEUE_PACKET **)v64 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v9;
}

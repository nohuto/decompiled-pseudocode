/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0007120
 * Callers:
 *     ?EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z @ 0x1C004E990 (-EndPreparation@VIDMM_GLOBAL@@IEAAXIPEAU_KEVENT@@_N_KPEAU_VIDSCH_SYNC_OBJECT@@@Z.c)
 *     ?FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z @ 0x1C004FD80 (-FlushPagingBufferInternal@VIDMM_GLOBAL@@QEAAXKEP6AXPEAX@Z0EE@Z.c)
 *     ?ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYNC_OBJECT@@2PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C0052D60 (-ProcessDeferredCommand@VIDMM_GLOBAL@@QEAAJPEAU_VIDMM_DEFERRED_COMMAND@@PEA_N_N_KPEAU_VIDSCH_SYN.c)
 *     VidSchSignalPagingFences @ 0x1C006AAE8 (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C008B8AC (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     VidSchiSignalSyncObject @ 0x1C0007630 (VidSchiSignalSyncObject.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C000AA90 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C000E270 (VidSchiFreeQueuePacket.c)
 *     ?FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z @ 0x1C000F338 (-FreeFenceStorageSlot@VIDMM_GLOBAL@@SAXPEAUVIDMM_MONITORED_FENCE_STORAGE@@_N@Z.c)
 *     memset @ 0x1C0014E40 (memset.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        _QWORD *a2,
        unsigned int a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // r14
  char *v7; // r15
  unsigned int v8; // esi
  unsigned int v9; // edi
  __int64 v10; // r12
  unsigned int v11; // r12d
  unsigned __int64 *v12; // rbx
  __int64 v13; // rax
  unsigned __int64 v14; // rdx
  bool v15; // cl
  unsigned __int64 v16; // rax
  int v17; // eax
  int v18; // ebx
  struct _VIDSCH_QUEUE_PACKET **PoolWithTag; // rbx
  unsigned int v20; // r13d
  _QWORD *v21; // rax
  KSPIN_LOCK *v22; // r8
  __int64 *v23; // rcx
  char *v24; // r12
  __int64 v25; // rax
  _DWORD *QueuePacket; // rax
  __int64 v27; // r11
  signed __int64 v28; // r9
  char *v29; // r8
  __int64 v30; // r10
  __int64 v31; // r15
  __int64 v32; // rax
  KSPIN_LOCK *v33; // rax
  unsigned int v34; // r13d
  unsigned int v35; // esi
  unsigned int v36; // r13d
  __int64 v37; // rsi
  unsigned int v39; // ebx
  int v40; // eax
  char *v41; // rsi
  unsigned __int64 *v42; // r12
  __int64 v43; // r13
  __int64 v44; // r9
  __int64 v45; // rdx
  __int64 v46; // rax
  __int64 v47; // rax
  unsigned __int64 v48; // rcx
  __int64 v49; // rax
  unsigned __int64 v50; // rcx
  __int64 v51; // rax
  __int64 v52; // rax
  __int64 v53; // rdi
  __int64 v54; // rdx
  _QWORD *v55; // rcx
  void *v56; // rcx
  unsigned __int64 v57; // [rsp+30h] [rbp-69h]
  __int64 v58; // [rsp+30h] [rbp-69h]
  unsigned __int64 v59; // [rsp+38h] [rbp-61h]
  __int64 v60; // [rsp+38h] [rbp-61h]
  _QWORD *v61; // [rsp+40h] [rbp-59h]
  KSPIN_LOCK *SpinLock; // [rsp+48h] [rbp-51h]
  PKSPIN_LOCK SpinLocka; // [rsp+48h] [rbp-51h]
  __int64 v64; // [rsp+50h] [rbp-49h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+58h] [rbp-41h] BYREF
  PVOID P; // [rsp+70h] [rbp-29h]
  _BYTE v67[16]; // [rsp+78h] [rbp-21h] BYREF
  unsigned int v68; // [rsp+88h] [rbp-11h]
  struct _KLOCK_QUEUE_HANDLE v69; // [rsp+90h] [rbp-9h] BYREF
  unsigned int v70; // [rsp+F0h] [rbp+57h]

  v6 = a3;
  v7 = a4;
  v8 = a1;
  if ( (_DWORD)a1 )
  {
    if ( a2 && a4 && a3 )
      goto LABEL_5;
LABEL_70:
    v46 = WdLogNewEntry5_WdAssertion(a1, a2);
    *(_QWORD *)(v46 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v46);
    return 3221225485LL;
  }
  if ( !a4 || !a3 )
    goto LABEL_70;
  v8 = 1;
LABEL_5:
  v9 = 0;
  v10 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  v64 = v10;
  if ( (((unsigned __int8)a5 | (a5 >> 29)) & 4) != 0 )
    goto LABEL_17;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v10 + 1856), &LockHandle);
  v11 = 0;
  if ( !(_DWORD)v6 )
  {
LABEL_14:
    v18 = 0;
    goto LABEL_15;
  }
  v12 = a6;
  while ( 1 )
  {
    v13 = *(unsigned __int64 *)((char *)v12 + v7 - (char *)a6);
    if ( *(_DWORD *)(v13 + 40) != 4 || *(_BYTE *)(v13 + 28) )
      goto LABEL_13;
    v14 = *v12;
    v57 = *v12;
    v15 = *(_BYTE *)(v13 + 29) != 0;
    v16 = *(_QWORD *)(v13 + 80);
    v59 = v16;
    if ( !v15 )
      break;
    if ( v14 < v16 )
    {
      v49 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v49 + 24) = v57;
      v50 = v59;
      goto LABEL_75;
    }
    if ( v14 == v16 )
    {
      v47 = WdLogNewEntry5_WdWarning();
      v48 = v57;
LABEL_72:
      *(_QWORD *)(v47 + 24) = v48;
      WdLogEvent5_WdWarning(v47);
    }
LABEL_13:
    ++v11;
    ++v12;
    if ( v11 >= (unsigned int)v6 )
      goto LABEL_14;
  }
  v17 = v16 - v14;
  if ( v17 <= 0 )
  {
    if ( !v17 )
    {
      v47 = WdLogNewEntry5_WdWarning();
      v48 = (unsigned int)v57;
      goto LABEL_72;
    }
    goto LABEL_13;
  }
  v49 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v49 + 24) = (unsigned int)v57;
  v50 = (unsigned int)v59;
LABEL_75:
  *(_QWORD *)(v49 + 32) = v50;
  WdLogEvent5_WdWarning(v49);
  v18 = -1073741811;
  v51 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v51 + 24) = a6[v11];
  *(_QWORD *)(v51 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v51);
LABEL_15:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v18 < 0 )
    return (unsigned int)v18;
  v10 = v64;
LABEL_17:
  v68 = 0;
  PoolWithTag = 0LL;
  P = 0LL;
  if ( v8 > 2 )
  {
    if ( 0xFFFFFFFFFFFFFFFFuLL / v8 >= 8 )
    {
      PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)ExAllocatePoolWithTag((POOL_TYPE)512, 8LL * v8, 0x6E795356u);
      P = PoolWithTag;
      goto LABEL_19;
    }
    goto LABEL_85;
  }
  PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)v67;
  P = v67;
LABEL_19:
  v68 = v8;
  if ( !PoolWithTag || (memset(PoolWithTag, 0, 8LL * v8), (PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P) == 0LL) )
  {
LABEL_85:
    v9 = -1073741801;
    goto LABEL_54;
  }
  v70 = 0;
  v20 = 0;
  v60 = 0LL;
  if ( v8 )
  {
    v21 = a2;
    v22 = (KSPIN_LOCK *)(v10 + 1856);
    SpinLock = (KSPIN_LOCK *)(v10 + 1856);
    v23 = a2;
    v61 = a2;
    v24 = (char *)P;
    do
    {
      if ( v21 )
        v25 = *v23;
      else
        v25 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)v7 + 8LL) + 208LL);
      v58 = v25;
      KeAcquireInStackQueuedSpinLock(v22, &LockHandle);
      if ( *(_QWORD *)(v58 + 664) == v58 + 664 )
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
      }
      else
      {
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v58, *(_DWORD *)(v58 + 796) == 0);
        *(_QWORD *)v24 = QueuePacket;
        if ( !QueuePacket )
        {
          v52 = WdLogNewEntry5_WdWarning();
          *(_QWORD *)(v52 + 24) = -1073741801LL;
          *(_QWORD *)(v52 + 32) = 9010LL;
          WdLogEvent5_WdWarning(v52);
          if ( v20 )
          {
            v53 = v20;
            do
            {
              if ( *PoolWithTag )
                VidSchiFreeQueuePacket(v58);
              ++PoolWithTag;
              --v53;
            }
            while ( v53 );
          }
          PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P;
          goto LABEL_85;
        }
        *QueuePacket = 1953189969;
        v70 = v20;
        *(_DWORD *)(*(_QWORD *)v24 + 48LL) = 5;
        *(_QWORD *)(*(_QWORD *)v24 + 56LL) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(*(_QWORD *)v24 + 52LL) = 2;
        *(_QWORD *)(*(_QWORD *)v24 + 88LL) = v58;
        *(_QWORD *)(*(_QWORD *)v24 + 96LL) = KeGetCurrentThread();
        *(_DWORD *)(*(_QWORD *)v24 + 72LL) = 0;
        *(_DWORD *)(*(_QWORD *)v24 + 264LL) ^= ((unsigned __int8)a5 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v24 + 264LL)) & 1;
        if ( (a5 & 4) != 0 )
          *(_DWORD *)(*(_QWORD *)v24 + 264LL) |= 4u;
        if ( *(_DWORD *)(*(_QWORD *)v7 + 40LL) == 2 )
          *(_QWORD *)(*(_QWORD *)v24 + 528LL) = *a6;
        if ( (_DWORD)v6 )
        {
          v27 = 272LL - (_QWORD)v7;
          v28 = (char *)a6 - v7;
          v29 = v7;
          v30 = 528LL - (_QWORD)v7;
          v31 = v6;
          do
          {
            *(_QWORD *)&v29[v27 + *(_QWORD *)v24] = *(_QWORD *)v29;
            if ( *(_DWORD *)(*(_QWORD *)v29 + 40LL) == 4 )
              *(_QWORD *)&v29[v30 + *(_QWORD *)v24] = *(_QWORD *)&v29[v28];
            v29 += 8;
            --v31;
          }
          while ( v31 );
          v7 = a4;
        }
        *(_DWORD *)(*(_QWORD *)v24 + 268LL) = v6;
        *(_QWORD *)(*(_QWORD *)v24 + 784LL) = 0LL;
        v32 = *(_QWORD *)v24;
        if ( v60 )
        {
          *(_QWORD *)(v32 + 792) = v60;
          *(_QWORD *)(v60 + 784) = *(_QWORD *)v24;
        }
        else
        {
          *(_QWORD *)(v32 + 792) = 0LL;
        }
        v60 = *(_QWORD *)v24;
      }
      ++v20;
      v21 = a2;
      v23 = v61 + 1;
      v22 = SpinLock;
      v24 += 8;
      ++v61;
    }
    while ( v20 < v8 );
    if ( !v60 )
      goto LABEL_57;
    KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
    v33 = (KSPIN_LOCK *)PoolWithTag;
    v34 = v70;
    v35 = 0;
    SpinLocka = (PKSPIN_LOCK)PoolWithTag;
    do
    {
      if ( *v33 )
      {
        v36 = 0;
        if ( (_DWORD)v6 )
        {
          do
            VidSchiSignalSyncObject(v36++, (_DWORD)v7, a5, (_DWORD)a6, v35 == v70);
          while ( v36 < (unsigned int)v6 );
          v33 = SpinLocka;
          v9 = 0;
        }
        v34 = v70;
      }
      ++v33;
      ++v35;
      SpinLocka = v33;
    }
    while ( v35 <= v34 );
    KeReleaseInStackQueuedSpinLock(&LockHandle);
    v37 = v34 + 1;
    do
    {
      if ( *PoolWithTag )
        VidSchiSubmitCommandPacketToQueue(*PoolWithTag);
      ++PoolWithTag;
      --v37;
    }
    while ( v37 );
  }
  else
  {
LABEL_57:
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v64 + 1856), &LockHandle);
    v39 = 0;
    if ( (_DWORD)v6 )
    {
      v40 = (int)a6;
      v41 = v7;
      v42 = a6;
      do
      {
        v43 = *(_QWORD *)v41;
        VidSchiSignalSyncObject(v39, (_DWORD)v7, a5, v40, 1);
        LOBYTE(v44) = 1;
        VidSchiCompleteSignalSyncObject(v43, v45, v42, v44);
        if ( _InterlockedExchangeAdd((volatile signed __int32 *)(v43 + 32), 0xFFFFFFFF) == 1 )
        {
          if ( *(_DWORD *)(v43 + 40) == 3 )
          {
            ObfDereferenceObject(*(PVOID *)(v43 + 48));
            *(_QWORD *)(v43 + 48) = 0LL;
          }
          else if ( *(_DWORD *)(v43 + 40) == 4 && !*(_QWORD *)(v43 + 16) )
          {
            VIDMM_GLOBAL::FreeFenceStorageSlot(
              (struct VIDMM_MONITORED_FENCE_STORAGE *)(v43 + 48),
              *(_BYTE *)(v43 + 24) != 0);
          }
          if ( *(_BYTE *)(v43 + 27) )
          {
            KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(*(_QWORD *)(v43 + 168) + 8LL), &v69);
            v54 = *(_QWORD *)(v43 + 120);
            v55 = *(_QWORD **)(v43 + 128);
            if ( *(_QWORD *)(v54 + 8) != v43 + 120 || *v55 != v43 + 120 )
              __fastfail(3u);
            *v55 = v54;
            *(_QWORD *)(v54 + 8) = v55;
            KeReleaseInStackQueuedSpinLock(&v69);
            v56 = *(void **)(v43 + 168);
            if ( _InterlockedExchangeAdd((volatile signed __int32 *)v56, 0xFFFFFFFF) == 1 )
              ExFreePoolWithTag(v56, 0);
          }
          ExFreePoolWithTag((PVOID)v43, 0);
        }
        v40 = (int)a6;
        ++v39;
        ++v42;
        v41 += 8;
      }
      while ( v39 < (unsigned int)v6 );
    }
    KeReleaseInStackQueuedSpinLock(&LockHandle);
  }
  PoolWithTag = (struct _VIDSCH_QUEUE_PACKET **)P;
LABEL_54:
  if ( PoolWithTag != (struct _VIDSCH_QUEUE_PACKET **)v67 )
  {
    if ( PoolWithTag )
      ExFreePoolWithTag(PoolWithTag, 0);
  }
  return v9;
}

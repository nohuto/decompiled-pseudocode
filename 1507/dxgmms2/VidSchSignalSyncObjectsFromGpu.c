/*
 * XREFs of VidSchSignalSyncObjectsFromGpu @ 0x1C0005320
 * Callers:
 *     VidSchSignalPagingFences @ 0x1C0044B54 (VidSchSignalPagingFences.c)
 *     ?UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@PEAPEAUVIDMM_ALLOC@@@Z @ 0x1C00544F8 (-UpdateGpuVirtualAddressSystemCommand@VIDMM_GLOBAL@@IEAAJPEAUVIDSCH_DEVICE_COMMAND_UPDATEGPUVA@@.c)
 * Callees:
 *     ?AllocateElements@?$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEAU_VIDSCH_QUEUE_PACKET@@I@Z @ 0x1C0005794 (-AllocateElements@-$NonPagedPoolZeroedArray@PEAU_VIDSCH_QUEUE_PACKET@@$01$0GOHJFDFG@@@QEAAPEAPEA.c)
 *     VidSchiSignalSyncObject @ 0x1C00057DC (VidSchiSignalSyncObject.c)
 *     VidSchiReleaseSyncObjectReference @ 0x1C00058B4 (VidSchiReleaseSyncObjectReference.c)
 *     VidSchiCompleteSignalSyncObject @ 0x1C0005914 (VidSchiCompleteSignalSyncObject.c)
 *     VidSchiFreeQueuePacket @ 0x1C0006730 (VidSchiFreeQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 */

__int64 __fastcall VidSchSignalSyncObjectsFromGpu(
        __int64 a1,
        __int64 a2,
        __int64 a3,
        char *a4,
        unsigned int a5,
        unsigned __int64 *a6)
{
  __int64 v6; // rbp
  __int64 v8; // r14
  unsigned int v9; // r12d
  unsigned int v10; // ebx
  __int64 v11; // rdi
  int v12; // r13d
  unsigned int v13; // esi
  unsigned __int64 *v14; // rdi
  __int64 v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  __int64 v18; // rax
  struct _VIDSCH_QUEUE_PACKET **v19; // rsi
  unsigned int v20; // r13d
  KSPIN_LOCK *v21; // r8
  __int64 v22; // rdi
  __int64 v23; // rax
  __int64 v24; // r14
  _DWORD *QueuePacket; // rax
  char *v26; // r8
  __int64 v27; // r14
  __int64 v28; // rax
  __int64 v29; // rax
  unsigned int v30; // edi
  struct _VIDSCH_QUEUE_PACKET **v31; // r12
  unsigned int v32; // r14d
  __int64 v33; // rdi
  unsigned int v35; // esi
  char *v36; // r14
  unsigned __int64 *v37; // r12
  __int64 v38; // rdi
  __int64 v39; // r9
  __int64 v40; // rdx
  __int64 v41; // rax
  __int64 v42; // rax
  __int64 v43; // rax
  __int64 v44; // rax
  __int64 v45; // rax
  __int64 v46; // rbx
  __int64 v47; // [rsp+30h] [rbp-98h]
  __int64 v48; // [rsp+38h] [rbp-90h]
  KSPIN_LOCK *SpinLock; // [rsp+40h] [rbp-88h]
  __int64 i; // [rsp+48h] [rbp-80h]
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+50h] [rbp-78h] BYREF
  PVOID P; // [rsp+68h] [rbp-60h] BYREF
  char v53; // [rsp+70h] [rbp-58h] BYREF
  int v54; // [rsp+80h] [rbp-48h]
  int v55; // [rsp+D0h] [rbp+8h]
  unsigned int v56; // [rsp+D0h] [rbp+8h]

  v55 = a1;
  v6 = (unsigned int)a3;
  v8 = a2;
  v9 = a1;
  if ( (_DWORD)a1 )
  {
    if ( a2 && a4 && (_DWORD)a3 )
      goto LABEL_5;
LABEL_59:
    v41 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v41 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v41);
    return 3221225485LL;
  }
  if ( !a4 || !(_DWORD)a3 )
    goto LABEL_59;
  v9 = 1;
  v55 = 1;
LABEL_5:
  v10 = 0;
  v11 = *(_QWORD *)(*(_QWORD *)a4 + 8LL);
  v48 = v11;
  if ( (((unsigned __int8)a5 | (a5 >> 29)) & 4) != 0 )
    goto LABEL_17;
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v11 + 1872), &LockHandle);
  v12 = 0;
  v13 = 0;
  if ( !(_DWORD)v6 )
    goto LABEL_16;
  v14 = a6;
  while ( 1 )
  {
    v15 = *(unsigned __int64 *)((char *)v14 + a4 - (char *)a6);
    if ( *(_DWORD *)(v15 + 40) != 4 || *(_BYTE *)(v15 + 28) )
      goto LABEL_13;
    v16 = *v14;
    v17 = *(_QWORD *)(v15 + 80);
    if ( *(_BYTE *)(v15 + 29) )
    {
      if ( v16 < v17 )
      {
        v43 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v43 + 24) = v16;
        *(_QWORD *)(v43 + 32) = v17;
        goto LABEL_67;
      }
      if ( v16 == v17 )
      {
        v42 = WdLogNewEntry5_WdWarning();
        *(_QWORD *)(v42 + 24) = v16;
LABEL_64:
        WdLogEvent5_WdWarning(v42);
        goto LABEL_13;
      }
      goto LABEL_13;
    }
    if ( (int)v17 - (int)v16 > 0 )
      break;
    if ( (_DWORD)v17 == (_DWORD)v16 )
    {
      v42 = WdLogNewEntry5_WdWarning();
      *(_QWORD *)(v42 + 24) = (unsigned int)v16;
      goto LABEL_64;
    }
LABEL_13:
    ++v13;
    ++v14;
    if ( v13 >= (unsigned int)v6 )
    {
      v12 = 0;
      goto LABEL_15;
    }
  }
  v43 = WdLogNewEntry5_WdWarning();
  *(_QWORD *)(v43 + 24) = (unsigned int)v16;
  *(_QWORD *)(v43 + 32) = (unsigned int)v17;
LABEL_67:
  WdLogEvent5_WdWarning(v43);
  v12 = -1073741811;
  v44 = WdLogNewEntry5_WdError();
  *(_QWORD *)(v44 + 24) = a6[v13];
  *(_QWORD *)(v44 + 32) = -1073741811LL;
  WdLogEvent5_WdError(v44);
LABEL_15:
  v11 = v48;
  v8 = a2;
  v9 = v55;
LABEL_16:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  if ( v12 < 0 )
    return (unsigned int)v12;
LABEL_17:
  P = 0LL;
  v54 = 0;
  v18 = NonPagedPoolZeroedArray<_VIDSCH_QUEUE_PACKET *,2,1853444950>::AllocateElements(&P, v9);
  v19 = (struct _VIDSCH_QUEUE_PACKET **)v18;
  if ( v18 )
  {
    v47 = 0LL;
    v20 = 0;
    v56 = 0;
    if ( v9 )
    {
      v21 = (KSPIN_LOCK *)(v11 + 1872);
      v22 = v18;
      SpinLock = v21;
      v23 = v8 - v18;
      for ( i = v23; ; v23 = i )
      {
        v24 = v8 ? *(_QWORD *)(v23 + v22) : *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)a4 + 8LL) + 176LL) + 64LL);
        KeAcquireInStackQueuedSpinLock(v21, &LockHandle);
        if ( *(_QWORD *)(v24 + 664) == v24 + 664 )
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          v29 = v47;
        }
        else
        {
          KeReleaseInStackQueuedSpinLock(&LockHandle);
          QueuePacket = (_DWORD *)VidSchiAllocateQueuePacket(v24, *(_DWORD *)(v24 + 772) == 0);
          *(_QWORD *)v22 = QueuePacket;
          if ( !QueuePacket )
          {
            v45 = WdLogNewEntry5_WdWarning();
            *(_QWORD *)(v45 + 24) = -1073741801LL;
            *(_QWORD *)(v45 + 32) = 8750LL;
            WdLogEvent5_WdWarning(v45);
            if ( v56 )
            {
              v46 = v56;
              do
              {
                if ( *v19 )
                  VidSchiFreeQueuePacket(v24);
                ++v19;
                --v46;
              }
              while ( v46 );
            }
            goto LABEL_77;
          }
          v20 = v56;
          *QueuePacket = 1953189969;
          *(_DWORD *)(*(_QWORD *)v22 + 48LL) = 5;
          *(_QWORD *)(*(_QWORD *)v22 + 56LL) = MEMORY[0xFFFFF78000000320];
          *(_DWORD *)(*(_QWORD *)v22 + 52LL) = 2;
          *(_QWORD *)(*(_QWORD *)v22 + 80LL) = v24;
          *(_QWORD *)(*(_QWORD *)v22 + 88LL) = KeGetCurrentThread();
          *(_DWORD *)(*(_QWORD *)v22 + 72LL) = 0;
          *(_DWORD *)(*(_QWORD *)v22 + 256LL) ^= ((unsigned __int8)a5 ^ (unsigned __int8)*(_DWORD *)(*(_QWORD *)v22 + 256LL)) & 1;
          if ( (a5 & 4) != 0 )
            *(_DWORD *)(*(_QWORD *)v22 + 256LL) |= 4u;
          if ( *(_DWORD *)(*(_QWORD *)a4 + 40LL) == 2 )
            *(_QWORD *)(*(_QWORD *)v22 + 520LL) = *a6;
          if ( (_DWORD)v6 )
          {
            v26 = a4;
            v27 = v6;
            do
            {
              *(_QWORD *)&v26[264LL - (_QWORD)a4 + *(_QWORD *)v22] = *(_QWORD *)v26;
              if ( *(_DWORD *)(*(_QWORD *)v26 + 40LL) == 4 )
                *(_QWORD *)&v26[520LL - (_QWORD)a4 + *(_QWORD *)v22] = *(_QWORD *)&v26[(char *)a6 - a4];
              v26 += 8;
              --v27;
            }
            while ( v27 );
          }
          *(_DWORD *)(*(_QWORD *)v22 + 260LL) = v6;
          *(_QWORD *)(*(_QWORD *)v22 + 776LL) = 0LL;
          v28 = *(_QWORD *)v22;
          if ( v47 )
          {
            *(_QWORD *)(v28 + 784) = v47;
            *(_QWORD *)(v47 + 776) = *(_QWORD *)v22;
          }
          else
          {
            *(_QWORD *)(v28 + 784) = 0LL;
          }
          v29 = *(_QWORD *)v22;
          v47 = *(_QWORD *)v22;
        }
        v22 += 8LL;
        v8 = a2;
        v21 = SpinLock;
        if ( ++v56 >= v9 )
          break;
      }
      if ( !v29 )
        goto LABEL_51;
      KeAcquireInStackQueuedSpinLock(SpinLock, &LockHandle);
      v30 = 0;
      v31 = v19;
      do
      {
        if ( *v31 )
        {
          v32 = 0;
          if ( (_DWORD)v6 )
          {
            do
              VidSchiSignalSyncObject(v32++, (_DWORD)a4, a5, (_DWORD)a6, v30 == v20);
            while ( v32 < (unsigned int)v6 );
            v10 = 0;
          }
        }
        ++v30;
        ++v31;
      }
      while ( v30 <= v20 );
      KeReleaseInStackQueuedSpinLock(&LockHandle);
      v33 = v20 + 1;
      do
      {
        if ( *v19 )
          VidSchiSubmitCommandPacketToQueue(*v19);
        ++v19;
        --v33;
      }
      while ( v33 );
    }
    else
    {
LABEL_51:
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v48 + 1872), &LockHandle);
      v35 = 0;
      if ( (_DWORD)v6 )
      {
        v36 = a4;
        v37 = a6;
        do
        {
          v38 = *(_QWORD *)v36;
          VidSchiSignalSyncObject(v35, (_DWORD)a4, a5, (_DWORD)a6, 1);
          LOBYTE(v39) = 1;
          VidSchiCompleteSignalSyncObject(v38, v40, v37, v39);
          VidSchiReleaseSyncObjectReference(v38);
          ++v35;
          v36 += 8;
          ++v37;
        }
        while ( v35 < (unsigned int)v6 );
        v10 = 0;
      }
      KeReleaseInStackQueuedSpinLock(&LockHandle);
    }
  }
  else
  {
LABEL_77:
    v10 = -1073741801;
  }
  if ( P != &v53 )
  {
    if ( P )
      ExFreePoolWithTag(P, 0);
  }
  return v10;
}

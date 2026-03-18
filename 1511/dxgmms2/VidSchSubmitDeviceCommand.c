/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00121A0
 * Callers:
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C004CF30 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C004D668 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     VidSchSwitchFromContext @ 0x1C005ED20 (VidSchSwitchFromContext.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C007D870 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromDevice @ 0x1C008C020 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchiSetPriorityContext @ 0x1C0010018 (VidSchiSetPriorityContext.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C0012654 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00127F8 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchIsDeviceBusy @ 0x1C00128A4 (VidSchIsDeviceBusy.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00128D0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiAllocateQueuePacket @ 0x1C0039D10 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0039E40 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v6; // r8d
  __int64 v7; // r14
  char v8; // bp
  __int64 v9; // r15
  __int64 v10; // r12
  __int64 v11; // rdx
  _QWORD *v12; // rcx
  __int64 v13; // r8
  int v14; // r9d
  int v15; // ebx
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 v17; // rcx
  __int64 v18; // rax
  _QWORD *v19; // rdx
  __int64 v20; // rbx
  KIRQL v21; // di
  _QWORD *v22; // r8
  __int64 v23; // rcx
  char v25; // r15
  void *v26; // r12
  __int64 v27; // r13
  int v28; // r9d
  _QWORD *v29; // rcx
  _QWORD *v30; // rcx
  _QWORD *v31; // rax
  __int64 v32; // r8
  _QWORD *v33; // rdx
  __int64 v34; // rax
  __int64 v35; // rsi
  int v36; // r8d
  int v37; // r8d
  __int64 QueuePacket; // rbx
  KPRIORITY PriorityThread; // eax
  __int64 v40; // rax
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v43; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v44; // [rsp+78h] [rbp-40h] BYREF
  __int64 v45; // [rsp+C0h] [rbp+8h]

  if ( !a1 || !a2 )
  {
    v40 = WdLogNewEntry5_WdAssertion(a1, a2, a3, a4);
    *(_QWORD *)(v40 + 24) = -1073741811LL;
    WdLogEvent5_WdAssertion(v40);
    return 3221225485LL;
  }
  v6 = *(_DWORD *)(a2 + 48);
  v7 = *(_QWORD *)(a1 + 32);
  if ( v6 )
  {
    if ( v6 == 3 )
    {
      v25 = 1;
      v26 = *(void **)(a2 + 32);
      if ( *(_DWORD *)a2 != 1 )
        goto LABEL_47;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 992), 1u);
      v27 = *(_QWORD *)(a1 + 1152);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1824), &v42);
      v28 = 0;
      if ( *(_QWORD *)(a1 + 1160) < v27 && (*(_DWORD *)(a1 + 1140) || *(_DWORD *)(a1 + 1144) || *(_DWORD *)(a1 + 1128)) )
      {
        v29 = *(_QWORD **)(a1 + 72);
        if ( v29 == (_QWORD *)(a1 + 72) )
          goto LABEL_45;
        do
        {
          if ( v29[18] > v29[16] )
            ++v28;
          v29 = (_QWORD *)*v29;
        }
        while ( v29 != (_QWORD *)(a1 + 72) );
        if ( !v28 )
        {
LABEL_45:
          *(_QWORD *)(a1 + 1160) = v27;
        }
        else
        {
          v25 = 0;
          if ( *(_DWORD *)(a2 + 48) == 3 )
          {
            v30 = *(_QWORD **)(a2 + 32);
            v31 = v30 + 27;
            if ( v30[27] )
            {
              v32 = *v31;
              v33 = (_QWORD *)v30[28];
              if ( *(_QWORD **)(*v31 + 8LL) != v31 || (_QWORD *)*v33 != v31 )
                __fastfail(3u);
              *v33 = v32;
              *(_QWORD *)(v32 + 8) = v33;
              *v31 = 0LL;
              v34 = v30[12];
              v30[28] = 0LL;
              _InterlockedDecrement((volatile signed __int32 *)(v34 + 8));
            }
          }
          v15 = VidSchiAddPendingCommandToSyncPointList(a1, v26, v27);
          if ( v15 < 0 )
          {
            p_LockHandle = &v42;
            goto LABEL_43;
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&v42);
      ExReleaseResourceLite((PERESOURCE)(v7 + 992));
      if ( v25 )
      {
LABEL_47:
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v26);
        return 0LL;
      }
      return 0LL;
    }
    v35 = 0LL;
    v36 = v6 - 1;
    if ( !v36 )
      goto LABEL_51;
    v37 = v36 - 1;
    if ( !v37 )
    {
      v35 = **(_QWORD **)(a2 + 32);
      goto LABEL_52;
    }
    if ( (unsigned int)(v37 - 1) <= 1 )
LABEL_51:
      v35 = *(_QWORD *)(a1 + 64);
LABEL_52:
    QueuePacket = VidSchiAllocateQueuePacket(v35, 1LL);
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 6;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 80) = v35;
    *(_QWORD *)(QueuePacket + 88) = KeGetCurrentThread();
    *(_OWORD *)(QueuePacket + 256) = *(_OWORD *)a2;
    *(_OWORD *)(QueuePacket + 272) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(QueuePacket + 288) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(QueuePacket + 304) = *(_QWORD *)(a2 + 48);
    if ( (*(_DWORD *)(v7 + 2096) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(v35, PriorityThread);
    }
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)QueuePacket);
    return 0LL;
  }
  v45 = *(_QWORD *)(a2 + 32);
  v8 = 0;
  v9 = *(_QWORD *)(v45 + 8);
  *(_BYTE *)v45 = 1;
  ExAcquireResourceExclusiveLite((PERESOURCE)(v7 + 992), 1u);
  v10 = *(_QWORD *)(a1 + 1152);
  KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v7 + 1824), &LockHandle);
  if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1160) < v10 && (unsigned __int8)VidSchIsDeviceBusy(a1, v11, v13, 0LL) )
  {
    v12 = *(_QWORD **)(a1 + 72);
    if ( v12 != (_QWORD *)(a1 + 72) )
    {
      do
      {
        if ( v12[18] > v12[16] )
          ++v14;
        v12 = (_QWORD *)*v12;
      }
      while ( v12 != (_QWORD *)(a1 + 72) );
      if ( v14 )
      {
        v15 = VidSchiAddPendingCommandToSyncPointList(a1, v9, v10);
        if ( v15 < 0 )
        {
          p_LockHandle = &LockHandle;
LABEL_43:
          KeReleaseInStackQueuedSpinLock(p_LockHandle);
          ExReleaseResourceLite((PERESOURCE)(v7 + 992));
          return (unsigned int)v15;
        }
        goto LABEL_20;
      }
    }
    *(_QWORD *)(a1 + 1160) = v10;
  }
  if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v12, v9) )
  {
    v8 = 1;
    goto LABEL_21;
  }
  v8 = 0;
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1856LL), &v43);
  v17 = v9 + 200;
  v18 = *(_QWORD *)(a1 + 32) + 1888LL;
  v19 = *(_QWORD **)(*(_QWORD *)(a1 + 32) + 1896LL);
  *(_QWORD *)(v9 + 200) = v18;
  *(_QWORD *)(v9 + 208) = v19;
  if ( *v19 != v18 )
    __fastfail(3u);
  *v19 = v17;
  *(_QWORD *)(v18 + 8) = v17;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v43);
LABEL_20:
  *(_BYTE *)v45 = 0;
LABEL_21:
  KeReleaseInStackQueuedSpinLock(&LockHandle);
  ExReleaseResourceLite((PERESOURCE)(v7 + 992));
  if ( !v8 )
    return 0LL;
  v20 = **(_QWORD **)(v9 + 8);
  v21 = KfRaiseIrql(2u);
  KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v20 + 40864), &v44);
  v22 = *(_QWORD **)(v20 + 40880);
  v23 = v9 + 200;
  *(_QWORD *)(v9 + 200) = v20 + 40872;
  *(_QWORD *)(v9 + 208) = v22;
  if ( *v22 != v20 + 40872 )
    __fastfail(3u);
  *v22 = v23;
  *(_QWORD *)(v20 + 40880) = v23;
  KeReleaseInStackQueuedSpinLockFromDpcLevel(&v44);
  KeSetEvent(*(PRKEVENT *)(v20 + 40856), 0, 0);
  KeLowerIrql(v21);
  return 0LL;
}

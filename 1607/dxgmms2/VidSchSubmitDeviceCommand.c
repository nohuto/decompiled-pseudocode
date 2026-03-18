/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C00013B0
 * Callers:
 *     VidSchSwitchFromContext @ 0x1C0040B10 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C0040FC0 (VidSchSwitchFromDevice.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C0054F00 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C0055A2C (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C008CCF4 (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 * Callees:
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C00017DC (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C00019A0 (VidSchiCheckConditionDeviceCommand.c)
 *     VidSchIsDeviceBusy @ 0x1C00019C8 (VidSchIsDeviceBusy.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C00019F0 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     VidSchiSetPriorityContext @ 0x1C0010F74 (VidSchiSetPriorityContext.c)
 *     VidSchiAllocateQueuePacket @ 0x1C00432A0 (VidSchiAllocateQueuePacket.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C0043780 (VidSchiSubmitCommandPacketToQueue.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2)
{
  __int64 v4; // rsi
  int v5; // ecx
  char v6; // bp
  void *v7; // r12
  __int64 v8; // r13
  int v9; // r9d
  _QWORD *v10; // rcx
  _QWORD *v11; // rcx
  _QWORD *v12; // rax
  int v13; // ebx
  __int64 v15; // r12
  char v16; // r14
  __int64 v17; // rbp
  __int64 v18; // r13
  __int64 v19; // rdx
  _QWORD *v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  __int64 v23; // rbx
  KIRQL v24; // di
  _QWORD *v25; // r8
  _QWORD *v26; // rcx
  __int64 v27; // r14
  __int64 QueuePacket; // rdi
  int v29; // ecx
  __int64 v30; // r8
  _QWORD *v31; // rdx
  __int64 v32; // rax
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  __int64 *v34; // rcx
  __int64 v35; // rax
  __int64 **v36; // rdx
  unsigned int PriorityThread; // eax
  __int64 v38; // rax
  struct _KLOCK_QUEUE_HANDLE v39; // [rsp+30h] [rbp-88h] BYREF
  struct _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+48h] [rbp-70h] BYREF
  struct _KLOCK_QUEUE_HANDLE v41; // [rsp+60h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v42; // [rsp+78h] [rbp-40h] BYREF

  if ( a1 && a2 )
  {
    v4 = *(_QWORD *)(a1 + 32);
    v5 = *(_DWORD *)(a2 + 40);
    if ( v5 )
    {
      if ( v5 != 3 )
      {
        v27 = 0LL;
        if ( v5 == 4 || (v29 = v5 - 1) == 0 )
        {
          v27 = *(_QWORD *)(v4 + 208);
        }
        else if ( v29 == 1 )
        {
          v27 = **(_QWORD **)(a2 + 48);
        }
        QueuePacket = VidSchiAllocateQueuePacket(v27, 1LL);
        *(_DWORD *)QueuePacket = 1953189969;
        *(_DWORD *)(QueuePacket + 48) = 6;
        *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
        *(_DWORD *)(QueuePacket + 52) = 2;
        *(_QWORD *)(QueuePacket + 88) = v27;
        *(_QWORD *)(QueuePacket + 96) = KeGetCurrentThread();
        *(_OWORD *)(QueuePacket + 264) = *(_OWORD *)a2;
        *(_OWORD *)(QueuePacket + 280) = *(_OWORD *)(a2 + 16);
        *(_OWORD *)(QueuePacket + 296) = *(_OWORD *)(a2 + 32);
        *(_OWORD *)(QueuePacket + 312) = *(_OWORD *)(a2 + 48);
        *(_OWORD *)(QueuePacket + 328) = *(_OWORD *)(a2 + 64);
        *(_OWORD *)(QueuePacket + 344) = *(_OWORD *)(a2 + 80);
        *(_OWORD *)(QueuePacket + 360) = *(_OWORD *)(a2 + 96);
        *(_OWORD *)(QueuePacket + 376) = *(_OWORD *)(a2 + 112);
        if ( (*(_DWORD *)(v4 + 2136) & 2) != 0 )
        {
          PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
          VidSchiSetPriorityContext(v27, PriorityThread);
        }
        VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)QueuePacket);
        return 0LL;
      }
      v6 = 1;
      v7 = *(void **)(a2 + 48);
      if ( *(_DWORD *)a2 != 1 )
        goto LABEL_26;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1024), 1u);
      v8 = *(_QWORD *)(a1 + 1144);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1856), &LockHandle);
      v9 = 0;
      if ( *(_QWORD *)(a1 + 1152) >= v8 || !*(_DWORD *)(a1 + 1136) && !*(_DWORD *)(a1 + 1124) )
        goto LABEL_16;
      v10 = *(_QWORD **)(a1 + 64);
      if ( v10 == (_QWORD *)(a1 + 64) )
        goto LABEL_47;
      do
      {
        if ( v10[18] > v10[16] )
          ++v9;
        v10 = (_QWORD *)*v10;
      }
      while ( v10 != (_QWORD *)(a1 + 64) );
      if ( !v9 )
      {
LABEL_47:
        *(_QWORD *)(a1 + 1152) = v8;
        goto LABEL_16;
      }
      v6 = 0;
      if ( *(_DWORD *)(a2 + 40) == 3 )
      {
        v11 = *(_QWORD **)(a2 + 48);
        v12 = v11 + 29;
        if ( v11[29] )
        {
          v30 = *v12;
          v31 = (_QWORD *)v11[30];
          if ( *(_QWORD **)(*v12 + 8LL) != v12 || (_QWORD *)*v31 != v12 )
            __fastfail(3u);
          *v31 = v30;
          *(_QWORD *)(v30 + 8) = v31;
          *v12 = 0LL;
          v32 = v11[12];
          v11[30] = 0LL;
          _InterlockedDecrement((volatile signed __int32 *)(v32 + 8));
        }
      }
      v13 = VidSchiAddPendingCommandToSyncPointList(a1, v7, v8);
      if ( v13 >= 0 )
      {
LABEL_16:
        KeReleaseInStackQueuedSpinLock(&LockHandle);
        ExReleaseResourceLite((PERESOURCE)(v4 + 1024));
        if ( !v6 )
          return 0LL;
LABEL_26:
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v7);
        return 0LL;
      }
      p_LockHandle = &LockHandle;
      goto LABEL_55;
    }
    v15 = *(_QWORD *)(a2 + 48);
    v16 = 0;
    v17 = *(_QWORD *)(v15 + 8);
    *(_BYTE *)v15 = 1;
    ExAcquireResourceExclusiveLite((PERESOURCE)(v4 + 1024), 1u);
    v18 = *(_QWORD *)(a1 + 1144);
    KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v4 + 1856), &v39);
    v21 = 0LL;
    v22 = 0LL;
    if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1152) < v18 && (unsigned __int8)VidSchIsDeviceBusy(a1, v19, 0LL, 0LL) )
    {
      v20 = *(_QWORD **)(a1 + 64);
      if ( v20 != (_QWORD *)(a1 + 64) )
      {
        do
        {
          if ( v20[18] > v20[16] )
            v22 = (unsigned int)(v22 + 1);
          v20 = (_QWORD *)*v20;
        }
        while ( v20 != (_QWORD *)(a1 + 64) );
        if ( (_DWORD)v22 )
        {
          v13 = VidSchiAddPendingCommandToSyncPointList(a1, v17, v18);
          if ( v13 < 0 )
          {
            p_LockHandle = &v39;
LABEL_55:
            KeReleaseInStackQueuedSpinLock(p_LockHandle);
            ExReleaseResourceLite((PERESOURCE)(v4 + 1024));
            return (unsigned int)v13;
          }
          goto LABEL_35;
        }
      }
      *(_QWORD *)(a1 + 1152) = v18;
    }
    if ( (unsigned int)VidSchiCheckConditionDeviceCommand(v20, v17, v21, v22) )
    {
      v16 = 1;
      goto LABEL_23;
    }
    v16 = 0;
    KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(*(_QWORD *)(a1 + 32) + 1888LL), &v41);
    v34 = (__int64 *)(v17 + 216);
    v35 = *(_QWORD *)(a1 + 32) + 1920LL;
    v36 = *(__int64 ***)(*(_QWORD *)(a1 + 32) + 1928LL);
    if ( *v36 != (__int64 *)v35 )
      __fastfail(3u);
    *v34 = v35;
    *(_QWORD *)(v17 + 224) = v36;
    *v36 = v34;
    *(_QWORD *)(v35 + 8) = v34;
    KeReleaseInStackQueuedSpinLockFromDpcLevel(&v41);
LABEL_35:
    *(_BYTE *)v15 = 0;
LABEL_23:
    KeReleaseInStackQueuedSpinLock(&v39);
    ExReleaseResourceLite((PERESOURCE)(v4 + 1024));
    if ( v16 )
    {
      v23 = **(_QWORD **)(v17 + 8);
      v24 = KfRaiseIrql(2u);
      KeAcquireInStackQueuedSpinLockAtDpcLevel((PKSPIN_LOCK)(v23 + 41128), &v42);
      v25 = *(_QWORD **)(v23 + 41144);
      v26 = (_QWORD *)(v17 + 216);
      if ( *v25 != v23 + 41136 )
        __fastfail(3u);
      *v26 = v23 + 41136;
      *(_QWORD *)(v17 + 224) = v25;
      *v25 = v26;
      *(_QWORD *)(v23 + 41144) = v26;
      KeReleaseInStackQueuedSpinLockFromDpcLevel(&v42);
      KeSetEvent(*(PRKEVENT *)(v23 + 41120), 0, 0);
      KeLowerIrql(v24);
    }
    return 0LL;
  }
  v38 = WdLogNewEntry5_WdAssertion();
  *(_QWORD *)(v38 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v38);
  return 3221225485LL;
}

/*
 * XREFs of VidSchSubmitDeviceCommand @ 0x1C0001048
 * Callers:
 *     ?TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@@PEAVDXGTERMINATIONTRACKER@@@Z @ 0x1C00307E0 (-TerminateOneAllocation@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@IU_D3DDDICB_DESTROYALLOCATION2FLAGS@.c)
 *     ?OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER_FLAGS@@@Z @ 0x1C00509D0 (-OfferOneAllocation@VIDMM_GLOBAL@@QEAAJPEAUVIDMM_ALLOC@@W4_D3DKMT_OFFER_PRIORITY@@U_D3DKMT_OFFER.c)
 *     ?VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_COMPANION_CONTEXT@@IPEAPEAU_VIDMM_MULTI_ALLOC@@PEAU_VIDSCH_SYNC_OBJECT@@PEAPEAU_KSEMAPHORE@@@Z @ 0x1C005613C (-VidMmUpdateGpuVirtualAddress@VIDMM_GLOBAL@@QEAAJPEAU_D3DKMT_UPDATEGPUVIRTUALADDRESS@@PEAUVIDMM_.c)
 *     VidSchSwitchFromContext @ 0x1C0079660 (VidSchSwitchFromContext.c)
 *     VidSchSwitchFromDevice @ 0x1C00797A0 (VidSchSwitchFromDevice.c)
 * Callees:
 *     VidSchIsDeviceBusy @ 0x1C0001000 (VidSchIsDeviceBusy.c)
 *     VidSchiCheckConditionDeviceCommand @ 0x1C0001028 (VidSchiCheckConditionDeviceCommand.c)
 *     ?AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z @ 0x1C0003AA4 (-AddPendingTermination@VIDMM_GLOBAL@@QEAAXPEAUVIDMM_ALLOC@@@Z.c)
 *     VidSchiSetPriorityContext @ 0x1C0006880 (VidSchiSetPriorityContext.c)
 *     ?VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z @ 0x1C000F300 (-VidMmiOfferAllocationCallback@VIDMM_GLOBAL@@SAXPEAX@Z.c)
 *     ?VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_DEVICE_COMMAND_TYPE@@@Z @ 0x1C001BA40 (-VidSchiAddPendingCommandToSyncPointList@@YAJPEAU_VIDSCH_DEVICE@@PEAUVIDMM_ALLOC@@_JIW4_VIDSCH_D.c)
 *     VidSchCancelDeviceCommand @ 0x1C001C18C (VidSchCancelDeviceCommand.c)
 *     VidSchiSubmitCommandPacketToQueue @ 0x1C002EC90 (VidSchiSubmitCommandPacketToQueue.c)
 *     VidSchiAllocateQueuePacket @ 0x1C002F130 (VidSchiAllocateQueuePacket.c)
 */

__int64 __fastcall VidSchSubmitDeviceCommand(__int64 a1, __int64 a2)
{
  __int64 v2; // rbx
  __int64 v5; // r15
  int v6; // ecx
  struct _ERESOURCE *v7; // r12
  char v8; // bp
  VIDMM_GLOBAL ***v9; // r14
  __int64 v10; // r13
  _QWORD *v11; // rcx
  unsigned int v12; // r10d
  int v14; // edi
  struct _KLOCK_QUEUE_HANDLE *p_LockHandle; // rcx
  void *v16; // r14
  __int64 v17; // r13
  unsigned int v18; // ebp
  __int64 v19; // r9
  _QWORD *v20; // rcx
  int v21; // ecx
  int v22; // ecx
  __int64 QueuePacket; // rdi
  unsigned int PriorityThread; // eax
  __int64 v25; // rax
  _KLOCK_QUEUE_HANDLE LockHandle; // [rsp+30h] [rbp-58h] BYREF
  struct _KLOCK_QUEUE_HANDLE v27; // [rsp+48h] [rbp-40h] BYREF
  __int64 v28; // [rsp+90h] [rbp+8h]
  char v29; // [rsp+90h] [rbp+8h]

  v2 = 0LL;
  if ( a1 && a2 )
  {
    v5 = *(_QWORD *)(a1 + 32);
    v6 = *(_DWORD *)(a2 + 48);
    if ( !v6 )
    {
      v7 = (struct _ERESOURCE *)(v5 + 984);
      v28 = *(_QWORD *)(a2 + 32);
      v8 = 0;
      v9 = *(VIDMM_GLOBAL ****)(v28 + 8);
      *(_BYTE *)v28 = 1;
      ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 984), 1u);
      v10 = *(_QWORD *)(a1 + 1024);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1872), &LockHandle);
      if ( *(_DWORD *)a2 && *(_QWORD *)(a1 + 1032) < v10 && VidSchIsDeviceBusy((_DWORD *)a1) )
      {
        v11 = *(_QWORD **)(a1 + 72);
        if ( v11 != (_QWORD *)(a1 + 72) )
        {
          do
          {
            if ( v11[18] > v11[16] )
              ++v12;
            v11 = (_QWORD *)*v11;
          }
          while ( v11 != (_QWORD *)(a1 + 72) );
          if ( v12 )
          {
LABEL_19:
            v14 = VidSchiAddPendingCommandToSyncPointList(a1, v9, v10, v12, 0);
            if ( v14 >= 0 )
            {
              *(_BYTE *)v28 = 0;
LABEL_9:
              KeReleaseInStackQueuedSpinLock(&LockHandle);
              ExReleaseResourceLite((PERESOURCE)(v5 + 984));
              if ( v8 )
                VIDMM_GLOBAL::AddPendingTermination(*v9[1], (struct VIDMM_ALLOC *)v9);
              return 0LL;
            }
            p_LockHandle = &LockHandle;
            goto LABEL_33;
          }
        }
        *(_QWORD *)(a1 + 1032) = v10;
      }
      if ( (unsigned int)VidSchiCheckConditionDeviceCommand((__int64)v11, (__int64)v9) )
      {
        v8 = 1;
        goto LABEL_9;
      }
      v8 = 0;
      goto LABEL_19;
    }
    if ( v6 == 3 )
    {
      v16 = *(void **)(a2 + 32);
      v29 = 1;
      if ( *(_DWORD *)a2 != 1 )
        goto LABEL_36;
      v7 = (struct _ERESOURCE *)(v5 + 984);
      ExAcquireResourceExclusiveLite((PERESOURCE)(v5 + 984), 1u);
      v17 = *(_QWORD *)(a1 + 1024);
      KeAcquireInStackQueuedSpinLock((PKSPIN_LOCK)(v5 + 1872), &v27);
      v18 = 0;
      if ( *(_QWORD *)(a1 + 1032) < v17 && VidSchIsDeviceBusy((_DWORD *)a1) )
      {
        v20 = *(_QWORD **)(a1 + 72);
        if ( v20 == (_QWORD *)(a1 + 72) )
          goto LABEL_34;
        do
        {
          if ( v20[18] > v20[16] )
            ++v18;
          v20 = (_QWORD *)*v20;
        }
        while ( v20 != (_QWORD *)(a1 + 72) );
        if ( !v18 )
        {
LABEL_34:
          *(_QWORD *)(a1 + 1032) = v17;
        }
        else
        {
          LOBYTE(v19) = 1;
          v29 = 0;
          VidSchCancelDeviceCommand(a1, a2, 0LL, v19);
          v14 = VidSchiAddPendingCommandToSyncPointList(a1, v16, v17, v18, 3);
          if ( v14 < 0 )
          {
            p_LockHandle = &v27;
LABEL_33:
            KeReleaseInStackQueuedSpinLock(p_LockHandle);
            ExReleaseResourceLite(v7);
            return (unsigned int)v14;
          }
        }
      }
      KeReleaseInStackQueuedSpinLock(&v27);
      ExReleaseResourceLite((PERESOURCE)(v5 + 984));
      if ( v29 )
LABEL_36:
        VIDMM_GLOBAL::VidMmiOfferAllocationCallback(v16);
      return 0LL;
    }
    v21 = v6 - 1;
    if ( !v21 )
      goto LABEL_40;
    v22 = v21 - 1;
    if ( !v22 )
    {
      v2 = **(_QWORD **)(a2 + 32);
      goto LABEL_41;
    }
    if ( (unsigned int)(v22 - 1) <= 1 )
LABEL_40:
      v2 = *(_QWORD *)(a1 + 64);
LABEL_41:
    QueuePacket = VidSchiAllocateQueuePacket(v2, 1LL);
    *(_DWORD *)QueuePacket = 1953189969;
    *(_DWORD *)(QueuePacket + 48) = 6;
    *(_QWORD *)(QueuePacket + 56) = MEMORY[0xFFFFF78000000320];
    *(_DWORD *)(QueuePacket + 52) = 2;
    *(_QWORD *)(QueuePacket + 80) = v2;
    *(_QWORD *)(QueuePacket + 88) = KeGetCurrentThread();
    *(_OWORD *)(QueuePacket + 256) = *(_OWORD *)a2;
    *(_OWORD *)(QueuePacket + 272) = *(_OWORD *)(a2 + 16);
    *(_OWORD *)(QueuePacket + 288) = *(_OWORD *)(a2 + 32);
    *(_QWORD *)(QueuePacket + 304) = *(_QWORD *)(a2 + 48);
    if ( (*(_DWORD *)(v5 + 2144) & 2) != 0 )
    {
      PriorityThread = KeQueryPriorityThread(KeGetCurrentThread());
      VidSchiSetPriorityContext(v2, PriorityThread);
    }
    VidSchiSubmitCommandPacketToQueue((struct _VIDSCH_QUEUE_PACKET *)QueuePacket);
    return 0LL;
  }
  v25 = WdLogNewEntry5_WdAssertion();
  *(_QWORD *)(v25 + 24) = -1073741811LL;
  WdLogEvent5_WdAssertion(v25);
  return 3221225485LL;
}

/*
 * XREFs of NdisMRegisterInterruptEx @ 0x1C00EC840
 * Callers:
 *     <none>
 * Callees:
 *     ?GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z @ 0x1C000FCAC (-GetMsgDpc@@YAPEAU_KDPC@@PEAU_NDIS_INTERRUPT_BLOCK@@KK@Z.c)
 *     memset @ 0x1C0027500 (memset.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 *     Template_jqxqqq @ 0x1C004439C (Template_jqxqqq.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     ndisDereferencePackage @ 0x1C009B138 (ndisDereferencePackage.c)
 *     ndisReferencePackage @ 0x1C009B308 (ndisReferencePackage.c)
 *     NdisMDeregisterInterruptEx @ 0x1C00F5C70 (NdisMDeregisterInterruptEx.c)
 */

NDIS_STATUS __stdcall NdisMRegisterInterruptEx(
        NDIS_HANDLE MiniportAdapterHandle,
        NDIS_HANDLE MiniportInterruptContext,
        PNDIS_MINIPORT_INTERRUPT_CHARACTERISTICS MiniportInterruptCharacteristics,
        PNDIS_HANDLE NdisInterruptHandle)
{
  struct _NDIS_INTERRUPT_BLOCK *v4; // rdi
  int v8; // r14d
  __int64 v9; // rcx
  unsigned __int64 v10; // r15
  __int64 v11; // r12
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbx
  struct _NDIS_INTERRUPT_BLOCK *v14; // rax
  KIRQL v15; // al
  unsigned int v16; // ecx
  ULONG v17; // ebx
  unsigned __int64 v18; // rdx
  unsigned __int64 v19; // r15
  _KDPC *v20; // rax
  unsigned __int64 v21; // rdx
  int v22; // r15d
  unsigned int v23; // ebx
  struct _KDPC *MsgDpc; // rax
  struct _KDPC *v25; // rax
  struct _KDPC *v26; // rax
  struct _KDPC *v27; // rax
  struct _KDPC *v28; // rax
  unsigned int v29; // r15d
  __int64 v30; // rax
  _NDIS_DPC_WORK_ITEM *v31; // rcx
  $8729A5BBF99F27AEE77EEC53C76E8AF1 *v32; // r15
  bool v33; // zf
  _DEVICE_OBJECT *v34; // rax
  NTSTATUS v35; // eax
  _DWORD *Generic; // r15
  unsigned int v37; // r12d
  _OWORD *PoolWithTag; // rax
  _OWORD *v39; // rbx
  _OWORD *v40; // rax
  __int64 v41; // r15
  __int64 v42; // rcx
  __int128 v43; // xmm1
  KIRQL v45; // r8
  _NDIS_INTERRUPT_BLOCK **p_NextInterrupt; // rcx
  __int64 v47; // rcx
  unsigned __int64 v48; // [rsp+50h] [rbp-49h]
  unsigned __int64 v49; // [rsp+50h] [rbp-49h]
  unsigned __int64 v50; // [rsp+58h] [rbp-41h]
  struct _IO_CONNECT_INTERRUPT_PARAMETERS Parameters; // [rsp+60h] [rbp-39h] BYREF
  _PROCESSOR_NUMBER ProcNumber; // [rsp+100h] [rbp+67h] BYREF
  NDIS_HANDLE v53; // [rsp+108h] [rbp+6Fh]
  _PROCESSOR_NUMBER v54; // [rsp+110h] [rbp+77h] BYREF
  PNDIS_HANDLE v55; // [rsp+118h] [rbp+7Fh]

  v55 = NdisInterruptHandle;
  v53 = MiniportInterruptContext;
  v4 = 0LL;
  Parameters.Version = 0;
  v8 = 0;
  memset(&Parameters.FullySpecified, 0, sizeof(Parameters.FullySpecified));
  v9 = *((unsigned int *)MiniportAdapterHandle + 865);
  v10 = (unsigned __int64)ndisMaxNumberOfProcessors << 6;
  v11 = (v9 * (ndisMaxNumberOfProcessors + 1)) << 6;
  if ( !(_DWORD)v9 )
    LODWORD(v9) = 1;
  v12 = 80 * ndisMaxNumberOfProcessors * (unsigned __int64)(unsigned int)v9;
  v50 = v12;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
  {
    WPP_SF_q(0x12u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)MiniportAdapterHandle);
    v12 = v50;
  }
  *NdisInterruptHandle = 0LL;
  MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
  MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
  if ( (*((_DWORD *)MiniportAdapterHandle + 934) & 2) != 0
    || (v13 = v12 + v11,
        v14 = (struct _NDIS_INTERRUPT_BLOCK *)ExAllocatePoolWithTag(NonPagedPoolNx, v12 + v11 + v10 + 232, 0x6D61444Eu),
        (v4 = v14) == 0LL) )
  {
    v8 = -1073741670;
  }
  else
  {
    memset(v14, 0, v13 + v10 + 232);
    v4->MiniportInterruptContext = v53;
    v15 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
    v4->NextInterrupt = (_NDIS_INTERRUPT_BLOCK *)*((_QWORD *)MiniportAdapterHandle + 98);
    *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 464) = 0;
    *((_QWORD *)MiniportAdapterHandle + 98) = v4;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v15);
    _InterlockedAdd((volatile signed __int32 *)MiniportAdapterHandle + 476, 1u);
    v4->Header = (_NDIS_OBJECT_HEADER)15204614;
    v4->DpcCount = 0;
    v4->IsDeregistered = 0;
    v4->Miniport = (_NDIS_MINIPORT_BLOCK *)MiniportAdapterHandle;
    v4->MiniportIsr = MiniportInterruptCharacteristics->InterruptHandler;
    v4->MiniportDpc = MiniportInterruptCharacteristics->InterruptDpcHandler;
    *(_WORD *)&v4->SharedInterrupt = 257;
    if ( MiniportInterruptCharacteristics->MessageInterruptHandler )
    {
      v4->MsiSupported = 1;
      v4->MiniportMessageIsr = MiniportInterruptCharacteristics->MessageInterruptHandler;
      v4->MiniportMessageInterruptDpc = MiniportInterruptCharacteristics->MessageInterruptDpcHandler;
    }
    KeInitializeEvent(&v4->DpcsCompletedEvent, SynchronizationEvent, 0);
    KeInitializeDpc(&v4->InterruptDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
    KeSetImportanceDpc(&v4->InterruptDpc, MediumImportance);
    v16 = ndisMaxNumberOfProcessors;
    v17 = 0;
    v4->Dpc = (_KDPC *)&v4[1];
    v18 = v10 + 232;
    v48 = v10 + 232;
    if ( v16 )
    {
      do
      {
        v19 = (unsigned __int64)v17 << 6;
        KeInitializeDpc((PRKDPC)((char *)v4->Dpc + v19), (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
        KeSetImportanceDpc((PRKDPC)((char *)v4->Dpc + v19), MediumHighImportance);
        if ( KeGetProcessorNumberFromIndex(v17, &ProcNumber) >= 0 )
          KeSetTargetProcessorDpcEx((PKDPC)((char *)v4->Dpc + v19), &ProcNumber);
        v16 = ndisMaxNumberOfProcessors;
        ++v17;
      }
      while ( v17 < ndisMaxNumberOfProcessors );
      v18 = v48;
    }
    v20 = (_KDPC *)(&v4->Header.Type + v18);
    v21 = v11 + v18;
    v4->MsgDpc = v20;
    v22 = 0;
    v49 = v21;
    if ( *((_DWORD *)MiniportAdapterHandle + 865) )
    {
      while ( 1 )
      {
        v23 = 0;
        if ( v16 )
        {
          do
          {
            MsgDpc = GetMsgDpc(v4, v22, v23);
            KeInitializeDpc(MsgDpc, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
            v25 = GetMsgDpc(v4, v22, v23);
            KeSetImportanceDpc(v25, MediumHighImportance);
            if ( KeGetProcessorNumberFromIndex(v23, &v54) >= 0 )
            {
              v26 = GetMsgDpc(v4, v22, v23);
              KeSetTargetProcessorDpcEx(v26, &v54);
            }
            ++v23;
          }
          while ( v23 < ndisMaxNumberOfProcessors );
        }
        v27 = GetMsgDpc(v4, v22, v23);
        KeInitializeDpc(v27, (PKDEFERRED_ROUTINE)ndisInterruptDpc, v4);
        v28 = GetMsgDpc(v4, v22, v23);
        KeSetImportanceDpc(v28, MediumHighImportance);
        if ( (unsigned int)++v22 >= *((_DWORD *)MiniportAdapterHandle + 865) )
          break;
        v16 = ndisMaxNumberOfProcessors;
      }
      v21 = v49;
    }
    v29 = 0;
    v4->DpcWorkItems = (_NDIS_DPC_WORK_ITEM *)(&v4->Header.Type + v21);
    if ( v50 / 0x50 )
    {
      v30 = 0LL;
      do
      {
        v31 = &v4->DpcWorkItems[v30];
        v31->WorkItem.WorkerRoutine = (void (__fastcall *)(void *))ndisQueuedMiniportDpcWorkItem;
        v31->WorkItem.Parameter = v31;
        v31->WorkItem.List.Flink = 0LL;
        KeInitializeSpinLock(&v4->DpcWorkItems[v30].Lock);
        v30 = ++v29;
      }
      while ( v29 < v50 / 0x50 );
    }
    *((_DWORD *)MiniportAdapterHandle + 30) &= ~0x20u;
    v32 = &v4->120;
    v33 = v4->MsiSupported == 0;
    v34 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 486);
    Parameters.FullySpecified.ServiceContext = v4;
    Parameters.FullySpecified.PhysicalDeviceObject = v34;
    Parameters.FullySpecified.InterruptObject = (PKINTERRUPT *)&v4->120;
    if ( v33 )
    {
      Parameters.Version = 2;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      Parameters.FullySpecified.SpinLock = 0LL;
    }
    else
    {
      Parameters.Version = 3;
      Parameters.FullySpecified.ServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportMessageIsr;
      Parameters.MessageBased.FallBackServiceRoutine = (PKSERVICE_ROUTINE)ndisMiniportIsr;
      if ( MiniportInterruptCharacteristics->MsiSyncWithAllMessages )
      {
        KeInitializeSpinLock(&v4->MessagesSyncLock);
        Parameters.FullySpecified.SpinLock = &v4->MessagesSyncLock;
      }
    }
    *(_WORD *)&Parameters.MessageBased.SynchronizeIrql = 0;
    v35 = IoConnectInterruptEx(&Parameters);
    if ( v35 < 0 )
    {
      v8 = -1073741823;
      if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
        WPP_SF_qD(0x13u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)MiniportAdapterHandle, v35);
      v32->Generic = 0LL;
    }
    else
    {
      if ( Parameters.Version != 3 )
      {
LABEL_36:
        if ( Parameters.Version == 2 )
        {
          MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_LINE_BASED;
          MiniportInterruptCharacteristics->MessageInfoTable = 0LL;
          v4->InterruptMode = LevelSensitive;
        }
        *v55 = v4;
        goto LABEL_39;
      }
      Generic = v32->Generic;
      v37 = Generic[1];
      v4->MessageUsed = 1;
      v4->InterruptMode = Latched;
      PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 48 * (v37 - 1) + 56, 0x6D61444Eu);
      v39 = PoolWithTag;
      if ( PoolWithTag )
      {
        memset(PoolWithTag, 0, 0x38uLL);
        *v39 = *(_OWORD *)Generic;
        v39[1] = *((_OWORD *)Generic + 1);
        v39[2] = *((_OWORD *)Generic + 2);
        *((_QWORD *)v39 + 6) = *((_QWORD *)Generic + 6);
        if ( v37 )
        {
          v40 = (_OWORD *)((char *)v39 + 8);
          v41 = (char *)Generic - (char *)v39;
          v42 = v37;
          do
          {
            *v40 = *(_OWORD *)((char *)v40 + v41);
            v43 = *(_OWORD *)((char *)v40 + v41 + 16);
            v40 += 3;
            *(v40 - 2) = v43;
            *(v40 - 1) = *(_OWORD *)((char *)v40 + v41 - 16);
            --v42;
          }
          while ( v42 );
        }
        MiniportInterruptCharacteristics->InterruptType = NDIS_CONNECT_MESSAGE_BASED;
        MiniportInterruptCharacteristics->MessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v39;
        v4->NdisMessageInfoTable = (_IO_INTERRUPT_MESSAGE_INFO *)v39;
        v4->InterruptMode = Latched;
        if ( v37 > 1 )
        {
          *((_BYTE *)MiniportAdapterHandle + 1992) = 1;
          if ( *((_WORD *)MiniportAdapterHandle + 1365) )
          {
            *((_DWORD *)MiniportAdapterHandle + 683) |= 0x8000000u;
            *((_DWORD *)MiniportAdapterHandle + 787) |= 0x8000000u;
          }
        }
        goto LABEL_36;
      }
      v8 = -1073741670;
      NdisMDeregisterInterruptEx(v4);
    }
  }
  _InterlockedDecrement((volatile signed __int32 *)MiniportAdapterHandle + 476);
  ndisReferencePackage((__int64)&ndisPkgs);
  v45 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 12);
  *((_QWORD *)MiniportAdapterHandle + 65) = KeGetCurrentThread();
  p_NextInterrupt = (_NDIS_INTERRUPT_BLOCK **)((char *)MiniportAdapterHandle + 784);
  *((_DWORD *)MiniportAdapterHandle + 464) = 657306;
  while ( *p_NextInterrupt )
  {
    if ( *p_NextInterrupt == v4 )
    {
      *p_NextInterrupt = v4->NextInterrupt;
      break;
    }
    p_NextInterrupt = &(*p_NextInterrupt)->NextInterrupt;
  }
  *((_QWORD *)MiniportAdapterHandle + 65) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 464) = 0;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 12, v45);
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
    Template_jqxqqq(
      v47,
      &RegisterInterruptFailed,
      (const GUID *)MiniportAdapterHandle + 254,
      (unsigned __int64)MiniportAdapterHandle + 4064,
      *((_DWORD *)MiniportAdapterHandle + 1028),
      *((_QWORD *)MiniportAdapterHandle + 510),
      v8,
      178,
      0);
LABEL_39:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x14u, &WPP_7f4ef916cbec3728ab6689e92fcfc2a4_Traceguids, (__int64)MiniportAdapterHandle, v8);
  return v8;
}

/*
 * XREFs of NdisMRegisterDmaChannel @ 0x1C00EE370
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_q @ 0x1C00383F4 (WPP_SF_q.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMRegisterDmaChannel(
        PNDIS_HANDLE MiniportDmaHandle,
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        BOOLEAN Dma32BitAddresses,
        PNDIS_DMA_DESCRIPTION DmaDescription,
        ULONG MaximumLength)
{
  int v9; // r14d
  PVOID PoolWithTag; // rax
  void *v11; // rsi
  int v12; // ebx
  bool v13; // zf
  BOOLEAN DemandMode; // al
  _DEVICE_OBJECT *v15; // rcx
  ULONG v16; // r15d
  struct _DMA_ADAPTER *DmaAdapter; // r14
  char *v18; // rax
  _QWORD *v19; // rbx
  struct _KEVENT *v20; // r12
  KIRQL v21; // r13
  int v22; // r15d
  __int64 v23; // rcx
  _QWORD *v24; // rax
  KIRQL v25; // r15
  ULONG NumberOfMapRegisters; // [rsp+30h] [rbp-59h] BYREF
  PNDIS_HANDLE v28; // [rsp+38h] [rbp-51h]
  _BYTE DeviceDescription[64]; // [rsp+40h] [rbp-49h] BYREF

  v28 = MiniportDmaHandle;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_q(0x24u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle);
  v9 = *((_DWORD *)MiniportAdapterHandle + 942);
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v11 = PoolWithTag;
  if ( !PoolWithTag )
  {
    v12 = -1073741670;
    goto LABEL_21;
  }
  memset(PoolWithTag, 0, 0xA0uLL);
  *(_DWORD *)v11 = 10486031;
  *((_QWORD *)v11 + 1) = MiniportAdapterHandle;
  *((_QWORD *)v11 + 2) = *((_QWORD *)MiniportAdapterHandle + 3);
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  v13 = (*((_DWORD *)MiniportAdapterHandle + 30) & 8) == 0;
  *(_DWORD *)&DeviceDescription[16] = DmaChannel;
  *(_DWORD *)&DeviceDescription[32] = MaximumLength;
  DeviceDescription[4] = !v13;
  *(_DWORD *)DeviceDescription = 0;
  DeviceDescription[8] = Dma32BitAddresses;
  DemandMode = DmaDescription->DemandMode;
  v15 = (_DEVICE_OBJECT *)*((_QWORD *)MiniportAdapterHandle + 486);
  DeviceDescription[5] = !v13;
  DeviceDescription[6] = DemandMode;
  DeviceDescription[7] = DmaDescription->AutoInitialize;
  *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)MiniportAdapterHandle + 943);
  *(_DWORD *)&DeviceDescription[24] = DmaDescription->DmaWidth;
  *(_DWORD *)&DeviceDescription[28] = DmaDescription->DmaSpeed;
  *(_DWORD *)&DeviceDescription[36] = DmaDescription->DmaPort;
  v16 = ((MaximumLength - 2) >> 12) + 2;
  *(_DWORD *)&DeviceDescription[20] = v9;
  DmaAdapter = IoGetDmaAdapter(v15, (struct _DEVICE_DESCRIPTION *)DeviceDescription, &NumberOfMapRegisters);
  if ( DmaAdapter
    && NumberOfMapRegisters >= v16
    && (v18 = (char *)ExAllocatePoolWithTag(NonPagedPoolNx, 0x38uLL, 0x6264444Eu), (v19 = v18) != 0LL) )
  {
    v20 = (struct _KEVENT *)(v18 + 8);
    KeInitializeEvent((PRKEVENT)(v18 + 8), NotificationEvent, 0);
    v19[5] = MiniportAdapterHandle;
    v19[4] = DmaAdapter;
    ndisReferencePackage((__int64)&ndisPkgs);
    v21 = KfRaiseIrql(2u);
    v22 = DmaAdapter->DmaOperations->AllocateAdapterChannel(
            DmaAdapter,
            *((_DEVICE_OBJECT **)MiniportAdapterHandle + 485),
            v16,
            (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisDmaExecutionRoutine,
            v19);
    if ( v21 != 2 )
      KeLowerIrql(v21);
    ndisDereferencePackage((__int64)&ndisPkgs);
    if ( v22 >= 0 )
    {
      KeWaitForSingleObject(v20, Executive, 0, 0, 0LL);
      KeClearEvent(v20);
      v24 = v28;
      *((_BYTE *)v19 + 48) = 0;
      *v24 = v19;
      v12 = 0;
      *((_QWORD *)v11 + 3) = DmaAdapter;
      _InterlockedIncrement((volatile signed __int32 *)v11 + 18);
      *((_QWORD *)MiniportAdapterHandle + 63) = v11;
      goto LABEL_21;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
      WPP_SF_d(0x25u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, v22);
    ExFreePoolWithTag(v19, 0);
    v12 = -1073741670;
    if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
      Template_qqq(v23, &AllocateAdapterChannelFailed, (const GUID *)MiniportAdapterHandle + 254, v22, 201, 0);
  }
  else
  {
    v12 = -1073741670;
  }
  if ( DmaAdapter )
  {
    v25 = KfRaiseIrql(2u);
    DmaAdapter->DmaOperations->PutDmaAdapter(DmaAdapter);
    if ( v25 != 2 )
      KeLowerIrql(v25);
  }
  *((_QWORD *)MiniportAdapterHandle + 63) = 0LL;
  ExFreePoolWithTag(v11, 0);
LABEL_21:
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x26u, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)MiniportAdapterHandle, v12);
  return v12;
}

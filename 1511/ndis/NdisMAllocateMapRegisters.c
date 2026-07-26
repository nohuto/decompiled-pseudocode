/*
 * XREFs of NdisMAllocateMapRegisters @ 0x1C00ED960
 * Callers:
 *     <none>
 * Callees:
 *     NdisWriteErrorLogEntry @ 0x1C0016460 (NdisWriteErrorLogEntry.c)
 *     __security_check_cookie @ 0x1C00264F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     Template_qqq @ 0x1C003EA28 (Template_qqq.c)
 *     WPP_SF_d @ 0x1C003ED9C (WPP_SF_d.c)
 *     ndisDereferenceDmaAdapter @ 0x1C005BA80 (ndisDereferenceDmaAdapter.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 */

NDIS_STATUS __stdcall NdisMAllocateMapRegisters(
        NDIS_HANDLE MiniportAdapterHandle,
        UINT DmaChannel,
        NDIS_DMA_SIZE DmaSize,
        ULONG BaseMapRegistersNeeded,
        ULONG MaximumPhysicalMapping)
{
  __int64 v5; // r14
  unsigned __int16 *v6; // rbx
  int v7; // edi
  char v8; // r12
  NDIS_HANDLE v11; // rsi
  unsigned __int16 *PoolWithTag; // rax
  PVOID v13; // rax
  int v14; // eax
  ULONG v15; // r12d
  unsigned __int64 v16; // r15
  struct _DMA_ADAPTER *DmaAdapter; // rax
  struct _DMA_ADAPTER *v18; // r14
  char v19; // r13
  _DMA_OPERATIONS *DmaOperations; // rcx
  char v21; // al
  unsigned __int16 v22; // r15
  KIRQL v23; // r13
  int v24; // eax
  int v25; // edx
  void (__fastcall *v26)(_DMA_ADAPTER *, void *, unsigned int); // rdi
  __int64 v27; // r14
  void *v28; // rcx
  KIRQL v29; // r15
  char v31; // [rsp+31h] [rbp-70h]
  int v32; // [rsp+38h] [rbp-69h]
  ULONG NumberOfMapRegisters; // [rsp+3Ch] [rbp-65h] BYREF
  void (__fastcall *FreeMapRegisters)(_DMA_ADAPTER *, void *, unsigned int); // [rsp+40h] [rbp-61h]
  NDIS_HANDLE v35; // [rsp+48h] [rbp-59h]
  int (__fastcall *AllocateAdapterChannel)(_DMA_ADAPTER *, _DEVICE_OBJECT *, unsigned int, _IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *), void *); // [rsp+50h] [rbp-51h]
  struct _KEVENT Event; // [rsp+58h] [rbp-49h] BYREF
  _BYTE DeviceDescription[64]; // [rsp+70h] [rbp-31h] BYREF

  v5 = BaseMapRegistersNeeded;
  v6 = 0LL;
  v35 = MiniportAdapterHandle;
  v7 = 0;
  v8 = 0;
  v11 = MiniportAdapterHandle;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(
      0x29u,
      &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids,
      (__int64)MiniportAdapterHandle,
      BaseMapRegistersNeeded);
  ndisReferencePackage((__int64)&ndisPkgs);
  if ( (*((_DWORD *)v11 + 934) & 1) != 0 )
    goto LABEL_4;
  if ( (*((_DWORD *)v11 + 30) & 8) == 0 )
    goto LABEL_54;
  PoolWithTag = (unsigned __int16 *)ExAllocatePoolWithTag(NonPagedPoolNx, 0xA0uLL, 0x6264444Eu);
  v6 = PoolWithTag;
  if ( !PoolWithTag )
    goto LABEL_4;
  memset(PoolWithTag, 0, 0xA0uLL);
  *(_DWORD *)v6 = 10486031;
  *((_QWORD *)v6 + 1) = v11;
  *((_QWORD *)v6 + 2) = *((_QWORD *)v11 + 3);
  v6[77] = v5;
  *((_DWORD *)v6 + 13) = MaximumPhysicalMapping;
  *((_QWORD *)v6 + 17) = 0LL;
  if ( (_DWORD)v5 )
  {
    v13 = ExAllocatePoolWithTag(NonPagedPoolNx, 16 * v5, 0x726D444Eu);
    *((_QWORD *)v6 + 17) = v13;
    if ( !v13 )
    {
      NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 0xFFFFFFFFLL);
      v7 = -1073741670;
LABEL_53:
      v8 = 1;
      goto LABEL_54;
    }
  }
  *((_QWORD *)v6 + 18) = &Event;
  KeInitializeEvent(&Event, NotificationEvent, 0);
  memset(DeviceDescription, 0, sizeof(DeviceDescription));
  *(_DWORD *)&DeviceDescription[12] = *((_DWORD *)v11 + 943);
  v14 = *((_DWORD *)v11 + 119);
  *(_DWORD *)DeviceDescription = 0;
  *(_WORD *)&DeviceDescription[4] = 257;
  *(_DWORD *)&DeviceDescription[16] = DmaChannel;
  *(_DWORD *)&DeviceDescription[20] = v14;
  if ( v14 == 1 )
  {
    *(_DWORD *)&DeviceDescription[28] = 0;
    *(_DWORD *)&DeviceDescription[24] = DmaChannel > 4;
  }
  else if ( v14 == 5 )
  {
    if ( DmaSize == 1 )
    {
      DeviceDescription[8] = 1;
    }
    else if ( DmaSize == 2 )
    {
      *((_DWORD *)v11 + 30) |= 0x10u;
      DeviceDescription[11] = 1;
    }
  }
  *(_DWORD *)&DeviceDescription[32] = MaximumPhysicalMapping;
  v15 = ((MaximumPhysicalMapping - 2) >> 12) + 2;
  v16 = v6[77] * (unsigned __int64)v15;
  if ( v16 > 0xFFFFFFFF )
  {
    NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 4294967294LL);
    goto LABEL_53;
  }
  DmaAdapter = IoGetDmaAdapter(
                 *((PDEVICE_OBJECT *)v11 + 486),
                 (struct _DEVICE_DESCRIPTION *)DeviceDescription,
                 &NumberOfMapRegisters);
  v18 = DmaAdapter;
  if ( !DmaAdapter || NumberOfMapRegisters < v15 )
  {
    NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 0xFFFFFFFFLL);
    v28 = (void *)*((_QWORD *)v6 + 17);
    if ( v28 )
    {
      ExFreePoolWithTag(v28, 0);
      *((_QWORD *)v6 + 17) = 0LL;
    }
    v7 = -1073741670;
    if ( v18 )
    {
      v29 = KfRaiseIrql(2u);
      v18->DmaOperations->PutDmaAdapter(v18);
      if ( v29 != 2 )
        KeLowerIrql(v29);
    }
    goto LABEL_53;
  }
  v19 = 0;
  *((_QWORD *)v6 + 3) = DmaAdapter;
  *((_QWORD *)v6 + 16) = 0LL;
  *((_QWORD *)v11 + 63) = v6;
  _InterlockedIncrement((volatile signed __int32 *)v6 + 18);
  DmaOperations = DmaAdapter->DmaOperations;
  v31 = 0;
  AllocateAdapterChannel = DmaOperations->AllocateAdapterChannel;
  FreeMapRegisters = DmaOperations->FreeMapRegisters;
  if ( *(_DWORD *)&DeviceDescription[20] != 1 )
  {
    if ( HalPrivateDispatchTable[12](DmaAdapter, v15, v6[77], *((_QWORD *)v6 + 17)) < 0 )
    {
      if ( (unsigned int)v16 <= 0x40 )
      {
        v19 = 1;
      }
      else
      {
        ExFreePoolWithTag(*((PVOID *)v6 + 17), 0);
        *((_QWORD *)v6 + 17) = 0LL;
        ndisDereferenceDmaAdapter(v6);
        v31 = 1;
        NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, (unsigned int)v16);
      }
    }
    if ( *(_DWORD *)&DeviceDescription[20] != 1 && !v19 )
      goto LABEL_28;
  }
  v22 = 0;
  if ( v6[77] )
  {
    while ( 1 )
    {
      v6[76] = v22;
      v23 = KfRaiseIrql(2u);
      v24 = AllocateAdapterChannel(
              v18,
              *((_DEVICE_OBJECT **)v11 + 485),
              v15,
              (_IO_ALLOCATION_ACTION (__fastcall *)(_DEVICE_OBJECT *, _IRP *, void *, void *))ndisAllocationExecutionRoutine,
              v6);
      v32 = v24;
      v25 = v24;
      if ( v24 < 0 )
        break;
      if ( v23 != 2 )
        KeLowerIrql(v23);
      KeWaitForSingleObject(&Event, Executive, 0, 0, 0LL);
      KeClearEvent(&Event);
      if ( ++v22 >= v6[77] )
        goto LABEL_28;
    }
    if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 2u )
    {
      WPP_SF_d(0x2Bu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, v24);
      v25 = v32;
    }
    if ( (Microsoft_Windows_NDISEnableBits & 0x100) != 0 )
      Template_qqq(0LL, &AllocateAdapterChannelFailed, (const GUID *)v11 + 254, v25, 170, 0);
    if ( v22 )
    {
      v26 = FreeMapRegisters;
      v27 = 16LL * v22 - 16;
      do
      {
        v26(*((_DMA_ADAPTER **)v6 + 3), *(void **)(v27 + *((_QWORD *)v6 + 17)), v15);
        v27 -= 16LL;
        --v22;
      }
      while ( v22 );
      v7 = 0;
      v11 = v35;
    }
    if ( v23 != 2 )
      KeLowerIrql(v23);
    NdisWriteErrorLogEntry(v11, 0xC0001389, 1u, 0xFFFFFFFFLL);
    ExFreePoolWithTag(*((PVOID *)v6 + 17), 0);
    *((_QWORD *)v6 + 17) = 0LL;
    ndisDereferenceDmaAdapter(v6);
    v21 = 1;
  }
  else
  {
LABEL_28:
    v21 = v31;
  }
  v8 = 0;
  if ( v21 )
LABEL_4:
    v7 = -1073741670;
LABEL_54:
  ndisDereferencePackage((__int64)&ndisPkgs);
  if ( v7 && v8 && v6 )
    ExFreePoolWithTag(v6, 0);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qD(0x2Cu, &WPP_6d2291d8c38fd3ff1a6681445a412419_Traceguids, (__int64)v11, v7);
  return v7;
}

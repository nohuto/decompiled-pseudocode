/*
 * XREFs of ndisDereferenceDriver @ 0x1C001331C
 * Callers:
 *     NdisFreeIoWorkItem @ 0x1C0012E70 (NdisFreeIoWorkItem.c)
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C0012EAC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     ndisReferenceMiniportByHandle @ 0x1C001791C (ndisReferenceMiniportByHandle.c)
 *     NdisAllocateIoWorkItem @ 0x1C00202A0 (NdisAllocateIoWorkItem.c)
 *     ?ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ @ 0x1C005A2F4 (-ndisCheckForNdisTestBindingsOnAllMiniports@@YAXXZ.c)
 *     NdisMDeregisterMiniportDriver @ 0x1C009E5D0 (NdisMDeregisterMiniportDriver.c)
 *     NdisIMDeInitializeDeviceInstance @ 0x1C00D2120 (NdisIMDeInitializeDeviceInstance.c)
 *     ndisPnPIrpStopDevice @ 0x1C00D44EC (ndisPnPIrpStopDevice.c)
 *     ndisPnPIrpRemoveDevice @ 0x1C00E6DF8 (ndisPnPIrpRemoveDevice.c)
 *     ndisPnPRemoveDevice @ 0x1C00E6FA8 (ndisPnPRemoveDevice.c)
 *     ndisMInitializeAdapter @ 0x1C00EA374 (ndisMInitializeAdapter.c)
 *     ndisNotifyMiniports @ 0x1C00EB1F0 (ndisNotifyMiniports.c)
 *     ndisMUnload @ 0x1C00F3290 (ndisMUnload.c)
 * Callees:
 *     ndisDereferenceRef @ 0x1C001612C (ndisDereferenceRef.c)
 *     WPP_SF_q @ 0x1C003C368 (WPP_SF_q.c)
 */

LONG __fastcall ndisDereferenceDriver(__int64 a1, char a2)
{
  KIRQL v4; // si
  LONG result; // eax
  struct _NDIS_M_DRIVER_BLOCK **p_NextDriver; // rcx
  struct _NDIS_M_DRIVER_BLOCK *v7; // rdx
  void *v8; // rcx
  void *v9; // rcx
  _QWORD *v10; // rcx
  _QWORD *v11; // rbx

  v4 = 0;
  result = ndisDereferenceRef((PKSPIN_LOCK)(a1 + 392));
  if ( (_BYTE)result )
  {
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      WPP_SF_q(23LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
    if ( !a2 )
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniDriverListLock);
    p_NextDriver = &ndisMiniDriverList;
    if ( ndisMiniDriverList )
    {
      while ( 1 )
      {
        v7 = *p_NextDriver;
        if ( *p_NextDriver == (struct _NDIS_M_DRIVER_BLOCK *)a1 )
          break;
        p_NextDriver = &v7->NextDriver;
        if ( !v7->NextDriver )
          goto LABEL_10;
      }
      *p_NextDriver = *(struct _NDIS_M_DRIVER_BLOCK **)(a1 + 8);
      ObfDereferenceObject(ndisDriverObject);
    }
LABEL_10:
    if ( !a2 )
      KeReleaseSpinLock(&ndisMiniDriverListLock, v4);
    v8 = *(void **)(a1 + 888);
    if ( v8 )
    {
      ExFreePoolWithTag(v8, 0);
      *(_QWORD *)(a1 + 888) = 0LL;
    }
    v9 = *(void **)(a1 + 32);
    if ( v9 )
    {
      ExFreePoolWithTag(v9, 0);
      *(_QWORD *)(a1 + 32) = 0LL;
    }
    if ( (*(_BYTE *)(a1 + 26) & 1) != 0 )
    {
      KeWaitForSingleObject((PVOID)(a1 + 416), Executive, 0, 0, 0LL);
      v10 = *(_QWORD **)(a1 + 96);
      *(_QWORD *)(a1 + 472) = KeGetCurrentThread();
      if ( v10 )
      {
        do
        {
          v11 = (_QWORD *)*v10;
          ExFreePoolWithTag(v10, 0);
          v10 = v11;
        }
        while ( v11 );
      }
      *(_QWORD *)(a1 + 472) = 0LL;
      KeReleaseMutex((PRKMUTEX)(a1 + 416), 0);
    }
    result = KeSetEvent((PRKEVENT)(a1 + 368), 0, 0);
    if ( (unsigned __int8)byte_1C00895DB >= 4u )
      return WPP_SF_q(24LL, &WPP_b02f9d78c57635ef76bd3f6eba54b479_Traceguids, a1);
  }
  return result;
}

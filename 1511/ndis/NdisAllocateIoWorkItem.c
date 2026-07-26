/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C00245F0
 * Callers:
 *     <none>
 * Callees:
 *     ndisReferenceRef @ 0x1C0004A64 (ndisReferenceRef.c)
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C0013574 (ndisDereferenceDriver.c)
 *     ndisDereferenceFilterDriver @ 0x1C0018DB4 (ndisDereferenceFilterDriver.c)
 *     memset @ 0x1C0026F40 (memset.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  _DEVICE_OBJECT *v2; // rsi
  _DEVICE_OBJECT *v3; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char v6; // al
  PIO_WORKITEM v7; // rax
  PIO_WORKITEM WorkItem; // rax
  __int64 v10; // rcx
  PIO_WORKITEM v11; // rax
  PIO_WORKITEM v12; // rax
  NDIS_HANDLE v13; // rcx
  PIO_WORKITEM v14; // rax

  v2 = 0LL;
  v3 = 0LL;
  PoolWithTag = ExAllocatePoolWithTag(NonPagedPoolNx, 0x30uLL, 0x6977444Eu);
  v5 = PoolWithTag;
  if ( !PoolWithTag )
    return v5;
  memset(PoolWithTag, 0, 0x30uLL);
  *(_DWORD *)v5 = 3146000;
  v5[1] = NdisObjectHandle;
  v6 = *(_BYTE *)NdisObjectHandle;
  if ( *(_BYTE *)NdisObjectHandle == 2 )
  {
    if ( ndisReferenceRef((PKSPIN_LOCK)NdisObjectHandle + 49) != 1 )
      goto LABEL_29;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
    WorkItem = IoAllocateWorkItem(v3);
    v5[2] = WorkItem;
    if ( !WorkItem )
    {
      v13 = NdisObjectHandle;
      goto LABEL_27;
    }
LABEL_12:
    if ( v3 )
      return v5;
    goto LABEL_29;
  }
  if ( v6 == 4 )
  {
    if ( ndisReferenceRef((PKSPIN_LOCK)NdisObjectHandle + 9) != 1 )
      goto LABEL_29;
    v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
    v14 = IoAllocateWorkItem(v3);
    v5[2] = v14;
    if ( !v14 )
    {
      ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle);
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
    }
    goto LABEL_12;
  }
  if ( v6 == 9 )
  {
    v10 = *((_QWORD *)NdisObjectHandle + 3);
    if ( *(_BYTE *)v10 != 2 )
    {
      if ( *(_BYTE *)v10 == 4 && ndisReferenceRef((PKSPIN_LOCK)(v10 + 72)) == 1 )
      {
        v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v11 = IoAllocateWorkItem(v2);
        v5[2] = v11;
        if ( v11 )
          goto LABEL_8;
        ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3));
        goto LABEL_28;
      }
      goto LABEL_29;
    }
    if ( ndisReferenceRef((PKSPIN_LOCK)(v10 + 392)) != 1 )
      goto LABEL_29;
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
    v12 = IoAllocateWorkItem(v2);
    v5[2] = v12;
    if ( v12 )
      goto LABEL_8;
    v13 = (NDIS_HANDLE)*((_QWORD *)NdisObjectHandle + 3);
LABEL_27:
    ndisDereferenceDriver((__int64)v13, 0);
LABEL_28:
    ExFreePoolWithTag(v5, 0);
    v5 = 0LL;
LABEL_8:
    if ( v2 )
      return v5;
    goto LABEL_12;
  }
  if ( v6 == 17 && ndisReferenceMiniport((__int64)NdisObjectHandle) == 1 )
  {
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 485);
    v7 = IoAllocateWorkItem(v2);
    v5[2] = v7;
    if ( v7 )
      goto LABEL_8;
    ndisDereferenceMiniport((__int64)NdisObjectHandle, 0x60u);
    goto LABEL_28;
  }
LABEL_29:
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return v5;
}

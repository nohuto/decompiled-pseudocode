/*
 * XREFs of NdisAllocateIoWorkItem @ 0x1C00202A0
 * Callers:
 *     <none>
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ndisDereferenceDriver @ 0x1C001331C (ndisDereferenceDriver.c)
 *     ndisReferenceRef @ 0x1C0015D1C (ndisReferenceRef.c)
 *     ndisDereferenceFilterDriver @ 0x1C001A4E8 (ndisDereferenceFilterDriver.c)
 *     memset @ 0x1C0027500 (memset.c)
 */

NDIS_HANDLE __stdcall NdisAllocateIoWorkItem(NDIS_HANDLE NdisObjectHandle)
{
  _DEVICE_OBJECT *v2; // rsi
  _DEVICE_OBJECT *v3; // rbp
  _QWORD *PoolWithTag; // rax
  _QWORD *v5; // rbx
  char v6; // al
  PIO_WORKITEM WorkItem; // rax
  PIO_WORKITEM v9; // rax
  __int64 v10; // rcx
  PIO_WORKITEM v11; // rax
  __int64 v12; // rdx
  PIO_WORKITEM v13; // rax
  NDIS_HANDLE v14; // rcx
  PIO_WORKITEM v15; // rax
  __int64 v16; // rdx

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
    if ( ndisReferenceRef((PKSPIN_LOCK)NdisObjectHandle + 49, 3u) == 1 )
    {
      v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 5);
      WorkItem = IoAllocateWorkItem(v3);
      v5[2] = WorkItem;
      if ( WorkItem )
        goto LABEL_5;
      v14 = NdisObjectHandle;
LABEL_25:
      ndisDereferenceDriver((__int64)v14, 0);
LABEL_26:
      ExFreePoolWithTag(v5, 0);
      v5 = 0LL;
LABEL_27:
      if ( v2 )
        return v5;
LABEL_5:
      if ( v3 )
        return v5;
    }
  }
  else if ( v6 == 4 )
  {
    if ( ndisReferenceRef((PKSPIN_LOCK)NdisObjectHandle + 9, 1u) == 1 )
    {
      v3 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 2);
      v15 = IoAllocateWorkItem(v3);
      v5[2] = v15;
      if ( !v15 )
      {
        ndisDereferenceFilterDriver((_NDIS_FILTER_DRIVER_BLOCK *)NdisObjectHandle, v16, 1u);
        ExFreePoolWithTag(v5, 0);
        v5 = 0LL;
      }
      goto LABEL_5;
    }
  }
  else if ( v6 == 9 )
  {
    v10 = *((_QWORD *)NdisObjectHandle + 3);
    if ( *(_BYTE *)v10 == 2 )
    {
      if ( ndisReferenceRef((PKSPIN_LOCK)(v10 + 392), 4u) == 1 )
      {
        v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
        v13 = IoAllocateWorkItem(v2);
        v5[2] = v13;
        if ( v13 )
          goto LABEL_27;
        v14 = (NDIS_HANDLE)*((_QWORD *)NdisObjectHandle + 3);
        goto LABEL_25;
      }
    }
    else if ( *(_BYTE *)v10 == 4 && ndisReferenceRef((PKSPIN_LOCK)(v10 + 72), 2u) == 1 )
    {
      v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 4);
      v11 = IoAllocateWorkItem(v2);
      v5[2] = v11;
      if ( v11 )
        goto LABEL_27;
      ndisDereferenceFilterDriver(*((_NDIS_FILTER_DRIVER_BLOCK **)NdisObjectHandle + 3), v12, 2u);
      goto LABEL_26;
    }
  }
  else if ( v6 == 17 && ndisReferenceMiniport((__int64)NdisObjectHandle, 0x62u) == 1 )
  {
    v2 = (_DEVICE_OBJECT *)*((_QWORD *)NdisObjectHandle + 485);
    v9 = IoAllocateWorkItem(v2);
    v5[2] = v9;
    if ( v9 )
      goto LABEL_27;
    ndisDereferenceMiniport((__int64)NdisObjectHandle);
    goto LABEL_26;
  }
  if ( v5 )
  {
    ExFreePoolWithTag(v5, 0);
    return 0LL;
  }
  return v5;
}

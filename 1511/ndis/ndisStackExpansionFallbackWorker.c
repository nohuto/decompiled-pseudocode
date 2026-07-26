/*
 * XREFs of ndisStackExpansionFallbackWorker @ 0x1C0054AD0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ndisFOidRequestCompleteInternal @ 0x1C00066F0 (ndisFOidRequestCompleteInternal.c)
 *     ndisFDoOidRequestInternal @ 0x1C0007FE0 (ndisFDoOidRequestInternal.c)
 *     NdisFSendNetBufferListsComplete @ 0x1C000DE60 (NdisFSendNetBufferListsComplete.c)
 *     NdisFReturnNetBufferLists @ 0x1C000E8D0 (NdisFReturnNetBufferLists.c)
 *     ndisFIndicateStatusInternal @ 0x1C001C0D0 (ndisFIndicateStatusInternal.c)
 *     ndisDereferenceRef @ 0x1C001C6C4 (ndisDereferenceRef.c)
 *     memset @ 0x1C0026F40 (memset.c)
 *     ndisFDirectOidRequestCompleteInternal @ 0x1C00539A0 (ndisFDirectOidRequestCompleteInternal.c)
 *     ndisFNetPnPEventInternal @ 0x1C00980A0 (ndisFNetPnPEventInternal.c)
 *     ndisFDevicePnPEventNotifyInternal @ 0x1C00982A0 (ndisFDevicePnPEventNotifyInternal.c)
 */

void __fastcall ndisStackExpansionFallbackWorker(char *P)
{
  KSPIN_LOCK *v1; // r15
  KIRQL v3; // al
  __int128 v4; // xmm0
  KIRQL v5; // bl
  __int128 v6; // xmm1
  struct _NET_BUFFER_LIST *v7; // rbx
  __int64 v8; // rbx
  __int64 v9; // rax
  void *v10; // r14
  struct _KEVENT *v11; // rdi
  __int64 v12; // rdx
  KIRQL v13; // al
  __int64 v14; // r14
  __int64 v15; // rbx
  struct _KEVENT *v16; // rdi
  PNET_BUFFER_LIST v17; // rdi
  char *v18; // rax
  struct _KEVENT *v19; // rbx
  PNET_BUFFER_LIST NetBufferList[2]; // [rsp+58h] [rbp-9h]
  struct _NET_BUFFER_LIST *NetBufferLists; // [rsp+68h] [rbp+7h]
  _QWORD v22[3]; // [rsp+70h] [rbp+Fh] BYREF
  PNET_BUFFER_LIST v23; // [rsp+88h] [rbp+27h]

  v1 = (KSPIN_LOCK *)(P + 144);
  v3 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)P + 18);
  v4 = *(_OWORD *)(P + 232);
  v5 = v3;
  v6 = *(_OWORD *)(P + 248);
  P[224] = 0;
  *(_OWORD *)NetBufferList = *(_OWORD *)(P + 264);
  NetBufferLists = (struct _NET_BUFFER_LIST *)*((_QWORD *)P + 35);
  memset(P + 232, 0, 0x38uLL);
  *((_QWORD *)P + 19) = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v5);
  v22[1] = P;
  if ( (_BYTE)v4 )
    ndisFDoOidRequestInternal((KSPIN_LOCK *)P);
  if ( BYTE1(v4) )
    ndisFOidRequestCompleteInternal(P);
  v7 = (struct _NET_BUFFER_LIST *)*((_QWORD *)&v4 + 1);
  while ( v7 )
  {
    v23 = v7;
    v7 = (struct _NET_BUFFER_LIST *)v7->ProtocolReserved[1];
    ndisFDirectOidRequestCompleteInternal(v22);
  }
  v8 = v6;
  while ( v8 )
  {
    v9 = v8 + 80;
    v10 = (void *)v8;
    v11 = *(struct _KEVENT **)(v8 + 88);
    v12 = v8;
    v8 = *(_QWORD *)(v8 + 80);
    *(_QWORD *)(v9 + 8) = 0LL;
    ndisFIndicateStatusInternal((__int64)P, v12);
    if ( v11 )
    {
      KeSetEvent(v11, 0, 0);
    }
    else
    {
      ndisDereferenceRef((PKSPIN_LOCK)P + 39, 1u);
      ExFreePoolWithTag(v10, 0);
    }
  }
  v13 = KeAcquireSpinLockRaiseToDpc(v1);
  *((_QWORD *)P + 19) = KeGetCurrentThread();
  *((_DWORD *)P + 40) = 2099091;
  if ( !*((_QWORD *)P + 31) )
    P[288] = 0;
  *((_QWORD *)P + 19) = 0LL;
  *((_DWORD *)P + 40) = 0;
  KeReleaseSpinLock(v1, v13);
  v14 = *((_QWORD *)&v6 + 1);
  while ( v14 )
  {
    v15 = v14 + 32;
    v23 = (PNET_BUFFER_LIST)v14;
    v16 = *(struct _KEVENT **)(v14 + 32);
    v14 = *(_QWORD *)(v14 + 56);
    *(_QWORD *)v15 = 0LL;
    ndisFNetPnPEventInternal(v22);
    *(_DWORD *)(v15 + 8) = v22[0];
    KeSetEvent(v16, 0, 0);
  }
  v17 = NetBufferList[0];
  while ( v17 )
  {
    v18 = (char *)&v17->ParentNetBufferList + 4;
    v23 = v17;
    v19 = *(struct _KEVENT **)((char *)&v17->NdisPoolHandle + 4);
    v17 = *(_NET_BUFFER_LIST **)((char *)&v17->ParentNetBufferList + 4);
    *((_QWORD *)v18 + 1) = 0LL;
    ndisFDevicePnPEventNotifyInternal(v22);
    KeSetEvent(v19, 0, 0);
  }
  if ( NetBufferList[1] )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferList[1],
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)P + 99),
        0x91u,
        0);
    NdisFSendNetBufferListsComplete(P, NetBufferList[1], 0);
  }
  if ( NetBufferLists )
  {
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        NetBufferLists,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)0xA0,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)P + 99),
        0x8Bu,
        0);
    NdisFReturnNetBufferLists(P, NetBufferLists, 0);
  }
  ndisDereferenceFilter((struct _NDIS_FILTER_BLOCK *)P, 1u);
}

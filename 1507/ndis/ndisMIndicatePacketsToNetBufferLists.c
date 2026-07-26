/*
 * XREFs of ndisMIndicatePacketsToNetBufferLists @ 0x1C00636F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     NdisMPauseComplete @ 0x1C001EF10 (NdisMPauseComplete.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisXlateRecvPacketArrayToNetBufferLists @ 0x1C0048330 (ndisXlateRecvPacketArrayToNetBufferLists.c)
 *     ndisXlateReturnNetBufferListToPacket @ 0x1C00485FC (ndisXlateReturnNetBufferListToPacket.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0054270 (ndisInvokeNextReceiveHandler.c)
 *     ?NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z @ 0x1C005E47C (-NDIS_FREE_XFER_DATA_PACKET@@YAXPEAU_NDIS_PACKET@@@Z.c)
 */

void __fastcall ndisMIndicatePacketsToNetBufferLists(NDIS_HANDLE MiniportAdapterHandle, __int64 a2, unsigned int a3)
{
  unsigned int v3; // ebx
  char v6; // r15
  unsigned int v7; // r14d
  KIRQL v8; // al
  int v9; // ecx
  int v10; // ebx
  struct _NET_BUFFER_LIST *v11; // rsi
  bool v12; // bl
  struct _NET_BUFFER_LIST *Alignment; // r15
  struct _NDIS_PACKET *v14; // rdx
  __int64 NdisPacketOobOffset; // rax
  KIRQL v16; // al
  struct _KTHREAD *CurrentThread; // rdx
  bool v18; // zf
  int v19; // edx
  unsigned int v20; // ebx
  bool v21; // si
  __int64 v22; // rax
  struct _NDIS_PACKET *v23; // rcx
  __int64 v24; // rax
  struct _NET_BUFFER_LIST *v25; // rsi
  struct _NET_BUFFER_LIST *v26; // rbx
  _QWORD v27[2]; // [rsp+40h] [rbp-30h] BYREF
  unsigned int v28; // [rsp+50h] [rbp-20h]
  struct _NET_BUFFER_LIST *v29; // [rsp+58h] [rbp-18h]
  unsigned int v30; // [rsp+60h] [rbp-10h]
  unsigned int v31; // [rsp+64h] [rbp-Ch]
  int v32; // [rsp+68h] [rbp-8h]
  unsigned int v33; // [rsp+B0h] [rbp+40h]
  char v35; // [rsp+C0h] [rbp+50h]

  *((_DWORD *)MiniportAdapterHandle + 675) += a3;
  ++*((_DWORD *)MiniportAdapterHandle + 676);
  v3 = 0;
  v30 = 0;
  v32 = 0;
  v28 = a3;
  v27[1] = a2;
  v27[0] = MiniportAdapterHandle;
  while ( 1 )
  {
    v6 = ndisXlateRecvPacketArrayToNetBufferLists((__int64)v27);
    v35 = v6;
    if ( !v29 )
      goto LABEL_25;
    v7 = v30 - v3;
    v33 = v30;
    v8 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
    *((_QWORD *)MiniportAdapterHandle + 252) = KeGetCurrentThread();
    v9 = *((_DWORD *)MiniportAdapterHandle + 502);
    *((_DWORD *)MiniportAdapterHandle + 506) = 2491735;
    if ( v9 == 5 || v9 == 6 )
      break;
    *((_DWORD *)MiniportAdapterHandle + 503) += v7;
    *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
    *((_DWORD *)MiniportAdapterHandle + 506) = 0;
    KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v8);
    v10 = v32;
    if ( (*((_DWORD *)MiniportAdapterHandle + 30) & 0x8000) != 0 && (v32 & 2) == 0 )
    {
      _InterlockedExchangeAdd((volatile signed __int32 *)MiniportAdapterHandle + 457, v7);
      v10 = v32;
    }
    v11 = v29;
    if ( ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        v29,
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 517),
        *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
        ((unsigned __int8)v32 >> 1) & 1 | 0x80,
        0);
    ndisInvokeNextReceiveHandler(
      v11,
      0,
      v31,
      v10,
      *((struct _NDIS_FILTER_BLOCK **)MiniportAdapterHandle + 315),
      *((void **)MiniportAdapterHandle + 313),
      *((void (**)(void))MiniportAdapterHandle + 329));
    if ( (v10 & 2) != 0 )
    {
      v12 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x40000) != 0;
      if ( ndisNblTrackerMode )
        ndisNblTrackerTransferOwnershipInternal(
          v11,
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 314),
          *((struct NDIS_NBL_TRACKER_HANDLE__ **)MiniportAdapterHandle + 517),
          0x8Eu,
          0);
      do
      {
        Alignment = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
        v14 = (struct _NDIS_PACKET *)ndisXlateReturnNetBufferListToPacket(v11);
        NdisPacketOobOffset = v14->Private.NdisPacketOobOffset;
        if ( *(unsigned int *)((char *)&v14->Private.Count + NdisPacketOobOffset) != -1073741670 )
        {
          if ( v12 )
          {
            if ( (v14[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v14[-1].ProtocolReserved[4] == -1 )
              NDIS_FREE_XFER_DATA_PACKET(v14);
            else
              (*((void (__fastcall **)(_QWORD))MiniportAdapterHandle + 271))(*((_QWORD *)MiniportAdapterHandle + 3));
          }
          else
          {
            *(unsigned int *)((char *)&v14->Private.Count + NdisPacketOobOffset) = 0;
          }
        }
        v11 = Alignment;
      }
      while ( Alignment );
      v16 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)MiniportAdapterHandle + 250);
      CurrentThread = KeGetCurrentThread();
      *((_DWORD *)MiniportAdapterHandle + 503) -= v7;
      v18 = *((_DWORD *)MiniportAdapterHandle + 502) == 5;
      *((_QWORD *)MiniportAdapterHandle + 252) = CurrentThread;
      v19 = *((_DWORD *)MiniportAdapterHandle + 503);
      *((_DWORD *)MiniportAdapterHandle + 506) = 2491865;
      if ( v18 && !v19 )
      {
        *((_DWORD *)MiniportAdapterHandle + 502) = 6;
        *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
        *((_DWORD *)MiniportAdapterHandle + 506) = 0;
        KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v16);
        NdisMPauseComplete(MiniportAdapterHandle);
LABEL_26:
        v20 = v30;
        goto LABEL_27;
      }
      *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
      *((_DWORD *)MiniportAdapterHandle + 506) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v16);
      v6 = v35;
    }
    v3 = v33;
    v29 = 0LL;
LABEL_25:
    if ( v6 != 1 )
      goto LABEL_26;
  }
  *((_QWORD *)MiniportAdapterHandle + 252) = 0LL;
  *((_DWORD *)MiniportAdapterHandle + 506) = 0;
  v25 = v29;
  KeReleaseSpinLock((PKSPIN_LOCK)MiniportAdapterHandle + 250, v8);
  do
  {
    v26 = (struct _NET_BUFFER_LIST *)v25->Link.Alignment;
    ndisXlateReturnNetBufferListToPacket(v25);
    v25 = v26;
  }
  while ( v26 );
  v20 = v30 - v7;
LABEL_27:
  if ( v20 < a3 )
  {
    v21 = (*((_DWORD *)MiniportAdapterHandle + 30) & 0x40000) != 0;
    do
    {
      v22 = v20++;
      v23 = *(struct _NDIS_PACKET **)(a2 + 8 * v22);
      v24 = v23->Private.NdisPacketOobOffset;
      if ( *(unsigned int *)((char *)&v23->Private.Count + v24) != -1073741670 )
      {
        if ( v21 )
        {
          if ( (v23[-1].Reserved[1] & 1) != 0 && *(_DWORD *)&v23[-1].ProtocolReserved[4] == -1 )
            NDIS_FREE_XFER_DATA_PACKET(v23);
          else
            (*((void (__fastcall **)(_QWORD, struct _NDIS_PACKET *))MiniportAdapterHandle + 271))(
              *((_QWORD *)MiniportAdapterHandle + 3),
              v23);
        }
        else
        {
          *(unsigned int *)((char *)&v23->Private.Count + v24) = 0;
        }
      }
    }
    while ( v20 < a3 );
  }
}

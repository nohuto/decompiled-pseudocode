/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C0003600
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000E450 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C0025288 (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C00526B0 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ndisClearBusy @ 0x1C00665D8 (ndisClearBusy.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  unsigned int *v5; // r13
  PNET_BUFFER_LIST Alignment; // rax
  __int64 i; // rdx
  __int64 CurrentIrql; // rax
  _QWORD *v9; // rdi
  void (*v10)(void); // rbp
  void *v11; // r14
  struct _NET_BUFFER_LIST **v12; // r15
  _QWORD *v13; // rdx
  __int64 v14; // rsi
  char v15; // al
  struct _NET_BUFFER_LIST *v16; // r9
  struct _NET_BUFFER_LIST *Scratch; // rbx
  struct _NET_BUFFER_LIST *v18; // r9
  struct _NET_BUFFER_LIST *v19; // rbx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v21; // [rsp+30h] [rbp-C8h]
  char v22; // [rsp+40h] [rbp-B8h]
  unsigned int v23; // [rsp+44h] [rbp-B4h]
  struct NDIS_PCW_CONTEXT v24; // [rsp+48h] [rbp-B0h] BYREF
  _QWORD v25[3]; // [rsp+68h] [rbp-90h] BYREF
  _BYTE v26[8]; // [rsp+80h] [rbp-78h] BYREF
  __int64 v27; // [rsp+88h] [rbp-70h]
  void *v28; // [rsp+90h] [rbp-68h]
  void (*v29)(void); // [rsp+98h] [rbp-60h]
  PNET_BUFFER_LIST v30; // [rsp+A0h] [rbp-58h]
  int v31; // [rsp+A8h] [rbp-50h]
  __int64 v32; // [rsp+ACh] [rbp-4Ch]
  ULONG v33; // [rsp+B4h] [rbp-44h]
  KIRQL v35; // [rsp+118h] [rbp+20h]

  v5 = (unsigned int *)MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(60LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, MiniportAdapterHandle, NetBufferList);
  if ( *((_QWORD *)v5 + 564) )
  {
    Alignment = NetBufferList;
    for ( i = 0LL; Alignment; i = (unsigned int)(i + 1) )
      Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
    ndisClearBusy(v5, i, 52LL);
  }
  v24.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v5 + 5);
  v24.DatapathEventsMask = v5[12];
  CurrentIrql = v5[20];
  v24.DatapathCyclesMask = v5[20];
  v24.CurrentCpu = -1;
  v35 = 2;
  if ( ndisNblTrackerMode )
    ndisNblTrackerTransferOwnershipInternal(
      NetBufferList,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 517),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v5 + 324),
      NdisNblTrackerEvent_MiniportSendCompleted,
      SendCompleteFlags & 1);
  if ( (v24.DatapathCyclesMask & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
      v35 = KfRaiseIrql(2u);
    ndisPcwStartCycleCounter(&v24, 8u);
  }
  v9 = (_QWORD *)*((_QWORD *)v5 + 325);
  v10 = (void (*)(void))*((_QWORD *)v5 + 328);
  v11 = (void *)*((_QWORD *)v5 + 323);
  if ( *(_BYTE *)v9 == 17 )
    goto LABEL_31;
  if ( ndisIterativeDataPathDisabled
    || (SendCompleteFlags & 1) == 0 && (CurrentIrql = KeGetCurrentIrql(), (_BYTE)CurrentIrql != 2) )
  {
    if ( *(_BYTE *)v5 == 5 )
    {
      v27 = *((_QWORD *)v5 + 325);
      v28 = v11;
      v32 = 1LL;
      v29 = v10;
      v30 = NetBufferList;
      v31 = 0;
      v33 = SendCompleteFlags;
      if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v26) < 0 )
        ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v5, NetBufferList, 1u);
      goto LABEL_34;
    }
LABEL_31:
    ((void (__fastcall *)(void *, PNET_BUFFER_LIST, _QWORD))v10)(v11, NetBufferList, SendCompleteFlags);
    goto LABEL_34;
  }
  LODWORD(CurrentIrql) = KeGetPcr()->Prcb.Number;
  v12 = (struct _NET_BUFFER_LIST **)v25;
  v23 = CurrentIrql;
  v25[2] = 0LL;
  v25[0] = NetBufferList;
  v25[1] = NetBufferList;
  NetBufferList->Scratch = 0LL;
  NetBufferList->ChildRefCount = SendCompleteFlags;
  if ( *(_BYTE *)v9 == 5 )
  {
    while ( *v12 )
    {
      v13 = v9;
      v14 = v9[53] + 96 * CurrentIrql;
      v15 = *(_BYTE *)(v14 + 40);
      *(_BYTE *)(v14 + 40) = 1;
      v16 = *v12;
      v22 = v15;
      *v12 = 0LL;
      if ( v16 )
      {
        do
        {
          Scratch = (struct _NET_BUFFER_LIST *)v16->Scratch;
          ChildRefCount = v16->ChildRefCount;
          v16->ChildRefCount = 0;
          ndisCallSendCompleteHandler(v9, v10, v11, v16, 0, 0, ChildRefCount);
          v16 = Scratch;
        }
        while ( Scratch );
        v5 = (unsigned int *)MiniportAdapterHandle;
        v13 = v9;
        v15 = v22;
      }
      *(_BYTE *)(v14 + 40) = 0;
      if ( v15 )
      {
        *(_BYTE *)(v14 + 40) = 1;
        goto LABEL_26;
      }
      v9 = (_QWORD *)v9[61];
      v12 = (struct _NET_BUFFER_LIST **)(v14 + 24);
      v10 = (void (*)(void))v13[58];
      v11 = (void *)v13[59];
      CurrentIrql = v23;
      if ( *(_BYTE *)v9 != 5 )
        goto LABEL_26;
    }
  }
  else
  {
LABEL_26:
    v18 = *v12;
    if ( *v12 )
    {
      *v12 = 0LL;
      do
      {
        v19 = (struct _NET_BUFFER_LIST *)v18->Scratch;
        v21 = v18->ChildRefCount;
        v18->ChildRefCount = 0;
        ndisCallSendCompleteHandler(v9, v10, v11, v18, 0, 0, v21);
        v18 = v19;
      }
      while ( v19 );
    }
  }
LABEL_34:
  if ( (v24.DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v24, 8u, 0x15uLL);
    if ( v35 != 2 )
      KeLowerIrql(v35);
  }
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(61LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v5, NetBufferList);
}

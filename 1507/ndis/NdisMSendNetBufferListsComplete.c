/*
 * XREFs of NdisMSendNetBufferListsComplete @ 0x1C00021E0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C000C900 (-ndisCallSendCompleteHandler@@YAXPEAXP6AXXZ0PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 *     ?ndisExpandStack@@YAJP6AXPEAX@Z0@Z @ 0x1C002028C (-ndisExpandStack@@YAJP6AXPEAX@Z0@Z.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ?ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z @ 0x1C0022A48 (-ndisQueueStackExpansionFallbackNbls@@YAXPEAU_NDIS_FILTER_BLOCK@@PEAU_NET_BUFFER_LIST@@E@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C00231B0 (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C00231FC (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 *     ndisClearBusy @ 0x1C0067508 (ndisClearBusy.c)
 */

void __stdcall NdisMSendNetBufferListsComplete(
        NDIS_HANDLE MiniportAdapterHandle,
        PNET_BUFFER_LIST NetBufferList,
        ULONG SendCompleteFlags)
{
  PNET_BUFFER_LIST v3; // r15
  _BYTE *v4; // rbx
  struct _NET_BUFFER_LIST *v6; // r8
  KIRQL v7; // bp
  _QWORD *v8; // rsi
  void *v9; // rcx
  void (*v10)(void); // r12
  unsigned int Number; // edx
  struct _NET_BUFFER_LIST **v12; // r14
  PNET_BUFFER_LIST *v13; // rax
  _QWORD *v14; // r13
  __int64 v15; // rbp
  char v16; // al
  struct _NET_BUFFER_LIST *v17; // r9
  struct _NET_BUFFER_LIST *Scratch; // rdi
  struct _NET_BUFFER_LIST *v19; // r9
  struct _NET_BUFFER_LIST *v20; // rdi
  _SLIST_HEADER *Alignment; // rax
  __int64 v22; // rdx
  _QWORD *v23; // rdx
  unsigned int ChildRefCount; // [rsp+30h] [rbp-C8h]
  unsigned int v25; // [rsp+30h] [rbp-C8h]
  char v26; // [rsp+40h] [rbp-B8h]
  unsigned int v27; // [rsp+44h] [rbp-B4h]
  void *v28; // [rsp+48h] [rbp-B0h]
  struct NDIS_PCW_CONTEXT v29; // [rsp+50h] [rbp-A8h] BYREF
  PNET_BUFFER_LIST v30; // [rsp+68h] [rbp-90h] BYREF
  PNET_BUFFER_LIST v31; // [rsp+70h] [rbp-88h]
  __int64 v32; // [rsp+78h] [rbp-80h]
  _BYTE v33[8]; // [rsp+80h] [rbp-78h] BYREF
  _QWORD *v34; // [rsp+88h] [rbp-70h]
  __int64 v35; // [rsp+90h] [rbp-68h]
  void (*v36)(void); // [rsp+98h] [rbp-60h]
  PNET_BUFFER_LIST v37; // [rsp+A0h] [rbp-58h]
  int v38; // [rsp+A8h] [rbp-50h]
  __int64 v39; // [rsp+ACh] [rbp-4Ch]
  ULONG v40; // [rsp+B4h] [rbp-44h]
  char v43; // [rsp+118h] [rbp+20h]

  v3 = NetBufferList;
  v4 = MiniportAdapterHandle;
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(60LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, MiniportAdapterHandle, NetBufferList);
  v6 = 0LL;
  if ( *((_QWORD *)v4 + 564) )
  {
    Alignment = (_SLIST_HEADER *)v3;
    v22 = 0LL;
    if ( v3 )
    {
      do
      {
        Alignment = (_SLIST_HEADER *)Alignment->Alignment;
        v22 = (unsigned int)(v22 + 1);
      }
      while ( Alignment );
    }
    ndisClearBusy(v4, v22, 52LL);
    v6 = 0LL;
  }
  v7 = 2;
  v29.PcwBlock = (_NDIS_PCW_DATA_BLOCK *)*((_QWORD *)v4 + 5);
  v29.DatapathEventsMask = *((_DWORD *)v4 + 12);
  v29.DatapathCyclesMask = *((_DWORD *)v4 + 20);
  v29.CurrentCpu = -1;
  v43 = 2;
  if ( ndisNblTrackerMode )
  {
    ndisNblTrackerTransferOwnershipInternal(
      v3,
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v4 + 517),
      *((struct NDIS_NBL_TRACKER_HANDLE__ **)v4 + 324),
      NdisNblTrackerEvent_MiniportSendCompleted,
      (SendCompleteFlags & 1) != 0);
    v6 = 0LL;
  }
  if ( (v29.DatapathCyclesMask & 0x100) != 0 )
  {
    if ( (SendCompleteFlags & 1) == 0 )
    {
      v7 = KfRaiseIrql(2u);
      v43 = v7;
    }
    ndisPcwStartCycleCounter(&v29, 8u);
  }
  v8 = (_QWORD *)*((_QWORD *)v4 + 325);
  v9 = (void *)*((_QWORD *)v4 + 323);
  v10 = (void (*)(void))*((_QWORD *)v4 + 328);
  v28 = v9;
  if ( *(_BYTE *)v8 == 17 )
    goto LABEL_36;
  if ( !ndisIterativeDataPathDisabled && ((SendCompleteFlags & 1) != 0 || KeGetCurrentIrql() == 2) )
  {
    Number = KeGetPcr()->Prcb.Number;
    v12 = &v30;
    v13 = 0LL;
    v27 = Number;
    v30 = v6;
    v31 = 0LL;
    v32 = 0LL;
    if ( v6 )
    {
      if ( SendCompleteFlags == MEMORY[0x84] && (SendCompleteFlags & 6) == 0 )
      {
        v23 = (_QWORD *)MEMORY[0];
        if ( MEMORY[0] )
        {
          do
          {
            v13 = (PNET_BUFFER_LIST *)v23;
            v23 = (_QWORD *)*v23;
          }
          while ( v23 );
        }
        Number = v27;
        *v13 = v3;
LABEL_13:
        if ( *(_BYTE *)v8 == 5 )
        {
          while ( *v12 )
          {
            v14 = v8;
            v15 = 96LL * Number + v8[53] + 24LL;
            v16 = *(_BYTE *)(v15 + 16);
            *(_BYTE *)(v15 + 16) = 1;
            v17 = *v12;
            v26 = v16;
            *v12 = v6;
            if ( v17 )
            {
              do
              {
                Scratch = (struct _NET_BUFFER_LIST *)v17->Scratch;
                ChildRefCount = v17->ChildRefCount;
                v17->ChildRefCount = 0;
                ndisCallSendCompleteHandler(v8, v10, v28, v17, 0, 0, ChildRefCount);
                v17 = Scratch;
              }
              while ( Scratch );
              v4 = MiniportAdapterHandle;
              v6 = 0LL;
              v3 = NetBufferList;
              v16 = v26;
              Number = v27;
            }
            *(_BYTE *)(v15 + 16) = 0;
            if ( v16 )
            {
              v9 = v28;
              *(_BYTE *)(v15 + 16) = 1;
LABEL_20:
              v7 = v43;
              goto LABEL_21;
            }
            v8 = (_QWORD *)v8[61];
            v12 = (struct _NET_BUFFER_LIST **)v15;
            v9 = (void *)v14[59];
            v10 = (void (*)(void))v14[58];
            v28 = v9;
            if ( *(_BYTE *)v8 != 5 )
              goto LABEL_20;
          }
          v7 = v43;
        }
        else
        {
LABEL_21:
          v19 = *v12;
          if ( *v12 )
          {
            *v12 = v6;
            do
            {
              v20 = (struct _NET_BUFFER_LIST *)v19->Scratch;
              v25 = v19->ChildRefCount;
              v19->ChildRefCount = (int)v6;
              ndisCallSendCompleteHandler(v8, v10, v9, v19, (unsigned int)v6, (unsigned int)v6, v25);
              v9 = v28;
              v19 = v20;
              LODWORD(v6) = 0;
            }
            while ( v20 );
          }
        }
        goto LABEL_24;
      }
      MEMORY[0x70] = v3;
    }
    else
    {
      v30 = v3;
    }
    v31 = v3;
    v3->Scratch = v6;
    v3->ChildRefCount = SendCompleteFlags;
    goto LABEL_13;
  }
  if ( *v4 != 5 )
  {
LABEL_36:
    ((void (__fastcall *)(void *, PNET_BUFFER_LIST, _QWORD))v10)(v9, v3, SendCompleteFlags);
    goto LABEL_24;
  }
  v35 = *((_QWORD *)v4 + 323);
  v34 = v8;
  v39 = 1LL;
  v36 = v10;
  v37 = v3;
  v38 = (int)v6;
  v40 = SendCompleteFlags;
  if ( (int)ndisExpandStack(ndisDataPathExpandStackCallback, v33) < 0 )
    ndisQueueStackExpansionFallbackNbls((struct _NDIS_FILTER_BLOCK *)v4, v3, 1u);
LABEL_24:
  if ( (v29.DatapathCyclesMask & 0x100) != 0 )
  {
    ndisPcwEndCycleCounter(&v29, 8u, 0x15uLL);
    if ( v7 != 2 )
      KeLowerIrql(v7);
  }
  if ( (unsigned __int8)byte_1C008530A >= 4u )
    WPP_SF_qq(61LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v4, v3);
}

/*
 * XREFs of ndisMSendCompleteNetBufferListsInternal @ 0x1C00031E0
 * Callers:
 *     ndisMFakeSendNetBufferLists @ 0x1C0024CB0 (ndisMFakeSendNetBufferLists.c)
 *     ndisRequestPowerResume @ 0x1C0067384 (ndisRequestPowerResume.c)
 * Callees:
 *     ?ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS_PCW_CONTEXT@@@Z @ 0x1C0003558 (-ndisMSendCompleteNetBufferListsToOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@PEAU_NET_BUFFER_LIST@@KPEAUNDIS.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000452C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z @ 0x1C0011DA0 (-ndisPcwStartCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K@Z.c)
 *     ?ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z @ 0x1C0011DDC (-ndisPcwEndCycleCounter@@YAXPEAUNDIS_PCW_CONTEXT@@K_K@Z.c)
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 *     ?ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z @ 0x1C0063588 (-ndisPcwAddEvent@@YAXPEAUNDIS_PCW_CONTEXT@@_K1@Z.c)
 */

void __fastcall ndisMSendCompleteNetBufferListsInternal(__int64 a1, struct _NET_BUFFER_LIST *a2, unsigned int a3)
{
  _QWORD *v3; // r9
  _QWORD *p_Alignment; // rdx
  struct _NDIS_OPEN_BLOCK *v6; // rdi
  struct _NDIS_OPEN_BLOCK *v7; // r14
  struct _NET_BUFFER_LIST *v8; // r13
  KIRQL v9; // si
  __int64 v10; // r15
  struct _NET_BUFFER_LIST *v11; // rbx
  unsigned int v12; // r15d
  struct _NDIS_OPEN_BLOCK *SourceHandle; // rcx
  struct _NET_BUFFER_LIST *Alignment; // rsi
  unsigned int v15; // ebx
  unsigned __int64 NblTracker; // rbx
  unsigned int v17; // ecx
  char v18; // dl
  char v19; // r10
  char v20; // r9
  __int64 v21; // r8
  __int64 v22; // r11
  unsigned __int64 v23; // rbx
  _SLIST_HEADER *v24; // rdx
  __int64 v25; // rsi
  unsigned __int64 v26; // r10
  unsigned __int64 v27; // rcx
  unsigned __int64 Region; // rax
  unsigned __int64 v29; // r8
  unsigned __int64 v30; // rdx
  _QWORD *v31; // rcx
  KIRQL v32; // al
  $AB958A78F4F289CAB9C75B711BD3874F *FirstNetBuffer; // rax
  unsigned int v34; // r10d
  __int64 v35; // rax
  char v36; // [rsp+30h] [rbp-39h]
  struct _NET_BUFFER_LIST *v37; // [rsp+38h] [rbp-31h]
  char v38; // [rsp+38h] [rbp-31h]
  unsigned __int64 v39; // [rsp+38h] [rbp-31h]
  unsigned int v40; // [rsp+40h] [rbp-29h]
  struct NDIS_PCW_CONTEXT v41; // [rsp+48h] [rbp-21h] BYREF
  __int64 v42; // [rsp+60h] [rbp-9h]
  struct _NET_BUFFER_LIST *v43; // [rsp+68h] [rbp-1h]
  __int64 v44; // [rsp+70h] [rbp+7h]
  _SLIST_HEADER *v45; // [rsp+78h] [rbp+Fh]
  __int64 v46; // [rsp+D0h] [rbp+67h] BYREF
  char v47; // [rsp+D8h] [rbp+6Fh]
  unsigned int v48; // [rsp+E0h] [rbp+77h]
  struct _NET_BUFFER_LIST *v49; // [rsp+E8h] [rbp+7Fh] BYREF

  v48 = a3;
  v46 = a1;
  v3 = 0LL;
  v41.PcwBlock = *(_NDIS_PCW_DATA_BLOCK **)(a1 + 40);
  p_Alignment = 0LL;
  v6 = 0LL;
  v41.DatapathEventsMask = *(_DWORD *)(a1 + 48);
  v7 = 0LL;
  v8 = 0LL;
  v41.DatapathCyclesMask = *(_DWORD *)(a1 + 80);
  v49 = 0LL;
  v9 = 2;
  v43 = 0LL;
  v10 = a1;
  v37 = 0LL;
  v40 = 0;
  v41.CurrentCpu = -1;
  v47 = 2;
  if ( (unsigned __int8)byte_1C008370A >= 4u )
  {
    WPP_SF_qq(68LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, a1, a2);
    LOBYTE(a3) = v48;
    p_Alignment = 0LL;
    v3 = 0LL;
  }
  v11 = a2;
  if ( ((v41.DatapathEventsMask & 0x280) != 0 || (v41.DatapathCyclesMask & 0x200) != 0) && (a3 & 1) == 0 )
  {
    v32 = KfRaiseIrql(2u);
    LOBYTE(a3) = v48;
    p_Alignment = 0LL;
    v3 = 0LL;
    v47 = v32;
    v9 = v32;
  }
  if ( a2 )
  {
    v12 = v48;
    do
    {
      if ( (v41.DatapathEventsMask & 0x200) != 0 )
      {
        FirstNetBuffer = ($AB958A78F4F289CAB9C75B711BD3874F *)v11->FirstNetBuffer;
        v34 = 0;
        v40 = 0;
        if ( FirstNetBuffer )
        {
          do
          {
            FirstNetBuffer = ($AB958A78F4F289CAB9C75B711BD3874F *)FirstNetBuffer->Link.Alignment;
            ++v34;
          }
          while ( FirstNetBuffer );
          v40 = v34;
        }
      }
      SourceHandle = (struct _NDIS_OPEN_BLOCK *)v11->SourceHandle;
      Alignment = (struct _NET_BUFFER_LIST *)v11->Link.Alignment;
      v11->Link.Alignment = 0LL;
      if ( SourceHandle == v6 )
      {
        *p_Alignment = v11;
        p_Alignment = &v11->Link.Alignment;
        v49 = v11;
      }
      else if ( SourceHandle == v7 )
      {
        *v3 = v11;
        v3 = &v11->Link.Alignment;
        v37 = v11;
      }
      else if ( v6 )
      {
        if ( v7 )
        {
          ndisMSendCompleteNetBufferListsToOpen(SourceHandle, v11, v12, &v41);
          p_Alignment = &v49->Link.Alignment;
          v3 = &v37->Link.Alignment;
        }
        else
        {
          v7 = SourceHandle;
          v43 = v11;
          v3 = &v11->Link.Alignment;
          v37 = v11;
        }
      }
      else
      {
        v6 = SourceHandle;
        v49 = v11;
        v8 = v11;
        p_Alignment = &v11->Link.Alignment;
      }
      v11 = Alignment;
    }
    while ( Alignment );
    v10 = v46;
    v9 = v47;
    LOBYTE(a3) = v48;
  }
  if ( ndisNblTrackerMode )
  {
    NblTracker = (unsigned __int64)v6->NblTracker;
    v17 = (a3 & 1) != 0;
    v18 = ndisNblTrackerEpoch;
    v19 = 0;
    v38 = ndisNblTrackerEpoch;
    LOBYTE(v46) = 0;
    v20 = v17 & 1;
    v21 = 0LL;
    v22 = 0LL;
    v36 = v17 & 1;
    LOBYTE(v49) = v17 & 1;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(v8, 0LL, 0x95u, (void *)NblTracker, v17);
      v20 = v36;
      v21 = 0LL;
      v19 = v46;
      v22 = 0LL;
      v18 = v38;
    }
    v23 = NblTracker & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v23 & 1) != 0 )
      v39 = *(_QWORD *)((v23 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v39 = v23;
    if ( (v23 & 1) != 0 )
      v23 ^= ((unsigned __int8)v23 ^ (unsigned __int8)(2 * v18)) & 2;
    v24 = (_SLIST_HEADER *)v8;
    if ( v8 )
    {
      v25 = 0LL;
      do
      {
        v26 = v24[22].Alignment;
        v27 = v39;
        do
        {
          if ( v24[22].Alignment != v26 )
            break;
          if ( !v26 && !v24[7].Region )
          {
            v35 = ndisSourceHandleFromOwner(0LL, v24, v21);
            v27 = v39;
            v24[7].Region = v35;
          }
          if ( (v26 & 4) != 0 || (Region = v24[7].Region) == 0 )
          {
            v24[22].Alignment = v23 | 4;
          }
          else if ( Region != v27 || v24[1].Region )
          {
            ++v21;
            v24[22].Alignment = v23;
          }
          else
          {
            ++v22;
            v24[22].Alignment = 24LL;
            ++v21;
          }
          v24 = (_SLIST_HEADER *)v24->Alignment;
        }
        while ( v24 );
        v44 = v22;
        v42 = v21;
        v45 = v24;
        if ( (v26 & 1) != 0 )
        {
          ndisNblTrackerUpdateOwnershipCount(v26, v25 - v21, &v49, &v46);
          v24 = v45;
          v21 = v42;
          v22 = v44;
        }
        v25 = v21;
      }
      while ( v24 );
      v20 = (char)v49;
      v9 = v47;
      v19 = v46;
    }
    v29 = v21 - v22;
    if ( (v23 & 1) != 0 && v29 )
    {
      if ( !v20 && !v19 )
      {
        v20 = KeGetCurrentIrql() == 2;
        LOBYTE(v49) = v20;
      }
      v30 = (v23 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v23 >> 1) & 1);
      if ( v20 )
      {
        v31 = (_QWORD *)(*(_QWORD *)(v30 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v31 += v29;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v30 + 48), v29);
      }
    }
  }
  if ( SLOBYTE(v41.DatapathEventsMask) < 0 )
    ndisPcwAddEvent(&v41, 7uLL, 1uLL);
  if ( (v41.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwStartCycleCounter(&v41, 9u);
  v15 = v48;
  v6->ProtSendNetBufferListsComplete(v6->SendCompleteNetBufferListsContext, v8, v48);
  if ( (v41.DatapathCyclesMask & 0x200) != 0 )
    ndisPcwEndCycleCounter(&v41, 9u, 0x16uLL);
  if ( v7 )
    ndisMSendCompleteNetBufferListsToOpen(v7, v43, v15, &v41);
  if ( (v41.DatapathEventsMask & 0x200) != 0 )
    ndisPcwAddEvent(&v41, 9uLL, v40);
  if ( v9 != 2 )
    KeLowerIrql(v9);
  if ( (unsigned __int8)byte_1C008370A >= 4u )
    WPP_SF_qq(69LL, &WPP_28e0ced77d8c435d2081eccb5146e802_Traceguids, v10, a2);
}

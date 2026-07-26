/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C000C6C0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C0002A60 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000C614 (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0022E70 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0054270 (ndisInvokeNextReceiveHandler.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        __int64 a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rax
  unsigned int v7; // r15d
  int v8; // r11d
  __int64 v9; // rbp
  int Scratch; // edx
  __int64 v11; // r14
  struct NDIS_NBL_TRACKER_HANDLE__ *v12; // r9
  unsigned __int64 v13; // rbx
  unsigned int v14; // r8d
  char v15; // r13
  __int64 v16; // rbp
  bool v17; // r12
  __int64 v18; // r15
  unsigned __int64 v19; // rbx
  unsigned __int64 v20; // r10
  _SLIST_HEADER *v21; // r8
  __int64 v22; // r13
  unsigned __int64 Alignment; // rdx
  unsigned __int64 Region; // rax
  unsigned __int64 v25; // rbp
  unsigned __int64 v26; // r9
  unsigned int v27; // eax
  int v28; // esi
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  struct _NET_BUFFER_LIST *v32; // rax
  unsigned int v33; // r8d
  struct _NET_BUFFER_LIST **i; // rdx
  bool v35; // [rsp+40h] [rbp-58h] BYREF
  char v36[7]; // [rsp+41h] [rbp-57h] BYREF
  struct NDIS_NBL_TRACKER_HANDLE__ *v37; // [rsp+48h] [rbp-50h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  Scratch = 1;
  v11 = *(_QWORD *)(a1 + 424) + 96 * v5;
  if ( ndisNblTrackerMode )
  {
    v12 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 792);
    v13 = *(_QWORD *)(a1 + 512);
    v14 = 131;
    if ( (a5 & 2) == 0 )
      v14 = 130;
    v15 = ndisNblTrackerEpoch;
    v37 = *(struct NDIS_NBL_TRACKER_HANDLE__ **)(a1 + 792);
    v16 = 0LL;
    v36[0] = 0;
    v17 = (a5 & 1) != 0;
    v18 = 0LL;
    v35 = v17;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, v37, v14, (void *)v13, (a5 & 1) != 0);
      v8 = a3;
      Scratch = 1;
      v12 = v37;
    }
    v19 = v13 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v19 & 1) != 0 )
      v20 = *(_QWORD *)((v19 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v20 = v19;
    if ( (v19 & 1) != 0 )
      v19 ^= ((unsigned __int8)v19 ^ (unsigned __int8)(2 * v15)) & 2;
    v21 = (_SLIST_HEADER *)a2;
    v22 = 0LL;
    if ( a2 )
    {
      do
      {
        Alignment = v21[22].Alignment;
        do
        {
          if ( v21[22].Alignment != Alignment )
            break;
          if ( !Alignment && !v21[7].Region )
          {
            v30 = ndisSourceHandleFromOwner((unsigned __int64)v12 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, v21);
            v21[7].Region = v30;
          }
          if ( (Alignment & 4) != 0 || (Region = v21[7].Region) == 0 )
          {
            v21[22].Alignment = v19 | 4;
          }
          else if ( Region != v20 || v21[1].Region )
          {
            ++v18;
            v21[22].Alignment = v19;
          }
          else
          {
            ++v22;
            v21[22].Alignment = 24LL;
            ++v18;
          }
          v21 = (_SLIST_HEADER *)v21->Alignment;
        }
        while ( v21 );
        v25 = v16 - v18;
        if ( (Alignment & 1) != 0 && v25 )
        {
          if ( !v17 && !v36[0] )
          {
            v36[0] = 1;
            v17 = KeGetCurrentIrql() == 2;
            v35 = v17;
          }
          v26 = (Alignment & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((Alignment >> 1) & 1);
          if ( v17 )
          {
            v27 = KeGetPcr()->Prcb.Number << 12;
            *(_QWORD *)(*(_QWORD *)(v26 + 40) + v27) += v25;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v26 + 48), v25);
          }
          v12 = v37;
          v17 = v35;
        }
        v16 = v18;
      }
      while ( v21 );
      Scratch = 1;
    }
    if ( (v19 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v19, v18 - v22, &v35, v36);
      v8 = a3;
      Scratch = 1;
    }
    v7 = a4;
    v9 = a1;
  }
  if ( (a5 & 2) == 0
    && ndisIterativeDataPathDisabled == (a5 & 2)
    && ((a5 & 1) != 0 || KeGetCurrentIrql() == 2)
    && *(_BYTE *)(v11 + 64) )
  {
    v28 = a5 | 1;
    if ( !*(_QWORD *)(v11 + 48) )
    {
      *(_QWORD *)(v11 + 48) = a2;
      goto LABEL_36;
    }
    v31 = *(_QWORD *)(v11 + 56);
    if ( v8 != *(_DWORD *)(v31 + 140) || v28 != *(_DWORD *)(v31 + 132) || (a5 & 0xCB00) != 0 )
    {
      *(_QWORD *)(v31 + 112) = a2;
LABEL_36:
      *(_QWORD *)(v11 + 56) = a2;
      v29 = a2->Link.Alignment;
      a2->Scratch = 0LL;
      a2->ChildRefCount = v28;
      a2->Status = v8;
      if ( v29 )
        *(_QWORD *)(v29 + 112) = v7;
      return;
    }
    v32 = *(struct _NET_BUFFER_LIST **)v31;
    if ( *(_QWORD *)v31 )
      Scratch = (int)v32->Scratch;
    v33 = Scratch + v7;
    for ( i = *(struct _NET_BUFFER_LIST ***)(v11 + 56); v32; v32 = (struct _NET_BUFFER_LIST *)v32->Link.Alignment )
      i = &v32->Next;
    *i = a2;
    if ( *(_QWORD *)v31 )
      *(_QWORD *)(*(_QWORD *)v31 + 112LL) = v33;
  }
  else
  {
    ndisInvokeNextReceiveHandler(
      a2,
      *(struct _NDIS_FILTER_BLOCK **)(v9 + 520),
      *(void **)(v9 + 504),
      *(void (**)(void))(v9 + 496));
    if ( (a5 & 2) != 0 && ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        a2,
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v9 + 512),
        *(struct NDIS_NBL_TRACKER_HANDLE__ **)(v9 + 792),
        0x8Cu,
        a5 & 1);
  }
}

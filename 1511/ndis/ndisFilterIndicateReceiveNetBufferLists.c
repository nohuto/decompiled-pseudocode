/*
 * XREFs of ndisFilterIndicateReceiveNetBufferLists @ 0x1C000EB20
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@1W4_NDIS_NBL_TRACKER_OWNERSHIP_EVENT@@K@Z @ 0x1C00040C0 (-ndisNblTrackerTransferOwnershipInternal@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__.c)
 *     ?ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z @ 0x1C000452C (-ndisNblTrackerUpdateOwnershipCount@@YAXT_NDIS_NBL_TRACKER_OWNER@@_JPEAE2@Z.c)
 *     ndisInvokeNextReceiveHandler @ 0x1C0011270 (ndisInvokeNextReceiveHandler.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C00266C8 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026A14 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 */

void __fastcall ndisFilterIndicateReceiveNetBufferLists(
        _QWORD *a1,
        struct _NET_BUFFER_LIST *a2,
        int a3,
        unsigned int a4,
        int a5)
{
  __int64 v5; // rax
  unsigned int v7; // r12d
  int v8; // r15d
  _QWORD *v9; // rsi
  int Scratch; // edx
  __int64 v11; // r14
  unsigned __int64 v12; // rbx
  char v13; // r15
  unsigned int v14; // r8d
  struct NDIS_NBL_TRACKER_HANDLE__ *v15; // r11
  __int64 v16; // rsi
  bool v17; // r13
  __int64 v18; // r12
  __int64 v19; // r9
  unsigned __int64 v20; // rbx
  unsigned __int64 v21; // r10
  _SLIST_HEADER *v22; // r8
  unsigned __int64 Alignment; // rdx
  unsigned __int64 Region; // rax
  unsigned __int64 v25; // r12
  unsigned __int64 v26; // r9
  unsigned int v27; // eax
  int v28; // ebp
  unsigned __int64 v29; // rcx
  __int64 v30; // rax
  __int64 v31; // rcx
  struct _NET_BUFFER_LIST *v32; // rax
  unsigned int v33; // r8d
  struct _NET_BUFFER_LIST **i; // rdx
  bool v35; // [rsp+40h] [rbp-58h] BYREF
  char v36[7]; // [rsp+41h] [rbp-57h] BYREF
  __int64 v37; // [rsp+48h] [rbp-50h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v38; // [rsp+50h] [rbp-48h]

  LODWORD(v5) = KeGetPcr()->Prcb.Number;
  v7 = a4;
  v8 = a3;
  v9 = a1;
  Scratch = 1;
  v11 = a1[53] + 96 * v5;
  if ( ndisNblTrackerMode )
  {
    v12 = a1[64];
    v13 = ndisNblTrackerEpoch;
    v14 = 131;
    v15 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[99];
    if ( (a5 & 2) == 0 )
      v14 = 130;
    v38 = (struct NDIS_NBL_TRACKER_HANDLE__ *)a1[99];
    v16 = 0LL;
    v36[0] = 0;
    v17 = (a5 & 1) != 0;
    v18 = 0LL;
    v19 = 0LL;
    v35 = v17;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(a2, v15, v14, (void *)v12, (a5 & 1) != 0);
      v15 = v38;
      Scratch = 1;
      v19 = 0LL;
    }
    v20 = v12 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v20 & 1) != 0 )
      v21 = *(_QWORD *)((v20 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v21 = v20;
    if ( (v20 & 1) != 0 )
      v20 ^= ((unsigned __int8)v20 ^ (unsigned __int8)(2 * v13)) & 2;
    v22 = (_SLIST_HEADER *)a2;
    if ( a2 )
    {
      do
      {
        Alignment = v22[22].Alignment;
        do
        {
          if ( v22[22].Alignment != Alignment )
            break;
          if ( !Alignment && !v22[7].Region )
          {
            v30 = ndisSourceHandleFromOwner((unsigned __int64)v15 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, v22);
            v22[7].Region = v30;
          }
          if ( (Alignment & 4) != 0 || (Region = v22[7].Region) == 0 )
          {
            v22[22].Alignment = v20 | 4;
          }
          else if ( Region != v21 || v22[1].Region )
          {
            ++v16;
            v22[22].Alignment = v20;
          }
          else
          {
            ++v19;
            v22[22].Alignment = 24LL;
            ++v16;
          }
          v22 = (_SLIST_HEADER *)v22->Alignment;
        }
        while ( v22 );
        v25 = v18 - v16;
        v37 = v19;
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
          v19 = v37;
          v17 = v35;
        }
        v18 = v16;
      }
      while ( v22 );
      Scratch = 1;
    }
    if ( (v20 & 1) != 0 )
    {
      ndisNblTrackerUpdateOwnershipCount(v20, v16 - v19, &v35, v36);
      Scratch = 1;
    }
    v7 = a4;
    v8 = a3;
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
    ndisInvokeNextReceiveHandler(a2, (struct _NDIS_FILTER_BLOCK *)v9[65], (void *)v9[63], (void (*)(void))v9[62]);
    if ( (a5 & 2) != 0 && ndisNblTrackerMode )
      ndisNblTrackerTransferOwnershipInternal(
        a2,
        (struct NDIS_NBL_TRACKER_HANDLE__ *)v9[64],
        (struct NDIS_NBL_TRACKER_HANDLE__ *)v9[99],
        0x8Cu,
        a5 & 1);
  }
}

/*
 * XREFs of NdisFSendNetBufferLists @ 0x1C000DFF0
 * Callers:
 *     <none>
 * Callees:
 *     ?ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z @ 0x1C001E204 (-ndisInvokeNextSendHandler@@YAXPEAU_NET_BUFFER_LIST@@KKPEAU_NDIS_OBJECT_HEADER@@PEAXP6AX20KK@Z@Z.c)
 *     ndisFLoopbackNetBufferLists @ 0x1C00268AC (ndisFLoopbackNetBufferLists.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0026A20 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z @ 0x1C0026D64 (-ndisSourceHandleFromOwner@@YAPEAXT_NDIS_NBL_TRACKER_OWNER@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFSendNetBufferLists(
        NDIS_HANDLE NdisFilterHandle,
        PNET_BUFFER_LIST NetBufferList,
        NDIS_PORT_NUMBER PortNumber,
        ULONG SendFlags)
{
  __int64 v8; // rax
  _DWORD *v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // rax
  ULONG v12; // edi
  struct _NET_BUFFER_LIST *v13; // rcx
  char v14; // r11
  __int64 v15; // r10
  unsigned __int64 v16; // rbx
  char v17; // r13
  char v18; // r12
  __int64 v19; // r15
  __int64 v20; // rdx
  unsigned __int64 v21; // rbx
  unsigned __int64 v22; // r9
  PNET_BUFFER_LIST Alignment; // r8
  __int64 v24; // r13
  unsigned __int64 v25; // rdx
  struct NDIS_NBL_TRACKER_HANDLE__ *v26; // r11
  void *SourceHandle; // rax
  unsigned __int64 v28; // r10
  unsigned __int64 v29; // r9
  _QWORD *v30; // rcx
  unsigned __int64 v31; // r15
  unsigned __int64 v32; // rdx
  _QWORD *v33; // rcx
  __int64 v34; // rax
  struct _NET_BUFFER_LIST **p_Next; // rdx
  struct _NET_BUFFER_LIST *i; // rax
  unsigned __int64 v37; // [rsp+30h] [rbp-48h]
  struct NDIS_NBL_TRACKER_HANDLE__ *v38; // [rsp+38h] [rbp-40h]
  struct _NET_BUFFER_LIST *v39; // [rsp+80h] [rbp+8h] BYREF
  char v40; // [rsp+90h] [rbp+18h]

  if ( ndisNblTrackerMode )
  {
    v14 = 0;
    v15 = 0LL;
    v16 = *((_QWORD *)NdisFilterHandle + 56);
    v17 = ndisNblTrackerEpoch;
    v38 = (struct NDIS_NBL_TRACKER_HANDLE__ *)*((_QWORD *)NdisFilterHandle + 99);
    v18 = SendFlags & 1;
    v40 = 0;
    v19 = 0LL;
    v20 = 0LL;
    if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
    {
      ndisNblTrackerRecordEvent(NetBufferList, v38, 0x90u, (void *)v16, SendFlags & 1);
      v15 = 0LL;
      v14 = 0;
      v20 = 0LL;
    }
    v21 = v16 & 0xFFFFFFFFFFFFFFFDuLL;
    if ( (v21 & 1) != 0 )
      v22 = *(_QWORD *)((v21 & 0xFFFFFFFFFFFFFFF8uLL) + 24);
    else
      v22 = v21;
    v37 = v22;
    if ( (v21 & 1) != 0 )
      v21 ^= ((unsigned __int8)v21 ^ (unsigned __int8)(2 * v17)) & 2;
    Alignment = NetBufferList;
    if ( NetBufferList )
    {
      v24 = 0LL;
      do
      {
        v25 = (unsigned __int64)Alignment->NetBufferListInfo[26];
        v26 = v38;
        do
        {
          if ( Alignment->NetBufferListInfo[26] != (void *)v25 )
            break;
          if ( !v25 && !Alignment->SourceHandle )
          {
            v34 = ndisSourceHandleFromOwner((unsigned __int64)v26 & 0xFFFFFFFFFFFFFFFDuLL, 0LL, Alignment);
            Alignment->SourceHandle = (void *)v34;
          }
          if ( (v25 & 4) != 0 || (SourceHandle = Alignment->SourceHandle) == 0LL )
          {
            Alignment->NetBufferListInfo[26] = (void *)(v21 | 4);
          }
          else if ( SourceHandle != (void *)v22 || Alignment->ParentNetBufferList )
          {
            ++v19;
            Alignment->NetBufferListInfo[26] = (void *)v21;
          }
          else
          {
            ++v24;
            Alignment->NetBufferListInfo[26] = (void *)24;
            ++v19;
          }
          Alignment = (PNET_BUFFER_LIST)Alignment->Link.Alignment;
        }
        while ( Alignment );
        v14 = v40;
        v28 = v15 - v19;
        if ( (v25 & 1) != 0 && v28 )
        {
          if ( !v18 && !v40 )
          {
            v14 = 1;
            v40 = 1;
            v18 = KeGetCurrentIrql() == 2;
          }
          v29 = (v25 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v25 >> 1) & 1);
          if ( v18 )
          {
            v30 = (_QWORD *)(*(_QWORD *)(v29 + 40) + (KeGetPcr()->Prcb.Number << 12));
            *v30 += v28;
          }
          else
          {
            _InterlockedExchangeAdd64((volatile signed __int64 *)(v29 + 48), v28);
          }
          v22 = v37;
        }
        v15 = v19;
      }
      while ( Alignment );
      v20 = v24;
    }
    v31 = v19 - v20;
    if ( (v21 & 1) != 0 && v31 )
    {
      if ( !v18 && !v14 )
        v18 = KeGetCurrentIrql() == 2;
      v32 = (v21 & 0xFFFFFFFFFFFFFFF8uLL) + 16 * ((v21 >> 1) & 1);
      if ( v18 )
      {
        v33 = (_QWORD *)(*(_QWORD *)(v32 + 40) + (KeGetPcr()->Prcb.Number << 12));
        *v33 += v31;
      }
      else
      {
        _InterlockedExchangeAdd64((volatile signed __int64 *)(v32 + 48), v31);
      }
    }
  }
  v8 = *((_QWORD *)NdisFilterHandle + 78);
  if ( (void (__fastcall *)(__int64, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))v8 != ndisFilterSendNetBufferLists )
  {
    ((void (__fastcall *)(NDIS_HANDLE, PNET_BUFFER_LIST, _QWORD, _QWORD))v8)(
      NdisFilterHandle,
      NetBufferList,
      PortNumber,
      SendFlags);
    return;
  }
  v9 = (_DWORD *)*((_QWORD *)NdisFilterHandle + 57);
  v10 = *((_QWORD *)NdisFilterHandle + 4);
  v39 = NetBufferList;
  if ( *(_BYTE *)v9 == 5
    && (v9[14] & 0x8000) != 0
    && !v9[84]
    && (*(_BYTE *)(v10 + 91) && (*(_WORD *)(v10 + 1820) > 1u || *(_BYTE *)(v10 + 1999))
     || (SendFlags & 2) != 0
     || (*(_DWORD *)(v10 + 120) & 0x4000) != 0) )
  {
    v8 = ndisFLoopbackNetBufferLists(v9, NetBufferList, (__int64)&v39);
    NetBufferList = v39;
  }
  if ( NetBufferList )
  {
    LODWORD(v8) = KeGetPcr()->Prcb.Number;
    v11 = *((_QWORD *)NdisFilterHandle + 53) + 96 * v8;
    if ( ndisIterativeDataPathDisabled || (SendFlags & 1) == 0 && KeGetCurrentIrql() != 2 || !*(_BYTE *)(v11 + 16) )
    {
      ndisInvokeNextSendHandler(
        v39,
        PortNumber,
        SendFlags,
        *((struct _NDIS_OBJECT_HEADER **)NdisFilterHandle + 57),
        *((void **)NdisFilterHandle + 55),
        *((void (**)(void *, struct _NET_BUFFER_LIST *, unsigned int, unsigned int))NdisFilterHandle + 54));
      return;
    }
    v12 = SendFlags | 1;
    if ( !*(_QWORD *)v11 )
    {
      v13 = v39;
      *(_QWORD *)v11 = v39;
LABEL_11:
      *(_QWORD *)(v11 + 8) = v13;
      v13->Scratch = 0LL;
      v13->ChildRefCount = v12;
      v13->Status = PortNumber;
      return;
    }
    p_Next = *(struct _NET_BUFFER_LIST ***)(v11 + 8);
    if ( PortNumber != *((_DWORD *)p_Next + 35) || v12 != *((_DWORD *)p_Next + 33) || (v12 & 0x34) != 0 )
    {
      v13 = v39;
      p_Next[14] = v39;
      goto LABEL_11;
    }
    for ( i = *p_Next; i; i = (struct _NET_BUFFER_LIST *)i->Link.Alignment )
      p_Next = &i->Next;
    *p_Next = v39;
  }
}

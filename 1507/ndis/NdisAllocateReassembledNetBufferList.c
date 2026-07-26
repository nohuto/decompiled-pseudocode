/*
 * XREFs of NdisAllocateReassembledNetBufferList @ 0x1C0047330
 * Callers:
 *     <none>
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C000B7E0 (NdisAllocateNetBufferAndNetBufferList.c)
 *     __security_check_cookie @ 0x1C0022840 (__security_check_cookie.c)
 *     ?ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z @ 0x1C0022B24 (-ndisNblTrackerRecordEvent@@YAXPEAU_NET_BUFFER_LIST@@PEAUNDIS_NBL_TRACKER_HANDLE__@@KPEAXK@Z.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C0046FF8 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     NdisFreeReassembledNetBufferList @ 0x1C0047B90 (NdisFreeReassembledNetBufferList.c)
 *     NdisRetreatNetBufferListDataStart @ 0x1C0047C30 (NdisRetreatNetBufferListDataStart.c)
 *     NetioCopyOpaqueNetBufferListInformation @ 0x1C0047D10 (NetioCopyOpaqueNetBufferListInformation.c)
 */

PNET_BUFFER_LIST __stdcall NdisAllocateReassembledNetBufferList(
        PNET_BUFFER_LIST FragmentNetBufferList,
        NDIS_HANDLE NetBufferAndNetBufferListPoolHandle,
        ULONG StartOffset,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        ULONG AllocateReassembleFlags)
{
  unsigned __int64 v6; // rbp
  ULONG v7; // r14d
  NDIS_HANDLE v8; // r10
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rax
  struct _NET_BUFFER_LIST *v11; // rdi
  _NET_BUFFER *FirstNetBuffer; // rbx
  _NET_BUFFER *v13; // rsi
  unsigned int DataLength; // r12d
  ULONG v15; // r12d
  struct _MDL *MdlChain; // r15
  ULONG v17; // edx
  ULONG ByteCount; // r14d
  ULONG v19; // r14d
  char *v20; // rcx
  struct _MDL *Mdl; // rax
  struct _MDL *v22; // r13
  ULONG v23; // r12d
  struct _MDL *i; // r14
  ULONG v25; // r15d
  char *v26; // rax
  struct _MDL *v27; // rax
  struct _MDL *v28; // r13
  struct _MDL **v29; // rax
  unsigned int v30; // eax
  struct _NET_BUFFER_LIST *v31; // rcx
  NDIS_STATUS v33; // eax
  unsigned __int64 v34; // rbx
  const struct _EVENT_DESCRIPTOR *v35; // rdx
  __int128 v36; // xmm0
  __int64 v37; // rax
  unsigned __int8 FreeMdlHandler; // [rsp+20h] [rbp-60h]
  const struct _GUID *v39; // [rsp+28h] [rbp-58h]
  ULONG DataOffsetDeltaa; // [rsp+80h] [rbp+0h] BYREF

  v6 = (unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL;
  *(_DWORD *)v6 = DataOffsetDelta;
  v7 = StartOffset;
  *(_DWORD *)(v6 + 4) = StartOffset;
  v8 = NetBufferAndNetBufferListPoolHandle;
  *(_QWORD *)(v6 + 32) = FragmentNetBufferList;
  if ( !NetBufferAndNetBufferListPoolHandle || (*((_DWORD *)NetBufferAndNetBufferListPoolHandle + 15) & 1) == 0 )
    v8 = ndisNetBufferListPool;
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(v8, 0, 0, 0LL, 0, 0LL);
  v11 = NetBufferAndNetBufferList;
  if ( NetBufferAndNetBufferList )
  {
    FirstNetBuffer = FragmentNetBufferList->FirstNetBuffer;
    if ( !FirstNetBuffer )
      goto LABEL_33;
    do
    {
      if ( FirstNetBuffer->DataLength > v7 )
        break;
      FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
    }
    while ( FirstNetBuffer );
    if ( FirstNetBuffer )
    {
      v13 = NetBufferAndNetBufferList->FirstNetBuffer;
      *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = 0LL;
      while ( 1 )
      {
        DataLength = FirstNetBuffer->DataLength;
        if ( DataLength > v7 )
        {
          v15 = DataLength - v7;
          MdlChain = FirstNetBuffer->MdlChain;
          v17 = v7 + FirstNetBuffer->DataOffset;
          while ( MdlChain )
          {
            ByteCount = MdlChain->ByteCount;
            if ( v17 < ByteCount )
            {
              v19 = ByteCount - v17;
              if ( v15 < v19 )
                v19 = v15;
              v20 = (char *)MdlChain->StartVa + MdlChain->ByteOffset + v17;
              *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v20;
              Mdl = IoAllocateMdl(v20, v19, 0, 0, 0LL);
              v22 = Mdl;
              if ( !Mdl )
                goto LABEL_33;
              IoBuildPartialMdl(
                MdlChain,
                Mdl,
                *(PVOID *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                v19);
              v22->Next = 0LL;
              if ( v13->MdlChain )
              {
                **(_QWORD **)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v22;
              }
              else
              {
                v13->Link.Region = (unsigned __int64)v22;
                v13->MdlChain = v22;
                v13->CurrentMdlOffset = 0;
                v13->DataOffset = 0;
              }
              v13->DataLength += v19;
              *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v22;
              v23 = v15 - v19;
              if ( v23 )
              {
                for ( i = MdlChain->Next; i; i = i->Next )
                {
                  v25 = i->ByteCount;
                  v26 = (char *)i->StartVa + i->ByteOffset;
                  *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v26;
                  if ( v23 < v25 )
                    v25 = v23;
                  v27 = IoAllocateMdl(v26, v25, 0, 0, 0LL);
                  v28 = v27;
                  if ( !v27 )
                    goto LABEL_33;
                  IoBuildPartialMdl(
                    i,
                    v27,
                    *(PVOID *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x10),
                    v25);
                  v29 = *(struct _MDL ***)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x30);
                  v28->Next = 0LL;
                  *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = v28;
                  *v29 = v28;
                  v30 = v13->DataLength;
                  if ( v30 + v25 < v30 )
                  {
                    v13->DataLength = -1;
                    goto LABEL_33;
                  }
                  v13->DataLength = v30 + v25;
                  v23 -= v25;
                  if ( !v23 )
                    goto LABEL_30;
                }
              }
              break;
            }
            MdlChain = MdlChain->Next;
            v17 -= ByteCount;
          }
        }
LABEL_30:
        FirstNetBuffer = (_NET_BUFFER *)FirstNetBuffer->Link.Alignment;
        if ( !FirstNetBuffer )
          break;
        v7 = *(_DWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 4);
      }
      v33 = NdisRetreatNetBufferListDataStart(
              v11,
              *(_DWORD *)v6,
              DataBackFill,
              (NET_BUFFER_ALLOCATE_MDL_HANDLER)ndisAllocateMdl,
              (NET_BUFFER_FREE_MDL_HANDLER)ndisFreeMdl);
      v31 = v11;
      if ( !v33 )
      {
        v34 = *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
        NetioCopyOpaqueNetBufferListInformation(v11, v34);
        if ( Microsoft_Windows_Networking_CorrelationEnabled )
        {
          *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x28) = 0LL;
          *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x20) = *(_QWORD *)(v34 + 248) & 0x7FFFFFFFFFFFFFFFLL;
          v36 = *(_OWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x20);
          *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x18) = 0LL;
          v37 = (__int64)v11->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
          *(_OWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x40) = v36;
          *(_QWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x10) = v37;
          LODWORD(v37) = Microsoft_Windows_Networking_CorrelationEnabled;
          *(_OWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x30) = *(_OWORD *)(((unsigned __int64)&DataOffsetDeltaa & 0xFFFFFFFFFFFFFFC0uLL) + 0x10);
          if ( (_DWORD)v37 )
            EtwEx_tidActivityInfoTransfer(
              0x7FFFFFFFFFFFFFFFLL,
              v35,
              (const struct _GUID *)(v6 + 64),
              (const struct _GUID *)(v6 + 48),
              FreeMdlHandler,
              v39,
              3u);
        }
        if ( ndisNblTrackerMode >= NdisTrackNblFullLogNoStack )
          ndisNblTrackerRecordEvent((unsigned __int64)v11, 0LL, 9u, v34, 0);
        return v11;
      }
    }
    else
    {
LABEL_33:
      v31 = v11;
    }
    NdisFreeReassembledNetBufferList(v31, 0, 0);
    return 0LL;
  }
  return v11;
}

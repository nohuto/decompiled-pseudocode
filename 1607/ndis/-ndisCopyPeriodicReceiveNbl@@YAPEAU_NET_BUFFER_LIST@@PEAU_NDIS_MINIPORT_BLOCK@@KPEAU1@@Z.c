/*
 * XREFs of ?ndisCopyPeriodicReceiveNbl@@YAPEAU_NET_BUFFER_LIST@@PEAU_NDIS_MINIPORT_BLOCK@@KPEAU1@@Z @ 0x1C006568C
 * Callers:
 *     ?ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z @ 0x1C0065B40 (-ndisMPeriodicReceivesResources@@YAEPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NET_BUFFER_LIST@@KKK@Z.c)
 * Callees:
 *     NdisAllocateNetBufferAndNetBufferList @ 0x1C0005D40 (NdisAllocateNetBufferAndNetBufferList.c)
 *     NdisFreeNetBufferList @ 0x1C0006F00 (NdisFreeNetBufferList.c)
 *     __security_check_cookie @ 0x1C0026780 (__security_check_cookie.c)
 *     memmove @ 0x1C00271C0 (memmove.c)
 *     ?EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z @ 0x1C004C908 (-EtwEx_tidActivityInfoTransfer@@YAK_KPEBU_EVENT_DESCRIPTOR@@PEBU_GUID@@2E2K@Z.c)
 *     ExFreeToNPagedLookasideList @ 0x1C0053328 (ExFreeToNPagedLookasideList.c)
 *     ExAllocateFromNPagedLookasideList @ 0x1C0065DC8 (ExAllocateFromNPagedLookasideList.c)
 */

PNET_BUFFER_LIST __fastcall ndisCopyPeriodicReceiveNbl(
        struct _NDIS_MINIPORT_BLOCK *a1,
        int a2,
        struct _NET_BUFFER_LIST *a3)
{
  _NET_BUFFER *FirstNetBuffer; // rbx
  __int64 v5; // r14
  SIZE_T v6; // r12
  unsigned int v7; // edi
  struct _NPAGED_LOOKASIDE_LIST *p_WaitListHead; // rbx
  struct _MDL *PoolWithTagPriority; // rax
  struct _MDL *v10; // r15
  PNET_BUFFER_LIST NetBufferAndNetBufferList; // rsi
  _MDL *CurrentMdl; // rcx
  char *MappedSystemVa; // rdx
  char *v14; // rax
  unsigned int ByteCount; // r8d
  __int64 CurrentMdlOffset; // rcx
  unsigned int v17; // r8d
  char *v18; // rdx
  void *v19; // rcx
  unsigned int v20; // edi
  unsigned int v21; // ebx
  char *v22; // rax
  void *v23; // r9
  struct _MDL *Next; // rcx
  void **v25; // rcx
  __int64 v26; // r8
  const struct _EVENT_DESCRIPTOR *v27; // rdx
  __int64 v28; // r9
  void **v29; // rcx
  __int64 v30; // rax
  unsigned __int8 DataOffset; // [rsp+28h] [rbp-49h]
  const struct _GUID *DataLength; // [rsp+30h] [rbp-41h]
  _NET_BUFFER *v34; // [rsp+48h] [rbp-29h]
  _MDL *v35; // [rsp+48h] [rbp-29h]
  struct _NPAGED_LOOKASIDE_LIST *Lookaside; // [rsp+58h] [rbp-19h]
  struct _GUID v38; // [rsp+78h] [rbp+7h] BYREF
  struct _GUID v39; // [rsp+88h] [rbp+17h] BYREF

  FirstNetBuffer = a3->FirstNetBuffer;
  v5 = 0LL;
  v34 = FirstNetBuffer;
  v6 = FirstNetBuffer->DataLength;
  v7 = (MmSizeOfMdl((PVOID)0xFFF, v6) + 7) & 0xFFFFFFF8;
  if ( (unsigned int)v6 <= 0x64 )
  {
    p_WaitListHead = (struct _NPAGED_LOOKASIDE_LIST *)&WPP_MAIN_CB.DeviceLock.Header.WaitListHead;
LABEL_5:
    Lookaside = p_WaitListHead;
    PoolWithTagPriority = (struct _MDL *)ExAllocateFromNPagedLookasideList(p_WaitListHead);
    FirstNetBuffer = v34;
    goto LABEL_8;
  }
  if ( (unsigned int)v6 <= 0x5EE )
  {
    p_WaitListHead = &::Lookaside;
    goto LABEL_5;
  }
  Lookaside = 0LL;
  if ( (v6 + v7) >> 32 )
    return (PNET_BUFFER_LIST)v5;
  PoolWithTagPriority = (struct _MDL *)ExAllocatePoolWithTagPriority(
                                         NonPagedPoolNx,
                                         v7 + (unsigned int)v6,
                                         0x7270444Eu,
                                         LowPoolPriority);
LABEL_8:
  v10 = PoolWithTagPriority;
  if ( !PoolWithTagPriority )
    return (PNET_BUFFER_LIST)v5;
  PoolWithTagPriority->Next = 0LL;
  PoolWithTagPriority->MdlFlags = 0;
  *(_QWORD *)&v38.Data1 = (char *)PoolWithTagPriority + v7;
  PoolWithTagPriority->ByteCount = v6;
  PoolWithTagPriority->StartVa = (PVOID)(((unsigned __int64)PoolWithTagPriority + v7) & 0xFFFFFFFFFFFFF000uLL);
  PoolWithTagPriority->Size = 8 * ((((((_WORD)PoolWithTagPriority + (_WORD)v7) & 0xFFF) + v6 + 4095) >> 12) + 6);
  PoolWithTagPriority->ByteOffset = ((_DWORD)PoolWithTagPriority + v7) & 0xFFF;
  MmBuildMdlForNonPagedPool(PoolWithTagPriority);
  NetBufferAndNetBufferList = NdisAllocateNetBufferAndNetBufferList(WPP_MAIN_CB.Dpc.SystemArgument1, 0, 0, v10, 0, v6);
  if ( !NetBufferAndNetBufferList )
    goto LABEL_37;
  CurrentMdl = FirstNetBuffer->CurrentMdl;
  v35 = CurrentMdl;
  if ( (CurrentMdl->MdlFlags & 5) != 0 )
  {
    MappedSystemVa = (char *)CurrentMdl->MappedSystemVa;
  }
  else
  {
    v14 = (char *)MmMapLockedPagesSpecifyCache(CurrentMdl, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
    CurrentMdl = v35;
    MappedSystemVa = v14;
  }
  if ( !MappedSystemVa
    || (ByteCount = CurrentMdl->ByteCount,
        CurrentMdlOffset = FirstNetBuffer->CurrentMdlOffset,
        (unsigned int)CurrentMdlOffset > ByteCount) )
  {
LABEL_36:
    NdisFreeNetBufferList(NetBufferAndNetBufferList);
LABEL_37:
    if ( (v10->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(v10->MappedSystemVa, v10);
    if ( Lookaside )
      ExFreeToNPagedLookasideList(Lookaside, v10);
    else
      ExFreePoolWithTag(v10, 0x7270444Eu);
    return (PNET_BUFFER_LIST)v5;
  }
  v17 = ByteCount - CurrentMdlOffset;
  v18 = &MappedSystemVa[CurrentMdlOffset];
  v19 = *(void **)&v38.Data1;
  v20 = v6;
  if ( v17 < (unsigned int)v6 )
    v20 = v17;
  while ( 1 )
  {
    memmove(v19, v18, v20);
    LODWORD(v6) = v6 - v20;
    v23 = (void *)(v20 + *(_QWORD *)&v38.Data1);
    *(_QWORD *)&v38.Data1 = v23;
    Next = v35->Next;
    v35 = Next;
    if ( !Next )
      break;
    v21 = Next->ByteCount;
    if ( (Next->MdlFlags & 5) != 0 )
    {
      v22 = (char *)Next->MappedSystemVa;
    }
    else
    {
      v22 = (char *)MmMapLockedPagesSpecifyCache(Next, 0, MmCached, 0LL, 0, ndisMdlMappingNxFlag);
      v23 = *(void **)&v38.Data1;
    }
    if ( !v22 )
      goto LABEL_36;
    v20 = v6;
    v18 = v22;
    v19 = v23;
    if ( v21 < (unsigned int)v6 )
      v20 = v21;
  }
  LODWORD(NetBufferAndNetBufferList->ProtocolReserved[0]) = a2;
  NetBufferAndNetBufferList->MiniportReserved[1] = Lookaside;
  NetBufferAndNetBufferList->SourceHandle = a3->SourceHandle;
  if ( (a3->Flags & 0x80u) != 0 )
  {
    NetBufferAndNetBufferList->Flags |= 0x80u;
    NetBufferAndNetBufferList->NblFlags |= 0x8000u;
  }
  if ( (a3->Flags & 0x200) != 0 )
    NetBufferAndNetBufferList->Flags |= 0x200u;
  v25 = &NetBufferAndNetBufferList->NetBufferListInfo[6];
  NetBufferAndNetBufferList->NetBufferListInfo[0] = a3->NetBufferListInfo[0];
  v26 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[1] = a3->NetBufferListInfo[1];
  v27 = (const struct _EVENT_DESCRIPTOR *)((char *)a3 - (char *)NetBufferAndNetBufferList);
  v28 = 2LL;
  NetBufferAndNetBufferList->NetBufferListInfo[2] = a3->NetBufferListInfo[2];
  NetBufferAndNetBufferList->NetBufferListInfo[3] = a3->NetBufferListInfo[3];
  NetBufferAndNetBufferList->NetBufferListInfo[4] = a3->NetBufferListInfo[4];
  do
  {
    *v25 = *(void **)((char *)v25 + (_QWORD)v27);
    ++v25;
    --v28;
  }
  while ( v28 );
  v29 = &NetBufferAndNetBufferList->NetBufferListInfo[11];
  do
  {
    *v29 = *(void **)((char *)&v27->Id + (_QWORD)v29);
    ++v29;
    --v26;
  }
  while ( v26 );
  if ( Microsoft_Windows_Networking_CorrelationEnabled )
  {
    v30 = (__int64)a3->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL;
    v39 = (struct _GUID)((__int64)NetBufferAndNetBufferList->NetBufferListInfo[13] & 0x7FFFFFFFFFFFFFFFLL);
    v38 = (struct _GUID)(unsigned __int64)v30;
    EtwEx_tidActivityInfoTransfer(0x7FFFFFFFFFFFFFFFLL, v27, &v39, &v38, DataOffset, DataLength, 6u);
  }
  return NetBufferAndNetBufferList;
}

/*
 * XREFs of NdisFreeNetBuffer @ 0x1C000D790
 * Callers:
 *     NdisFreeCloneNetBufferList @ 0x1C000C3C0 (NdisFreeCloneNetBufferList.c)
 *     NdisFreeFragmentNetBufferList @ 0x1C00212C0 (NdisFreeFragmentNetBufferList.c)
 * Callees:
 *     ?ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z @ 0x1C000BAC8 (-ndisPplLazyInitializeLookaside@@YAXPEAU_NDIS_NPAGED_LOOKASIDE_LIST@@0@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C00236D0 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisFreeNetBuffer(PNET_BUFFER NetBuffer)
{
  char *NdisPoolHandle; // r14
  unsigned __int64 v3; // rax
  char *v4; // rbx
  _SLIST_HEADER *v5; // rsi
  _SLIST_HEADER *v6; // rcx
  _MDL *MdlChain; // rcx

  NdisPoolHandle = (char *)NetBuffer->NdisPoolHandle;
  if ( (*((_DWORD *)NdisPoolHandle + 15) & 1) != 0 )
  {
    MdlChain = NetBuffer->MdlChain;
    if ( (MdlChain->MdlFlags & 0x20) != 0 )
      MmUnmapLockedPages(MdlChain->MappedSystemVa, MdlChain);
  }
  if ( ndisMaxNumberOfProcessors != 1 )
  {
    v3 = (unsigned __int64)LODWORD(NetBuffer[-1].SharedMemoryInfo) << 8;
    v4 = &NdisPoolHandle[v3 + 384];
    if ( !v4[216] )
      ndisPplLazyInitializeLookaside(
        (PLOOKASIDE_LIST_EX)&NdisPoolHandle[v3 + 384],
        (struct _NDIS_NPAGED_LOOKASIDE_LIST *)(NdisPoolHandle + 128));
    if ( LODWORD(NetBuffer[-1].SharedMemoryInfo) == KeGetPcr()->Prcb.Number )
      v5 = (_SLIST_HEADER *)*((_QWORD *)v4 + 24);
    else
      v5 = (_SLIST_HEADER *)*((_QWORD *)v4 + 25);
    ++*((_DWORD *)v4 + 7);
    if ( ExQueryDepthSList(v5) < *((_WORD *)v4 + 8) )
    {
      v6 = v5;
      goto LABEL_11;
    }
    ++*((_DWORD *)v4 + 8);
  }
  ++*((_DWORD *)NdisPoolHandle + 39);
  if ( ExQueryDepthSList((PSLIST_HEADER)NdisPoolHandle + 8) < *((_WORD *)NdisPoolHandle + 72) )
  {
    v6 = (_SLIST_HEADER *)(NdisPoolHandle + 128);
LABEL_11:
    ExpInterlockedPushEntrySList(v6, (PSLIST_ENTRY)NetBuffer);
    return;
  }
  ++*((_DWORD *)NdisPoolHandle + 40);
  (*((void (__fastcall **)(PNET_BUFFER, char *))NdisPoolHandle + 23))(NetBuffer, NdisPoolHandle + 128);
}

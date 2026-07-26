/*
 * XREFs of NdisAdvanceNetBufferDataStart @ 0x1C0006750
 * Callers:
 *     NdisRetreatNetBufferListDataStart @ 0x1C0006620 (NdisRetreatNetBufferListDataStart.c)
 *     NdisAdvanceNetBufferListDataStart @ 0x1C0006710 (NdisAdvanceNetBufferListDataStart.c)
 *     NdisAllocateFragmentNetBufferList @ 0x1C00206A0 (NdisAllocateFragmentNetBufferList.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0027180 (_guard_dispatch_icall_nop.c)
 */

void __stdcall NdisAdvanceNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        BOOLEAN FreeMdl,
        NET_BUFFER_FREE_MDL_HANDLER FreeMdlHandler)
{
  void (*v5)(void); // rdi
  struct _NET_BUFFER *MdlChain; // rcx
  _MDL *CurrentMdl; // rax
  unsigned int i; // ecx
  ULONG ByteCount; // edx
  unsigned int DataOffset; // edx

  NetBuffer->DataOffset += DataOffsetDelta;
  NetBuffer->DataLength -= DataOffsetDelta;
  v5 = (void (*)(void))FreeMdlHandler;
  MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain;
  if ( !FreeMdlHandler )
    v5 = (void (*)(void))ndisFreeMdl;
  if ( FreeMdl )
  {
    for ( ; MdlChain; MdlChain = (struct _NET_BUFFER *)NetBuffer->MdlChain )
    {
      DataOffset = NetBuffer->DataOffset;
      if ( MdlChain->DataOffset > DataOffset )
        break;
      if ( MdlChain == &NetBuffer[1] )
        break;
      NetBuffer->MdlChain = (_MDL *)MdlChain->Link.Alignment;
      NetBuffer->DataOffset = DataOffset - MdlChain->DataOffset;
      v5();
    }
    NetBuffer->Link.Region = (unsigned __int64)NetBuffer->MdlChain;
    NetBuffer->CurrentMdlOffset = NetBuffer->DataOffset;
  }
  else
  {
    CurrentMdl = NetBuffer->CurrentMdl;
    for ( i = DataOffsetDelta + NetBuffer->CurrentMdlOffset; CurrentMdl; i -= ByteCount )
    {
      ByteCount = CurrentMdl->ByteCount;
      if ( ByteCount > i )
        break;
      CurrentMdl = CurrentMdl->Next;
    }
    NetBuffer->Link.Region = (unsigned __int64)CurrentMdl;
    NetBuffer->CurrentMdlOffset = i;
  }
}

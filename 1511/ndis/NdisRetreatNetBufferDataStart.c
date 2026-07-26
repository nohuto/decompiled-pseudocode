/*
 * XREFs of NdisRetreatNetBufferDataStart @ 0x1C000D980
 * Callers:
 *     NdisRetreatNetBufferListDataStart @ 0x1C000D7E0 (NdisRetreatNetBufferListDataStart.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0026BE0 (_guard_dispatch_icall_nop.c)
 */

NDIS_STATUS __stdcall NdisRetreatNetBufferDataStart(
        PNET_BUFFER NetBuffer,
        ULONG DataOffsetDelta,
        ULONG DataBackFill,
        NET_BUFFER_ALLOCATE_MDL_HANDLER AllocateMdlHandler)
{
  unsigned int DataOffset; // ecx
  unsigned int v7; // ecx
  _MDL *MdlChain; // rax
  ULONG ByteCount; // edx
  _MDL *v11; // rdx
  ULONG v12; // ecx
  ULONG v13; // [rsp+38h] [rbp+10h] BYREF

  DataOffset = NetBuffer->DataOffset;
  if ( DataOffset >= DataOffsetDelta )
  {
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = DataOffset - DataOffsetDelta;
    MdlChain = NetBuffer->MdlChain;
    for ( NetBuffer->DataOffset = v7; MdlChain; v7 -= ByteCount )
    {
      ByteCount = MdlChain->ByteCount;
      if ( v7 < ByteCount )
        break;
      MdlChain = MdlChain->Next;
    }
    NetBuffer->Link.Region = (unsigned __int64)MdlChain;
    goto LABEL_5;
  }
  v13 = DataBackFill + DataOffsetDelta - DataOffset;
  if ( !AllocateMdlHandler )
    AllocateMdlHandler = ndisAllocateMdl;
  v11 = (_MDL *)((__int64 (__fastcall *)(ULONG *))AllocateMdlHandler)(&v13);
  if ( v11 )
  {
    v11->Next = NetBuffer->MdlChain;
    v12 = v13 - DataOffsetDelta;
    NetBuffer->MdlChain = v11;
    NetBuffer->DataOffset += v12;
    NetBuffer->DataLength += DataOffsetDelta;
    v7 = NetBuffer->DataOffset;
    NetBuffer->Link.Region = (unsigned __int64)v11;
LABEL_5:
    NetBuffer->CurrentMdlOffset = v7;
    return 0;
  }
  return -1073741670;
}

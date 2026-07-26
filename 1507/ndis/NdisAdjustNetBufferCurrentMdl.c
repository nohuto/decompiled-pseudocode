/*
 * XREFs of NdisAdjustNetBufferCurrentMdl @ 0x1C000D640
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __stdcall NdisAdjustNetBufferCurrentMdl(PNET_BUFFER NetBuffer)
{
  unsigned int DataOffset; // edx
  _MDL *MdlChain; // rax
  ULONG ByteCount; // r8d

  DataOffset = NetBuffer->DataOffset;
  MdlChain = NetBuffer->MdlChain;
  while ( MdlChain )
  {
    ByteCount = MdlChain->ByteCount;
    if ( DataOffset < ByteCount )
      break;
    MdlChain = MdlChain->Next;
    DataOffset -= ByteCount;
  }
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = DataOffset;
}

/*
 * XREFs of NdisQueryNetBufferPhysicalCount @ 0x1C0025DF0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

ULONG __stdcall NdisQueryNetBufferPhysicalCount(PNET_BUFFER NetBuffer)
{
  unsigned int DataLength; // r10d
  ULONG v2; // r11d
  _MDL *MdlChain; // r8
  unsigned int i; // r9d
  ULONG ByteCount; // eax
  unsigned int v6; // edx
  unsigned int v7; // ecx
  unsigned __int64 v8; // rax

  DataLength = NetBuffer->DataLength;
  v2 = 0;
  MdlChain = NetBuffer->MdlChain;
  for ( i = NetBuffer->DataOffset; MdlChain; i -= ByteCount )
  {
    ByteCount = MdlChain->ByteCount;
    if ( i < ByteCount )
      break;
    MdlChain = MdlChain->Next;
  }
  NetBuffer->Link.Region = (unsigned __int64)MdlChain;
  NetBuffer->CurrentMdlOffset = i;
  while ( MdlChain && DataLength )
  {
    v6 = MdlChain->ByteCount;
    v7 = v6;
    if ( i )
    {
      if ( v6 > i + DataLength )
        v7 = i + DataLength;
      DataLength += i - v7;
      i = 0;
    }
    else
    {
      if ( v6 > DataLength )
        v7 = DataLength;
      DataLength -= v7;
    }
    if ( v6 )
      v8 = (((LODWORD(MdlChain->StartVa) + MdlChain->ByteOffset) & 0xFFF) + (unsigned __int64)v7 + 4095) >> 12;
    else
      LODWORD(v8) = 1;
    MdlChain = MdlChain->Next;
    v2 += v8;
  }
  return v2;
}

/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x1400EBE60
 * Callers:
 *     IopValidateJunctionTarget @ 0x1405F93B0 (IopValidateJunctionTarget.c)
 *     VerifierFsRtlValidateReparsePointBuffer @ 0x1406C06A4 (VerifierFsRtlValidateReparsePointBuffer.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  signed int ReparseTag; // ecx
  int ReparseDataLength; // r11d
  __int64 SubstituteNameLength; // r8
  int v7; // r10d
  int SubstituteNameOffset; // r9d
  int v9; // r11d
  int PrintNameLength; // r8d
  int PrintNameOffset; // ecx

  if ( BufferLength < 8 || BufferLength > 0x4000 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( ReparseBuffer->ReparseTag == -2147483623 )
    return -1073741194;
  ReparseDataLength = ReparseBuffer->ReparseDataLength;
  if ( ReparseDataLength + 8 == BufferLength )
    goto LABEL_8;
  if ( ReparseDataLength + 24 != BufferLength )
    return -1073741192;
  if ( ReparseDataLength + 8 == BufferLength )
  {
LABEL_8:
    if ( ReparseTag < 0 )
      goto LABEL_9;
    return -1073741192;
  }
LABEL_9:
  if ( ReparseBuffer->ReparseDataLength + 24 == BufferLength
    && (ReparseTag >= 0
     && !ReparseBuffer->AppExecLinkReparseBuffer.StringCount
     && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset
     && !ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 8)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 9)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 10)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 11)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 12)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 13)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 14)
     && !*((_BYTE *)&ReparseBuffer->GenericReparseBuffer + 15)
     || ReparseTag == -1610612733
     || ReparseTag == -1610612724) )
  {
    return -1073741192;
  }
  if ( (ReparseTag & 0xFFF0000) != 0 || (unsigned int)ReparseTag < 2 )
    return -1073741194;
  if ( ReparseTag == -1610612733 )
  {
    if ( (unsigned __int16)ReparseDataLength < 8u )
      return -1073741192;
    if ( ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset )
      return -1073741192;
    SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
    if ( ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset != SubstituteNameLength + 2
      || (unsigned __int16)ReparseDataLength != (int)(SubstituteNameLength
                                                    + ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength
                                                    + 8)
                                              + 4LL )
    {
      return -1073741192;
    }
  }
  else if ( ReparseTag == -1610612724 )
  {
    if ( (unsigned __int16)ReparseDataLength < 0xCu )
      return -1073741192;
    v7 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
    SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
    v9 = (unsigned __int16)ReparseDataLength + 8;
    if ( v9 < SubstituteNameOffset + v7 + 20 )
      return -1073741192;
    PrintNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
    PrintNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset;
    if ( v9 < PrintNameOffset + PrintNameLength + 20
      || !(_WORD)v7
      || !(_WORD)PrintNameLength
      || (v7 & 1) == 1
      || (PrintNameLength & 1) == 1
      || (SubstituteNameOffset & 1) == 1
      || (PrintNameOffset & 1) == 1 )
    {
      return -1073741192;
    }
  }
  return 0;
}

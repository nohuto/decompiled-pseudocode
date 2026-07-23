/*
 * XREFs of FsRtlValidateReparsePointBuffer @ 0x140008118
 * Callers:
 *     IopValidateJunctionTarget @ 0x1403E2B58 (IopValidateJunctionTarget.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall FsRtlValidateReparsePointBuffer(ULONG BufferLength, PREPARSE_DATA_BUFFER ReparseBuffer)
{
  ULONG ReparseTag; // ecx
  int ReparseDataLength; // r9d
  USHORT SubstituteNameLength; // r8
  USHORT PrintNameLength; // ax
  unsigned int v8; // ecx
  USHORT SubstituteNameOffset; // r10
  USHORT v10; // r8
  USHORT PrintNameOffset; // bx
  USHORT v12; // r11
  unsigned int v13; // ecx
  unsigned int v14; // eax

  if ( BufferLength < 8 || BufferLength > 0x4000 )
    return -1073741192;
  ReparseTag = ReparseBuffer->ReparseTag;
  if ( (ReparseBuffer->ReparseTag & 0xFFF0000) == 0
    && ReparseTag > 2
    && (ReparseTag & 0x30000000) != 0x30000000
    && ReparseTag != -2147483623 )
  {
    ReparseDataLength = ReparseBuffer->ReparseDataLength;
    if ( ReparseDataLength + 8 != BufferLength && ReparseDataLength + 24 != BufferLength
      || ReparseDataLength + 8 == BufferLength && (ReparseTag & 0x80000000) == 0
      || ReparseBuffer->ReparseDataLength + 24 == BufferLength
      && ((ReparseTag & 0x80000000) == 0
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
    if ( ReparseTag == -1610612733 )
    {
      if ( (unsigned __int16)ReparseDataLength >= 8u )
      {
        SubstituteNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
        PrintNameLength = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
        if ( (unsigned __int16)(PrintNameLength + SubstituteNameLength) >= SubstituteNameLength )
        {
          v8 = (unsigned __int16)(PrintNameLength + SubstituteNameLength) + 12;
          if ( v8 >= 0xC && (unsigned __int16)(SubstituteNameLength + 2) >= SubstituteNameLength )
          {
            if ( ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset
              || ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset != SubstituteNameLength + 2
              || (unsigned __int16)ReparseDataLength != v8 )
            {
              return -1073741192;
            }
            return 0;
          }
        }
        return -1073741675;
      }
      return -1073741192;
    }
    if ( ReparseTag == -1610612724 )
    {
      if ( (unsigned __int16)ReparseDataLength < 0xCu )
        return -1073741192;
      SubstituteNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameOffset;
      v10 = ReparseBuffer->SymbolicLinkReparseBuffer.SubstituteNameLength;
      if ( (unsigned __int16)(v10 + SubstituteNameOffset) < SubstituteNameOffset )
        return -1073741675;
      PrintNameOffset = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameOffset;
      v12 = ReparseBuffer->SymbolicLinkReparseBuffer.PrintNameLength;
      if ( (unsigned __int16)(v12 + PrintNameOffset) < PrintNameOffset )
        return -1073741675;
      v13 = (unsigned __int16)(v10 + SubstituteNameOffset) + 20;
      if ( v13 < 0x14 )
        return -1073741675;
      v14 = (unsigned __int16)ReparseDataLength + 8;
      if ( v14 < v13
        || v14 < (unsigned int)(unsigned __int16)(v12 + PrintNameOffset) + 20
        || !v10
        || !v12
        || (v10 & 1) == 1
        || (v12 & 1) == 1
        || (SubstituteNameOffset & 1) == 1
        || (PrintNameOffset & 1) == 1 )
      {
        return -1073741192;
      }
    }
    return 0;
  }
  return -1073741194;
}

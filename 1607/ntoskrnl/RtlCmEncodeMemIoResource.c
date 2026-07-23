/*
 * XREFs of RtlCmEncodeMemIoResource @ 0x14013D9E8
 * Callers:
 *     IopInitializeResourceMap @ 0x1407AB6F0 (IopInitializeResourceMap.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCmEncodeMemIoResource(
        PCM_PARTIAL_RESOURCE_DESCRIPTOR Descriptor,
        UCHAR Type,
        ULONGLONG Length,
        ULONGLONG Start)
{
  USHORT Flags; // dx
  ULONGLONG v6; // r9
  __int16 v7; // ax

  if ( ((Type - 3) & 0xFB) != 0 )
  {
    if ( Type != 1 )
      return -1073741811;
LABEL_8:
    if ( Length <= 0xFFFFFFFF )
    {
      Descriptor->Type = 1;
      Descriptor->u.Generic.Start.QuadPart = Start;
      goto LABEL_5;
    }
    return -1073741811;
  }
  if ( Type == 1 )
    goto LABEL_8;
  Descriptor->u.Generic.Start.QuadPart = Start;
  Descriptor->Flags &= 0xF1FFu;
  Flags = Descriptor->Flags;
  if ( Length <= 0xFFFFFFFF )
  {
    Descriptor->Type = 3;
LABEL_5:
    Descriptor->u.Generic.Length = Length;
    return 0;
  }
  if ( Length > 0xFFFFFFFF00LL )
  {
    if ( Length > 0xFFFFFFFF0000LL )
    {
      if ( Length <= 0xFFFFFFFF00000000uLL )
      {
        v6 = HIDWORD(Length);
        if ( Length == HIDWORD(Length) << 32 )
        {
          v7 = 2048;
          goto LABEL_13;
        }
      }
    }
    else
    {
      v6 = Length >> 16;
      if ( Length == (unsigned __int64)(unsigned int)(Length >> 16) << 16 )
      {
        v7 = 1024;
        goto LABEL_13;
      }
    }
  }
  else
  {
    v6 = Length >> 8;
    if ( Length == (unsigned __int64)(unsigned int)(Length >> 8) << 8 )
    {
      v7 = 512;
LABEL_13:
      Descriptor->Type = 7;
      Descriptor->Flags = v7 | Flags;
      Descriptor->u.Generic.Length = v6;
      return 0;
    }
  }
  return -1073741823;
}

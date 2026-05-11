/*
 * XREFs of USBParseGetPinIndexForStreamingTerminal @ 0x1C001CF64
 * Callers:
 *     USBParseTerminalUnit @ 0x1C001D4B0 (USBParseTerminalUnit.c)
 *     USBParseMIDIInJack @ 0x1C001E060 (USBParseMIDIInJack.c)
 *     USBParseMIDIOutJack @ 0x1C001E150 (USBParseMIDIOutJack.c)
 * Callees:
 *     USBParseFindDescriptorInConfiguration @ 0x1C001C6F4 (USBParseFindDescriptorInConfiguration.c)
 *     USBParseGetTerminalLinkFromPinId @ 0x1C001CEB4 (USBParseGetTerminalLinkFromPinId.c)
 */

__int64 __fastcall USBParseGetPinIndexForStreamingTerminal(__int64 a1, unsigned __int8 *a2, char a3)
{
  unsigned int v3; // edi
  bool v4; // bp
  unsigned int v7; // ebx
  int TerminalLinkFromPinId; // r8d
  __int64 v9; // rcx
  __int64 v10; // rdx
  __int64 v11; // r8
  __int64 v12; // r14
  __int64 v13; // r15
  char *v14; // rdx
  PUSB_COMMON_DESCRIPTOR DescriptorInConfiguration; // rax
  UCHAR *v16; // rcx

  v3 = 0;
  v4 = 0;
  v7 = -1;
  if ( a3 )
  {
    v9 = *(unsigned __int8 *)(*(_QWORD *)(a1 + 40) + 4LL);
    if ( !*(_BYTE *)(a1 + 5) )
    {
      if ( !(_DWORD)v9 )
        return v7;
      v10 = *(_QWORD *)(a1 + 16);
      v11 = (unsigned int)v9;
      do
      {
        if ( *(_BYTE *)(*(_QWORD *)v10 + 6LL) == 2 )
          ++v3;
        v10 += 16LL;
        --v11;
      }
      while ( v11 );
    }
    if ( (_DWORD)v9 )
    {
      v12 = 0LL;
      v13 = v9;
      do
      {
        v14 = *(char **)(v12 + *(_QWORD *)(a1 + 16));
        if ( v14[6] == 3 )
        {
          DescriptorInConfiguration = USBParseFindDescriptorInConfiguration(*(unsigned __int16 **)(a1 + 40), v14, 36);
          if ( DescriptorInConfiguration )
          {
            v16 = &DescriptorInConfiguration->bLength + DescriptorInConfiguration->bLength;
            if ( !v4 )
            {
              while ( v16 < &DescriptorInConfiguration->bLength
                          + *(unsigned __int16 *)&DescriptorInConfiguration[2].bDescriptorType )
              {
                v4 = v16 == a2;
                if ( v16 == a2 )
                  break;
                if ( v16[3] == 1 )
                  ++v3;
                v16 += *v16;
              }
            }
          }
        }
        v12 += 16LL;
        --v13;
      }
      while ( v13 );
      if ( v4 )
        return v3;
    }
  }
  else
  {
    TerminalLinkFromPinId = USBParseGetTerminalLinkFromPinId(a1, 0);
    while ( TerminalLinkFromPinId != -1 )
    {
      if ( v4 )
        break;
      if ( TerminalLinkFromPinId == a2[3] )
      {
        v4 = 1;
        v7 = v3;
      }
      else
      {
        TerminalLinkFromPinId = USBParseGetTerminalLinkFromPinId(a1, ++v3);
      }
    }
  }
  return v7;
}

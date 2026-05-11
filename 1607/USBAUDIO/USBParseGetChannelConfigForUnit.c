/*
 * XREFs of USBParseGetChannelConfigForUnit @ 0x1C001E538
 * Callers:
 *     USBParseTerminalUnit @ 0x1C001E840 (USBParseTerminalUnit.c)
 *     USBParseMixerUnit @ 0x1C001E9E0 (USBParseMixerUnit.c)
 *     USBParseSelectorUnit @ 0x1C001ECE0 (USBParseSelectorUnit.c)
 *     USBParseFeatureUnit @ 0x1C001EE60 (USBParseFeatureUnit.c)
 *     USBParseProcessUnit @ 0x1C001F0F0 (USBParseProcessUnit.c)
 *     USBParseExtensionUnit @ 0x1C001F3C0 (USBParseExtensionUnit.c)
 * Callees:
 *     USBParseGetUnit @ 0x1C001E2AC (USBParseGetUnit.c)
 */

__int64 __fastcall USBParseGetChannelConfigForUnit(unsigned __int16 *a1, char *a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *Unit; // rax
  __int64 v10; // rdx
  unsigned __int8 v11; // cl
  __int64 v13; // r8
  int v14; // ecx
  __int64 v15; // r8

  *a4 = 0;
  v4 = 0;
  v6 = (unsigned __int8 *)a1 + a1[1];
  while ( 1 )
  {
    Unit = USBParseGetUnit(a1, a2, a3);
    if ( !Unit )
      return 0LL;
    v10 = *Unit;
    if ( &Unit[v10] > v6 )
      return 3221225473LL;
    v11 = Unit[2];
    switch ( v11 )
    {
      case 2u:
        if ( *Unit < 0xCu )
          return 3221225473LL;
        v14 = *((unsigned __int16 *)Unit + 4);
LABEL_26:
        *a4 = v14;
        return 0LL;
      case 3u:
        if ( (unsigned __int8)v10 < 9u )
          return 3221225473LL;
        a3 = Unit[7];
        goto LABEL_15;
      case 4u:
        if ( *Unit < 5u )
          return 3221225473LL;
        v15 = Unit[4];
        if ( *Unit < (unsigned __int64)(v15 + 9) )
          return 3221225473LL;
        v14 = *(unsigned __int16 *)&Unit[v15 + 6];
        goto LABEL_26;
      case 5u:
        if ( (unsigned __int8)v10 <= 5u )
          return 3221225473LL;
        a3 = Unit[5];
        goto LABEL_15;
    }
    if ( v11 != 6 )
      break;
    if ( (unsigned __int8)v10 < 6u )
      return 3221225473LL;
    a3 = Unit[4];
LABEL_15:
    if ( (unsigned int)++v4 >= 0x3E8 )
      return 0LL;
  }
  if ( (unsigned __int8)(v11 - 7) > 1u )
    return 0LL;
  if ( *Unit >= 7u )
  {
    v13 = Unit[6];
    if ( *Unit >= (unsigned __int64)(v13 + 12) )
    {
      v14 = *(unsigned __int16 *)&Unit[v13 + 8];
      goto LABEL_26;
    }
  }
  return 3221225473LL;
}

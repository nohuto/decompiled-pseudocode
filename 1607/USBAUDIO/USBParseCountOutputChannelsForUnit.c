/*
 * XREFs of USBParseCountOutputChannelsForUnit @ 0x1C001E404
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

__int64 __fastcall USBParseCountOutputChannelsForUnit(unsigned __int16 *a1, char *a2, int a3, _DWORD *a4)
{
  int v4; // edi
  unsigned __int8 *v6; // rsi
  unsigned __int8 *Unit; // rax
  __int64 v10; // r8
  __int64 v12; // r8
  int v13; // ecx
  __int64 v14; // r8

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
    if ( Unit[2] == 2 )
    {
      if ( *Unit >= 0xCu )
      {
        v13 = Unit[7];
        goto LABEL_27;
      }
      return 3221225473LL;
    }
    if ( Unit[2] == 3 )
    {
      if ( (unsigned __int8)v10 < 9u )
        return 3221225473LL;
      a3 = Unit[7];
      goto LABEL_15;
    }
    if ( Unit[2] == 4 )
      break;
    if ( Unit[2] == 5 )
    {
      if ( (unsigned __int8)v10 <= 5u )
        return 3221225473LL;
      a3 = Unit[5];
    }
    else
    {
      if ( Unit[2] != 6 )
      {
        if ( (unsigned int)Unit[2] - 7 >= 2 )
        {
          *a4 = 0;
          return 0LL;
        }
        if ( *Unit >= 7u )
        {
          v12 = Unit[6];
          if ( *Unit >= (unsigned __int64)(v12 + 7) )
          {
            v13 = Unit[v12 + 7];
LABEL_27:
            *a4 = v13;
            return 0LL;
          }
        }
        return 3221225473LL;
      }
      if ( (unsigned __int8)v10 < 6u )
        return 3221225473LL;
      a3 = Unit[4];
    }
LABEL_15:
    if ( (unsigned int)++v4 >= 0x3E8 )
      return 0LL;
  }
  if ( *Unit >= 5u )
  {
    v14 = Unit[4];
    if ( *Unit >= (unsigned __int64)(v14 + 5) )
    {
      v13 = Unit[v14 + 5];
      goto LABEL_27;
    }
  }
  return 3221225473LL;
}

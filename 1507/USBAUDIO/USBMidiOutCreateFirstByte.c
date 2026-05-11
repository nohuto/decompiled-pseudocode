/*
 * XREFs of USBMidiOutCreateFirstByte @ 0x1C0022EC0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall USBMidiOutCreateFirstByte(__int64 a1, char *a2, char a3)
{
  char v3; // r9
  char v5; // al
  char v6; // al
  char v7; // cl
  char v8; // cl
  char v9; // cl

  v3 = 0;
  if ( a3 >= 0 )
  {
    v6 = *(_BYTE *)(a1 + 69);
    if ( v6 )
    {
      v7 = *a2;
      a2[1] = v6;
      v8 = (*(_BYTE *)(a1 + 69) >> 4) | v7 & 0xF0;
    }
    else
    {
      if ( !*(_BYTE *)(a1 + 68) )
        return v3;
      v9 = *a2 & 0xF4;
      a2[1] = a3;
      v8 = v9 | 4;
    }
    *a2 = v8;
    return v3;
  }
  a2[1] = a3;
  *(_BYTE *)(a1 + 69) = 0;
  if ( (a3 & 0xF8) == 0xF8 )
  {
    if ( *(_BYTE *)(a1 + 68) )
    {
      v5 = *a2 & 0xF0 | 4;
LABEL_19:
      *a2 = v5;
      return v3;
    }
    *a2 |= 0xFu;
    return 1;
  }
  if ( a3 == -16 )
  {
    *a2 = *a2 & 0xF0 | 4;
    *(_BYTE *)(a1 + 68) = 1;
  }
  else
  {
    *(_BYTE *)(a1 + 68) = 0;
    if ( (unsigned __int8)(a3 + 0x80) <= 0x6Fu )
    {
      *(_BYTE *)(a1 + 69) = a3;
      v5 = ((unsigned __int8)a3 >> 4) | *a2 & 0xF0;
      goto LABEL_19;
    }
    if ( (a3 & 0xF0) == 0xF0 )
    {
      switch ( a3 )
      {
        case -15:
          goto LABEL_18;
        case -14:
          v5 = *a2 & 0xF0 | 3;
          goto LABEL_19;
        case -13:
LABEL_18:
          v5 = *a2 & 0xF0 | 2;
          goto LABEL_19;
        case -10:
        case -9:
          *a2 = *a2 & 0xF0 | 5;
          return 1;
      }
    }
  }
  return v3;
}

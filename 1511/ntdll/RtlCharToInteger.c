/*
 * XREFs of RtlCharToInteger @ 0x180078DA0
 * Callers:
 *     LdrpSnapModule @ 0x180033FC0 (LdrpSnapModule.c)
 *     LdrpParseForwarderDescription @ 0x180078D08 (LdrpParseForwarderDescription.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  ULONG v4; // r10d
  PCSZ v5; // r9
  CHAR i; // r11
  _BYTE *v7; // r9
  CHAR v8; // r8
  int v9; // ecx
  ULONG v10; // edx
  unsigned int v11; // eax
  char v13; // al
  CHAR *v14; // r9

  v4 = Base;
  v5 = String;
  for ( i = *String; ; i = *v5 )
  {
    if ( i > 32 )
    {
      v7 = v5 + 1;
      goto LABEL_4;
    }
    if ( !*++v5 )
      break;
  }
  v7 = v5 - 1;
LABEL_4:
  v8 = i;
  if ( ((i - 43) & 0xFD) == 0 )
    v8 = *v7++;
  if ( Base )
  {
    switch ( Base )
    {
      case 0xAu:
        v9 = 0;
        break;
      case 2u:
        v9 = 1;
        break;
      case 8u:
        v9 = 3;
        break;
      case 0x10u:
        v9 = 4;
        break;
      default:
        return -1073741811;
    }
  }
  else
  {
    v9 = 0;
    v4 = 10;
    if ( v8 == 48 )
    {
      v13 = *v7;
      v14 = v7 + 1;
      switch ( v13 )
      {
        case 'x':
          v9 = 4;
          v4 = 16;
          break;
        case 'o':
          v9 = 3;
          v4 = 8;
          break;
        case 'b':
          v9 = 1;
          v4 = 2;
          break;
        default:
          --v14;
          break;
      }
      v8 = *v14;
      v7 = v14 + 1;
    }
  }
  v10 = 0;
  while ( v8 )
  {
    if ( (unsigned __int8)(v8 - 48) > 9u )
    {
      if ( (unsigned __int8)(v8 - 65) > 5u )
      {
        if ( (unsigned __int8)(v8 - 97) > 5u )
          break;
        v11 = v8 - 87;
      }
      else
      {
        v11 = v8 - 55;
      }
    }
    else
    {
      v11 = v8 - 48;
    }
    if ( v11 >= v4 )
      break;
    if ( v9 )
      v10 = v11 | (v10 << v9);
    else
      v10 = v11 + v4 * v10;
    v8 = *v7++;
  }
  if ( i == 45 )
    v10 = -v10;
  *Value = v10;
  return 0;
}

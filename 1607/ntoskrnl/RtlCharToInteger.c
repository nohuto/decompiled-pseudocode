/*
 * XREFs of RtlCharToInteger @ 0x140554A50
 * Callers:
 *     IopCheckDiskName @ 0x14013D11C (IopCheckDiskName.c)
 *     EmpParseTargetRuleStringIndexList @ 0x1407A8814 (EmpParseTargetRuleStringIndexList.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlCharToInteger(PCSZ String, ULONG Base, PULONG Value)
{
  ULONG v4; // r10d
  PCSZ v5; // r9
  CHAR v6; // r11
  _BYTE *v7; // r9
  CHAR v8; // r8
  int v9; // ecx
  ULONG v10; // edx
  unsigned int v11; // eax
  char v13; // al
  CHAR *v14; // r9

  v4 = Base;
  v5 = String;
  v6 = *String;
  if ( *String <= 32 )
  {
    while ( *++v5 )
    {
      v6 = *v5;
      if ( *v5 > 32 )
        goto LABEL_2;
    }
    v7 = v5 - 1;
  }
  else
  {
LABEL_2:
    v7 = v5 + 1;
  }
  v8 = v6;
  if ( ((v6 - 43) & 0xFD) == 0 )
    v8 = *v7++;
  if ( Base )
  {
    switch ( Base )
    {
      case 0x10u:
        v9 = 4;
        break;
      case 0xAu:
        v9 = 0;
        break;
      case 2u:
        v9 = 1;
        break;
      case 8u:
        v9 = 3;
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
  if ( v6 == 45 )
    v10 = -v10;
  *Value = v10;
  return 0;
}

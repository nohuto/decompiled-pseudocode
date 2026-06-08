/*
 * XREFs of WriteIoMemRaw @ 0x1C0004948
 * Callers:
 *     PerfControlCpcSingleRegister @ 0x1C0002960 (PerfControlCpcSingleRegister.c)
 *     WriteGenAddr @ 0x1C0004AB4 (WriteGenAddr.c)
 * Callees:
 *     <none>
 */

char __fastcall WriteIoMemRaw(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rcx
  int v5; // edx
  char result; // al
  unsigned int v7; // r11d
  int v8; // edx
  __int64 v9; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = *(_BYTE **)(a1 + 4);
  v5 = *(unsigned __int8 *)(a1 + 3);
  if ( !*(_BYTE *)a1 )
  {
    switch ( v5 )
    {
      case 8:
        *v4 = a2;
        break;
      case 16:
        *(_WORD *)v4 = a2;
        break;
      case 32:
        *(_DWORD *)v4 = a2;
        break;
      default:
        return result;
    }
    goto LABEL_32;
  }
  if ( *(_BYTE *)a1 != 1 )
  {
    if ( *(_BYTE *)a1 != 10 )
    {
      if ( *(_BYTE *)a1 == 127 && v5 == 64 )
      {
        result = a2;
        __writemsr((unsigned int)v4, a2);
      }
      return result;
    }
    v7 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
    if ( v7 > 8 )
    {
      if ( v7 > 0x10 )
      {
        v8 = 64;
        if ( v7 <= 0x20 )
          v8 = 32;
      }
      else
      {
        v8 = 16;
      }
    }
    else
    {
      v8 = 8;
    }
    result = qword_1C0009838;
    v9 = *(_QWORD *)(qword_1C0009838 + 72);
    switch ( v8 )
    {
      case 8:
        v4[v9] = a2;
        break;
      case 16:
        *(_WORD *)&v4[v9] = a2;
        break;
      case 32:
        *(_DWORD *)&v4[v9] = a2;
        break;
      default:
        *(_QWORD *)&v4[v9] = a2;
        break;
    }
LABEL_32:
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
    return result;
  }
  switch ( v5 )
  {
    case 8:
      result = a2;
      __outbyte((unsigned __int16)v4, a2);
      break;
    case 16:
      result = a2;
      __outword((unsigned __int16)v4, a2);
      break;
    case 32:
      result = a2;
      __outdword((unsigned __int16)v4, a2);
      break;
  }
  return result;
}

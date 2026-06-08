/*
 * XREFs of WriteIoMemRaw @ 0x1C00013FC
 * Callers:
 *     WriteGenAddr @ 0x1C0001380 (WriteGenAddr.c)
 *     PerfControlCpcSingleRegister @ 0x1C0004C10 (PerfControlCpcSingleRegister.c)
 * Callees:
 *     <none>
 */

char __fastcall WriteIoMemRaw(__int64 a1, unsigned __int64 a2)
{
  _BYTE *v4; // rcx
  int v5; // edx
  unsigned int v6; // r11d
  int v7; // edx
  char result; // al
  __int64 v9; // r10
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  v4 = *(_BYTE **)(a1 + 4);
  v5 = *(unsigned __int8 *)(a1 + 3);
  if ( *(_BYTE *)a1 )
  {
    if ( *(_BYTE *)a1 == 1 )
    {
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
    }
    else
    {
      if ( *(_BYTE *)a1 == 10 )
      {
        v6 = *(unsigned __int8 *)(a1 + 1) + *(unsigned __int8 *)(a1 + 2);
        if ( v6 <= 8 )
        {
          v7 = 8;
        }
        else if ( v6 <= 0x10 )
        {
          v7 = 16;
        }
        else
        {
          v7 = 64;
          if ( v6 <= 0x20 )
            v7 = 32;
        }
        result = qword_1C000F1F0;
        v9 = *(_QWORD *)(qword_1C000F1F0 + 72);
        switch ( v7 )
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
        goto LABEL_9;
      }
      if ( *(_BYTE *)a1 == 127 && v5 == 64 )
      {
        result = a2;
        __writemsr((unsigned int)v4, a2);
      }
    }
  }
  else
  {
    switch ( v5 )
    {
      case 8:
        *v4 = a2;
        goto LABEL_9;
      case 16:
        *(_WORD *)v4 = a2;
        goto LABEL_9;
      case 32:
        *(_DWORD *)v4 = a2;
LABEL_9:
        _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
        break;
    }
  }
  return result;
}

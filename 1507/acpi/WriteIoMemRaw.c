/*
 * XREFs of WriteIoMemRaw @ 0x1C003F008
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C003EDD0 (AcpiPccRingDoorbell.c)
 * Callees:
 *     <none>
 */

char __fastcall WriteIoMemRaw(_BYTE *a1, int a2, int a3, __int64 a4)
{
  char result; // al
  _UNKNOWN *retaddr; // [rsp+0h] [rbp+0h] BYREF

  result = 0;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          result = a4;
          __outbyte((unsigned __int16)a1, a4);
          break;
        case 16:
          result = a4;
          __outword((unsigned __int16)a1, a4);
          break;
        case 32:
          result = a4;
          __outdword((unsigned __int16)a1, a4);
          break;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 8:
        *a1 = a4;
        break;
      case 16:
        *(_WORD *)a1 = a4;
        break;
      case 32:
        *(_DWORD *)a1 = a4;
        break;
      case 64:
        *(_QWORD *)a1 = a4;
        break;
      default:
        return result;
    }
    _InterlockedOr((volatile signed __int32 *)&retaddr, 0);
  }
  return result;
}

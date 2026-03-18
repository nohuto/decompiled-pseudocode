/*
 * XREFs of ReadIoMemRaw @ 0x1C003EAEC
 * Callers:
 *     AcpiPccRingDoorbell @ 0x1C003E910 (AcpiPccRingDoorbell.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ReadIoMemRaw(unsigned __int8 *a1, int a2, int a3)
{
  __int64 result; // rax

  result = 0LL;
  if ( a2 )
  {
    if ( a2 == 1 )
    {
      switch ( a3 )
      {
        case 8:
          LOBYTE(result) = __inbyte((unsigned __int16)a1);
          return (unsigned __int8)result;
        case 16:
          LOWORD(result) = __inword((unsigned __int16)a1);
          return (unsigned __int16)result;
        case 32:
          LODWORD(result) = __indword((unsigned __int16)a1);
          return (unsigned int)result;
      }
    }
  }
  else
  {
    switch ( a3 )
    {
      case 8:
        return *a1;
      case 16:
        return *(unsigned __int16 *)a1;
      case 32:
        return *(unsigned int *)a1;
      case 64:
        return *(_QWORD *)a1;
    }
  }
  return result;
}

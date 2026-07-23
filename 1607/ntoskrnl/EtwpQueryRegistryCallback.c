/*
 * XREFs of EtwpQueryRegistryCallback @ 0x1404C4574
 * Callers:
 *     <none>
 * Callees:
 *     memmove @ 0x140171780 (memmove.c)
 *     RtlCreateUnicodeString @ 0x1403F64A4 (RtlCreateUnicodeString.c)
 */

__int64 __fastcall EtwpQueryRegistryCallback(
        __int64 a1,
        int a2,
        const WCHAR *a3,
        unsigned int a4,
        __int64 a5,
        PUNICODE_STRING DestinationString)
{
  unsigned int v6; // esi

  v6 = 0;
  if ( DestinationString )
  {
    if ( a3 && a4 )
    {
      switch ( a2 )
      {
        case 4:
          if ( a4 >= 4 )
            *(_DWORD *)&DestinationString->Length = *(_DWORD *)a3;
          break;
        case 11:
          *(_QWORD *)&DestinationString->Length = *(_QWORD *)a3;
          break;
        case 1:
          if ( a4 > 2 )
          {
            if ( !RtlCreateUnicodeString(DestinationString, a3) )
              return (unsigned int)-1073741801;
          }
          else
          {
            *(_QWORD *)&DestinationString->Length = 0LL;
            DestinationString->Buffer = 0LL;
          }
          break;
        default:
          if ( a2 == 3 && a4 >= 4 )
          {
            if ( a4 > *(_DWORD *)&DestinationString->Length )
            {
              *(_DWORD *)&DestinationString->Length = 0;
              return (unsigned int)-1073741306;
            }
            else
            {
              memmove(DestinationString->Buffer, a3, a4);
              *(_DWORD *)&DestinationString->Length = a4;
            }
          }
          break;
      }
    }
    else if ( a2 == 3 )
    {
      *(_DWORD *)&DestinationString->Length = 0;
    }
  }
  return v6;
}

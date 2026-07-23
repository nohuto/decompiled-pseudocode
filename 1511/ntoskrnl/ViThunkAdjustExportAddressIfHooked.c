/*
 * XREFs of ViThunkAdjustExportAddressIfHooked @ 0x1406C358C
 * Callers:
 *     VfThunkAdjustExportAddressIfHooked @ 0x1406C3280 (VfThunkAdjustExportAddressIfHooked.c)
 * Callees:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     RtlUnicodeStringToAnsiString @ 0x1403B8140 (RtlUnicodeStringToAnsiString.c)
 *     RtlFreeAnsiString @ 0x140445624 (RtlFreeAnsiString.c)
 */

__int64 __fastcall ViThunkAdjustExportAddressIfHooked(
        unsigned __int8 **a1,
        const UNICODE_STRING *a2,
        char **a3,
        __int64 a4)
{
  char *Buffer; // r10
  unsigned int v6; // edi
  int v7; // r8d
  unsigned __int8 *v11; // rax
  char *v12; // rax
  int v13; // r9d
  int v14; // ecx
  _STRING DestinationString; // [rsp+20h] [rbp-18h] BYREF

  Buffer = 0LL;
  v6 = 0;
  DestinationString.Buffer = 0LL;
  v7 = 0;
  if ( *a3 )
  {
    while ( 1 )
    {
      v11 = (unsigned __int8 *)a3[2];
      if ( v11 == *a1 )
        break;
      if ( !v11 )
      {
        if ( !v7 )
        {
          while ( RtlUnicodeStringToAnsiString(&DestinationString, a2, 1u) < 0 )
            KeDelayExecutionThread(0, 0, (PLARGE_INTEGER)&ViShortTime);
          Buffer = DestinationString.Buffer;
          v7 = 1;
        }
        v12 = *a3;
        do
        {
          v13 = (unsigned __int8)v12[Buffer - *a3];
          v14 = (unsigned __int8)*v12 - v13;
          if ( v14 )
            break;
          ++v12;
        }
        while ( v13 );
        if ( !v14 )
          break;
      }
      a3 = (char **)((char *)a3 + a4);
      if ( !*a3 )
        goto LABEL_16;
    }
    v6 = 1;
    *a1 = (unsigned __int8 *)a3[1];
LABEL_16:
    if ( v7 )
      RtlFreeAnsiString((PUNICODE_STRING)&DestinationString);
  }
  return v6;
}

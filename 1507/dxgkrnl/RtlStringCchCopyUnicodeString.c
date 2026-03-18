/*
 * XREFs of RtlStringCchCopyUnicodeString @ 0x1C000A438
 * Callers:
 *     MonitorGetMonitorDeviceInterfaceName @ 0x1C00ABC40 (MonitorGetMonitorDeviceInterfaceName.c)
 * Callees:
 *     <none>
 */

NTSTATUS __stdcall RtlStringCchCopyUnicodeString(
        NTSTRSAFE_PWSTR pszDest,
        size_t cchDest,
        PCUNICODE_STRING SourceString)
{
  unsigned __int16 Length; // r9
  wchar_t *Buffer; // rbx
  unsigned __int64 v5; // r10
  NTSTATUS v6; // edx
  unsigned __int16 MaximumLength; // ax
  __int64 v8; // r8
  signed __int64 v9; // rbx
  NTSTATUS result; // eax

  Length = SourceString->Length;
  Buffer = 0LL;
  v5 = 0LL;
  v6 = 0;
  if ( (SourceString->Length & 1) != 0
    || (MaximumLength = SourceString->MaximumLength, (MaximumLength & 1) != 0)
    || Length > MaximumLength
    || MaximumLength == 0xFFFF )
  {
    v6 = -1073741811;
  }
  else
  {
    if ( !SourceString->Buffer && (Length || MaximumLength) )
    {
      v6 = -1073741811;
    }
    else
    {
      Buffer = SourceString->Buffer;
      v5 = (unsigned __int64)Length >> 1;
    }
    if ( v6 >= 0 )
    {
      v8 = 128LL;
      v6 = 0;
      v9 = (char *)Buffer - (char *)pszDest;
      do
      {
        if ( !(v5 + v8 - 128) )
          break;
        *pszDest = *(NTSTRSAFE_PWSTR)((char *)pszDest + v9);
        ++pszDest;
        --v8;
      }
      while ( v8 );
      if ( !v8 )
      {
        --pszDest;
        v6 = -2147483643;
      }
    }
  }
  result = v6;
  *pszDest = 0;
  return result;
}

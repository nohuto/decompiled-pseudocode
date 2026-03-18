/*
 * XREFs of MakeSystemDriversRelativePath @ 0x1C00BFEA8
 * Callers:
 *     ldevLoadImage @ 0x1C005EC70 (ldevLoadImage.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C004C24C (PALLOCMEM2.c)
 */

__int64 __fastcall MakeSystemDriversRelativePath(PCWSTR Source, PUNICODE_STRING Destination, int a3)
{
  __int64 v3; // rbx
  int v4; // r14d
  const WCHAR *v6; // rdi
  unsigned int v7; // ebp
  __int64 result; // rax
  const wchar_t *i; // rbx

  v3 = -1LL;
  v4 = a3;
  v6 = Source;
  do
    ++v3;
  while ( Source[v3] );
  v7 = 2 * v3 + 58;
  if ( a3 )
  {
    if ( (unsigned int)v3 < 4 || _wcsnicmp(&Source[(unsigned int)v3 - 4], L".DLL", 4uLL) )
      v7 = 2 * v3 + 66;
    else
      v4 = 0;
  }
  Destination->Length = 0;
  Destination->MaximumLength = v7;
  result = (__int64)PALLOCMEM2(v7, 1818838599LL, 0);
  Destination->Buffer = (PWSTR)result;
  if ( result )
  {
    for ( i = &v6[(unsigned int)v3 - 17]; i >= v6; --i )
    {
      if ( !_wcsnicmp(i, L"\\system32\\Drivers", 0x11uLL) )
      {
        v6 = i + 17;
        break;
      }
    }
    RtlAppendUnicodeToString(Destination, L"\\SystemRoot\\System32\\Drivers\\");
    RtlAppendUnicodeToString(Destination, v6);
    if ( v4 )
      RtlAppendUnicodeToString(Destination, L".dll");
    return 1LL;
  }
  return result;
}

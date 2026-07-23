/*
 * XREFs of LdrpMakeUnicodeStringFromPathElement @ 0x1800CA534
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x1800C9DB8 (LdrpLogEtwDllSearchResults.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     RtlGetCurrentDirectory_U @ 0x180077E00 (RtlGetCurrentDirectory_U.c)
 *     __security_check_cookie @ 0x180095840 (__security_check_cookie.c)
 *     RtlStringCchCopyExW @ 0x1800CA674 (RtlStringCchCopyExW.c)
 */

__int64 __fastcall LdrpMakeUnicodeStringFromPathElement(__int64 a1, int a2, _UNICODE_STRING *a3)
{
  __int64 v5; // r9
  unsigned int v7; // edx
  __int64 v8; // r8
  int v9; // eax
  WCHAR *v10; // rdx
  _UNICODE_STRING DestinationString; // [rsp+30h] [rbp-D0h] BYREF
  WCHAR Buffer[1600]; // [rsp+40h] [rbp-C0h] BYREF

  DestinationString.Length = 0;
  *(_QWORD *)&DestinationString.MaximumLength = 0LL;
  *(_DWORD *)((char *)&DestinationString.Buffer + 2) = 0;
  v5 = a1;
  HIWORD(DestinationString.Buffer) = 0;
  if ( a2 == 4 )
  {
    if ( RtlGetCurrentDirectory_U(0xC78u, Buffer) )
    {
      if ( !RtlCreateUnicodeString(&DestinationString, Buffer) )
        return 0LL;
LABEL_4:
      *a3 = DestinationString;
      return 0LL;
    }
    return 3221225473LL;
  }
  v7 = *(unsigned __int16 *)(a1 + 112);
  LODWORD(a1) = 0;
  if ( *(_DWORD *)(v5 + 40) != a2 )
  {
    do
    {
      a1 = (unsigned int)(a1 + 1);
      if ( (unsigned int)a1 >= v7 )
        return 3221226021LL;
    }
    while ( *(_DWORD *)(v5 + 4 * a1 + 40) != a2 );
  }
  if ( (unsigned int)a1 >= v7 )
    return 3221226021LL;
  if ( (_DWORD)a1 == v7 - 1 )
  {
    v10 = *(WCHAR **)(v5 + 8LL * (unsigned int)a1 + 64);
LABEL_16:
    if ( RtlCreateUnicodeString(&DestinationString, v10) )
      goto LABEL_4;
    return 3221225473LL;
  }
  v8 = *(_QWORD *)(v5 + 8LL * (unsigned int)a1 + 64);
  v9 = RtlStringCchCopyExW(
         (unsigned int)Buffer,
         (unsigned int)((*(_QWORD *)(v5 + 8LL * (unsigned int)(a1 + 1) + 64) - v8 - 2) >> 1) + 1,
         v8,
         0,
         0LL);
  if ( (int)(v9 + 0x80000000) < 0 || v9 == -2147483643 )
  {
    v10 = Buffer;
    goto LABEL_16;
  }
  return 3221225473LL;
}

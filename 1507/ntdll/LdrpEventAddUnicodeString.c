/*
 * XREFs of LdrpEventAddUnicodeString @ 0x1800BCF8C
 * Callers:
 *     LdrpLogEtwDllSearchResults @ 0x1800BD098 (LdrpLogEtwDllSearchResults.c)
 *     LdrpLogEtwEvent @ 0x1800BD334 (LdrpLogEtwEvent.c)
 *     LdrpLogEtwEventEx @ 0x1800BD3DC (LdrpLogEtwEventEx.c)
 * Callees:
 *     RtlStringCchCopyExW @ 0x1800BD954 (RtlStringCchCopyExW.c)
 */

__int64 __fastcall LdrpEventAddUnicodeString(__int64 a1, _WORD *a2, unsigned int a3, _DWORD *a4)
{
  __int64 result; // rax
  __int64 v7; // [rsp+30h] [rbp-18h] BYREF
  int v8; // [rsp+50h] [rbp+8h] BYREF

  if ( a1 && *(_WORD *)a1 )
  {
    RtlStringCchCopyExW((_DWORD)a2, a3 >> 1, *(_QWORD *)(a1 + 8), (unsigned int)&v7, (__int64)&v8);
    result = a3 + 2 * (1 - v8);
    *a4 = result;
  }
  else
  {
    result = 2LL;
    if ( a3 < 2 )
      result = 0LL;
    else
      *a2 = 0;
    *a4 = result;
  }
  return result;
}

/*
 * XREFs of sub_140019D80 @ 0x140019D80
 * Callers:
 *     RtlStringCchCopyExW @ 0x140019AA0 (RtlStringCchCopyExW.c)
 *     RtlStringCchPrintfExW @ 0x140019C20 (RtlStringCchPrintfExW.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall sub_140019D80(__int64 a1, unsigned __int64 a2, __int64 a3, __int16 a4)
{
  __int64 result; // rax

  result = 0LL;
  if ( (a4 & 0x100) != 0 )
  {
    if ( !a1 && a2 || a2 > 0x7FFFFFFF )
      return 3221225485LL;
  }
  else if ( a2 - 1 > 0x7FFFFFFE )
  {
    return 3221225485LL;
  }
  return result;
}

/*
 * XREFs of RtlStringCchLengthW @ 0x18001C914
 * Callers:
 *     LdrpMultiSZCchLength @ 0x18003BD04 (LdrpMultiSZCchLength.c)
 *     RtlpCheckMuiMultiStringSafe @ 0x18003BDAC (RtlpCheckMuiMultiStringSafe.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E20C (RtlpLangNameInMultiSzString_Size.c)
 *     RtlGetParentLocaleName @ 0x18003EA20 (RtlGetParentLocaleName.c)
 *     RtlpNameprepAsciiWorker @ 0x180069B44 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x18006A2A0 (RtlIdnToUnicode.c)
 *     RtlpValidAttribute @ 0x1800D9B94 (RtlpValidAttribute.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlStringCchLengthW(_WORD *a1, unsigned __int64 a2, _QWORD *a3)
{
  unsigned __int64 v3; // r9
  __int64 result; // rax

  if ( a1 && a2 <= 0x7FFFFFFF )
  {
    v3 = a2;
    result = 0LL;
    if ( !a2 )
      goto LABEL_12;
    do
    {
      if ( !*a1 )
        break;
      ++a1;
      --v3;
    }
    while ( v3 );
    if ( !v3 )
LABEL_12:
      result = 3221225485LL;
    if ( a3 )
    {
      if ( (int)result < 0 )
        *a3 = 0LL;
      else
        *a3 = a2 - v3;
    }
  }
  else
  {
    result = 3221225485LL;
  }
  if ( (int)result < 0 )
  {
    if ( a3 )
      *a3 = 0LL;
  }
  return result;
}

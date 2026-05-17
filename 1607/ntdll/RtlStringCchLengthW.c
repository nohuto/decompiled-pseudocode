/*
 * XREFs of RtlStringCchLengthW @ 0x180040BCC
 * Callers:
 *     RtlpCheckMuiMultiStringSafe @ 0x180010648 (RtlpCheckMuiMultiStringSafe.c)
 *     LdrpMultiSZCchLength @ 0x1800106C0 (LdrpMultiSZCchLength.c)
 *     RtlGetParentLocaleName @ 0x18003E5F0 (RtlGetParentLocaleName.c)
 *     RtlpLangNameInMultiSzString_Size @ 0x18003E708 (RtlpLangNameInMultiSzString_Size.c)
 *     RtlpNameprepAsciiWorker @ 0x180055E84 (RtlpNameprepAsciiWorker.c)
 *     RtlIdnToUnicode @ 0x180056690 (RtlIdnToUnicode.c)
 *     RtlpValidAttribute @ 0x1800E2574 (RtlpValidAttribute.c)
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

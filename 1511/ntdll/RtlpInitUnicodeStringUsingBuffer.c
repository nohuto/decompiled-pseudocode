/*
 * XREFs of RtlpInitUnicodeStringUsingBuffer @ 0x18001CBC4
 * Callers:
 *     RtlLcidToLocaleName @ 0x18001CA60 (RtlLcidToLocaleName.c)
 *     RtlGetParentLocaleName @ 0x18003EA20 (RtlGetParentLocaleName.c)
 *     RtlpGetCustomCultureDataFromFile @ 0x1800E5E0C (RtlpGetCustomCultureDataFromFile.c)
 * Callees:
 *     RtlCreateUnicodeString @ 0x180018FF0 (RtlCreateUnicodeString.c)
 *     memmove @ 0x1800AB5C0 (memmove.c)
 */

__int64 __fastcall RtlpInitUnicodeStringUsingBuffer(char a1, const WCHAR *a2, unsigned int a3, _UNICODE_STRING *a4)
{
  unsigned __int64 v5; // rsi
  unsigned __int16 v6; // bx

  if ( a1 )
  {
    if ( RtlCreateUnicodeString(a4, a2) )
      return 0LL;
    return 3221225495LL;
  }
  else
  {
    if ( a3 < 0x55 )
    {
      v5 = 2LL * a3;
      if ( a4->MaximumLength > v5 )
      {
        v6 = 2 * a3;
        memmove(a4->Buffer, a2, (unsigned __int16)(2 * a3));
        a4->Buffer[v5 / 2] = 0;
        a4->Length = v6;
        return 0LL;
      }
    }
    return 3221225507LL;
  }
}

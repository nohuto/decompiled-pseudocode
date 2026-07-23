/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x1800EE558
 * Callers:
 *     RtlStringCchPrintfExW @ 0x18005CCE0 (RtlStringCchPrintfExW.c)
 * Callees:
 *     memset @ 0x1800ACCC0 (memset.c)
 */

__int64 __fastcall RtlStringExHandleFillBehindNullW(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}

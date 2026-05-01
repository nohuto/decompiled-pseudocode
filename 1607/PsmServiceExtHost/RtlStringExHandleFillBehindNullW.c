/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x180038890
 * Callers:
 *     RtlStringCbPrintfExW @ 0x1800386D0 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset_0 @ 0x180020A42 (memset_0.c)
 */

__int64 __fastcall RtlStringExHandleFillBehindNullW(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset_0((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}

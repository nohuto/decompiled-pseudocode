/*
 * XREFs of RtlStringExHandleFillBehindNullW @ 0x18004DBF4
 * Callers:
 *     RtlStringCbPrintfExW @ 0x18004DA34 (RtlStringCbPrintfExW.c)
 * Callees:
 *     memset_0 @ 0x180024EDE (memset_0.c)
 */

__int64 __fastcall RtlStringExHandleFillBehindNullW(__int64 a1, unsigned __int64 a2, unsigned __int8 a3)
{
  if ( a2 > 2 )
    memset_0((void *)(a1 + 2), a3, a2 - 2);
  return 0LL;
}

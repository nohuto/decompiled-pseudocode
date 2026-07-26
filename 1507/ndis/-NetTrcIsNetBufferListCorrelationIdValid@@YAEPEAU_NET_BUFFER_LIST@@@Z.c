/*
 * XREFs of ?NetTrcIsNetBufferListCorrelationIdValid@@YAEPEAU_NET_BUFFER_LIST@@@Z @ 0x1C004708C
 * Callers:
 *     ndisGenerateNetBufferListCorrelationIds @ 0x1C0047FB0 (ndisGenerateNetBufferListCorrelationIds.c)
 * Callees:
 *     <none>
 */

bool __fastcall NetTrcIsNetBufferListCorrelationIdValid(struct _NET_BUFFER_LIST *a1)
{
  unsigned __int64 v1; // rdx
  bool result; // al

  v1 = (unsigned __int64)a1->NetBufferListInfo[13];
  result = 0;
  if ( v1 )
    return (v1 & 0x8000000000000000uLL) != 0x8000000000000000uLL;
  return result;
}

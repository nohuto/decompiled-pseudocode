/*
 * XREFs of ndisClearReceiveFiltersForProtocol @ 0x1C009948C
 * Callers:
 *     ndisCleanUpForProtocol @ 0x1C00993D0 (ndisCleanUpForProtocol.c)
 * Callees:
 *     ?ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z @ 0x1C0014288 (-ndisFindFirstReceiveFilterByOpen@@YAPEAU_NDIS_RECEIVE_FILTER_BLOCK@@PEAU_NDIS_OPEN_BLOCK@@@Z.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0038B2C (ndisDereferenceReceiveFilter.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 */

struct _NDIS_RECEIVE_FILTER_BLOCK *__fastcall ndisClearReceiveFiltersForProtocol(struct _NDIS_OPEN_BLOCK *a1)
{
  _NDIS_MINIPORT_BLOCK *MiniportHandle; // rbp
  struct _NDIS_OPEN_BLOCK *v2; // rsi
  int v3; // ebx
  unsigned int NumReceiveFilters; // r14d
  struct _NDIS_RECEIVE_FILTER_BLOCK *result; // rax
  struct _NDIS_RECEIVE_FILTER_BLOCK *v6; // rdi
  __int64 v7; // [rsp+20h] [rbp-18h]

  MiniportHandle = a1->MiniportHandle;
  v2 = a1;
  v3 = 0;
  NumReceiveFilters = MiniportHandle->NumReceiveFilters;
  while ( 1 )
  {
    result = ndisFindFirstReceiveFilterByOpen(a1);
    v6 = result;
    if ( !result )
      break;
    if ( ++v3 > NumReceiveFilters )
      break;
    if ( (unsigned __int8)byte_1C0083712 >= 4u )
    {
      LODWORD(v7) = result->FilterId;
      WPP_SF_qqd(0x1Bu, &WPP_5bdf5f30a197d5f3fc0ac0df652068c7_Traceguids, v2, MiniportHandle, v7);
    }
    ndisDereferenceReceiveFilter(v6);
    a1 = v2;
  }
  return result;
}

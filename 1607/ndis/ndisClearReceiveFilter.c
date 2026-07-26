/*
 * XREFs of ndisClearReceiveFilter @ 0x1C003C9C4
 * Callers:
 *     ndisOidPostRcvFilterClearFilter @ 0x1C003D050 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C003D370 (ndisOidPostRcvFilterSetFilter.c)
 * Callees:
 *     ndisDereferenceReceiveFilter @ 0x1C003CAA8 (ndisDereferenceReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C003CDD8 (ndisFindReceiveFilterByFilterId.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qdD @ 0x1C0044560 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisClearReceiveFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 ReceiveFilterByFilterId; // rax
  void *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C00895E0 >= 4u )
    WPP_SF_qD(25LL, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2690028;
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  v6 = (void *)ReceiveFilterByFilterId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
    ndisDereferenceReceiveFilter(v6);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)byte_1C00895E0 >= 4u )
    WPP_SF_qdD(26LL, &WPP_e0b1f8b808d7390f894176100c6a8720_Traceguids, a1, a2, v4);
  return v4;
}

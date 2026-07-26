/*
 * XREFs of ndisClearReceiveFilter @ 0x1C0038A48
 * Callers:
 *     ndisOidPostRcvFilterClearFilter @ 0x1C00390D0 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C00393F0 (ndisOidPostRcvFilterSetFilter.c)
 * Callees:
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     ndisDereferenceReceiveFilter @ 0x1C0038B2C (ndisDereferenceReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C0038E5C (ndisFindReceiveFilterByFilterId.c)
 *     WPP_SF_qdD @ 0x1C0040988 (WPP_SF_qdD.c)
 */

__int64 __fastcall ndisClearReceiveFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 ReceiveFilterByFilterId; // rax
  void *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C0083720 >= 4u )
    WPP_SF_qD(0x19u, &WPP_5bdf5f30a197d5f3fc0ac0df652068c7_Traceguids, a1, a2);
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
  if ( (unsigned __int8)byte_1C0083720 >= 4u )
    WPP_SF_qdD(26LL, &WPP_5bdf5f30a197d5f3fc0ac0df652068c7_Traceguids, a1, a2, v4);
  return v4;
}

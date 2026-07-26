/*
 * XREFs of ndisClearReceiveFilter @ 0x1C0037D54
 * Callers:
 *     ndisOidPostRcvFilterClearFilter @ 0x1C00383E0 (ndisOidPostRcvFilterClearFilter.c)
 *     ndisOidPostRcvFilterSetFilter @ 0x1C0038700 (ndisOidPostRcvFilterSetFilter.c)
 * Callees:
 *     ndisDereferenceReceiveFilter @ 0x1C0037E38 (ndisDereferenceReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C0038168 (ndisFindReceiveFilterByFilterId.c)
 *     WPP_SF_qdD @ 0x1C003F248 (WPP_SF_qdD.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

__int64 __fastcall ndisClearReceiveFilter(__int64 a1, unsigned int a2)
{
  unsigned int v4; // edi
  __int64 ReceiveFilterByFilterId; // rax
  void *v6; // r14
  KIRQL v7; // r10

  v4 = 0;
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_qD(25LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, a1, a2);
  KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a1 + 96));
  *(_QWORD *)(a1 + 520) = KeGetCurrentThread();
  *(_DWORD *)(a1 + 1856) = 2690025;
  ReceiveFilterByFilterId = ndisFindReceiveFilterByFilterId(a1, a2);
  *(_QWORD *)(a1 + 520) = 0LL;
  *(_DWORD *)(a1 + 1856) = 0;
  v6 = (void *)ReceiveFilterByFilterId;
  KeReleaseSpinLock((PKSPIN_LOCK)(a1 + 96), v7);
  if ( v6 )
    ndisDereferenceReceiveFilter(v6);
  else
    v4 = -1073741811;
  if ( (unsigned __int8)byte_1C0085320 >= 4u )
    WPP_SF_qdD(26LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, a1, a2, v4);
  return v4;
}

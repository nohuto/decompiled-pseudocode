/*
 * XREFs of ndisOidPostRcvFilterSetFilter @ 0x1C0038700
 * Callers:
 *     <none>
 * Callees:
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     ndisClearReceiveFilter @ 0x1C0037D54 (ndisClearReceiveFilter.c)
 *     ndisFindReceiveFilterByFilterId @ 0x1C0038168 (ndisFindReceiveFilterByFilterId.c)
 *     WPP_SF_qD @ 0x1C003F388 (WPP_SF_qD.c)
 */

void __fastcall ndisOidPostRcvFilterSetFilter(__int64 a1)
{
  __int64 v2; // rdi
  __int64 v3; // rbp
  unsigned int v4; // edx
  KIRQL v5; // r10

  v2 = *(_QWORD *)a1;
  v3 = *(_QWORD *)(*(_QWORD *)(a1 + 32) + 40LL);
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qq(0x16u, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v2);
  if ( v2 )
  {
    if ( *(_DWORD *)(a1 + 40) )
    {
      v4 = *(_DWORD *)(v3 + 16);
      if ( v4 )
        ndisClearReceiveFilter(v2, v4);
    }
    else
    {
      KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v2 + 96));
      *(_QWORD *)(v2 + 520) = KeGetCurrentThread();
      *(_DWORD *)(v2 + 1856) = 2689748;
      ndisFindReceiveFilterByFilterId(v2, *(_DWORD *)(v3 + 16));
      *(_QWORD *)(v2 + 520) = 0LL;
      *(_DWORD *)(v2 + 1856) = 0;
      KeReleaseSpinLock((PKSPIN_LOCK)(v2 + 96), v5);
    }
  }
  if ( (unsigned __int8)byte_1C0085312 >= 4u )
    WPP_SF_qD(23LL, &WPP_63298f27d84d406e2a9901f9d2228ddf_Traceguids, v2, *(unsigned int *)(a1 + 40));
}

/*
 * XREFs of ndisNdkPcwRemoveCounter @ 0x1C00D7688
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00D7650 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A6E04 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A6EE8 (--1KLockHolder@@QEAA@XZ.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C00D6CE8 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D8234 (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00D8650 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

__int64 __fastcall ndisNdkPcwRemoveCounter(__int64 a1)
{
  struct _NDIS_NDK_BLOCK *v2; // rbx
  struct _NDIS_NDK_BLOCK **v3; // rdi
  struct _NDIS_MINIPORT_BLOCK *v4; // rbp
  const struct _UNICODE_STRING *MiniportName; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  struct _NDIS_NDK_BLOCK *v8; // rax
  KLockHolder v10; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v10, (struct KPushLockBase *)&ndisPcwMutex);
  v2 = NdkPcwNdkBlockList;
  v3 = &NdkPcwNdkBlockList;
  while ( v2 )
  {
    v4 = (struct _NDIS_MINIPORT_BLOCK *)*((_QWORD *)v2 + 1);
    MiniportName = ndisPcwGetMiniportName(v4);
    if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), MiniportName, v6)
      && (v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1)) != 0
      && (*((_DWORD *)v2 + 4) -= v7, *((int *)v2 + 4) <= 0) )
    {
      v8 = *(struct _NDIS_NDK_BLOCK **)v2;
      *((_DWORD *)v2 + 4) = 0;
      *v3 = v8;
      *(_QWORD *)v2 = 0LL;
      *((_QWORD *)v2 + 1) = 0LL;
      v2 = *v3;
      ndisDereferenceMiniport((__int64)v4);
    }
    else
    {
      v3 = (struct _NDIS_NDK_BLOCK **)v2;
      v2 = *(struct _NDIS_NDK_BLOCK **)v2;
    }
  }
  KLockHolder::~KLockHolder(&v10);
  return 0LL;
}

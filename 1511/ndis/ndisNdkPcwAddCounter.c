/*
 * XREFs of ndisNdkPcwAddCounter @ 0x1C0060AAC
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00D1620 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ??1KLockHolder@@QEAA@XZ @ 0x1C00A5350 (--1KLockHolder@@QEAA@XZ.c)
 *     ??0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z @ 0x1C00A5884 (--0KLockThisExclusive@@QEAA@AEAVKPushLockBase@@@Z.c)
 *     NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK @ 0x1C00D0CA0 (NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D225C (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 *     ?ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z @ 0x1C00D2710 (-ndisWildCardStringMatch@@YAEPEBU_UNICODE_STRING@@0E@Z.c)
 */

__int64 __fastcall ndisNdkPcwAddCounter(__int64 a1)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL v4; // di
  const struct _UNICODE_STRING *MiniportName; // rax
  unsigned __int8 v6; // r8
  unsigned __int8 v7; // al
  unsigned __int8 v8; // si
  _DWORD *NDKBlock; // rdi
  int v10; // ecx
  KLockHolder v12; // [rsp+20h] [rbp-28h] BYREF

  KLockThisExclusive::KLockThisExclusive((KLockThisExclusive *)&v12, &ndisPcwMutex);
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  v4 = v2;
  while ( v3 )
  {
    if ( v3->NDKBlock && ndisReferenceMiniport((__int64)v3) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v4);
      MiniportName = ndisPcwGetMiniportName(v3);
      if ( ndisWildCardStringMatch(*(const struct _UNICODE_STRING **)(a1 + 8), MiniportName, v6) )
      {
        v7 = NDIS_NDK_PCW_NUM_COUNTERS_SET_IN_MASK(*(_QWORD *)a1);
        v8 = v7;
        if ( v7 )
        {
          NDKBlock = v3->NDKBlock;
          v10 = NDKBlock[4];
          if ( v10 )
          {
            if ( v10 < 0x7FFFFFFF - v7 )
              NDKBlock[4] = v7 + v10;
          }
          else if ( ndisReferenceMiniport((__int64)v3) )
          {
            *((_QWORD *)NDKBlock + 1) = v3;
            NDKBlock[4] = v8;
            NDKBlock[5] = v3->IfBlock->ifIndex;
            *(_QWORD *)NDKBlock = NdkPcwNdkBlockList;
            NdkPcwNdkBlockList = (struct _NDIS_NDK_BLOCK *)NDKBlock;
          }
        }
      }
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v3, 0x59u);
    }
    v3 = v3->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  KLockHolder::~KLockHolder(&v12);
  return 0LL;
}

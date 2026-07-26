/*
 * XREFs of ndisNdkPcwEnumerateInstances @ 0x1C0060C00
 * Callers:
 *     ndisNdkPcwProviderCallback @ 0x1C00D1620 (ndisNdkPcwProviderCallback.c)
 * Callees:
 *     ndisReferenceMiniport @ 0x1C0004C2C (ndisReferenceMiniport.c)
 *     ndisDereferenceMiniport @ 0x1C000B190 (ndisDereferenceMiniport.c)
 *     ?ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C00D225C (-ndisPcwGetMiniportName@@YAPEBU_UNICODE_STRING@@PEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

__int64 __fastcall ndisNdkPcwEnumerateInstances(PPCW_BUFFER Buffer)
{
  KIRQL v2; // al
  struct _NDIS_MINIPORT_BLOCK *v3; // rbx
  KIRQL v4; // di
  const UNICODE_STRING *MiniportName; // rax
  __int64 v6; // r8
  struct _PCW_DATA Data; // [rsp+30h] [rbp-18h] BYREF

  Data.Data = 0LL;
  Data.Size = 0;
  v2 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
  v3 = ndisMiniportList;
  v4 = v2;
  while ( v3 )
  {
    if ( v3->NDKBlock && ndisReferenceMiniport((__int64)v3) )
    {
      KeReleaseSpinLock(&ndisMiniportListLock, v4);
      MiniportName = ndisPcwGetMiniportName(v3);
      PcwAddInstance(Buffer, MiniportName, *(_DWORD *)(v6 + 4), 1u, &Data);
      v4 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
      ndisDereferenceMiniport((__int64)v3, 0x58u);
    }
    v3 = v3->NextGlobalMiniport;
  }
  KeReleaseSpinLock(&ndisMiniportListLock, v4);
  return 0LL;
}

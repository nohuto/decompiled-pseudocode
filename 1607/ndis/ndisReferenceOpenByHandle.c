/*
 * XREFs of ndisReferenceOpenByHandle @ 0x1C0018A98
 * Callers:
 *     ndisAllocateReceiveQueue @ 0x1C003C4EC (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003E208 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C00459A0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C0045CE0 (ndisMDirectOidRequest.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A8C44 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C0016800 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qD @ 0x1C004451C (WPP_SF_qD.c)
 *     WPP_SF_qDL @ 0x1C005D160 (WPP_SF_qDL.c)
 */

unsigned __int8 __fastcall ndisReferenceOpenByHandle(__int64 a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // r14
  struct _NDIS_OPEN_BLOCK *i; // rax
  __int64 v7; // rdx

  v4 = 0;
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qD(107LL, &WPP_6aaf1c75542c3fb73373be6b27303be0_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == (struct _NDIS_OPEN_BLOCK *)a1 )
    {
      KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a1 + 232));
      if ( (*(_DWORD *)(a1 + 224) & 0x8000) == 0 && *(_DWORD *)(a1 + 228) )
      {
        ndisMReferenceOpen(a1);
        v4 = 1;
      }
      KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a1 + 232));
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v5);
  if ( (unsigned __int8)byte_1C00895DB >= 4u )
    WPP_SF_qDL(v4, v7, a1, a2, v4);
  return v4;
}

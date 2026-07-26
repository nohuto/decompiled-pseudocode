/*
 * XREFs of ndisReferenceOpenByHandle @ 0x1C001AC44
 * Callers:
 *     ndisAllocateReceiveQueue @ 0x1C0038570 (ndisAllocateReceiveQueue.c)
 *     ndisSetReceiveFilter @ 0x1C003A288 (ndisSetReceiveFilter.c)
 *     ndisLegacyRequest @ 0x1C0041EA0 (ndisLegacyRequest.c)
 *     ndisMDirectOidRequest @ 0x1C00421E0 (ndisMDirectOidRequest.c)
 *     ?ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z @ 0x1C00A04A4 (-ndisBindNdis6Protocol@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_PROTOCOL_BLOCK@@@Z.c)
 * Callees:
 *     ?ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z @ 0x1C001AD14 (-ndisMReferenceOpen@@YAXPEAU_NDIS_OPEN_BLOCK@@W4_NDIS_OPEN_REFTAG@@@Z.c)
 *     WPP_SF_qD @ 0x1C0038424 (WPP_SF_qD.c)
 *     WPP_SF_qDL @ 0x1C0058C94 (WPP_SF_qDL.c)
 */

unsigned __int8 __fastcall ndisReferenceOpenByHandle(struct _NDIS_OPEN_BLOCK *a1, unsigned __int8 a2)
{
  unsigned __int8 v4; // bl
  KIRQL v5; // r14
  struct _NDIS_OPEN_BLOCK *i; // rax
  __int64 v7; // rdx
  __int64 v8; // rdx

  v4 = 0;
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qD(107LL, &WPP_bb11c1e4a73cb58e8208f2e892716016_Traceguids, a1, a2);
  v5 = KeAcquireSpinLockRaiseToDpc(&ndisGlobalOpenListLock);
  for ( i = ndisGlobalOpenList; i; i = i->NextGlobalOpen )
  {
    if ( i == a1 )
    {
      KeAcquireSpinLockAtDpcLevel(&a1->SpinLock);
      if ( (a1->OpenFlags & 0x8000) == 0 && a1->References )
      {
        LOBYTE(v7) = a2;
        ndisMReferenceOpen(a1, v7);
        v4 = 1;
      }
      KeReleaseSpinLockFromDpcLevel(&a1->SpinLock);
      break;
    }
  }
  KeReleaseSpinLock(&ndisGlobalOpenListLock, v5);
  if ( (unsigned __int8)byte_1C008371B >= 4u )
    WPP_SF_qDL(v4, v8, a1, a2, v4);
  return v4;
}

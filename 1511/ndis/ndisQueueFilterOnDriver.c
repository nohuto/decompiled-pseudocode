/*
 * XREFs of ndisQueueFilterOnDriver @ 0x1C0018834
 * Callers:
 *     ?ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BIND_FILTER_LINK@@@Z @ 0x1C00E1F18 (-ndisAttachFilterInner@@YAHPEAU_NDIS_MINIPORT_BLOCK@@PEAU_NDIS_FILTER_DRIVER_BLOCK@@KPEAUNDIS_BI.c)
 * Callees:
 *     WPP_SF_qq @ 0x1C0026510 (WPP_SF_qq.c)
 *     WPP_SF_qqd @ 0x1C004C3E8 (WPP_SF_qqd.c)
 *     ndisReferencePackage @ 0x1C00950DC (ndisReferencePackage.c)
 *     ndisDereferencePackage @ 0x1C009512C (ndisDereferencePackage.c)
 */

unsigned __int8 __fastcall ndisQueueFilterOnDriver(__int64 a1, __int64 a2)
{
  unsigned __int8 v4; // si
  KIRQL v5; // al
  KIRQL v6; // r15

  v4 = 1;
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qq(45LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, a2);
  ndisReferencePackage(&ndisPkgs);
  v5 = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(a2 + 72));
  v6 = v5;
  if ( *(_BYTE *)(a2 + 82) )
  {
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 72), v5);
    v4 = 0;
  }
  else
  {
    KeAcquireSpinLockAtDpcLevel((PKSPIN_LOCK)(a2 + 40));
    *(_QWORD *)(a1 + 8) = *(_QWORD *)(a2 + 24);
    *(_QWORD *)(a2 + 24) = a1;
    KeReleaseSpinLockFromDpcLevel((PKSPIN_LOCK)(a2 + 40));
    KeReleaseSpinLock((PKSPIN_LOCK)(a2 + 72), v6);
  }
  ndisDereferencePackage(&ndisPkgs);
  if ( (unsigned __int8)ndisWppEnabledLevelPerFlag >= 4u )
    WPP_SF_qqd(46LL, &WPP_350f249dad1d39316f5dcf1630ed8af4_Traceguids, a1, a2, v4);
  return v4;
}

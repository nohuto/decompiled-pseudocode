/*
 * XREFs of ndisEnableWppTracingCallback @ 0x1C0049F78
 * Callers:
 *     WppClassicProviderCallback @ 0x1C0049BA0 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C00CD390 (WppTraceCallback.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C0003280 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C0019084 (ndisReferenceMiniport.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C001F864 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     WPP_SF_qq @ 0x1C0022860 (WPP_SF_qq.c)
 *     WPP_SF_ @ 0x1C00228A0 (WPP_SF_.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C0049214 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
 */

void __fastcall ndisEnableWppTracingCallback(__int64 a1, __int64 a2, __int64 a3, unsigned int a4, unsigned __int8 a5)
{
  char v5; // r11
  char v6; // bl
  int v7; // edi
  char v8; // r8
  char v9; // r11
  KIRQL v10; // al
  struct _NDIS_MINIPORT_BLOCK *v11; // rbx
  KIRQL v12; // si

  v5 = a3;
  LOBYTE(a3) = a5;
  LOBYTE(a1) = v5;
  v6 = a4;
  v7 = 0;
  ndisWppExtendedCallback(a1, a4, a3);
  if ( v9 && (v6 & 2) != 0 && v8 )
  {
    if ( byte_1C0085309 )
      WPP_SF_(0x64u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v11 = ndisMiniportList;
    v12 = v10;
    while ( v11 )
    {
      if ( (unsigned int)++v7 > 1 && byte_1C0085309 )
        WPP_SF_(0x65u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
      if ( v11->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v11, 0x52u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v12);
        ndisMEmitTraceRundown(v11);
        v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v11, 0x52u);
      }
      else if ( byte_1C0085309 )
      {
        WPP_SF_qq(0x66u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids, v11, v11->DriverHandle);
      }
      v11 = v11->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v12);
    if ( byte_1C0085309 )
      WPP_SF_(0x67u, &WPP_83ec3feda1c7d74e49c0301905f57f77_Traceguids);
  }
}

/*
 * XREFs of ndisEnableWppTracingCallback @ 0x1C004F1A8
 * Callers:
 *     WppClassicProviderCallback @ 0x1C004EDD0 (WppClassicProviderCallback.c)
 *     WppTraceCallback @ 0x1C00CC250 (WppTraceCallback.c)
 * Callees:
 *     ndisDereferenceMiniport @ 0x1C000CD90 (ndisDereferenceMiniport.c)
 *     ndisReferenceMiniport @ 0x1C000D160 (ndisReferenceMiniport.c)
 *     ?ndisWppExtendedCallback@@YAXEKE@Z @ 0x1C001F488 (-ndisWppExtendedCallback@@YAXEKE@Z.c)
 *     WPP_SF_ @ 0x1C00267A0 (WPP_SF_.c)
 *     WPP_SF_qq @ 0x1C003C398 (WPP_SF_qq.c)
 *     ?ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z @ 0x1C004E304 (-ndisMEmitTraceRundown@@YAXPEAU_NDIS_MINIPORT_BLOCK@@@Z.c)
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
    if ( byte_1C00895C9 )
      WPP_SF_(0x64u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
    v10 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
    v11 = ndisMiniportList;
    v12 = v10;
    while ( v11 )
    {
      if ( (unsigned int)++v7 > 1 && byte_1C00895C9 )
        WPP_SF_(0x65u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
      if ( v11->PnPDeviceState == NdisPnPDeviceStarted && ndisReferenceMiniport((__int64)v11, 0x54u) )
      {
        KeReleaseSpinLock(&ndisMiniportListLock, v12);
        ndisMEmitTraceRundown(v11);
        v12 = KeAcquireSpinLockRaiseToDpc(&ndisMiniportListLock);
        ndisDereferenceMiniport((__int64)v11);
      }
      else if ( byte_1C00895C9 )
      {
        WPP_SF_qq(0x66u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids, v11, v11->DriverHandle);
      }
      v11 = v11->NextGlobalMiniport;
    }
    KeReleaseSpinLock(&ndisMiniportListLock, v12);
    if ( byte_1C00895C9 )
      WPP_SF_(0x67u, &WPP_79db669c0b7b3867b570cbb53c4c883f_Traceguids);
  }
}

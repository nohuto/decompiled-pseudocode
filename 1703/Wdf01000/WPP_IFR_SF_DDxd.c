/*
 * XREFs of WPP_IFR_SF_DDxd @ 0x1C007FDD4
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C00029F0 (imp_WdfMemoryCreate.c)
 *     ?FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z @ 0x1C00060A0 (-FxCalculateObjectTotalSize2@@YAJPEAU_FX_DRIVER_GLOBALS@@GG_KPEA_K@Z.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     ?Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z @ 0x1C001F040 (-Initialize@FxDevice@@QEAAJPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@@Z.c)
 *     ?_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAV1@@Z @ 0x1C0021950 (-_Create@FxDevice@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAPEAUWDFDEVICE_INIT@@PEAU_WDF_OBJECT_ATTRIBUTES@.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0022700 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0033F00 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     ?FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@@GW4FxObjectType@@@Z @ 0x1C00348B0 (-FxObjectHandleAlloc@@YAPEAXPEAU_FX_DRIVER_GLOBALS@@W4_POOL_TYPE@@_KKPEAU_WDF_OBJECT_ATTRIBUTES@.c)
 * Callees:
 *     FxIFR @ 0x1C0005E30 (FxIFR.c)
 *     FxWmiTraceMessage @ 0x1C0070684 (FxWmiTraceMessage.c)
 */

void __fastcall WPP_IFR_SF_DDxd(
        _FX_DRIVER_GLOBALS *globals,
        unsigned __int8 _a1,
        unsigned int _a2,
        unsigned __int16 _a3,
        const _GUID *_a4,
        unsigned int globals_0,
        unsigned int level,
        __int64 flags,
        int id)
{
  if ( (WPP_GLOBAL_WDF_Control.Characteristics & 0x80000) != 0 && BYTE1(WPP_GLOBAL_WDF_Control.Flags) >= 2u )
    FxWmiTraceMessage(
      (unsigned __int64)WPP_GLOBAL_WDF_Control.CurrentIrp,
      43LL,
      WPP_HandleAPI_cpp_Traceguids,
      0xAu,
      &globals_0,
      4LL,
      &level,
      4LL,
      &flags,
      8LL,
      &id,
      4LL,
      0LL);
  FxIFR(
    globals,
    2u,
    0x14u,
    WPP_HandleAPI_cpp_Traceguids,
    0xAu,
    &globals_0,
    4LL,
    &level,
    4LL,
    &flags,
    8LL,
    &id,
    4LL,
    0LL);
}

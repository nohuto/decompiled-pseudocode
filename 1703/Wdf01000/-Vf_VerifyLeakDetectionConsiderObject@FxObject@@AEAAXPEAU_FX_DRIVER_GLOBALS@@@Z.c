/*
 * XREFs of ?Vf_VerifyLeakDetectionConsiderObject@FxObject@@AEAAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00D4AB0
 * Callers:
 *     imp_WdfMemoryCreate @ 0x1C00029F0 (imp_WdfMemoryCreate.c)
 *     imp_WdfRequestCreate @ 0x1C0006160 (imp_WdfRequestCreate.c)
 *     ?OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z @ 0x1C0008340 (-OnCreate@FxPkgGeneral@@AEAAJPEAVFxIrp@@@Z.c)
 *     ?DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z @ 0x1C0008F60 (-DispatchStep1@FxPkgIo@@QEAAJPEAU_IRP@@PEAX@Z.c)
 *     ?Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z @ 0x1C000C2A0 (-Commit@FxObject@@QEAAJPEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAXPEAV1@E@Z.c)
 *     imp_WdfRegistryOpenKey @ 0x1C000C920 (imp_WdfRegistryOpenKey.c)
 *     imp_WdfObjectCreate @ 0x1C001C530 (imp_WdfObjectCreate.c)
 *     ?AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z @ 0x1C0020D30 (-AllocateTarget@FxDeviceBase@@QEAAJPEAPEAVFxIoTarget@@E@Z.c)
 *     ?CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@PEAPEAVFxIoQueue@@@Z @ 0x1C0022700 (-CreateQueue@FxPkgIo@@QEAAJPEAU_WDF_IO_QUEUE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAVFxDriver@@P.c)
 *     ?Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C00266D0 (-Initialize@FxPkgPnp@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z @ 0x1C0029310 (-Initialize@FxPkgFdo@@UEAAJPEAUWDFDEVICE_INIT@@@Z.c)
 *     ?_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTANCE_CONFIG@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAPEAUWDFWMIINSTANCE__@@PEAPEAV1@@Z @ 0x1C0033F00 (-_Create@FxWmiInstanceExternal@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAVFxWmiProvider@@PEAU_WDF_WMI_INSTA.c)
 *     ?_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@PEAU_WDF_WMI_PROVIDER_CONFIG@@PEAPEAUWDFWMIPROVIDER__@@PEAPEAV1@@Z @ 0x1C0034380 (-_Create@FxWmiProvider@@SAJPEAU_FX_DRIVER_GLOBALS@@PEAUWDFDEVICE__@@PEAU_WDF_OBJECT_ATTRIBUTES@@.c)
 *     imp_WdfDeviceWdmDispatchIrpToIoQueue @ 0x1C0034BE0 (imp_WdfDeviceWdmDispatchIrpToIoQueue.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0019F44 (WPP_IFR_SF_.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     FxVerifierIsDebugInfoFlagSetForType @ 0x1C0080434 (FxVerifierIsDebugInfoFlagSetForType.c)
 *     WPP_IFR_SF_DDD @ 0x1C0081510 (WPP_IFR_SF_DDD.c)
 */

void __fastcall FxObject::Vf_VerifyLeakDetectionConsiderObject(FxObject *this, _FX_DRIVER_GLOBALS *FxDriverGlobals)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rcx
  FxObjectDebugLeakDetection *FxVerifyLeakDetection; // rbx
  __int16 v5; // dx
  unsigned int level; // esi
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  unsigned __int16 v9; // r9
  const _GUID *traceGuid; // [rsp+20h] [rbp-28h]

  m_Globals = this->m_Globals;
  FxVerifyLeakDetection = m_Globals->FxVerifyLeakDetection;
  if ( FxVerifyLeakDetection
    && FxVerifyLeakDetection->Enabled
    && (FxVerifierIsDebugInfoFlagSetForType(
          m_Globals->DebugExtension->ObjectDebugInfo,
          this->m_Type,
          FxObjectDebugTrackObjectCount)
     || v5 == 4098) )
  {
    if ( v5 == 4098 )
    {
      if ( v5 == 4098 && _InterlockedIncrement(&FxVerifyLeakDetection->DeviceCnt) >= 2 )
        _InterlockedExchangeAdd(&FxVerifyLeakDetection->LimitScaled, FxVerifyLeakDetection->Limit);
    }
    else if ( v5 == 4104 && BYTE5(this[2].__vftable) != 2 )
    {
      return;
    }
    BYTE4(this[-1].m_ChildEntry.Blink) = 1;
    level = _InterlockedIncrement(&FxVerifyLeakDetection->ObjectCnt);
    if ( level == FxVerifyLeakDetection->LimitScaled )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0x14u, 0xBu, WPP_FxObject_cpp_Traceguids);
      WPP_IFR_SF_DDD(
        this->m_Globals,
        v7,
        v8,
        v9,
        traceGuid,
        level,
        FxVerifyLeakDetection->Limit,
        FxVerifyLeakDetection->LimitScaled);
      FxVerifierDbgBreakPoint(this->m_Globals);
      FxVerifyLeakDetection->Enabled = 0;
    }
  }
}

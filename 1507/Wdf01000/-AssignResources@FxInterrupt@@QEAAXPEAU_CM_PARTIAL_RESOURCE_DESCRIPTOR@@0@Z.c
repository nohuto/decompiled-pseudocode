/*
 * XREFs of ?AssignResources@FxInterrupt@@QEAAXPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C002A050
 * Callers:
 *     ?PnpMatchResources@FxPkgPnp@@IEAAJXZ @ 0x1C001A370 (-PnpMatchResources@FxPkgPnp@@IEAAJXZ.c)
 *     ?Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0029C88 (-Initialize@FxInterrupt@@QEAAJPEAVFxDevice@@PEAVFxObject@@PEAU_WDF_INTERRUPT_CONFIG@@@Z.c)
 * Callees:
 *     WPP_IFR_SF_ @ 0x1C0022488 (WPP_IFR_SF_.c)
 *     WPP_IFR_SF_ddLLdxDD @ 0x1C002A1B8 (WPP_IFR_SF_ddLLdxDD.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

void __fastcall FxInterrupt::AssignResources(
        FxInterrupt *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmDescTrans)
{
  _KINTERRUPT_MODE v6; // edx
  bool v7; // zf
  unsigned __int8 Class; // cl
  unsigned __int8 v9; // cl
  unsigned __int8 v10; // al
  __int64 v11; // rdx
  unsigned __int16 v12; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v14; // rax
  _FX_DRIVER_GLOBALS *v15; // rax
  __int64 v16; // rax
  const _GUID *traceGuid; // [rsp+20h] [rbp-58h]
  int v18; // [rsp+80h] [rbp+8h] BYREF

  if ( CmDescTrans->u.MessageInterrupt.Raw.MessageCount )
  {
    if ( !FxLibraryGlobals.ProcessorGroupSupport )
    {
      m_Globals = this->m_Globals;
      v18 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        m_Globals->Public.DriverName,
        (const char *)&v18,
        m_Globals->Public.DriverName,
        (const char *)&v18);
      if ( *(_BYTE *)(v14 + 318) )
        DbgBreakPoint();
    }
  }
  if ( this->m_PassiveHandling )
  {
    if ( (CmDescTrans->Flags & 2) != 0 )
    {
      WPP_IFR_SF_(this->m_Globals, 2u, 0xCu, 0x15u, WPP_InterruptObject_cpp_Traceguids);
      v15 = this->m_Globals;
      v18 = 7567731;
      Mx::MxDbgPrint(
        "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
        v15->Public.DriverName,
        (const char *)&v18,
        v15->Public.DriverName,
        (const char *)&v18);
      if ( *(_BYTE *)(v16 + 318) )
        DbgBreakPoint();
    }
  }
  this->m_InterruptInfo.Group = CmDescTrans->u.MessageInterrupt.Raw.MessageCount;
  this->m_InterruptInfo.TargetProcessorSet = CmDescTrans->u.Interrupt.Affinity;
  this->m_InterruptInfo.ShareDisposition = CmDescTrans->ShareDisposition;
  v6 = CmDescTrans->Flags & 1;
  v7 = this->m_PassiveHandling == 0;
  this->m_InterruptInfo.Mode = v6;
  Class = CmDescTrans->u.Connection.Class;
  if ( !v7 )
    Class = 0;
  this->m_InterruptInfo.Irql = Class;
  v9 = (CmDescTrans->Flags & 2) != 0;
  this->m_InterruptInfo.MessageSignaled = v9;
  if ( v6 != Latched || (v10 = 1, v9) )
    v10 = 0;
  this->m_IsEdgeTriggeredNonMsiInterrupt = v10;
  if ( v9 && CmDescRaw->u.MessageInterrupt.Raw.MessageCount > 1u )
  {
    v11 = 8LL;
    this->m_InterruptInfo.Vector = CmDescTrans->u.Generic.Start.HighPart + this->m_InterruptInfo.MessageNumber;
  }
  else
  {
    this->m_InterruptInfo.Vector = CmDescTrans->u.Interrupt.Vector;
    if ( v9 )
    {
      v11 = 4LL;
    }
    else
    {
      v11 = 1LL;
      if ( (CmDescTrans->Flags & 1) != 0 )
        v11 = 2LL;
    }
  }
  this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, (FxDeviceInfoFlags)v11);
  if ( this->m_PassiveHandling )
    this->m_DeviceBase->SetDeviceTelemetryInfoFlags(this->m_DeviceBase, DeviceInfoPassiveLevelInterrupt);
  this->m_CmTranslatedResource = CmDescTrans;
  WPP_IFR_SF_ddLLdxDD(
    this->m_Globals,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.MessageSignaled,
    v12,
    traceGuid,
    this->m_InterruptInfo.MessageSignaled,
    this->m_InterruptInfo.MessageNumber,
    this->m_Policy,
    this->m_Priority,
    this->m_InterruptInfo.Group,
    this->m_InterruptInfo.TargetProcessorSet,
    this->m_InterruptInfo.Irql,
    this->m_InterruptInfo.Vector);
}

/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C009AF84
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C009B1F8 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r13
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v9; // rcx
  FxCollectionInternal *v10; // r9
  _LIST_ENTRY *v11; // r11
  _LIST_ENTRY *v12; // rbx
  unsigned int v13; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 _a2; // rcx
  const void *v16; // rsi
  FxDeviceBase *v17; // rcx
  unsigned __int64 v18; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v19; // r14
  FxDeviceBase *v20; // rcx
  unsigned __int64 v21; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v22; // rbx
  FxDeviceBase *v23; // rcx
  unsigned __int64 v24; // rcx

  m_Resources = this->m_Resources;
  m_Globals = this->m_Globals;
  p_Blink = &m_Resources->m_ListHead.Flink[-1].Blink;
  v9 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  v10 = &m_Resources->FxCollectionInternal;
  if ( p_Blink == (_LIST_ENTRY **)v10 )
    goto LABEL_5;
  do
  {
    v11 = *p_Blink;
    v12 = *v9;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4) == *CmResource )
      break;
    p_Blink = &p_Blink[1][-1].Blink;
    v9 = &v9[1][-1].Blink;
  }
  while ( p_Blink != (_LIST_ENTRY **)v10 );
  if ( p_Blink == (_LIST_ENTRY **)v10 )
  {
LABEL_5:
    v13 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a2 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x26u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, _a2, -1073741811);
  }
  else
  {
    v16 = (char *)&v12[7].Blink + 4;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v12[7].Blink + 4) == *CmResourceRaw )
    {
      v19 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v11[6].Blink;
      if ( RtlCompareMemory((char *)&v11[7].Blink + 4, &v11[6].Blink, 0x14uLL) == 20 )
      {
        v22 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
        if ( RtlCompareMemory(v16, v22, 0x14uLL) == 20 )
        {
          *CmResourceRaw = v22;
          v13 = 0;
          *CmResource = v19;
          return v13;
        }
        v13 = -1073741811;
        v23 = this->m_DeviceBase;
        if ( v23->m_ObjectSize )
          v24 = (unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v24 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x29u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, v24, -1073741811);
      }
      else
      {
        v13 = -1073741811;
        v20 = this->m_DeviceBase;
        if ( v20->m_ObjectSize )
          v21 = (unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL;
        else
          v21 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, v21, -1073741811);
      }
    }
    else
    {
      v13 = -1073741811;
      v17 = this->m_DeviceBase;
      if ( v17->m_ObjectSize )
        v18 = (unsigned __int64)v17 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v18 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x27u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, v18, -1073741811);
    }
  }
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return v13;
}

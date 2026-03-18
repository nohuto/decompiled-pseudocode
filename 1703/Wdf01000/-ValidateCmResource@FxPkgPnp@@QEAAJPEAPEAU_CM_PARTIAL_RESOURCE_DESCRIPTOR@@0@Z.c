/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0097EFC
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C00980F0 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // r12
  _LIST_ENTRY *Flink; // r10
  FxCollectionInternal *v9; // r9
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v11; // r11
  _LIST_ENTRY *v12; // rcx
  _LIST_ENTRY *v13; // rdi
  unsigned int v14; // ebx
  FxDeviceBase *m_DeviceBase; // rdx
  unsigned __int16 m_ObjectSize; // ax
  unsigned __int64 _a2; // rdx
  const void *v18; // rbx
  FxDeviceBase *v19; // rcx
  unsigned __int16 v20; // ax
  unsigned __int64 v21; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v22; // rsi
  FxDeviceBase *v23; // rcx
  unsigned __int16 v24; // ax
  unsigned __int64 v25; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v26; // rdi
  FxDeviceBase *v27; // rcx
  unsigned __int16 v28; // ax
  unsigned __int64 v29; // rcx

  m_Resources = this->m_Resources;
  m_Globals = this->m_Globals;
  Flink = m_Resources->m_ListHead.Flink;
  v9 = &m_Resources->FxCollectionInternal;
  p_Blink = &Flink[-1].Blink;
  v11 = &this->m_ResourcesRaw->m_ListHead.Flink[-1].Blink;
  if ( p_Blink == (_LIST_ENTRY **)v9 )
    goto LABEL_5;
  do
  {
    v12 = *p_Blink;
    v13 = *v11;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&(*p_Blink)[7].Blink + 4) == *CmResource )
      break;
    p_Blink = &p_Blink[1][-1].Blink;
    v11 = &v11[1][-1].Blink;
  }
  while ( p_Blink != (_LIST_ENTRY **)v9 );
  if ( p_Blink == (_LIST_ENTRY **)v9 )
  {
LABEL_5:
    v14 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    m_ObjectSize = m_DeviceBase->m_ObjectSize;
    _a2 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    if ( !m_ObjectSize )
      _a2 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x22u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, _a2, -1073741811);
  }
  else
  {
    v18 = (char *)&v13[7].Blink + 4;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v13[7].Blink + 4) == *CmResourceRaw )
    {
      v22 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
      if ( RtlCompareMemory((char *)&v12[7].Blink + 4, &v12[6].Blink, 0x14uLL) == 20 )
      {
        v26 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v13[6].Blink;
        if ( RtlCompareMemory(v18, v26, 0x14uLL) == 20 )
        {
          *CmResource = v22;
          v14 = 0;
          *CmResourceRaw = v26;
          return v14;
        }
        v14 = -1073741811;
        v27 = this->m_DeviceBase;
        v28 = v27->m_ObjectSize;
        v29 = (unsigned __int64)v27 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v28 )
          v29 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x25u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, v29, -1073741811);
      }
      else
      {
        v14 = -1073741811;
        v23 = this->m_DeviceBase;
        v24 = v23->m_ObjectSize;
        v25 = (unsigned __int64)v23 ^ 0xFFFFFFFFFFFFFFF8uLL;
        if ( !v24 )
          v25 = 0LL;
        WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x24u, WPP_PnpStateMachine_cpp_Traceguids, *CmResource, v25, -1073741811);
      }
    }
    else
    {
      v14 = -1073741811;
      v19 = this->m_DeviceBase;
      v20 = v19->m_ObjectSize;
      v21 = (unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
      if ( !v20 )
        v21 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, v21, -1073741811);
    }
  }
  FxVerifierDbgBreakPoint(m_Globals);
  return v14;
}

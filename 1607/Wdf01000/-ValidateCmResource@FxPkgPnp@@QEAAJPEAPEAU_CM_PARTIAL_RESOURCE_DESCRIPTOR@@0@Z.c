/*
 * XREFs of ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0093B90
 * Callers:
 *     ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0093D74 (-ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTER.c)
 * Callees:
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxPkgPnp::ValidateCmResource(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR **CmResource)
{
  FxCmResList *m_Resources; // r9
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  _LIST_ENTRY **p_Blink; // r10
  _LIST_ENTRY **v9; // rcx
  FxCollectionInternal *v10; // r9
  _LIST_ENTRY *v11; // r11
  _LIST_ENTRY *v12; // rbp
  unsigned int v13; // ebx
  FxDeviceBase *m_DeviceBase; // rcx
  unsigned __int64 _a2; // rcx
  unsigned __int16 v16; // r9
  const void *_a1; // rax
  const void *v18; // rbx
  FxDeviceBase *v19; // rcx
  unsigned __int64 v20; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v21; // r15
  FxDeviceBase *v22; // rcx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v23; // rbp
  FxDeviceBase *v24; // rcx

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
    v16 = 34;
    _a1 = *CmResource;
  }
  else
  {
    v18 = (char *)&v12[7].Blink + 4;
    if ( (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)((char *)&v12[7].Blink + 4) != *CmResourceRaw )
    {
      v13 = -1073741811;
      v19 = this->m_DeviceBase;
      if ( v19->m_ObjectSize )
        v20 = (unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        v20 = 0LL;
      WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x23u, WPP_PnpStateMachine_cpp_Traceguids, *CmResourceRaw, v20, -1073741811);
      goto LABEL_10;
    }
    v21 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v11[6].Blink;
    if ( RtlCompareMemory((char *)&v11[7].Blink + 4, &v11[6].Blink, 0x14uLL) == 20 )
    {
      v23 = (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)&v12[6].Blink;
      if ( RtlCompareMemory(v18, v23, 0x14uLL) == 20 )
      {
        *CmResource = v21;
        v13 = 0;
        *CmResourceRaw = v23;
        return v13;
      }
      v13 = -1073741811;
      v24 = this->m_DeviceBase;
      if ( v24->m_ObjectSize )
        _a2 = (unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      v16 = 37;
      _a1 = *CmResourceRaw;
    }
    else
    {
      v13 = -1073741811;
      v22 = this->m_DeviceBase;
      if ( v22->m_ObjectSize )
        _a2 = (unsigned __int64)v22 ^ 0xFFFFFFFFFFFFFFF8uLL;
      else
        _a2 = 0LL;
      v16 = 36;
      _a1 = *CmResource;
    }
  }
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v16, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, -1073741811);
LABEL_10:
  FxVerifierDbgBreakPoint(m_Globals);
  return v13;
}

/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0093D74
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C0015980 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C00671F0 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0093B90 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // rdx
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v13; // r13
  FxDeviceBase *v14; // rax
  unsigned __int64 v15; // rax
  int v16; // r15d
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rcx
  FxDeviceBase *v19; // rax
  const void *v20; // rax
  FxDeviceBase *v21; // rax
  const void *_a3; // rax
  const void *v23; // rcx
  FxDeviceBase *v25; // rax
  const void *v26; // rax
  const void *v27; // rcx
  unsigned __int16 v28; // r9
  FxDeviceBase *v29; // rax
  FxDeviceBase *v30; // rax
  unsigned __int64 v31; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *_a1; // [rsp+28h] [rbp-60h]
  __int64 _a2; // [rsp+30h] [rbp-58h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v34; // [rsp+90h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v35; // [rsp+98h] [rbp+10h] BYREF
  void *v36; // [rsp+A0h] [rbp+18h]
  _WDF_INTERRUPT_CONFIG *v37; // [rsp+A8h] [rbp+20h]

  v37 = Configuration;
  v36 = CmIntResource;
  m_Globals = this->m_Globals;
  v34 = CmIntResourceRaw;
  v35 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v34, &v35);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v34;
  if ( v34->Type != 2 )
  {
    v8 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v11 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    v12 = 38;
    _a2 = v11;
    _a1 = CmIntResourceRaw;
LABEL_7:
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v12, WPP_PnpStateMachine_cpp_Traceguids, _a1, _a2, -1073741811);
    goto LABEL_8;
  }
  v13 = v35;
  if ( v35->Type != 2 )
  {
    v8 = -1073741811;
    v14 = this->m_DeviceBase;
    if ( v14->m_ObjectSize )
      v15 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    v12 = 39;
    _a2 = v15;
    _a1 = CmIntResource;
    goto LABEL_7;
  }
  v16 = 0;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    if ( v13 != (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)Flink[-2].Blink )
    {
      if ( v16 )
      {
        v8 = -1073741811;
        v19 = this->m_DeviceBase;
        if ( v19->m_ObjectSize )
          v20 = (const void *)((unsigned __int64)v19 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v20 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x28u, WPP_PnpStateMachine_cpp_Traceguids, v20, -1073741811);
        goto LABEL_8;
      }
      goto LABEL_32;
    }
    if ( p_Blink[34] && v37->PassiveHandling )
    {
      v25 = this->m_DeviceBase;
      if ( v25->m_ObjectSize )
        v26 = (const void *)((unsigned __int64)v25 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      if ( *((_WORD *)p_Blink + 5) )
        v27 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v27 = 0LL;
      v28 = 41;
      goto LABEL_44;
    }
    if ( *((_BYTE *)p_Blink + 258) && v37->CanWakeDevice )
    {
      v29 = this->m_DeviceBase;
      if ( v29->m_ObjectSize )
        v26 = (const void *)((unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      if ( *((_WORD *)p_Blink + 5) )
        v27 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v27 = 0LL;
      v28 = 42;
LABEL_44:
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, v28, WPP_PnpStateMachine_cpp_Traceguids, v36, v27, v26);
      return (unsigned int)-1073741811;
    }
    if ( (v13->Flags & 2) == 0 )
    {
      v21 = this->m_DeviceBase;
      if ( v21->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)v21 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      if ( *((_WORD *)p_Blink + 5) )
        v23 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v23 = 0LL;
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, v36, v23, _a3);
      v9 = v34;
      goto LABEL_32;
    }
    if ( ++v16 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
      break;
LABEL_32:
    Flink = Flink->Flink;
    if ( Flink == &this->m_InterruptListHead )
      return 0;
  }
  v8 = -1073741811;
  v30 = this->m_DeviceBase;
  if ( v30->m_ObjectSize )
    v31 = (unsigned __int64)v30 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v31 = 0LL;
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, v36, v31, -1073741811);
LABEL_8:
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)v8;
}

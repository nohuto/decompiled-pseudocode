/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C0085FB4
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C002E980 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qqq @ 0x1C005D374 (WPP_IFR_SF_qqq.c)
 *     WPP_IFR_SF_qid @ 0x1C006E064 (WPP_IFR_SF_qid.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C0085DD4 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
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
  unsigned __int64 _a2; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v12; // r13
  FxDeviceBase *v13; // rax
  unsigned __int64 v14; // rax
  int v15; // r15d
  _LIST_ENTRY *Flink; // rbx
  _LIST_ENTRY **p_Blink; // rcx
  FxDeviceBase *v18; // rax
  const void *v19; // rax
  FxDeviceBase *v20; // rax
  const void *_a3; // rax
  const void *v22; // rcx
  FxDeviceBase *v24; // rax
  const void *v25; // rax
  const void *v26; // rcx
  unsigned __int16 v27; // r9
  FxDeviceBase *v28; // rax
  FxDeviceBase *v29; // rax
  unsigned __int64 v30; // rax
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v31; // [rsp+90h] [rbp+8h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v32; // [rsp+98h] [rbp+10h] BYREF
  void *v33; // [rsp+A0h] [rbp+18h]
  _WDF_INTERRUPT_CONFIG *v34; // [rsp+A8h] [rbp+20h]

  v34 = Configuration;
  v33 = CmIntResource;
  m_Globals = this->m_Globals;
  v31 = CmIntResourceRaw;
  v32 = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &v31, &v32);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = v31;
  if ( v31->Type != 2 )
  {
    v8 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      _a2 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      _a2 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x2Au, WPP_PnpStateMachine_cpp_Traceguids, CmIntResourceRaw, _a2, -1073741811);
    goto LABEL_54;
  }
  v12 = v32;
  if ( v32->Type != 2 )
  {
    v8 = -1073741811;
    v13 = this->m_DeviceBase;
    if ( v13->m_ObjectSize )
      v14 = (unsigned __int64)v13 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v14 = 0LL;
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x2Bu, WPP_PnpStateMachine_cpp_Traceguids, CmIntResource, v14, -1073741811);
    goto LABEL_54;
  }
  v15 = 0;
  Flink = this->m_InterruptListHead.Flink;
  if ( Flink == &this->m_InterruptListHead )
    return 0;
  while ( 1 )
  {
    p_Blink = &Flink[-28].Blink;
    if ( v12 != (_CM_PARTIAL_RESOURCE_DESCRIPTOR *)Flink[-2].Blink )
    {
      if ( v15 )
      {
        v8 = -1073741811;
        v18 = this->m_DeviceBase;
        if ( v18->m_ObjectSize )
          v19 = (const void *)((unsigned __int64)v18 ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v19 = 0LL;
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, v19, -1073741811);
        goto LABEL_54;
      }
      goto LABEL_30;
    }
    if ( p_Blink[34] && v34->PassiveHandling )
    {
      v24 = this->m_DeviceBase;
      if ( v24->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)v24 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      if ( *((_WORD *)p_Blink + 5) )
        v26 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      v27 = 45;
      goto LABEL_49;
    }
    if ( *((_BYTE *)p_Blink + 258) && v34->CanWakeDevice )
    {
      v28 = this->m_DeviceBase;
      if ( v28->m_ObjectSize )
        v25 = (const void *)((unsigned __int64)v28 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v25 = 0LL;
      if ( *((_WORD *)p_Blink + 5) )
        v26 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v26 = 0LL;
      v27 = 46;
LABEL_49:
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, v27, WPP_PnpStateMachine_cpp_Traceguids, v33, v26, v25);
      return (unsigned int)-1073741811;
    }
    if ( (v12->Flags & 2) == 0 )
    {
      v20 = this->m_DeviceBase;
      if ( v20->m_ObjectSize )
        _a3 = (const void *)((unsigned __int64)v20 ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        _a3 = 0LL;
      if ( *((_WORD *)p_Blink + 5) )
        v22 = (const void *)((unsigned __int64)p_Blink ^ 0xFFFFFFFFFFFFFFF8uLL);
      else
        v22 = 0LL;
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Fu, WPP_PnpStateMachine_cpp_Traceguids, v33, v22, _a3);
      v9 = v31;
      goto LABEL_30;
    }
    if ( ++v15 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
      break;
LABEL_30:
    Flink = Flink->Flink;
    if ( Flink == &this->m_InterruptListHead )
      return 0;
  }
  v8 = -1073741811;
  v29 = this->m_DeviceBase;
  if ( v29->m_ObjectSize )
    v30 = (unsigned __int64)v29 ^ 0xFFFFFFFFFFFFFFF8uLL;
  else
    v30 = 0LL;
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x30u, WPP_PnpStateMachine_cpp_Traceguids, v33, v30, -1073741811);
LABEL_54:
  FxVerifierDbgBreakPoint(m_Globals);
  return (unsigned int)v8;
}

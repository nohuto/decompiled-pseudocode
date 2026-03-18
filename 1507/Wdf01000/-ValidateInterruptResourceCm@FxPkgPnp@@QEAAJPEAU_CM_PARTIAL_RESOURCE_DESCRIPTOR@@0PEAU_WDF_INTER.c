/*
 * XREFs of ?ValidateInterruptResourceCm@FxPkgPnp@@QEAAJPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0PEAU_WDF_INTERRUPT_CONFIG@@@Z @ 0x1C009B1F8
 * Callers:
 *     imp_WdfInterruptCreate @ 0x1C0029630 (imp_WdfInterruptCreate.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_qqq @ 0x1C006437C (WPP_IFR_SF_qqq.c)
 *     ?ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z @ 0x1C009AF84 (-ValidateCmResource@FxPkgPnp@@QEAAJPEAPEAU_CM_PARTIAL_RESOURCE_DESCRIPTOR@@0@Z.c)
 */

__int64 __fastcall FxPkgPnp::ValidateInterruptResourceCm(
        FxPkgPnp *this,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResourceRaw,
        _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmIntResource,
        _WDF_INTERRUPT_CONFIG *Configuration)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  int v8; // ebx
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v9; // r8
  FxDeviceBase *m_DeviceBase; // rax
  unsigned __int64 v11; // rax
  unsigned __int16 v12; // r9
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *v13; // r13
  FxDeviceBase *v14; // rax
  unsigned __int64 v15; // rax
  int v16; // esi
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
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *_a1; // [rsp+28h] [rbp-18h]
  void *_a2; // [rsp+30h] [rbp-10h]
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmResourceRaw; // [rsp+80h] [rbp+40h] BYREF
  _CM_PARTIAL_RESOURCE_DESCRIPTOR *CmResource; // [rsp+88h] [rbp+48h] BYREF
  void *v36; // [rsp+90h] [rbp+50h]
  _WDF_INTERRUPT_CONFIG *v37; // [rsp+98h] [rbp+58h]

  v37 = Configuration;
  v36 = CmIntResource;
  m_Globals = this->m_Globals;
  CmResourceRaw = CmIntResourceRaw;
  CmResource = CmIntResource;
  v8 = FxPkgPnp::ValidateCmResource(this, &CmResourceRaw, &CmResource);
  if ( v8 < 0 )
    return (unsigned int)v8;
  v9 = CmResourceRaw;
  if ( CmResourceRaw->Type != 2 )
  {
    v8 = -1073741811;
    m_DeviceBase = this->m_DeviceBase;
    if ( m_DeviceBase->m_ObjectSize )
      v11 = (unsigned __int64)m_DeviceBase ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v11 = 0LL;
    v12 = 42;
    _a2 = (void *)v11;
    _a1 = CmIntResourceRaw;
LABEL_12:
    WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, v12, WPP_PnpStateMachine_cpp_Traceguids, _a1, (__int64)_a2, -1073741811);
    goto LABEL_55;
  }
  v13 = CmResource;
  if ( CmResource->Type != 2 )
  {
    v8 = -1073741811;
    v14 = this->m_DeviceBase;
    if ( v14->m_ObjectSize )
      v15 = (unsigned __int64)v14 ^ 0xFFFFFFFFFFFFFFF8uLL;
    else
      v15 = 0LL;
    v12 = 43;
    _a2 = (void *)v15;
    _a1 = CmIntResource;
    goto LABEL_12;
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
        WPP_IFR_SF_qd(m_Globals, 2u, 0xCu, 0x2Cu, WPP_PnpStateMachine_cpp_Traceguids, v20, -1073741811);
        goto LABEL_55;
      }
      goto LABEL_31;
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
      v28 = 45;
      goto LABEL_50;
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
      v28 = 46;
LABEL_50:
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
      WPP_IFR_SF_qqq(m_Globals, 4u, 0xCu, 0x2Fu, WPP_PnpStateMachine_cpp_Traceguids, v36, v23, _a3);
      v9 = CmResourceRaw;
      goto LABEL_31;
    }
    if ( ++v16 > (unsigned int)v9->u.MessageInterrupt.Raw.MessageCount )
      break;
LABEL_31:
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
  WPP_IFR_SF_qid(m_Globals, 2u, 0xCu, 0x30u, WPP_PnpStateMachine_cpp_Traceguids, v36, v31, -1073741811);
LABEL_55:
  LODWORD(v36) = 7567731;
  Mx::MxDbgPrint(
    "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
  if ( m_Globals->FxVerifierDbgBreakOnError )
    DbgBreakPoint();
  return (unsigned int)v8;
}

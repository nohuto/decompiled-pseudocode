/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0090E28
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x1C008F570 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     WPP_IFR_SF_qd @ 0x1C0002600 (WPP_IFR_SF_qd.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000A400 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C000CC70 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C000CCA0 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003B500 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C007C76C (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rbx
  unsigned int v8; // edi
  unsigned __int8 v10; // r8
  unsigned __int16 v11; // r9
  const void *v12; // rcx
  unsigned __int16 v13; // r9
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( this->m_Type != WdfIoQueueDispatchManual )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    v8 = -1073741808;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v8;
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Context);
  v12 = 0LL;
  if ( this->m_Deleted )
  {
    v8 = -1073741738;
LABEL_25:
    FxNonPagedObject::Unlock(this, irql, v10);
    return v8;
  }
  if ( QueueReady )
  {
    if ( this->m_ReadyNotify.Method )
    {
      if ( this->m_ObjectSize )
        v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v13 = 61;
LABEL_23:
      v8 = -1073741808;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        v13,
        WPP_FxIoQueue_cpp_Traceguids,
        v12,
        (__int64)&this->m_ReadyNotify,
        -1073741808);
LABEL_24:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_25;
    }
    this->m_ReadyNotify.Method = QueueReady;
    this->m_ReadyNotifyContext = Context;
  }
  else
  {
    if ( !this->m_ReadyNotify.Method )
    {
      if ( this->m_ObjectSize )
        v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v8 = -1073741808;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v12, -1073741808);
      goto LABEL_24;
    }
    if ( (this->m_QueueState & 2) != 0 )
    {
      if ( this->m_ObjectSize )
        v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      v13 = 63;
      goto LABEL_23;
    }
    this->m_ReadyNotify.Method = 0LL;
    this->m_ReadyNotifyContext = 0LL;
  }
  FxIoQueue::DispatchEvents(this, irql, 0LL, v11);
  return 0LL;
}

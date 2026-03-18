/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0094F0C
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x1C00935A0 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C000D8B0 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0010B20 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0010B50 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0017050 (WPP_IFR_SF_qd.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C003EFA4 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 *     WPP_IFR_SF_qid @ 0x1C0068A04 (WPP_IFR_SF_qid.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // rsi
  const void *_a1; // rbx
  unsigned int v8; // edi
  unsigned __int16 v10; // r9
  unsigned __int8 v11; // r8
  unsigned __int16 v12; // r9
  const void *v13; // rcx
  const void *v14; // rcx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  m_Globals = this->m_Globals;
  if ( this->m_Type != WdfIoQueueDispatchManual )
  {
    _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    v8 = -1073741808;
    if ( !this->m_ObjectSize )
      _a1 = 0LL;
    WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Cu, WPP_FxIoQueue_cpp_Traceguids, _a1, -1073741808);
    FxVerifierDbgBreakPoint(m_Globals);
    return v8;
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Context);
  v11 = 0;
  if ( this->m_Deleted )
  {
    v8 = -1073741738;
LABEL_22:
    FxNonPagedObject::Unlock(this, irql, v11);
    return v8;
  }
  if ( QueueReady )
  {
    if ( this->m_ReadyNotify.Method )
    {
      v12 = 61;
LABEL_18:
      v8 = -1073741808;
      v14 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v14 = 0LL;
      WPP_IFR_SF_qid(
        m_Globals,
        2u,
        0xDu,
        v12,
        WPP_FxIoQueue_cpp_Traceguids,
        v14,
        (__int64)&this->m_ReadyNotify,
        -1073741808);
LABEL_21:
      FxVerifierDbgBreakPoint(m_Globals);
      goto LABEL_22;
    }
    this->m_ReadyNotify.Method = QueueReady;
    this->m_ReadyNotifyContext = Context;
  }
  else
  {
    if ( !this->m_ReadyNotify.Method )
    {
      v8 = -1073741808;
      v13 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
      if ( !this->m_ObjectSize )
        v13 = 0LL;
      WPP_IFR_SF_qd(m_Globals, 2u, 0xDu, 0x3Eu, WPP_FxIoQueue_cpp_Traceguids, v13, -1073741808);
      goto LABEL_21;
    }
    if ( (this->m_QueueState & 2) != 0 )
    {
      v12 = 63;
      goto LABEL_18;
    }
    this->m_ReadyNotify.Method = 0LL;
    this->m_ReadyNotifyContext = 0LL;
  }
  FxIoQueue::DispatchEvents(this, irql, 0LL, v10);
  return 0LL;
}

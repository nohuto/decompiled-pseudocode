/*
 * XREFs of ?ReadyNotify@FxIoQueue@@QEAAJP6AXPEAUWDFQUEUE__@@PEAX@Z1@Z @ 0x1C0097618
 * Callers:
 *     imp_WdfIoQueueReadyNotify @ 0x1C0093ED0 (imp_WdfIoQueueReadyNotify.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z @ 0x1C0004B50 (-DispatchEvents@FxIoQueue@@QEAAEEPEAVFxRequest@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     WPP_IFR_SF_qid @ 0x1C0031A90 (WPP_IFR_SF_qid.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

__int64 __fastcall FxIoQueue::ReadyNotify(
        FxIoQueue *this,
        void (__fastcall *QueueReady)(WDFQUEUE__ *, void *),
        void *Context)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  const void *_a1; // rbx
  unsigned __int8 v9; // r8
  unsigned __int16 v10; // r9
  _LIST_ENTRY *v11; // rcx
  const void *v12; // rcx
  unsigned __int8 v13; // r8
  _LIST_ENTRY *Blink; // rcx
  const void *v15; // rax
  const void *v16; // rcx
  unsigned __int8 irql; // [rsp+80h] [rbp+30h] BYREF
  int v18; // [rsp+98h] [rbp+48h]

  m_Globals = this->m_Globals;
  if ( this->m_Type != WdfIoQueueDispatchManual )
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x3Au,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
      _a1,
      -1073741808);
    v18 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  FxNonPagedObject::Lock(this, &irql, (unsigned __int8)Context);
  if ( !this->m_Deleted )
  {
    if ( QueueReady )
    {
      if ( this->m_ReadyNotify.Method )
      {
        if ( this->m_ObjectSize )
          v12 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v12 = 0LL;
        WPP_IFR_SF_qid(
          m_Globals,
          2u,
          0xDu,
          0x3Bu,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v12,
          (__int64)&this->m_ReadyNotify,
          -1073741808);
LABEL_20:
        Mx::MxDbgPrint(
          "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
        if ( m_Globals->FxVerifierDbgBreakOnError )
          DbgBreakPoint();
        if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Blink = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
          FxVerifierLock::Unlock((FxVerifierLock *)Blink, irql, v13);
        else
          KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
        return 3221225488LL;
      }
      this->m_ReadyNotify.Method = QueueReady;
      this->m_ReadyNotifyContext = Context;
    }
    else
    {
      if ( !this->m_ReadyNotify.Method )
      {
        if ( this->m_ObjectSize )
          v15 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v15 = 0LL;
        WPP_IFR_SF_qd(
          m_Globals,
          2u,
          0xDu,
          0x3Cu,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v15,
          -1073741808);
        goto LABEL_20;
      }
      if ( (this->m_QueueState & 2) != 0 )
      {
        if ( this->m_ObjectSize )
          v16 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
        else
          v16 = 0LL;
        WPP_IFR_SF_qid(
          m_Globals,
          2u,
          0xDu,
          0x3Du,
          (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.NonPagedHead.Blink,
          v16,
          (__int64)&this->m_ReadyNotify,
          -1073741808);
        goto LABEL_20;
      }
      this->m_ReadyNotify.Method = 0LL;
      this->m_ReadyNotifyContext = 0LL;
    }
    FxIoQueue::DispatchEvents(this, irql, 0LL, v10);
    return 0LL;
  }
  if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v11 = this[-1].m_IoPkgListNode.m_ListEntry.Blink) != 0LL )
    FxVerifierLock::Unlock((FxVerifierLock *)v11, irql, v9);
  else
    KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
  return 3221225558LL;
}

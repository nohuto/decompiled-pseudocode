/*
 * XREFs of ?ConfigureForwarding@FxPkgIo@@QEAAJPEAVFxIoQueue@@W4_WDF_REQUEST_TYPE@@@Z @ 0x1C0094A3C
 * Callers:
 *     imp_WdfDeviceConfigureRequestDispatching @ 0x1C0070BB0 (imp_WdfDeviceConfigureRequestDispatching.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z @ 0x1C000C9E8 (-IsIoEventHandlerRegistered@FxIoQueue@@QEAAEW4_WDF_REQUEST_TYPE@@@Z.c)
 *     ?MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z @ 0x1C00155C4 (-MarkNoDeleteDDI@FxObject@@QEAAXW4FxObjectLockState@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 *     WPP_IFR_SF_Lqd @ 0x1C0095214 (WPP_IFR_SF_Lqd.c)
 */

__int64 __fastcall FxPkgIo::ConfigureForwarding(FxPkgIo *this, FxIoQueue *TargetQueue, _WDF_REQUEST_TYPE RequestType)
{
  _FX_DRIVER_GLOBALS *m_Globals; // r14
  __int64 _a3; // r15
  unsigned __int8 v7; // dl
  unsigned int v8; // r8d
  const void *globals; // rbx
  unsigned __int8 v11; // dl
  unsigned int v12; // r8d
  FxIoQueue *m_DefaultQueue; // rax
  const void *v14; // rbx
  unsigned __int8 v15; // r8
  _LIST_ENTRY *Flink; // rcx
  FxIoQueue *v17; // rcx
  const void *v18; // rbx
  unsigned __int8 v19; // r8
  _LIST_ENTRY *v20; // rcx
  unsigned __int8 v21; // r8
  _LIST_ENTRY *v22; // rcx
  int irql; // [rsp+70h] [rbp+30h] BYREF
  int v24; // [rsp+88h] [rbp+48h]

  m_Globals = this->m_Globals;
  _a3 = RequestType;
  if ( !FxIoQueue::IsIoEventHandlerRegistered(TargetQueue, RequestType) )
  {
    if ( TargetQueue->m_ObjectSize )
      globals = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      globals = 0LL;
    WPP_IFR_SF_Lqd(
      m_Globals,
      v7,
      v8,
      0x18u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      _a3,
      globals,
      -1073741808);
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    return 3221225488LL;
  }
  FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, v8);
  m_DefaultQueue = this->m_DefaultQueue;
  if ( TargetQueue == m_DefaultQueue )
  {
    if ( TargetQueue->m_ObjectSize )
      v14 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v14 = 0LL;
    WPP_IFR_SF_qd(
      m_Globals,
      2u,
      0xDu,
      0x19u,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      v14,
      -1073741808);
    v24 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)Flink, irql, v15);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 3221225488LL;
  }
  v17 = this->m_DispatchTable[_a3];
  if ( !v17 || v17 == m_DefaultQueue )
  {
    this->m_DispatchTable[_a3] = TargetQueue;
    FxObject::MarkNoDeleteDDI(TargetQueue, ObjectLock);
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v22 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v22, irql, v21);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 0LL;
  }
  else
  {
    if ( TargetQueue->m_ObjectSize )
      v18 = (const void *)((unsigned __int64)TargetQueue ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      v18 = 0LL;
    WPP_IFR_SF_Lqd(
      m_Globals,
      v11,
      v12,
      0x1Au,
      (const _GUID *)&FxObject::`vftable'.FxPoolFrameworks.PagedLock.m_Lock,
      _a3,
      v18,
      -1071644156);
    v24 = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n");
    if ( m_Globals->FxVerifierDbgBreakOnError )
      DbgBreakPoint();
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (v20 = this[-1].m_DynamicDispatchInfoListHead.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)v20, irql, v19);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    return 3223323140LL;
  }
}

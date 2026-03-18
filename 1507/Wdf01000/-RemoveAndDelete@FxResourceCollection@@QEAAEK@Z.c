/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C001EA64
 * Callers:
 *     imp_WdfIoResourceListRemove @ 0x1C0030260 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfCmResourceListRemove @ 0x1C007E5F0 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C007EC40 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0001C60 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C000FD9C (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C000FE10 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C0016590 (WPP_IFR_SF_qd.c)
 *     ?Unlock@FxVerifierLock@@QEAAXEE@Z @ 0x1C0031FC0 (-Unlock@FxVerifierLock@@QEAAXEE@Z.c)
 *     ?MxDbgPrint@Mx@@SAXPEBDZZ @ 0x1C0033644 (-MxDbgPrint@Mx@@SAXPEBDZZ.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  FxObject *m_Object; // rsi
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v7; // r8
  const void *_a1; // rax
  _FX_DRIVER_GLOBALS *m_Globals; // rax
  __int64 v11; // rax
  _LIST_ENTRY *Flink; // rcx
  int irql; // [rsp+50h] [rbp+8h] BYREF

  if ( (this->m_AccessFlags & 2) != 0 )
  {
    m_Object = 0LL;
    FxNonPagedObject::Lock(this, (unsigned __int8 *)&irql, a3);
    Entry = (FxCollectionEntry *)FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
    if ( Entry )
    {
      this->m_Changed = 1;
      m_Object = Entry->m_Object;
      FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
    }
    if ( SLOBYTE(this->m_ObjectFlags) < 0 && (Flink = this[-1].m_ListHead.Flink) != 0LL )
      FxVerifierLock::Unlock((FxVerifierLock *)Flink, irql, v7);
    else
      KeReleaseSpinLock(&this->m_NPLock.m_Lock, irql);
    if ( m_Object )
    {
      m_Object->DeleteObject(m_Object);
      return 1;
    }
  }
  else
  {
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    else
      _a1 = 0LL;
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    m_Globals = this->m_Globals;
    irql = 7567731;
    Mx::MxDbgPrint(
      "WDF detected potentially invalid operation by %s.%s Dump the driver log (!wdflogdump %s.%s) for more information.\n",
      m_Globals->Public.DriverName,
      (const char *)&irql,
      m_Globals->Public.DriverName,
      (const char *)&irql);
    if ( *(_BYTE *)(v11 + 318) )
      DbgBreakPoint();
  }
  return 0;
}

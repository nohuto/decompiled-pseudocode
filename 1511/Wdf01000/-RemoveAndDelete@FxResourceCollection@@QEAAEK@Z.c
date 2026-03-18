/*
 * XREFs of ?RemoveAndDelete@FxResourceCollection@@QEAAEK@Z @ 0x1C0024E0C
 * Callers:
 *     imp_WdfIoResourceListRemove @ 0x1C002A310 (imp_WdfIoResourceListRemove.c)
 *     imp_WdfCmResourceListRemove @ 0x1C0071BE0 (imp_WdfCmResourceListRemove.c)
 *     imp_WdfIoResourceRequirementsListRemove @ 0x1C0072010 (imp_WdfIoResourceRequirementsListRemove.c)
 * Callees:
 *     ?Unlock@FxNonPagedObject@@QEAAXE@Z @ 0x1C0005870 (-Unlock@FxNonPagedObject@@QEAAXE@Z.c)
 *     ?Lock@FxNonPagedObject@@QEAAXPEAE@Z @ 0x1C0005940 (-Lock@FxNonPagedObject@@QEAAXPEAE@Z.c)
 *     WPP_IFR_SF_qd @ 0x1C000BAC0 (WPP_IFR_SF_qd.c)
 *     ?FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z @ 0x1C001F8F4 (-FindEntry@FxCollectionInternal@@QEAAPEAVFxCollectionEntry@@K@Z.c)
 *     ?RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z @ 0x1C001F968 (-RemoveEntry@FxCollectionInternal@@QEAAJPEAVFxCollectionEntry@@@Z.c)
 *     ?FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z @ 0x1C00577F8 (-FxVerifierDbgBreakPoint@@YAXPEAU_FX_DRIVER_GLOBALS@@@Z.c)
 */

unsigned __int8 __fastcall FxResourceCollection::RemoveAndDelete(
        FxResourceCollection *this,
        unsigned int Index,
        unsigned __int8 a3)
{
  FxObject *m_Object; // rsi
  FxCollectionEntry *Entry; // rax
  unsigned __int8 v7; // r8
  const void *_a1; // rbx
  unsigned __int8 irql; // [rsp+50h] [rbp+8h] BYREF

  if ( (this->m_AccessFlags & 2) != 0 )
  {
    m_Object = 0LL;
    FxNonPagedObject::Lock(this, &irql, a3);
    Entry = (FxCollectionEntry *)FxCollectionInternal::FindEntry(&this->FxCollectionInternal, Index);
    if ( Entry )
    {
      this->m_Changed = 1;
      m_Object = Entry->m_Object;
      FxCollectionInternal::RemoveEntry(&this->FxCollectionInternal, Entry);
    }
    FxNonPagedObject::Unlock(this, irql, v7);
    if ( m_Object )
    {
      m_Object->DeleteObject(m_Object);
      return 1;
    }
  }
  else
  {
    _a1 = 0LL;
    if ( this->m_ObjectSize )
      _a1 = (const void *)((unsigned __int64)this ^ 0xFFFFFFFFFFFFFFF8uLL);
    WPP_IFR_SF_qd(this->m_Globals, 2u, 0xCu, 0xAu, WPP_FxResourceCollection_cpp_Traceguids, _a1, Index);
    FxVerifierDbgBreakPoint(this->m_Globals);
  }
  return 0;
}

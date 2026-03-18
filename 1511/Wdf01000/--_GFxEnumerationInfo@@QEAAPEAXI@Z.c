/*
 * XREFs of ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C00879B4
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C00877E0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C0004490 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C00733F4 (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxEnumerationInfo *__fastcall FxEnumerationInfo::`scalar deleting destructor'(FxEnumerationInfo *this)
{
  FxTransactionedList::~FxTransactionedList(&this->m_ChildListList);
  if ( this )
    FxPoolFree(this);
  return this;
}

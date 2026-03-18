/*
 * XREFs of ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C009CC00
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C009CA20 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C00102D0 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C00808E8 (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxEnumerationInfo *__fastcall FxEnumerationInfo::`scalar deleting destructor'(FxEnumerationInfo *this)
{
  FxTransactionedList::~FxTransactionedList(&this->m_ChildListList);
  if ( this )
    FxPoolFree(this);
  return this;
}

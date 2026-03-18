/*
 * XREFs of ??_GFxEnumerationInfo@@QEAAPEAXI@Z @ 0x1C0096094
 * Callers:
 *     ??1FxPkgPnp@@MEAA@XZ @ 0x1C0095EC0 (--1FxPkgPnp@@MEAA@XZ.c)
 * Callees:
 *     ?FxPoolFree@@YAXPEAX@Z @ 0x1C000F040 (-FxPoolFree@@YAXPEAX@Z.c)
 *     ??1FxTransactionedList@@QEAA@XZ @ 0x1C008139C (--1FxTransactionedList@@QEAA@XZ.c)
 */

FxEnumerationInfo *__fastcall FxEnumerationInfo::`scalar deleting destructor'(FxEnumerationInfo *this)
{
  FxTransactionedList::~FxTransactionedList(&this->m_ChildListList);
  if ( this )
    FxPoolFree(this);
  return this;
}

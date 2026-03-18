/*
 * XREFs of ?Dispose@FxChildList@@MEAAEXZ @ 0x1C0066FB0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned __int8 __fastcall FxChildList::Dispose(FxChildList *this)
{
  if ( this->m_IsAdded )
    this->m_DeviceBase->RemoveChildList(this->m_DeviceBase, this);
  return 1;
}

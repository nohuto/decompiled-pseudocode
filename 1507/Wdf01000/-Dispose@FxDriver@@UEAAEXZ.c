/*
 * XREFs of ?Dispose@FxDriver@@UEAAEXZ @ 0x1C0010B20
 * Callers:
 *     <none>
 * Callees:
 *     ?WaitForEmpty@FxDisposeList@@QEAAXXZ @ 0x1C0009884 (-WaitForEmpty@FxDisposeList@@QEAAXXZ.c)
 */

unsigned __int8 __fastcall FxDriver::Dispose(FxDriver *this, __int64 a2, unsigned __int8 a3)
{
  FxDisposeList *m_DisposeList; // rcx

  m_DisposeList = this->m_DisposeList;
  if ( m_DisposeList )
    FxDisposeList::WaitForEmpty(m_DisposeList, a2, a3);
  return 1;
}

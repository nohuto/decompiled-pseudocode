/*
 * XREFs of ?ShouldDeferDisposeLocked@FxObject@@AEAAEPEAE@Z @ 0x1C001CFB4
 * Callers:
 *     ?EarlyDispose@FxObject@@QEAAEXZ @ 0x1C001D140 (-EarlyDispose@FxObject@@QEAAEXZ.c)
 *     ?PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z @ 0x1C003E0D8 (-PerformEarlyDisposeWorkerAndUnlock@FxObject@@AEAAEEE@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall FxObject::ShouldDeferDisposeLocked(FxObject *this, unsigned __int8 *PreviousIrql)
{
  unsigned __int16 m_ObjectFlags; // r8
  bool result; // al

  m_ObjectFlags = this->m_ObjectFlags;
  result = 1;
  if ( (m_ObjectFlags & 0x20) == 0 )
  {
    if ( (m_ObjectFlags & 0x10) == 0 )
      return 0;
    if ( PreviousIrql ? *PreviousIrql == 0 : KeGetCurrentIrql() == 0 )
      return 0;
  }
  return result;
}

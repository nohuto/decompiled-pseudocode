/*
 * XREFs of ?Unlock@CMutex@@QEAAXXZ @ 0x1C00A8C50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMutex::Unlock(PRKMUTEX *this)
{
  KeReleaseMutex(*this, 0);
}

/*
 * XREFs of ?Unlock@CMutex@@QEAAXXZ @ 0x1C00B1480
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CMutex::Unlock(PRKMUTEX *this)
{
  KeReleaseMutex(*this, 0);
}

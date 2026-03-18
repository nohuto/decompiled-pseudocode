/*
 * XREFs of ?EnterCRAndWaitAndLeave@FxCREvent@@QEAAJPEA_J@Z @ 0x1C000F558
 * Callers:
 *     ?WaitForSignal@FxWorkItem@@AEAAXXZ @ 0x1C000F518 (-WaitForSignal@FxWorkItem@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall FxCREvent::EnterCRAndWaitAndLeave(FxCREvent *this, _LARGE_INTEGER *Timeout)
{
  KeEnterCriticalRegion();
  LODWORD(Timeout) = KeWaitForSingleObject(this, Executive, 0, 0, Timeout);
  KeLeaveCriticalRegion();
  return (unsigned int)Timeout;
}

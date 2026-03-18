/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x140122F24
 * Callers:
 *     KiIntSteerLogState @ 0x140122EC4 (KiIntSteerLogState.c)
 *     KiIntSteerLogStatus @ 0x1401CAAB4 (KiIntSteerLogStatus.c)
 * Callees:
 *     <none>
 */

BOOLEAN __fastcall KiIntSteerEtwEventEnabled(const EVENT_DESCRIPTOR *a1)
{
  if ( KiIntSteerEtwHandle )
    return EtwEventEnabled(KiIntSteerEtwHandle, a1);
  else
    return 0;
}

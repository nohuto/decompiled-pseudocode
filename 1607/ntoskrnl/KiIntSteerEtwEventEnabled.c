/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x14012DCE8
 * Callers:
 *     KiIntSteerLogState @ 0x14012DC88 (KiIntSteerLogState.c)
 *     KiIntSteerLogMask @ 0x1401DA510 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1401DA604 (KiIntSteerLogProc.c)
 *     KiIntSteerLogStatus @ 0x1401DA6E8 (KiIntSteerLogStatus.c)
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

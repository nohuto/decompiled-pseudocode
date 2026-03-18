/*
 * XREFs of KiIntSteerEtwEventEnabled @ 0x14012D778
 * Callers:
 *     KiIntSteerLogState @ 0x14012D718 (KiIntSteerLogState.c)
 *     KiIntSteerLogMask @ 0x1401DA6E4 (KiIntSteerLogMask.c)
 *     KiIntSteerLogProc @ 0x1401DA7D8 (KiIntSteerLogProc.c)
 *     KiIntSteerLogStatus @ 0x1401DA8BC (KiIntSteerLogStatus.c)
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

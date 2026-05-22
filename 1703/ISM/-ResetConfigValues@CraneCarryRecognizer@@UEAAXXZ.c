/*
 * XREFs of ?ResetConfigValues@CraneCarryRecognizer@@UEAAXXZ @ 0x180038710
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CraneCarryRecognizer::ResetConfigValues(CraneCarryRecognizer *this)
{
  *((_WORD *)this + 22) = CraneCarryRecognizer::s_maximumReentryTime;
  *((_WORD *)this + 23) = CraneCarryRecognizer::s_reentryDeadzone;
  *((_WORD *)this + 24) = CraneCarryRecognizer::s_exitDeadzone;
  *((_WORD *)this + 25) = CraneCarryRecognizer::s_carryTimeoutMS;
}

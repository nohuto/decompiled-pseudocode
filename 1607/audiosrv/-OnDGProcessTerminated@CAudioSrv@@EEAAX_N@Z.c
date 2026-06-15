/*
 * XREFs of ?OnDGProcessTerminated@CAudioSrv@@EEAAX_N@Z @ 0x1800015C0
 * Callers:
 *     ?OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ @ 0x18000140C (-OnADGInactivityTimerFired@CAudioDGProcess@@AEAAXXZ.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioSrv::OnDGProcessTerminated(CAudioSrv *this, bool a2)
{
  VAD_AudiosrvAudioDGProcessTerminated(a2);
}

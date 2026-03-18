/*
 * XREFs of IsDwmInputThread @ 0x1C0015650
 * Callers:
 *     <none>
 * Callees:
 *     ?IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z @ 0x1C001566C (-IsDwmInputThread@CInputManager@@SA_NPEAU_ETHREAD@@@Z.c)
 */

_BOOL8 IsDwmInputThread()
{
  return CInputManager::IsDwmInputThread(KeGetCurrentThread());
}

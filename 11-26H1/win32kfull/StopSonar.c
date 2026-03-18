/*
 * XREFs of StopSonar @ 0x1402A4434
 * Callers:
 *     EditionStopSonar @ 0x1401C2310 (EditionStopSonar.c)
 *     EditionHandleSonarKeyEvent @ 0x1401F3D00 (EditionHandleSonarKeyEvent.c)
 *     zzzStartSonar @ 0x1402A46E0 (zzzStartSonar.c)
 * Callees:
 *     StopFade @ 0x14009B510 (StopFade.c)
 *     ?SonarStop@Mouse@InputTraceLogging@@SAXXZ @ 0x1402A4238 (-SonarStop@Mouse@InputTraceLogging@@SAXXZ.c)
 */

__int64 StopSonar()
{
  __int64 v0; // rdx
  __int64 v1; // rcx
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 result; // rax

  InputTraceLogging::Mouse::SonarStop();
  StopFade(v1, v0);
  result = W32GetUserSessionState(v3, v2);
  *(_DWORD *)(result + 16316) = -1;
  return result;
}

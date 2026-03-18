/*
 * XREFs of KeInitializeMutex @ 0x1400756A4
 * Callers:
 *     EtwpInitLoggerContext @ 0x1404B0048 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x14057F020 (KeAllocateCalloutStackEx.c)
 *     VerifierKeInitializeMutex @ 0x1407482A4 (VerifierKeInitializeMutex.c)
 *     VerifierKeInitializeMutexNoReboot @ 0x1407482E0 (VerifierKeInitializeMutexNoReboot.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}

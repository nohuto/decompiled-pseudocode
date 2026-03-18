/*
 * XREFs of KeInitializeMutex @ 0x140085B70
 * Callers:
 *     EtwpInitLoggerContext @ 0x1404931B0 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x1405416E4 (KeAllocateCalloutStackEx.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}

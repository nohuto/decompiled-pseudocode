/*
 * XREFs of KeInitializeMutex @ 0x140087460
 * Callers:
 *     EtwpInitLoggerContext @ 0x140493C40 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x140541C24 (KeAllocateCalloutStackEx.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  char v2; // r8

  v2 = 1;
  KiInitializeMutant(Mutex, 0LL, v2);
}

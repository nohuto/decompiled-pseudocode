/*
 * XREFs of KeInitializeMutex @ 0x1400F4838
 * Callers:
 *     EtwpInitLoggerContext @ 0x1404CA828 (EtwpInitLoggerContext.c)
 *     KeAllocateCalloutStackEx @ 0x140509188 (KeAllocateCalloutStackEx.c)
 *     ViKeInitializeMutexCommon @ 0x1406C6E88 (ViKeInitializeMutexCommon.c)
 * Callees:
 *     <none>
 */

void __stdcall KeInitializeMutex(PRKMUTEX Mutex, ULONG Level)
{
  __int64 v2; // r8

  LOBYTE(v2) = 1;
  KiInitializeMutant((__int64)Mutex, 0LL, v2);
}

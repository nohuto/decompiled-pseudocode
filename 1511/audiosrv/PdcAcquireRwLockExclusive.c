/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1800A7AFC
 * Callers:
 *     PdcActivationClientUnregister @ 0x1800A7A78 (PdcActivationClientUnregister.c)
 *     PdcPortClose @ 0x1800A7B20 (PdcPortClose.c)
 *     PdcpProcessMessageInternal @ 0x1800A7E6C (PdcpProcessMessageInternal.c)
 * Callees:
 *     <none>
 */

DWORD __fastcall PdcAcquireRwLockExclusive(__int64 a1)
{
  DWORD result; // eax

  AcquireSRWLockExclusive((PSRWLOCK)a1);
  result = GetCurrentThreadId();
  *(_DWORD *)(a1 + 8) = result;
  return result;
}

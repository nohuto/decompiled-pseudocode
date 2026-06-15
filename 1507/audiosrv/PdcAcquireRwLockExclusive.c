/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x1800AA01C
 * Callers:
 *     PdcActivationClientUnregister @ 0x1800A9F98 (PdcActivationClientUnregister.c)
 *     PdcPortClose @ 0x1800AA040 (PdcPortClose.c)
 *     PdcpProcessMessageInternal @ 0x1800AA38C (PdcpProcessMessageInternal.c)
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

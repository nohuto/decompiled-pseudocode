/*
 * XREFs of PdcAcquireRwLockExclusive @ 0x18008E758
 * Callers:
 *     PdcPortClose @ 0x18008E300 (PdcPortClose.c)
 *     PdcpProcessMessageInternal @ 0x18008E64C (PdcpProcessMessageInternal.c)
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

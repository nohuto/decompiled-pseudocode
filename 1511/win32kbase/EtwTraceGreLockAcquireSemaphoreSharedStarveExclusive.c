/*
 * XREFs of EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive @ 0x1C00BFC30
 * Callers:
 *     <none>
 * Callees:
 *     Template_pz @ 0x1C00C00D4 (Template_pz.c)
 */

__int64 __fastcall EtwTraceGreLockAcquireSemaphoreSharedStarveExclusive(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 result; // rax

  if ( gbLockEtw )
  {
    result = (unsigned int)Microsoft_Windows_Win32kEnableBits;
    if ( (Microsoft_Windows_Win32kEnableBits & 0x10) != 0 )
      return Template_pz(a1, &LockAcquireSharedStarveExclusive, a3, a2);
  }
  return result;
}

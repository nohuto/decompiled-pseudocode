/*
 * XREFs of PfFbBufferListShutdown @ 0x14015CAC8
 * Callers:
 *     PfTCleanup @ 0x14058E034 (PfTCleanup.c)
 * Callees:
 *     <none>
 */

int __fastcall PfFbBufferListShutdown(volatile signed __int64 *a1)
{
  unsigned __int64 v1; // rax

  v1 = _InterlockedCompareExchange64(a1, 1LL, 0LL);
  if ( v1 >= 2 )
    LODWORD(v1) = ExfWaitForRundownProtectionRelease(a1, v1);
  return v1;
}

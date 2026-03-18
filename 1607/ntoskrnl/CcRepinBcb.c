/*
 * XREFs of CcRepinBcb @ 0x1401B1C9C
 * Callers:
 *     <none>
 * Callees:
 *     ExAcquireFastMutex @ 0x14002D0A0 (ExAcquireFastMutex.c)
 *     KeBugCheckEx @ 0x14015D500 (KeBugCheckEx.c)
 */

void __stdcall CcRepinBcb(PVOID Bcb)
{
  struct _FAST_MUTEX *v2; // rcx

  if ( *(_WORD *)Bcb != 765 )
    KeBugCheckEx(0x34u, 0x1F4CuLL, 0xFFFFFFFFC0000420uLL, 0LL, 0LL);
  ExAcquireFastMutex((PFAST_MUTEX)(*((_QWORD *)Bcb + 22) + 280LL));
  v2 = (struct _FAST_MUTEX *)*((_QWORD *)Bcb + 22);
  ++*((_DWORD *)Bcb + 16);
  KeReleaseGuardedMutex(v2 + 5);
}

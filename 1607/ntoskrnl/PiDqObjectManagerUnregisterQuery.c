/*
 * XREFs of PiDqObjectManagerUnregisterQuery @ 0x14048D0EC
 * Callers:
 *     PiDqDispatch @ 0x14048B6C4 (PiDqDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14002CC20 (ExAcquireFastMutex.c)
 *     PiDqQueryRelease @ 0x14048CAEC (PiDqQueryRelease.c)
 */

void __fastcall PiDqObjectManagerUnregisterQuery(__int64 a1, __int64 *a2)
{
  __int64 v4; // rax
  __int64 **v5; // rdx

  ExAcquireFastMutex((PFAST_MUTEX)(a1 + 104));
  v4 = *a2;
  if ( *a2 )
  {
    v5 = (__int64 **)a2[1];
    if ( *(__int64 **)(v4 + 8) != a2 || *v5 != a2 )
      __fastfail(3u);
    *v5 = (__int64 *)v4;
    *(_QWORD *)(v4 + 8) = v5;
    --*(_DWORD *)(a1 + 224);
    PiDqQueryRelease((__int64)a2);
  }
  KeReleaseGuardedMutex((PKGUARDED_MUTEX)(a1 + 104));
}

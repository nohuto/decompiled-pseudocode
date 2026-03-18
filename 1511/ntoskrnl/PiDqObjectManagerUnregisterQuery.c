/*
 * XREFs of PiDqObjectManagerUnregisterQuery @ 0x14045F638
 * Callers:
 *     PiDqDispatch @ 0x14045DCD4 (PiDqDispatch.c)
 * Callees:
 *     ExAcquireFastMutex @ 0x14003D1D0 (ExAcquireFastMutex.c)
 *     PiDqQueryRelease @ 0x14045F0C4 (PiDqQueryRelease.c)
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

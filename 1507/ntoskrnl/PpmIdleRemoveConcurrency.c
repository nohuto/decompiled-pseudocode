/*
 * XREFs of PpmIdleRemoveConcurrency @ 0x140169B58
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x140169BE0 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleRemoveConcurrency(__int64 a1)
{
  __int64 v1; // rdi
  LARGE_INTEGER PerformanceCounter; // rax
  __int64 v4; // r8

  v1 = *(_QWORD *)(a1 + 24192);
  if ( v1 )
  {
    PerformanceCounter = KeQueryPerformanceCounter(0LL);
    LOBYTE(v4) = 1;
    ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmIdleUpdateConcurrency)(
      v1,
      (LARGE_INTEGER)PerformanceCounter.QuadPart,
      v4,
      0LL);
    *(_QWORD *)(a1 + 24192) = 0LL;
  }
  return 0LL;
}

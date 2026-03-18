/*
 * XREFs of PpmIdleInstallConcurrency @ 0x140169BA0
 * Callers:
 *     <none>
 * Callees:
 *     PpmIdleUpdateConcurrency @ 0x140169BE0 (PpmIdleUpdateConcurrency.c)
 */

__int64 __fastcall PpmIdleInstallConcurrency(__int64 a1, __int64 a2)
{
  LARGE_INTEGER PerformanceCounter; // rax

  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  ((void (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))PpmIdleUpdateConcurrency)(
    a2,
    (LARGE_INTEGER)PerformanceCounter.QuadPart,
    0LL,
    0LL);
  *(_QWORD *)(a1 + 24192) = a2;
  return 0LL;
}

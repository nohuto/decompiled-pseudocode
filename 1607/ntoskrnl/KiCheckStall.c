/*
 * XREFs of KiCheckStall @ 0x1401D7B20
 * Callers:
 *     KeSwitchFrozenProcessor @ 0x1401D7A84 (KeSwitchFrozenProcessor.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall KiCheckStall(__int64 a1, char a2)
{
  __int64 v2; // rdi
  LARGE_INTEGER v5; // r8
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+30h] [rbp+8h] BYREF

  v2 = KiFreezeStallOwner;
  if ( a1 == KiFreezeStallOwner )
  {
    v5 = KeQueryPerformanceCounter(&PerformanceFrequency);
    if ( (unsigned __int64)(1000 * (v5.QuadPart - KiLastStallTick)) / PerformanceFrequency.QuadPart > 0x1F4 )
      KiLastStallTick = v5.QuadPart;
  }
  result = KiDebuggerOwner;
  if ( a2 && v2 && v2 != a1 && KiDebuggerOwner && KiDebuggerOwner != a1 )
    _mm_pause();
  return result;
}

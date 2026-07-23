/*
 * XREFs of KeStallWhileFrozen @ 0x140091F20
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 KeStallWhileFrozen()
{
  LARGE_INTEGER v0; // r8
  unsigned __int64 v1; // r9
  unsigned __int64 v2; // rax
  bool v3; // cc
  __int64 result; // rax
  LARGE_INTEGER PerformanceFrequency; // [rsp+38h] [rbp+10h] BYREF

  if ( KeGetCurrentPrcb() != (struct _KPRCB *)KiFreezeStallOwner )
    return KiDebuggerOwner;
  v0 = KeQueryPerformanceCounter(&PerformanceFrequency);
  v1 = 1000 * (v0.QuadPart - KiLastStallTick);
  if ( PerformanceFrequency.QuadPart == 3312661 )
    v2 = v1 / 0x328C15;
  else
    v2 = v1 / PerformanceFrequency.QuadPart;
  v3 = v2 <= 0x1F4;
  result = KiDebuggerOwner;
  if ( !v3 )
    KiLastStallTick = v0.QuadPart;
  return result;
}

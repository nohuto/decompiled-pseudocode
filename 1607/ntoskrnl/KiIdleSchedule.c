/*
 * XREFs of KiIdleSchedule @ 0x1400D04D0
 * Callers:
 *     KiIdleLoop @ 0x140161FE0 (KiIdleLoop.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiEndThreadCycleAccumulation @ 0x1400D0560 (KiEndThreadCycleAccumulation.c)
 *     KiStartThreadCycleAccumulation @ 0x1400D1640 (KiStartThreadCycleAccumulation.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1)
{
  __int64 v2; // rdx
  __int64 result; // rax
  __int64 v4; // r8
  __int64 v5; // rdx
  int v6; // [rsp+30h] [rbp+8h] BYREF

  v6 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v6);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11755) = 0;
  v2 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v2 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v2, 0LL);
  _enable();
  result = KiSearchForNewThread(a1, 1);
  if ( result )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v5 = *(_QWORD *)(a1 + 24);
    _disable();
    LOBYTE(v4) = 1;
    KiStartThreadCycleAccumulation(a1, v5, v4);
    _enable();
    return 0LL;
  }
  return result;
}

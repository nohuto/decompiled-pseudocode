/*
 * XREFs of KiIdleSchedule @ 0x1400DF180
 * Callers:
 *     KiIdleLoop @ 0x140157220 (KiIdleLoop.c)
 * Callees:
 *     KiEndThreadCycleAccumulation @ 0x14007BC90 (KiEndThreadCycleAccumulation.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiStartThreadCycleAccumulation @ 0x14007CDE0 (KiStartThreadCycleAccumulation.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 */

__int64 __fastcall KiIdleSchedule(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rdx
  __int64 result; // rax
  __int64 v6; // rdx
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v7 = 0;
  while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
  {
    do
      KeYieldProcessorEx(&v7, a2, a3);
    while ( *(_QWORD *)(a1 + 48) );
  }
  *(_BYTE *)(a1 + 11755) = 0;
  v4 = *(_QWORD *)(a1 + 24);
  if ( *(_QWORD *)(a1 + 16) == v4 )
    *(_QWORD *)(a1 + 16) = 0LL;
  _disable();
  KiEndThreadCycleAccumulation(a1, v4, 0LL);
  _enable();
  result = KiSearchForNewThread((struct _KPRCB *)a1, 1);
  if ( result )
  {
    _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
  }
  else
  {
    v6 = *(_QWORD *)(a1 + 24);
    _disable();
    KiStartThreadCycleAccumulation(a1, v6, 1);
    _enable();
    return 0LL;
  }
  return result;
}

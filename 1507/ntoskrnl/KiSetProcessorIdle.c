/*
 * XREFs of KiSetProcessorIdle @ 0x1400D53B0
 * Callers:
 *     KiSchedulerApc @ 0x14000EB14 (KiSchedulerApc.c)
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KeTransitionProcessorParkState @ 0x14020AF40 (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1403F98E4 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rdx
  unsigned __int64 result; // rax
  int v8; // eax

  v3 = *(_QWORD *)(a1 + 1600);
  v4 = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    *(_BYTE *)(a1 + 11755) = a3;
    if ( (v4 & 1) == 0 )
      __fastfail(0x21u);
    v5 = v4 - 1;
    *(_BYTE *)(a1 + 35) = v5;
    if ( !v5 )
      _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 1617));
    v6 = *(_QWORD *)(a1 + 24792);
    result = v6 & *(_QWORD *)(v3 + 16);
    if ( result == v6 )
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v6);
  }
  else
  {
    *(_BYTE *)(a1 + 11755) = 0;
    if ( (v4 & 1) != 0 )
      __fastfail(0x21u);
    v8 = v4 + 1;
    *(_BYTE *)(a1 + 35) = v8;
    if ( v8 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 1617));
    result = ~*(_QWORD *)(a1 + 24792);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), result);
  }
  return result;
}

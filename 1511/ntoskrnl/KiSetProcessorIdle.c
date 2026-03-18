/*
 * XREFs of KiSetProcessorIdle @ 0x1400EC330
 * Callers:
 *     KiSchedulerApc @ 0x140029304 (KiSchedulerApc.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 *     KeTransitionProcessorParkState @ 0x1401CBFEC (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1403A9A9C (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  int v4; // eax
  int v5; // eax
  unsigned __int64 result; // rax
  int v7; // eax
  unsigned __int64 v8; // rdx

  v3 = *(_QWORD *)(a1 + 1600);
  v4 = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    *(_BYTE *)(a1 + 11755) = a3;
    if ( (v4 & 1) == 0 )
      __fastfail(0x21u);
    v7 = v4 - 1;
    *(_BYTE *)(a1 + 35) = v7;
    if ( !v7 )
      _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 1617));
    v8 = *(_QWORD *)(a1 + 24792);
    result = v8 & *(_QWORD *)(v3 + 16);
    if ( result == v8 )
      _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v8);
  }
  else
  {
    *(_BYTE *)(a1 + 11755) = 0;
    if ( (v4 & 1) != 0 )
      __fastfail(0x21u);
    v5 = v4 + 1;
    *(_BYTE *)(a1 + 35) = v5;
    if ( v5 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 1617));
    result = ~*(_QWORD *)(a1 + 24792);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), result);
  }
  return result;
}

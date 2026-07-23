/*
 * XREFs of KiSetProcessorIdle @ 0x1400ACFA8
 * Callers:
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiSchedulerApc @ 0x1400C95C0 (KiSchedulerApc.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 *     KeTransitionProcessorParkState @ 0x1401DBAA4 (KeTransitionProcessorParkState.c)
 *     KiCompleteKernelInit @ 0x1403D46A0 (KiCompleteKernelInit.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall KiSetProcessorIdle(__int64 a1, int a2, char a3)
{
  __int64 v3; // r9
  unsigned __int64 result; // rax
  int v5; // eax
  int v6; // eax
  unsigned __int64 v7; // rdx

  v3 = *(_QWORD *)(a1 + 1600);
  result = *(unsigned __int8 *)(a1 + 35);
  if ( a2 )
  {
    *(_BYTE *)(a1 + 11755) = a3;
    if ( (result & 1) != 0 )
    {
      v6 = result - 1;
      *(_BYTE *)(a1 + 35) = v6;
      if ( !v6 )
        _interlockedbittestandset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 1617));
      _interlockedbittestandset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 1617));
      v7 = *(_QWORD *)(a1 + 24920);
      result = v7 & *(_QWORD *)(v3 + 16);
      if ( result == v7 )
        _InterlockedOr64((volatile signed __int64 *)(v3 + 8), v7);
    }
  }
  else
  {
    *(_BYTE *)(a1 + 11755) = 0;
    if ( (result & 1) != 0 )
      __fastfail(0x21u);
    v5 = result + 1;
    *(_BYTE *)(a1 + 35) = v5;
    if ( v5 == 1 )
      _interlockedbittestandreset64((volatile signed __int32 *)v3, *(unsigned __int8 *)(a1 + 1617));
    _interlockedbittestandreset64((volatile signed __int32 *)(v3 + 16), *(unsigned __int8 *)(a1 + 1617));
    result = ~*(_QWORD *)(a1 + 24920);
    _InterlockedAnd64((volatile signed __int64 *)(v3 + 8), result);
  }
  return result;
}

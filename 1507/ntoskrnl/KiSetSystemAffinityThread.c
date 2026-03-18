/*
 * XREFs of KiSetSystemAffinityThread @ 0x1400D50B8
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x1400D4C6C (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400D4F5C (KeSetSystemGroupAffinityThread.c)
 * Callees:
 *     KiUpdateNodeAffinitizedFlag @ 0x14000FA64 (KiUpdateNodeAffinitizedFlag.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x14009C160 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiComputeThreadAffinity @ 0x1400D54A4 (KiComputeThreadAffinity.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(__int64 a1, __int64 a2, unsigned int a3, __int64 a4)
{
  __int64 v5; // rbx
  unsigned __int16 v7; // r9
  __int64 v8; // rsi
  __int64 v9; // rax
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rax
  __int64 v12; // rax
  __int64 result; // rax
  unsigned int v14; // ebx

  v5 = *(_QWORD *)(a1 + 8);
  *(_WORD *)(v5 + 584) = *(_WORD *)(a2 + 8);
  *(_QWORD *)(v5 + 576) = *(_QWORD *)a2;
  if ( a3 < 0x280 )
  {
    *(_DWORD *)(v5 + 588) = a3;
    v12 = a3;
LABEL_8:
    v8 = KiProcessorBlock[v12];
    goto LABEL_9;
  }
  v7 = *(_WORD *)(a2 + 8);
  v8 = KiProcessorBlock[*(unsigned int *)(v5 + 588)];
  if ( *(unsigned __int8 *)(v8 + 1616) != v7 || (*(_QWORD *)(v8 + 1608) & *(_QWORD *)a2) == 0LL )
  {
    v9 = *(_QWORD *)(v8 + 1600);
    v10 = *(_QWORD *)a2;
    if ( v7 == *(_WORD *)(v9 + 144) )
    {
      v11 = v10 & *(_QWORD *)(v9 + 136);
      if ( v11 )
        v10 = v11;
    }
    _BitScanReverse64(&v10, v10);
    v12 = (unsigned int)KiProcessorNumberToIndexMappingTable[64 * v7 + (unsigned int)v10];
    *(_DWORD *)(v5 + 588) = v12;
    goto LABEL_8;
  }
LABEL_9:
  if ( (*(_DWORD *)(v5 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v5) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v8, v5);
    KiUpdateNodeAffinitizedFlag(v5);
  }
  result = *(unsigned __int8 *)(a1 + 1616);
  if ( (_WORD)result != *(_WORD *)(v5 + 584) || (result = *(_QWORD *)(a1 + 1608), (result & *(_QWORD *)(v5 + 576)) == 0) )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v5 + 120), 0xBu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v14 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          if ( (++v14 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
            _mm_pause();
          else
            HvlNotifyLongSpinWait(v14);
          result = *(_QWORD *)(a1 + 48);
        }
        while ( result );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        result = KiSelectNextThread(a1, a4);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    }
  }
  return result;
}

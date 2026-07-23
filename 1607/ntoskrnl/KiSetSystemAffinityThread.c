/*
 * XREFs of KiSetSystemAffinityThread @ 0x1400CAA54
 * Callers:
 *     KeRevertToUserGroupAffinityThread @ 0x1400C6EE4 (KeRevertToUserGroupAffinityThread.c)
 *     KeSetSystemGroupAffinityThread @ 0x1400C8EB4 (KeSetSystemGroupAffinityThread.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KiPrcbInGroupAffinity @ 0x1400CABB0 (KiPrcbInGroupAffinity.c)
 *     KiComputeThreadAffinity @ 0x1400EFEB0 (KiComputeThreadAffinity.c)
 *     KiUpdateSharedReadyQueueAffinityThread @ 0x1400F0C64 (KiUpdateSharedReadyQueueAffinityThread.c)
 *     KiUpdateNodeAffinitizedFlag @ 0x1400F0CF8 (KiUpdateNodeAffinitizedFlag.c)
 */

__int64 __fastcall KiSetSystemAffinityThread(__int64 a1, __int64 a2, unsigned int a3, _QWORD *a4)
{
  __int64 v4; // rdi
  _QWORD *v5; // rbp
  __int64 v7; // rsi
  __int64 v8; // rdx
  unsigned __int64 v9; // r8
  __int64 v10; // rax
  unsigned __int64 v11; // rcx
  unsigned __int64 v12; // rax
  __int64 v13; // rax
  __int64 result; // rax
  unsigned __int64 *v15; // r8
  int v16; // [rsp+50h] [rbp+18h] BYREF

  v4 = *(_QWORD *)(a1 + 8);
  v5 = a4;
  *(_WORD *)(v4 + 584) = *(_WORD *)(a2 + 8);
  *(_QWORD *)(v4 + 576) = *(_QWORD *)a2;
  if ( a3 < 0x280 )
  {
    *(_DWORD *)(v4 + 588) = a3;
    v13 = a3;
    v9 = 0x140000000uLL;
LABEL_7:
    v7 = *(_QWORD *)(v9 + 8 * v13 + 3847104);
    goto LABEL_8;
  }
  v7 = KiProcessorBlock[*(unsigned int *)(v4 + 588)];
  if ( !(unsigned int)KiPrcbInGroupAffinity(v7, a2) )
  {
    v10 = *(_QWORD *)(v7 + 1600);
    a4 = (_QWORD *)*(unsigned __int16 *)(v8 + 8);
    v11 = *(_QWORD *)v8;
    if ( (_WORD)a4 == *(_WORD *)(v10 + 144) )
    {
      v12 = v11 & *(_QWORD *)(v10 + 136);
      if ( v12 )
        v11 = v12;
    }
    _BitScanReverse64(&v11, v11);
    v13 = *(unsigned int *)(v9 + 4LL * ((unsigned int)v11 + ((unsigned __int16)a4 << 6)) + 3857440);
    *(_DWORD *)(v4 + 588) = v13;
    goto LABEL_7;
  }
LABEL_8:
  if ( (*(_DWORD *)(v4 + 116) & 8) != 0 || !(unsigned int)KiComputeThreadAffinity(v4) )
  {
    KiUpdateSharedReadyQueueAffinityThread(v7, v4, v9, a4);
    KiUpdateNodeAffinitizedFlag(v4);
  }
  result = KiPrcbInGroupAffinity(a1, v4 + 576);
  if ( !(_DWORD)result )
  {
    _interlockedbittestandset((volatile signed __int32 *)(v4 + 120), 0xBu);
    if ( !*(_QWORD *)(a1 + 16) )
    {
      v16 = 0;
      while ( _interlockedbittestandset64((volatile signed __int32 *)(a1 + 48), 0LL) )
      {
        do
        {
          KeYieldProcessorEx(&v16);
          result = *(_QWORD *)(a1 + 48);
        }
        while ( result );
      }
      if ( !*(_QWORD *)(a1 + 16) )
        result = KiSelectNextThread(a1, v5, v15);
      _InterlockedAnd64((volatile signed __int64 *)(a1 + 48), 0LL);
    }
  }
  return result;
}

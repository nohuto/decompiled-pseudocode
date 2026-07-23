/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1400A361C
 * Callers:
 *     KiRemoveThreadFromSchedulingGroup @ 0x1400C6B2C (KiRemoveThreadFromSchedulingGroup.c)
 *     KiDeferGroupSchedulingPreemption @ 0x1400CDCB8 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 *     KiMoveScbThreadsToNewReadylist @ 0x1400D19F0 (KiMoveScbThreadsToNewReadylist.c)
 *     KiAddThreadToReadyQueue @ 0x1401D7BA8 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 */

unsigned int __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, signed int a3, int a4, char a5)
{
  __int64 v6; // rcx
  _QWORD *v10; // rbp
  _QWORD *v11; // rax
  __int64 v12; // rcx
  unsigned int result; // eax
  __int64 v14; // rsi
  _QWORD *v15; // rbx
  __int64 v16; // rax
  _QWORD *v17; // rcx
  _QWORD *v18; // rcx
  _QWORD *v19; // rax
  _QWORD *v20; // rcx
  int v21; // [rsp+40h] [rbp+8h] BYREF

  v6 = *(_QWORD *)(a1 + 24896);
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) != 0 && v6 && !a5 && (v6 & *(_QWORD *)(a2 + 576)) == v6 )
  {
    v14 = *(_QWORD *)(a1 + 24904);
    v15 = (_QWORD *)(v14 + 16 * (a3 + 1LL));
    v21 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v14, 0LL) )
    {
      do
        KeYieldProcessorEx(&v21);
      while ( *(_QWORD *)v14 );
    }
    if ( a4 )
    {
      v16 = *v15;
      v17 = (_QWORD *)(a2 + 216);
      if ( *(_QWORD **)(*v15 + 8LL) != v15 )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(a2 + 224) = v15;
      *(_QWORD *)(v16 + 8) = v17;
      *v15 = v17;
      _bittestandreset((signed __int32 *)(a1 + 22684), a3);
    }
    else
    {
      v18 = (_QWORD *)v15[1];
      v19 = (_QWORD *)(a2 + 216);
      if ( (_QWORD *)*v18 != v15 )
        __fastfail(3u);
      *v19 = v15;
      *(_QWORD *)(a2 + 224) = v18;
      *v18 = v19;
      v15[1] = v19;
    }
    *(_DWORD *)(v14 + 8) |= 1 << a3;
    result = *(_DWORD *)(a2 + 536) | 0x80000000;
    *(_DWORD *)(a2 + 536) = result;
    _InterlockedAnd64((volatile signed __int64 *)v14, 0LL);
  }
  else
  {
    v10 = (_QWORD *)(a2 + 216);
    v11 = (_QWORD *)(a1 + 16 * (a3 + 1424LL));
    if ( a4 )
    {
      v12 = *v11;
      if ( *(_QWORD **)(*v11 + 8LL) != v11 )
        __fastfail(3u);
      *v10 = v12;
      *(_QWORD *)(a2 + 224) = v11;
      *(_QWORD *)(v12 + 8) = v10;
      *v11 = v10;
      _bittestandset((signed __int32 *)(a1 + 22684), a3);
    }
    else
    {
      v20 = (_QWORD *)v11[1];
      if ( (_QWORD *)*v20 != v11 )
        __fastfail(3u);
      *v10 = v11;
      *(_QWORD *)(a2 + 224) = v20;
      *v20 = v10;
      v11[1] = v10;
    }
    result = *(_DWORD *)(a1 + 22680) | (1 << a3);
    *(_DWORD *)(a1 + 22680) = result;
  }
  return result;
}

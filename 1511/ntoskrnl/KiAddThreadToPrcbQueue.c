/*
 * XREFs of KiAddThreadToPrcbQueue @ 0x1400E6404
 * Callers:
 *     KiDeferGroupSchedulingPreemption @ 0x140029684 (KiDeferGroupSchedulingPreemption.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KiRemoveThreadFromSchedulingGroup @ 0x140095180 (KiRemoveThreadFromSchedulingGroup.c)
 *     KiAddThreadToReadyQueue @ 0x1401C95D8 (KiAddThreadToReadyQueue.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 */

unsigned int __fastcall KiAddThreadToPrcbQueue(__int64 a1, __int64 a2, __int64 a3, int a4)
{
  __int64 v5; // rcx
  unsigned int v7; // ebp
  __int64 *v9; // rsi
  __int64 *v10; // rax
  __int64 v11; // rcx
  unsigned int result; // eax
  __int64 v13; // r14
  __int64 *v14; // rbx
  __int64 *v15; // rax
  __int64 v16; // rcx
  __int64 **v17; // rcx
  __int64 **v18; // rcx
  int v19; // [rsp+40h] [rbp+8h] BYREF

  v5 = *(_QWORD *)(a1 + 24768);
  v7 = a3;
  if ( (*(_DWORD *)(a2 + 120) & 0x1000) != 0 && v5 && (v5 & *(_QWORD *)(a2 + 576)) == v5 )
  {
    v13 = *(_QWORD *)(a1 + 24776);
    v14 = (__int64 *)(v13 + 16 * ((int)a3 + 1LL));
    v19 = 0;
    while ( _interlockedbittestandset64((volatile signed __int32 *)v13, 0LL) )
    {
      do
        KeYieldProcessorEx(&v19, a2, a3);
      while ( *(_QWORD *)v13 );
    }
    v15 = (__int64 *)(a2 + 216);
    if ( a4 )
    {
      v16 = *v14;
      *v15 = *v14;
      *(_QWORD *)(a2 + 224) = v14;
      if ( *(__int64 **)(v16 + 8) != v14 )
        __fastfail(3u);
      *(_QWORD *)(v16 + 8) = v15;
      *v14 = (__int64)v15;
      _bittestandreset((signed __int32 *)(a1 + 22684), v7);
    }
    else
    {
      v17 = (__int64 **)v14[1];
      *v15 = (__int64)v14;
      *(_QWORD *)(a2 + 224) = v17;
      if ( *v17 != v14 )
        __fastfail(3u);
      *v17 = v15;
      v14[1] = (__int64)v15;
    }
    *(_DWORD *)(v13 + 8) |= 1 << v7;
    result = *(_DWORD *)(a2 + 536) | 0x80000000;
    *(_DWORD *)(a2 + 536) = result;
    _InterlockedAnd64((volatile signed __int64 *)v13, 0LL);
  }
  else
  {
    v9 = (__int64 *)(a2 + 216);
    v10 = (__int64 *)(a1 + 16 * ((int)a3 + 1424LL));
    if ( a4 )
    {
      v11 = *v10;
      *v9 = *v10;
      *(_QWORD *)(a2 + 224) = v10;
      if ( *(__int64 **)(v11 + 8) != v10 )
        __fastfail(3u);
      *(_QWORD *)(v11 + 8) = v9;
      *v10 = (__int64)v9;
      _bittestandset((signed __int32 *)(a1 + 22684), a3);
    }
    else
    {
      v18 = (__int64 **)v10[1];
      *v9 = (__int64)v10;
      *(_QWORD *)(a2 + 224) = v18;
      if ( *v18 != v10 )
        __fastfail(3u);
      *v18 = v9;
      v10[1] = (__int64)v9;
    }
    result = *(_DWORD *)(a1 + 22680) | (1 << a3);
    *(_DWORD *)(a1 + 22680) = result;
  }
  return result;
}

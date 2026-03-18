/*
 * XREFs of KiSelectReadyThread @ 0x1400832A0
 * Callers:
 *     KeDelayExecutionThread @ 0x140029A90 (KeDelayExecutionThread.c)
 *     KiSelectNextThread @ 0x14002A940 (KiSelectNextThread.c)
 *     KiQuantumEnd @ 0x14007AAB0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x14007B4A0 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x14007BB00 (KiGroupSchedulingGenerationEnd.c)
 *     KiSelectReadyThreadEx @ 0x14007CE70 (KiSelectReadyThreadEx.c)
 *     KiSearchForNewThread @ 0x140082AC0 (KiSearchForNewThread.c)
 *     KiChooseLowestRankedThread @ 0x1400C34F4 (KiChooseLowestRankedThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x14002A710 (KiGetThreadEffectiveRankNonZero.c)
 *     KeYieldProcessorEx @ 0x14007CAC0 (KeYieldProcessorEx.c)
 *     KiAddThreadToScbQueue @ 0x1400C38CC (KiAddThreadToScbQueue.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401C96E4 (KiConvertDynamicHeteroPolicy.c)
 */

__int64 __fastcall KiSelectReadyThread(signed int a1, __int64 a2, __int64 a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  __int64 v7; // r9
  bool v8; // zf
  unsigned int v9; // r15d
  signed int v10; // ecx
  __int64 v11; // rdx
  __int64 v12; // rsi
  unsigned int v13; // eax
  unsigned int v15; // r11d
  __int64 v16; // r9
  int v17; // r8d
  _QWORD *v18; // r12
  _QWORD *v19; // r13
  unsigned int v20; // eax
  __int64 v21; // rcx
  _QWORD *v22; // rcx
  _QWORD *v23; // rax
  __int64 v24; // r10
  __int64 v25; // r10
  __int64 v26; // r10
  _QWORD *v27; // r8
  _QWORD *v28; // r9
  _QWORD *v29; // rax
  int v30; // [rsp+70h] [rbp+8h]
  signed int v31; // [rsp+78h] [rbp+10h]
  int v32; // [rsp+80h] [rbp+18h] BYREF
  __int64 v33; // [rsp+88h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 24776);
  v4 = 1 << a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 80LL);
  v8 = (*(_BYTE *)(a2 + 35) & 2) == 0;
  v33 = v7;
  if ( !v8 && (v7 & *(_QWORD *)(a2 + 24768)) != 0 )
    v3 = 0LL;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a2 + 22680);
    v10 = -1;
    v31 = -1;
    LODWORD(v11) = -2;
    v30 = -2;
    v12 = 0LL;
    if ( v9 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v10, v9);
      v31 = v10;
      v9 = 1 << v10;
    }
    if ( v3 )
    {
      v13 = *(_DWORD *)(v3 + 8);
      if ( v13 >= v4 )
      {
        _BitScanReverse((unsigned int *)&v11, v13);
        v30 = v11;
      }
      else
      {
        v11 = 4294967294LL;
      }
      v10 = v31;
      if ( (int)v11 > v31 || (_DWORD)v11 == v31 && !_bittest((const signed __int32 *)(a2 + 22684), v31) )
      {
        v32 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v32, v11, a3);
          while ( *(_QWORD *)v3 );
        }
        v15 = *(_DWORD *)(v3 + 8);
        v16 = v33;
LABEL_15:
        if ( v15 >= v4 && v15 >= v9 )
        {
          _BitScanReverse((unsigned int *)&v17, v15);
          v30 = v17;
          v18 = (_QWORD *)(v3 + 16 * (v17 + 1LL));
          v15 ^= 1 << v17;
          v19 = (_QWORD *)*v18;
          while ( 1 )
          {
            v20 = *((unsigned __int8 *)v19 - 91);
            v12 = (__int64)(v19 - 27);
            if ( v20 >= 5 )
            {
              v20 = KiConvertDynamicHeteroPolicy(v19 - 27, v11, a2);
              v16 = v33;
            }
            v21 = -1LL;
            if ( v20 )
              v21 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 16LL * (int)v20 + 184);
            if ( (v21 & *(_QWORD *)(a2 + 1608)) != 0 || (v21 & *(_QWORD *)(a2 + 24768) & v16) == 0 )
              break;
            v19 = (_QWORD *)*v19;
            v12 = 0LL;
            if ( v19 == v18 )
              goto LABEL_15;
          }
          v22 = (_QWORD *)*v19;
          v23 = *(_QWORD **)(v12 + 224);
          if ( *(_QWORD **)(*v19 + 8LL) != v19 || (_QWORD *)*v23 != v19 )
            __fastfail(3u);
          *v23 = v22;
          v22[1] = v23;
          if ( v23 == v22 )
            *(_DWORD *)(v3 + 8) ^= 1 << v30;
          *(_DWORD *)(v12 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        if ( v12 )
        {
          if ( v30 == v31 )
            _bittestandset((signed __int32 *)(a2 + 22684), v31);
          goto LABEL_31;
        }
        LODWORD(v11) = v30;
        v10 = v31;
      }
    }
    if ( v10 >= a1 )
    {
      v27 = *(_QWORD **)(a2 + 16 * (v10 + 1424LL));
      v28 = (_QWORD *)*v27;
      v12 = (__int64)(v27 - 27);
      v29 = (_QWORD *)v27[1];
      if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v29 != v27 )
        __fastfail(3u);
      *v29 = v28;
      v28[1] = v29;
      if ( v29 == v28 )
        *(_DWORD *)(a2 + 22680) ^= 1 << v10;
      if ( v10 == (_DWORD)v11 )
        _bittestandreset((signed __int32 *)(a2 + 22684), v10);
    }
    if ( !v12 )
      return v12;
LABEL_31:
    v24 = *(_QWORD *)(v12 + 104);
    if ( !v24 )
      return v12;
    v25 = *(unsigned int *)(a2 + 1624) + v24;
    if ( !v25 || !(unsigned int)KiGetThreadEffectiveRankNonZero(v12, v25, 1) )
      return v12;
    KiAddThreadToScbQueue(a2, v26, v12, 0LL);
  }
}

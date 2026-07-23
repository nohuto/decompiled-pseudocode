/*
 * XREFs of KiSelectReadyThread @ 0x14005BD40
 * Callers:
 *     KiSearchForNewThread @ 0x14005B500 (KiSearchForNewThread.c)
 *     KiSelectReadyThreadEx @ 0x14005DAB0 (KiSelectReadyThreadEx.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400684D0 (ExpReleaseResourceForThreadLite.c)
 *     KiChooseLowestRankedThread @ 0x140098944 (KiChooseLowestRankedThread.c)
 *     KiSelectNextThread @ 0x1400C8450 (KiSelectNextThread.c)
 *     KeDelayExecutionThread @ 0x1400CE420 (KeDelayExecutionThread.c)
 *     KiQuantumEnd @ 0x1400CF620 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400CFF60 (KiGroupSchedulingQuantumEnd.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400D0340 (KiGroupSchedulingGenerationEnd.c)
 * Callees:
 *     KeYieldProcessorEx @ 0x14002E830 (KeYieldProcessorEx.c)
 *     KiAddThreadToScbQueue @ 0x140098D0C (KiAddThreadToScbQueue.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 *     KiConvertDynamicHeteroPolicy @ 0x1401D7C78 (KiConvertDynamicHeteroPolicy.c)
 */

unsigned __int64 *__fastcall KiSelectReadyThread(signed int a1, __int64 a2, unsigned __int64 *a3)
{
  __int64 v3; // r14
  unsigned int v4; // edi
  unsigned __int64 v7; // r9
  bool v8; // zf
  unsigned int v9; // r15d
  signed int v10; // ecx
  int v11; // edx
  unsigned __int64 *v12; // rsi
  unsigned int v13; // eax
  unsigned int v15; // r12d
  _QWORD **v16; // r13
  _QWORD *v17; // rdx
  unsigned int v18; // eax
  __int64 v19; // rcx
  unsigned __int64 **v20; // rcx
  unsigned __int64 **v21; // rax
  unsigned __int64 v22; // r15
  unsigned __int64 v23; // r15
  unsigned __int64 *v24; // rax
  _QWORD *v25; // [rsp+30h] [rbp-58h]
  int v26; // [rsp+90h] [rbp+8h]
  signed int v27; // [rsp+98h] [rbp+10h]
  int v28; // [rsp+A0h] [rbp+18h] BYREF
  _QWORD *v29; // [rsp+A8h] [rbp+20h]

  v3 = *(_QWORD *)(a2 + 24904);
  v4 = 1 << a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 80LL);
  v8 = (*(_BYTE *)(a2 + 35) & 2) == 0;
  v29 = (_QWORD *)v7;
  if ( !v8 && (v7 & *(_QWORD *)(a2 + 24896)) != 0 )
    v3 = 0LL;
  while ( 1 )
  {
    v9 = *(_DWORD *)(a2 + 22680);
    v10 = -1;
    v27 = -1;
    v11 = -2;
    v26 = -2;
    v12 = 0LL;
    if ( v9 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v10, v9);
      v27 = v10;
      v9 = 1 << v10;
    }
    if ( v3 )
    {
      v13 = *(_DWORD *)(v3 + 8);
      if ( v13 >= v4 )
      {
        _BitScanReverse((unsigned int *)&v11, v13);
        v26 = v11;
      }
      else
      {
        v11 = -2;
      }
      v10 = v27;
      if ( v11 > v27 || v11 == v27 && !_bittest((const signed __int32 *)(a2 + 22684), v27) )
      {
        v28 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
            KeYieldProcessorEx(&v28);
          while ( *(_QWORD *)v3 );
        }
        v15 = *(_DWORD *)(v3 + 8);
        v7 = (unsigned __int64)v29;
LABEL_16:
        if ( v15 >= v4 && v15 >= v9 )
        {
          _BitScanReverse((unsigned int *)&a3, v15);
          v26 = (int)a3;
          v16 = (_QWORD **)(v3 + 16 * ((int)a3 + 1LL));
          v15 ^= 1 << (char)a3;
          v17 = *v16;
          v25 = *v16;
          while ( 1 )
          {
            v18 = *((unsigned __int8 *)v17 - 91);
            v12 = v17 - 27;
            if ( v18 >= 5 )
            {
              v18 = KiConvertDynamicHeteroPolicy(v17 - 27, v17, a2);
              v17 = v25;
              v7 = (unsigned __int64)v29;
            }
            v19 = -1LL;
            if ( v18 )
              v19 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 24 * ((int)v18 + 8LL));
            if ( (v19 & *(_QWORD *)(a2 + 1608)) != 0 || (v19 & *(_QWORD *)(a2 + 24896) & v7) == 0 )
              break;
            v17 = (_QWORD *)*v17;
            v12 = 0LL;
            v25 = v17;
            if ( v17 == v16 )
              goto LABEL_16;
          }
          v20 = (unsigned __int64 **)v12[27];
          v21 = (unsigned __int64 **)v12[28];
          if ( v20[1] != v12 + 27 || *v21 != v12 + 27 )
            __fastfail(3u);
          *v21 = (unsigned __int64 *)v20;
          v20[1] = (unsigned __int64 *)v21;
          if ( v21 == v20 )
            *(_DWORD *)(v3 + 8) ^= 1 << v26;
          *((_DWORD *)v12 + 134) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        if ( v12 )
        {
          if ( v26 == v27 )
            _bittestandset((signed __int32 *)(a2 + 22684), v27);
          goto LABEL_32;
        }
        v11 = v26;
        v10 = v27;
      }
    }
    if ( v10 >= a1 )
    {
      a3 = *(unsigned __int64 **)(a2 + 16 * (v10 + 1424LL));
      v7 = *a3;
      v12 = a3 - 27;
      v24 = (unsigned __int64 *)a3[1];
      if ( *(unsigned __int64 **)(*a3 + 8) != a3 || (unsigned __int64 *)*v24 != a3 )
        __fastfail(3u);
      *v24 = v7;
      *(_QWORD *)(v7 + 8) = v24;
      if ( v24 == (unsigned __int64 *)v7 )
        *(_DWORD *)(a2 + 22680) ^= 1 << v10;
      if ( v10 == v11 )
        _bittestandreset((signed __int32 *)(a2 + 22684), v10);
    }
    if ( !v12 )
      return v12;
LABEL_32:
    v22 = v12[13];
    if ( !v22 )
      return v12;
    v23 = *(unsigned int *)(a2 + 1624) + v22;
    if ( !v23 )
      return v12;
    LOBYTE(v7) = 1;
    if ( !(unsigned int)KiGetThreadEffectiveRankNonZero((_DWORD)v12, v23, (_DWORD)a3, v7, 0LL) )
      return v12;
    KiAddThreadToScbQueue(a2, v23, v12, 0LL);
  }
}

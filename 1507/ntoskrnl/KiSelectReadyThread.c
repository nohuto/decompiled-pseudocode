/*
 * XREFs of KiSelectReadyThread @ 0x1400A19C0
 * Callers:
 *     KiSearchForNewThread @ 0x1400A1160 (KiSearchForNewThread.c)
 *     KiSelectReadyThreadEx @ 0x1400A24B0 (KiSelectReadyThreadEx.c)
 *     KiQuantumEnd @ 0x1400A25A0 (KiQuantumEnd.c)
 *     KiGroupSchedulingQuantumEnd @ 0x1400A3400 (KiGroupSchedulingQuantumEnd.c)
 *     ExpReleaseResourceForThreadLite @ 0x1400C92E0 (ExpReleaseResourceForThreadLite.c)
 *     KiSelectNextThread @ 0x1400D5240 (KiSelectNextThread.c)
 *     KiGroupSchedulingGenerationEnd @ 0x1400EC860 (KiGroupSchedulingGenerationEnd.c)
 *     KiChooseLowestRankedThread @ 0x1400ED5E4 (KiChooseLowestRankedThread.c)
 * Callees:
 *     KiGetThreadEffectiveRankNonZero @ 0x1400EC740 (KiGetThreadEffectiveRankNonZero.c)
 *     KiAddThreadToScbQueue @ 0x1400EDC94 (KiAddThreadToScbQueue.c)
 *     HvlNotifyLongSpinWait @ 0x14017DFB0 (HvlNotifyLongSpinWait.c)
 */

__int64 __fastcall KiSelectReadyThread(signed int a1, __int64 a2)
{
  __int64 v2; // r8
  __int64 v3; // r14
  unsigned int v4; // r12d
  __int64 v7; // rbp
  unsigned int v8; // r15d
  signed int v9; // ecx
  int v10; // edx
  __int64 v11; // rdi
  unsigned int v12; // eax
  unsigned int v13; // ebx
  unsigned int v14; // r10d
  int v15; // eax
  __int64 *v16; // r9
  unsigned int v17; // eax
  int v18; // edx
  __int64 v19; // rcx
  __int64 v20; // rcx
  unsigned int v21; // eax
  __int64 v22; // rcx
  _QWORD *v23; // rcx
  _QWORD *v24; // rax
  _QWORD *v25; // r9
  _QWORD *v26; // rax
  __int64 v27; // r10
  __int64 v28; // r10
  __int64 v29; // r10
  int v31; // [rsp+60h] [rbp+8h]
  signed int v32; // [rsp+68h] [rbp+10h]

  v2 = 1LL;
  v3 = *(_QWORD *)(a2 + 24776);
  v4 = 1 << a1;
  v7 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 80LL);
  if ( (*(_BYTE *)(a2 + 35) & 2) != 0 && (v7 & *(_QWORD *)(a2 + 24768)) != 0 )
    v3 = 0LL;
  while ( 1 )
  {
    v8 = *(_DWORD *)(a2 + 22680);
    v9 = -1;
    v32 = -1;
    v10 = -2;
    v31 = -2;
    v11 = 0LL;
    if ( v8 >= v4 )
    {
      _BitScanReverse((unsigned int *)&v9, v8);
      v32 = v9;
      v8 = 1 << v9;
    }
    if ( v3 )
    {
      v12 = *(_DWORD *)(v3 + 8);
      if ( v12 < v4 )
      {
        v10 = -2;
      }
      else
      {
        _BitScanReverse((unsigned int *)&v10, v12);
        v31 = v10;
      }
      v9 = v32;
      if ( v10 > v32 || v10 == v32 && !_bittest((const signed __int32 *)(a2 + 22684), v32) )
      {
        v13 = 0;
        while ( _interlockedbittestandset64((volatile signed __int32 *)v3, 0LL) )
        {
          do
          {
            if ( (++v13 & HvlLongSpinCountMask) != 0 || (HvlEnlightenments & 0x40) == 0 )
              _mm_pause();
            else
              HvlNotifyLongSpinWait(v13);
          }
          while ( *(_QWORD *)v3 );
        }
        v14 = *(_DWORD *)(v3 + 8);
LABEL_22:
        if ( v14 >= v8 && v14 >= v4 )
        {
          _BitScanReverse((unsigned int *)&v15, v14);
          v31 = v15;
          v16 = (__int64 *)(v3 + 16 * (v15 + 1LL));
          v14 ^= 1 << v15;
          v2 = *v16;
          while ( 1 )
          {
            v17 = *(unsigned __int8 *)(v2 - 91);
            v11 = v2 - 216;
            if ( v17 >= 5 )
            {
              if ( (KiDynamicHeteroCpuPolicyMask & 1) != 0 && *(_BYTE *)(*(_QWORD *)(v11 + 544) + 1490LL) == 2 )
                goto LABEL_39;
              if ( (KiDynamicHeteroCpuPolicyMask & 2) == 0 )
                goto LABEL_42;
              v18 = *(char *)(v11 + 195);
              if ( *(char *)(v11 + 195) < 16 )
              {
                if ( *(_QWORD *)(v11 + 104) )
                {
                  v19 = *(_QWORD *)(v11 + 104);
                  if ( v19 )
                  {
                    v20 = *(unsigned int *)(a2 + 1624) + v19;
                    if ( v20 )
                    {
                      if ( (*(_BYTE *)(v20 + 112) & 8) != 0 )
                        v18 = 1;
                    }
                  }
                }
              }
              if ( v18 >= KiDynamicHeteroCpuPolicyImportantPriority )
              {
LABEL_39:
                if ( (KiDynamicHeteroCpuPolicyMask & 4) == 0 )
                  goto LABEL_41;
                v21 = *(_DWORD *)(v11 + 84);
                if ( *(_DWORD *)(v11 + 80) > v21 )
                  v21 = *(_DWORD *)(v11 + 80);
                if ( v21 < (unsigned __int64)(unsigned int)KiDynamicHeteroCpuPolicyExpectedCycles )
                  v17 = KiDynamicHeteroCpuPolicyImportantShort;
                else
LABEL_41:
                  v17 = KiDynamicHeteroCpuPolicyImportant;
              }
              else
              {
LABEL_42:
                v17 = KiDefaultDynamicHeteroCpuPolicy;
              }
            }
            v22 = -1LL;
            if ( v17 )
              v22 = *(_QWORD *)(*(_QWORD *)(a2 + 1600) + 16LL * (int)v17 + 184);
            if ( (v22 & *(_QWORD *)(a2 + 1608)) != 0 || (v22 & *(_QWORD *)(a2 + 24768) & v7) == 0 )
              break;
            v2 = *(_QWORD *)v2;
            v11 = 0LL;
            if ( (__int64 *)v2 == v16 )
              goto LABEL_22;
          }
          v23 = *(_QWORD **)v2;
          v24 = *(_QWORD **)(v11 + 224);
          if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || *v24 != v2 )
            __fastfail(3u);
          *v24 = v23;
          v23[1] = v24;
          if ( v24 == v23 )
            *(_DWORD *)(v3 + 8) ^= 1 << v31;
          *(_DWORD *)(v11 + 536) = *(_DWORD *)(a2 + 36);
        }
        _InterlockedAnd64((volatile signed __int64 *)v3, 0LL);
        if ( v11 )
        {
          if ( v31 == v32 )
            _bittestandset((signed __int32 *)(a2 + 22684), v32);
          goto LABEL_66;
        }
        v10 = v31;
        v9 = v32;
      }
    }
    if ( v9 >= a1 )
    {
      v2 = *(_QWORD *)(a2 + 16 * (v9 + 1424LL));
      v25 = *(_QWORD **)v2;
      v11 = v2 - 216;
      v26 = *(_QWORD **)(v2 + 8);
      if ( *(_QWORD *)(*(_QWORD *)v2 + 8LL) != v2 || *v26 != v2 )
        __fastfail(3u);
      *v26 = v25;
      v25[1] = v26;
      if ( v26 == v25 )
        *(_DWORD *)(a2 + 22680) ^= 1 << v9;
      if ( v9 == v10 )
        _bittestandreset((signed __int32 *)(a2 + 22684), v9);
    }
    if ( !v11 )
      return v11;
LABEL_66:
    v27 = *(_QWORD *)(v11 + 104);
    if ( !v27 )
      return v11;
    v28 = *(unsigned int *)(a2 + 1624) + v27;
    if ( !v28 )
      return v11;
    LOBYTE(v2) = 1;
    if ( !(unsigned int)KiGetThreadEffectiveRankNonZero(v11, v28, v2) )
      return v11;
    KiAddThreadToScbQueue(a2, v29, v11, 0LL);
    v2 = 1LL;
  }
}

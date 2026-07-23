/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x1400D19F0
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400A50A8 (KeSetSchedulingGroupRankBias.c)
 *     KiTransitionSchedulingGroupGeneration @ 0x1400D1710 (KiTransitionSchedulingGroupGeneration.c)
 * Callees:
 *     KiAddThreadToPrcbQueue @ 0x1400A361C (KiAddThreadToPrcbQueue.c)
 *     KiGetThreadEffectiveRankNonZero @ 0x1400CE0C0 (KiGetThreadEffectiveRankNonZero.c)
 */

void __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  bool v5; // r15
  char v6; // si
  char v7; // r12
  unsigned int v10; // edi
  unsigned int v12; // eax
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  __int64 v15; // rax
  _QWORD *v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  _QWORD *v19; // r9
  __int64 v20; // [rsp+30h] [rbp-68h]
  __int64 v21; // [rsp+38h] [rbp-60h]
  _QWORD *v22; // [rsp+40h] [rbp-58h]
  _QWORD *v23; // [rsp+48h] [rbp-50h]
  __int64 v24; // [rsp+50h] [rbp-48h]
  char v25; // [rsp+A0h] [rbp+8h] BYREF
  unsigned int v26; // [rsp+A8h] [rbp+10h]

  v5 = 0;
  v6 = 0;
  v7 = 0;
  v20 = 0LL;
  v10 = *(unsigned __int16 *)(a1 + 114);
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v10;
    v20 = a2 + 136;
    v7 = 1;
  }
  else if ( a3 )
  {
    v6 = 1;
  }
  else
  {
    v5 = a4 != 0LL;
  }
  for ( ; v10; *v13 = v13 )
  {
    _BitScanReverse(&v12, v10);
    v10 ^= 1 << v12;
    v13 = (_QWORD *)(16LL * v12 + a1 + 136);
    v26 = v12;
    v24 = 16LL * v12;
    v22 = v13;
    v14 = (_QWORD *)*v13;
    do
    {
      v15 = (__int64)(v14 - 27);
      v21 = (__int64)(v14 - 27);
      if ( v7 )
      {
        *(_QWORD *)(v15 + 1496) = a2;
      }
      else
      {
        *(_DWORD *)(v15 + 116) &= ~0x2000u;
        *(_QWORD *)(v15 + 1496) = 0LL;
      }
      v14 = (_QWORD *)*v14;
      v23 = v14;
      if ( v5 )
      {
        *(_BYTE *)(v15 + 388) = 7;
        *(_QWORD *)(v15 + 216) = *a4;
        *a4 = v15 + 216;
      }
      else if ( v6 )
      {
        KiGetThreadEffectiveRankNonZero(v15, a1, (__int64)v14, 0, (bool *)&v25);
        KiAddThreadToPrcbQueue(a3, v21, *(char *)(v21 + 195), 0, v25);
        v13 = v22;
        v14 = v23;
      }
    }
    while ( v14 != v13 );
    if ( v7 )
    {
      v16 = (_QWORD *)*v13;
      v17 = (_QWORD *)v13[1];
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v17 != v13 )
        __fastfail(3u);
      v18 = (_QWORD *)(v20 + v24);
      *v17 = v16;
      v16[1] = v17;
      v19 = *(_QWORD **)(v20 + v24 + 8);
      if ( *(_QWORD **)(*v18 + 8LL) != v18 || (_QWORD *)*v19 != v18 )
        __fastfail(3u);
      if ( *(_QWORD **)(*v16 + 8LL) != v16 || *(_QWORD **)v16[1] != v16 )
        __fastfail(3u);
      *v19 = v16;
      v18[1] = v16[1];
      *(_QWORD *)v16[1] = v18;
      v16[1] = v19;
    }
    v13[1] = v13;
  }
  *(_WORD *)(a1 + 114) = 0;
}

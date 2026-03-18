/*
 * XREFs of KiMoveScbThreadsToNewReadylist @ 0x1401432F4
 * Callers:
 *     KeSetSchedulingGroupRankBias @ 0x1400C4120 (KeSetSchedulingGroupRankBias.c)
 * Callees:
 *     <none>
 */

void __fastcall KiMoveScbThreadsToNewReadylist(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  unsigned int v4; // r10d
  __int64 v8; // rsi
  bool v9; // r11
  char v10; // bp
  unsigned int v11; // eax
  __int64 v12; // r9
  _QWORD *v13; // rdx
  _QWORD *v14; // r8
  _QWORD *v15; // rcx
  _QWORD *v16; // rcx
  _QWORD *v17; // rcx
  _QWORD *v18; // rax
  __int64 v19; // r8
  __int64 v20; // rax
  _QWORD *v21; // r9

  v4 = *(unsigned __int16 *)(a1 + 114);
  v8 = 0LL;
  v9 = 0;
  v10 = 0;
  if ( a2 )
  {
    *(_WORD *)(a2 + 114) |= v4;
    v8 = a2 + 120;
    v10 = 1;
  }
  else if ( a3 )
  {
    *(_DWORD *)(a3 + 22680) |= v4;
    v8 = a3 + 22784;
  }
  else
  {
    v9 = a4 != 0LL;
  }
  while ( v4 )
  {
    _BitScanReverse(&v11, v4);
    v4 ^= 1 << v11;
    v12 = 16LL * v11;
    v13 = (_QWORD *)(v12 + a1 + 120);
    v14 = (_QWORD *)*v13;
    do
    {
      v15 = v14 - 27;
      if ( v10 )
      {
        v15[186] = a2;
      }
      else
      {
        *((_DWORD *)v15 + 29) &= ~0x2000u;
        v15[186] = 0LL;
      }
      v14 = (_QWORD *)*v14;
      if ( v9 )
      {
        *((_BYTE *)v15 + 388) = 7;
        v16 = v15 + 27;
        *v16 = *a4;
        *a4 = v16;
      }
    }
    while ( v14 != v13 );
    if ( !v9 )
    {
      v17 = (_QWORD *)*v13;
      v18 = (_QWORD *)v13[1];
      if ( *(_QWORD **)(*v13 + 8LL) != v13 || (_QWORD *)*v18 != v13 )
        __fastfail(3u);
      *v18 = v17;
      v19 = v12 + v8;
      v17[1] = v18;
      v20 = *(_QWORD *)(v12 + v8);
      v21 = *(_QWORD **)(v12 + v8 + 8);
      if ( *(_QWORD *)(v20 + 8) != v19 || *v21 != v19 )
        __fastfail(3u);
      if ( *(_QWORD **)(*v17 + 8LL) != v17 || *(_QWORD **)v17[1] != v17 )
        __fastfail(3u);
      *v21 = v17;
      *(_QWORD *)(v19 + 8) = v17[1];
      *(_QWORD *)v17[1] = v19;
      v17[1] = v21;
    }
    v13[1] = v13;
    *v13 = v13;
  }
  *(_WORD *)(a1 + 114) = 0;
}

/*
 * XREFs of ViDeadlockMergeNodes @ 0x1407154C8
 * Callers:
 *     ViDeadlockCheckDuplicatesAmongChildren @ 0x140714FA8 (ViDeadlockCheckDuplicatesAmongChildren.c)
 *     ViDeadlockCheckDuplicatesAmongRoots @ 0x140715024 (ViDeadlockCheckDuplicatesAmongRoots.c)
 * Callees:
 *     ViDeadlockUpdateChildrenCount @ 0x140715DE0 (ViDeadlockUpdateChildrenCount.c)
 */

__int64 __fastcall ViDeadlockMergeNodes(__int64 a1, __int64 a2, __int64 *a3)
{
  __int64 v3; // rax
  _QWORD *v5; // r9
  _QWORD *v6; // rdi
  _QWORD *v7; // rbx
  _QWORD *v8; // rsi
  __int64 v9; // rcx
  _QWORD *v10; // rax
  __int64 v11; // r10
  _QWORD *v12; // r11
  _QWORD *v13; // rcx
  __int64 v14; // r8
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  _QWORD *v17; // rcx
  __int64 result; // rax

  v3 = *(_QWORD *)(a2 + 64);
  v5 = (_QWORD *)a2;
  if ( v3 )
  {
    *(_QWORD *)(a1 + 64) = v3;
    *(_OWORD *)(a1 + 80) = *(_OWORD *)(a2 + 80);
    *(_OWORD *)(a1 + 96) = *(_OWORD *)(a2 + 96);
    *(_OWORD *)(a1 + 112) = *(_OWORD *)(a2 + 112);
    *(_OWORD *)(a1 + 128) = *(_OWORD *)(a2 + 128);
    *(_OWORD *)(a1 + 144) = *(_OWORD *)(a2 + 144);
    *(_OWORD *)(a1 + 160) = *(_OWORD *)(a2 + 160);
    *(_OWORD *)(a1 + 176) = *(_OWORD *)(a2 + 176);
    *(_OWORD *)(a1 + 192) = *(_OWORD *)(a2 + 192);
  }
  if ( (*(_DWORD *)(a2 + 72) & 1) != 0 )
    *(_DWORD *)(a1 + 72) = *(_DWORD *)(a2 + 72) & 1 | *(_DWORD *)(a1 + 72) & 0xFFFFFFFE;
  v6 = (_QWORD *)(a2 + 8);
  v7 = *(_QWORD **)(a2 + 8);
  while ( v7 != v6 )
  {
    v8 = v7 - 3;
    v7 = (_QWORD *)*v7;
    v9 = v8[3];
    v10 = (_QWORD *)v8[4];
    if ( *(_QWORD **)(v9 + 8) != v8 + 3 || (_QWORD *)*v10 != v8 + 3 )
      __fastfail(3u);
    *v10 = v9;
    *(_QWORD *)(v9 + 8) = v10;
    ViDeadlockUpdateChildrenCount(v5, (unsigned int)(-1 - *((_DWORD *)v8 + 19)));
    *v8 = v11;
    v13 = *(_QWORD **)(v11 + 16);
    if ( *v13 != v11 + 8 )
      __fastfail(3u);
    v12[1] = v13;
    *v12 = v11 + 8;
    *v13 = v12;
    *(_QWORD *)(v11 + 16) = v12;
    ViDeadlockUpdateChildrenCount(v11, (unsigned int)(*((_DWORD *)v8 + 19) + 1));
  }
  if ( *v5 )
  {
    v14 = v5[3];
    v15 = (_QWORD *)v5[4];
    if ( *(_QWORD **)(v14 + 8) != v5 + 3 || (_QWORD *)*v15 != v5 + 3 )
      __fastfail(3u);
    *v15 = v14;
    *(_QWORD *)(v14 + 8) = v15;
    ViDeadlockUpdateChildrenCount(*v5, 0xFFFFFFFFLL);
  }
  --*(_WORD *)(v5[7] + 4LL);
  v16 = v5[5];
  v17 = (_QWORD *)v5[6];
  if ( *(_QWORD **)(v16 + 8) != v5 + 5 || (_QWORD *)*v17 != v5 + 5 )
    __fastfail(3u);
  result = *a3;
  *v17 = v16;
  *(_QWORD *)(v16 + 8) = v17;
  *v5 = result;
  *a3 = (__int64)v5;
  return result;
}

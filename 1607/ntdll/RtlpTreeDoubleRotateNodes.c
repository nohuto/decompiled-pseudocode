/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x18006FB18
 * Callers:
 *     RtlAvlRemoveNode @ 0x18006ED70 (RtlAvlRemoveNode.c)
 *     RtlAvlInsertNodeEx @ 0x18006F950 (RtlAvlInsertNodeEx.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 v4; // r10
  __int64 v6; // r11
  __int64 v7; // rcx
  __int64 v8; // rdi
  __int64 v9; // r9
  __int64 v10; // r11
  __int64 v11; // r9
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 result; // rax
  __int64 v15; // rbx
  __int64 v16; // rcx

  v4 = *(_QWORD *)a3;
  if ( !a4 )
    v4 = *(_QWORD *)(a3 + 8);
  if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    __fastfail(0x1Du);
  v6 = a4 ^ 1LL;
  v7 = a4;
  if ( *(_QWORD *)(a3 + 8 * v6) != v4 )
    __fastfail(0x1Du);
  if ( *(_QWORD *)(a2 + 8LL * a4) != a3 || (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    __fastfail(0x1Du);
  *(_QWORD *)(a2 + 8LL * a4) = v4;
  *(_QWORD *)(v4 + 16) &= 3uLL;
  *(_QWORD *)(v4 + 16) |= a2;
  v8 = *(_QWORD *)(v4 + 8LL * a4);
  if ( v8 )
  {
    v15 = *(_QWORD *)(v8 + 16);
    if ( (v15 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      __fastfail(0x1Du);
    *(_QWORD *)(v8 + 16) = a3 | v15 & 3;
  }
  *(_QWORD *)(a3 + 8 * v6) = v8;
  v9 = a4 ^ 1;
  *(_QWORD *)(v4 + 8 * v7) = a3;
  *(_QWORD *)(a3 + 16) &= 3uLL;
  *(_QWORD *)(a3 + 16) |= v4;
  if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    __fastfail(0x1Du);
  v10 = (unsigned int)v9;
  v11 = v9 ^ 1;
  if ( *(_QWORD *)(a2 + 8 * v11) != v4 )
    __fastfail(0x1Du);
  v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v12 )
  {
    if ( *(_QWORD *)(v12 + 8) == a2 )
    {
      *(_QWORD *)(v12 + 8) = v4;
    }
    else
    {
      if ( *(_QWORD *)v12 != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)v12 = v4;
    }
  }
  else
  {
    if ( *a1 != a2 )
      __fastfail(0x1Du);
    *a1 = v4;
  }
  *(_QWORD *)(v4 + 16) &= 3uLL;
  *(_QWORD *)(v4 + 16) |= v12;
  v13 = *(_QWORD *)(v4 + 8 * v10);
  if ( v13 )
  {
    v16 = *(_QWORD *)(v13 + 16);
    if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != v4 )
      __fastfail(0x1Du);
    *(_QWORD *)(v13 + 16) = a2 | v16 & 3;
  }
  result = v4;
  *(_QWORD *)(a2 + 8 * v11) = v13;
  *(_QWORD *)(v4 + 8 * v10) = a2;
  *(_QWORD *)(a2 + 16) &= 3uLL;
  *(_QWORD *)(a2 + 16) |= v4;
  return result;
}

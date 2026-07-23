/*
 * XREFs of RtlpTreeDoubleRotateNodes @ 0x140026CC0
 * Callers:
 *     RtlAvlInsertNodeEx @ 0x140026F30 (RtlAvlInsertNodeEx.c)
 *     RtlAvlRemoveNode @ 0x140028080 (RtlAvlRemoveNode.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall RtlpTreeDoubleRotateNodes(_QWORD *a1, __int64 a2, unsigned __int64 a3, unsigned int a4)
{
  __int64 result; // rax
  unsigned __int64 *v5; // r11
  unsigned __int64 *v6; // rbx
  unsigned __int64 v7; // r10
  unsigned int v8; // r9d
  __int64 v9; // r10
  _QWORD *v10; // r9
  unsigned __int64 v11; // r8
  __int64 v12; // r8
  __int64 v13; // r11
  __int64 v14; // rdi

  result = *(_QWORD *)a3;
  if ( !a4 )
    result = *(_QWORD *)(a3 + 8);
  if ( (*(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a3 )
    __fastfail(0x1Du);
  v5 = (unsigned __int64 *)(a3 + 8 * (a4 ^ 1LL));
  if ( *v5 != result )
    __fastfail(0x1Du);
  if ( *(_QWORD *)(a2 + 8LL * a4) != a3 || (*(_QWORD *)(a3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    __fastfail(0x1Du);
  *(_QWORD *)(a2 + 8LL * a4) = result;
  v6 = (unsigned __int64 *)(result + 8LL * a4);
  *(_QWORD *)(result + 16) = a2 | *(_DWORD *)(result + 16) & 3;
  v7 = *v6;
  if ( *v6 )
  {
    v14 = *(_QWORD *)(v7 + 16);
    if ( (v14 & 0xFFFFFFFFFFFFFFFCuLL) != result )
      __fastfail(0x1Du);
    *(_QWORD *)(v7 + 16) = a3 | v14 & 3;
  }
  *v5 = v7;
  v8 = a4 ^ 1;
  *v6 = a3;
  *(_QWORD *)(a3 + 16) = result | *(_DWORD *)(a3 + 16) & 3;
  if ( (*(_QWORD *)(result + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
    __fastfail(0x1Du);
  v9 = v8;
  v10 = (_QWORD *)(a2 + 8 * (v8 ^ 1LL));
  if ( *v10 != result )
    __fastfail(0x1Du);
  v11 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v11 )
  {
    if ( *(_QWORD *)(v11 + 8) == a2 )
    {
      *(_QWORD *)(v11 + 8) = result;
    }
    else
    {
      if ( *(_QWORD *)v11 != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)v11 = result;
    }
  }
  else
  {
    if ( *a1 != a2 )
      __fastfail(0x1Du);
    *a1 = result;
  }
  *(_QWORD *)(result + 16) = v11 | *(_DWORD *)(result + 16) & 3;
  v12 = *(_QWORD *)(result + 8 * v9);
  if ( v12 )
  {
    v13 = *(_QWORD *)(v12 + 16);
    if ( (v13 & 0xFFFFFFFFFFFFFFFCuLL) != result )
      __fastfail(0x1Du);
    *(_QWORD *)(v12 + 16) = a2 | v13 & 3;
  }
  *v10 = v12;
  *(_QWORD *)(result + 8 * v9) = a2;
  *(_QWORD *)(a2 + 16) = result | *(_DWORD *)(a2 + 16) & 3;
  return result;
}

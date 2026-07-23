/*
 * XREFs of RtlAvlInsertNodeEx @ 0x18006F950
 * Callers:
 *     RtlInstallFunctionTableCallback @ 0x18006F120 (RtlInstallFunctionTableCallback.c)
 *     RtlAddFunctionTable @ 0x18006F450 (RtlAddFunctionTable.c)
 *     RtlAddGrowableFunctionTable @ 0x18006F750 (RtlAddGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x18006FB18 (RtlpTreeDoubleRotateNodes.c)
 */

void __fastcall RtlAvlInsertNodeEx(unsigned __int64 *a1, unsigned __int64 a2, bool a3, unsigned __int64 a4)
{
  bool v6; // r9
  _BYTE *v7; // r8
  char v8; // di
  int v9; // esi
  _BOOL8 v10; // rcx
  _BOOL8 v11; // r11
  unsigned __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx

  v6 = a3;
  *(_QWORD *)a4 = 0LL;
  *(_QWORD *)(a4 + 8) = 0LL;
  *(_QWORD *)(a4 + 16) = a2;
  if ( !a2 )
  {
    *a1 = a4;
    return;
  }
  *(_QWORD *)(a2 + 8LL * a3) = a4;
  while ( 1 )
  {
    v7 = (_BYTE *)(a2 + 16);
    v8 = *(_BYTE *)(a2 + 16) & 3;
    if ( v8 )
      break;
    *v7 &= 0xFCu;
    *v7 |= (-1 - 2 * v6) & 3;
    a4 = a2;
    a2 = *(_QWORD *)v7 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( !a2 )
      return;
    v6 = *(_QWORD *)a2 != a4;
  }
  if ( v8 != ((-1 - 2 * v6) & 3) )
    goto LABEL_15;
  v9 = *(_BYTE *)(a2 + 16) & 3;
  if ( (*(_BYTE *)(a4 + 16) & 3) == v9 )
  {
    v10 = !v6;
    if ( (*(_QWORD *)(a4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
      __fastfail(0x1Du);
    v11 = v10;
    if ( *(_QWORD *)(a2 + 8LL * v6) != a4 )
      __fastfail(0x1Du);
    v12 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v12 )
    {
      if ( *(_QWORD *)(v12 + 8) == a2 )
      {
        *(_QWORD *)(v12 + 8) = a4;
      }
      else
      {
        if ( *(_QWORD *)v12 != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)v12 = a4;
      }
    }
    else
    {
      if ( *a1 != a2 )
        __fastfail(0x1Du);
      *a1 = a4;
    }
    *(_QWORD *)(a4 + 16) &= 3uLL;
    *(_QWORD *)(a4 + 16) |= v12;
    v13 = *(_QWORD *)(a4 + 8 * v10);
    if ( v13 )
    {
      v16 = *(_QWORD *)(v13 + 16);
      if ( (v16 & 0xFFFFFFFFFFFFFFFCuLL) != a4 )
        __fastfail(0x1Du);
      *(_QWORD *)(v13 + 16) = a2 | v16 & 3;
    }
    *(_QWORD *)(a2 + 8LL * v6) = v13;
    *(_QWORD *)(a4 + 8 * v11) = a2;
    *(_QWORD *)(a2 + 16) &= 3uLL;
    *(_QWORD *)(a2 + 16) |= a4;
    *(_BYTE *)(a4 + 16) &= 0xFCu;
LABEL_15:
    *(_BYTE *)(a2 + 16) &= 0xFCu;
    return;
  }
  v14 = RtlpTreeDoubleRotateNodes(a1, a2, a4, v6);
  *(_BYTE *)(v15 + 16) &= 0xFCu;
  *(_BYTE *)(a4 + 16) &= 0xFCu;
  if ( v9 == (*(_BYTE *)(v14 + 16) & 3) )
  {
    *(_BYTE *)(v15 + 16) &= 0xFCu;
    *(_BYTE *)(v15 + 16) |= (v8 ^ 0xFE) & 3;
  }
  else if ( v9 == ((*(_BYTE *)(v14 + 16) ^ 0xFE) & 3) )
  {
    *(_BYTE *)(a4 + 16) ^= (v8 ^ *(_BYTE *)(a4 + 16)) & 3;
  }
  *(_BYTE *)(v14 + 16) &= 0xFCu;
}

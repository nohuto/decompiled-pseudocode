/*
 * XREFs of RtlAvlRemoveNode @ 0x18006ED70
 * Callers:
 *     RtlDeleteFunctionTable @ 0x18006E9C0 (RtlDeleteFunctionTable.c)
 *     RtlDeleteGrowableFunctionTable @ 0x18006EBB0 (RtlDeleteGrowableFunctionTable.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x18006FB18 (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r10
  __int64 v4; // r11
  unsigned __int64 v7; // rdx
  char v8; // cl
  _BYTE *v9; // rdi
  char v10; // bp
  unsigned __int64 v11; // rsi
  bool v12; // zf
  _QWORD *v13; // rax
  unsigned __int64 v14; // r8
  unsigned int v15; // ebx
  __int64 v16; // rcx
  unsigned __int64 v17; // r10
  _BOOL8 v18; // r11
  unsigned __int64 v19; // rbx
  char v20; // r11
  _BOOL8 v21; // r10
  __int64 v22; // r9
  _QWORD *v23; // rax
  int v24; // ecx
  _UNKNOWN *retaddr; // [rsp+38h] [rbp+0h] BYREF

  v2 = (unsigned __int64)&retaddr;
  v3 = *(_QWORD *)a2;
  v4 = *(_QWORD *)(a2 + 8);
  if ( *(_QWORD *)a2 )
  {
    if ( v4 )
    {
      if ( (*(_BYTE *)(a2 + 16) & 3) == 3 )
      {
        v23 = *(_QWORD **)(v3 + 8);
        v15 = 0;
        v14 = *(_QWORD *)a2;
        v7 = *(_QWORD *)a2;
        if ( v23 )
        {
          v15 = 1;
          do
          {
            v7 = v14;
            v14 = (unsigned __int64)v23;
            v23 = (_QWORD *)v23[1];
          }
          while ( v23 );
        }
        v16 = *(_QWORD *)v14;
      }
      else
      {
        v13 = *(_QWORD **)v4;
        v14 = *(_QWORD *)(a2 + 8);
        v7 = v14;
        v15 = 1;
        if ( *(_QWORD *)v4 )
        {
          v15 = 0;
          do
          {
            v7 = v14;
            v14 = (unsigned __int64)v13;
            v13 = (_QWORD *)*v13;
          }
          while ( v13 );
        }
        v16 = *(_QWORD *)(v14 + 8);
      }
      *(_QWORD *)v14 = v3;
      *(_QWORD *)(v14 + 8) = v4;
      if ( (*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v3 + 16) = v14 | *(_QWORD *)(v3 + 16) & 3LL;
      if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v4 + 16) = v14 | *(_QWORD *)(v4 + 16) & 3LL;
      if ( (*(_QWORD *)(v14 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      *(_QWORD *)(v7 + 8LL * v15) = v16;
      if ( v16 )
      {
        if ( *(_QWORD *)(v16 + 16) != v14 )
          __fastfail(0x1Du);
        *(_QWORD *)(v16 + 16) = v7;
      }
      *(_QWORD *)(v14 + 16) = *(_QWORD *)(a2 + 16);
      v8 = v15 != 0 ? 3 : 1;
      v17 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v17 )
      {
        v18 = *(_QWORD *)(v17 + 8) == a2;
        if ( *(_QWORD *)(v17 + 8 * v18) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v17 + 8 * v18) = v14;
      }
      else
      {
        if ( *a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v14;
      }
      while ( 1 )
      {
LABEL_7:
        v9 = (_BYTE *)(v7 + 16);
        LOBYTE(v2) = *(_BYTE *)(v7 + 16);
        v10 = v2 & 3;
        if ( (v2 & 3) == ((unsigned __int8)v8 ^ 2) )
        {
          LOBYTE(v2) = v2 & 0xFC;
          *v9 = v2;
          v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
        }
        else
        {
          if ( !v10 )
          {
            *(_BYTE *)(v7 + 16) &= 0xFCu;
            *(_BYTE *)(v7 + 16) |= v8 & 3;
            return v2;
          }
          v19 = *(_QWORD *)v7;
          v11 = *(_QWORD *)v9 & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v8 == 1 )
            v19 = *(_QWORD *)(v7 + 8);
          v20 = *(_BYTE *)(v19 + 16) & 3;
          if ( v20 == ((unsigned __int8)v8 ^ 2) )
          {
            v2 = RtlpTreeDoubleRotateNodes(a1, v7, v19, v8 == 1);
            *v9 &= 0xFCu;
            v7 = v2;
            *(_BYTE *)(v19 + 16) &= 0xFCu;
            v24 = *(unsigned __int8 *)(v2 + 16);
            LODWORD(v2) = v24 & 3;
            if ( v10 == (_DWORD)v2 )
            {
              *v9 &= 0xFCu;
              *v9 |= (v10 ^ 0xFE) & 3;
            }
            else if ( v10 == ((v24 ^ 0xFFFFFFFE) & 3) )
            {
              LOBYTE(v2) = *(_BYTE *)(v19 + 16) ^ (v10 ^ *(_BYTE *)(v19 + 16)) & 3;
              *(_BYTE *)(v19 + 16) = v2;
            }
            *(_BYTE *)(v7 + 16) &= 0xFCu;
          }
          else
          {
            v2 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v2 != v7 )
              __fastfail(0x1Du);
            v21 = v8 == 1;
            if ( *(_QWORD *)(v7 + 8 * v21) != v19 )
              __fastfail(0x1Du);
            if ( v11 )
            {
              if ( *(_QWORD *)(v11 + 8) == v7 )
              {
                *(_QWORD *)(v11 + 8) = v19;
              }
              else
              {
                if ( *(_QWORD *)v11 != v7 )
                  __fastfail(0x1Du);
                *(_QWORD *)v11 = v19;
              }
            }
            else
            {
              if ( *a1 != v7 )
                __fastfail(0x1Du);
              *a1 = v19;
            }
            *(_QWORD *)(v19 + 16) &= 3uLL;
            *(_QWORD *)(v19 + 16) |= v11;
            v22 = *(_QWORD *)(v19 + 8LL * (v8 != 1));
            if ( v22 )
            {
              v2 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
              if ( v2 != v19 )
                __fastfail(0x1Du);
              *(_QWORD *)(v22 + 16) = v7 | *(_QWORD *)(v22 + 16) & 3LL;
            }
            *(_QWORD *)(v7 + 8 * v21) = v22;
            *(_QWORD *)(v19 + 8LL * (v8 != 1)) = v7;
            *(_QWORD *)v9 &= 3uLL;
            *(_QWORD *)v9 |= v19;
            *(_BYTE *)(v19 + 16) &= 0xFCu;
            if ( !v20 )
            {
              *(_BYTE *)(v19 + 16) |= (v8 ^ 0xFE) & 3;
              return v2;
            }
            *v9 &= 0xFCu;
            v7 = v19;
          }
        }
        if ( !v11 )
          return v2;
        v12 = *(_QWORD *)(v11 + 8) == v7;
        v7 = v11;
        v8 = 1;
        if ( v12 )
          v8 = 3;
      }
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 8);
  }
  v7 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v3 + 16) = v7;
  }
  if ( v7 )
  {
    if ( *(_QWORD *)(v7 + 8) == a2 )
    {
      v8 = 3;
      *(_QWORD *)(v7 + 8) = v3;
    }
    else
    {
      if ( *(_QWORD *)v7 != a2 )
        __fastfail(0x1Du);
      v8 = 1;
      *(_QWORD *)v7 = v3;
    }
    goto LABEL_7;
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v3;
  return v2;
}

/*
 * XREFs of RtlAvlRemoveNode @ 0x18007D9E0
 * Callers:
 *     <none>
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x18007DF2C (RtlpTreeDoubleRotateNodes.c)
 */

char __fastcall RtlAvlRemoveNode(unsigned __int64 *a1, __int64 a2)
{
  unsigned __int64 v2; // rax
  unsigned __int64 v3; // r10
  __int64 v4; // r11
  _QWORD *v7; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 v9; // rdx
  unsigned int v10; // ebx
  __int64 v11; // rcx
  char v12; // cl
  unsigned __int64 v13; // r10
  _BOOL8 v14; // r11
  _BYTE *v15; // rdi
  char v16; // bp
  unsigned __int64 v17; // rsi
  bool v18; // zf
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
        v10 = 0;
        v8 = *(_QWORD *)a2;
        v9 = *(_QWORD *)a2;
        if ( v23 )
        {
          v10 = 1;
          do
          {
            v9 = v8;
            v8 = (unsigned __int64)v23;
            v23 = (_QWORD *)v23[1];
          }
          while ( v23 );
        }
        v11 = *(_QWORD *)v8;
      }
      else
      {
        v7 = *(_QWORD **)v4;
        v8 = *(_QWORD *)(a2 + 8);
        v9 = v8;
        v10 = 1;
        if ( *(_QWORD *)v4 )
        {
          v10 = 0;
          do
          {
            v9 = v8;
            v8 = (unsigned __int64)v7;
            v7 = (_QWORD *)*v7;
          }
          while ( v7 );
        }
        v11 = *(_QWORD *)(v8 + 8);
      }
      *(_QWORD *)v8 = v3;
      *(_QWORD *)(v8 + 8) = v4;
      if ( (*(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v3 + 16) = v8 | *(_QWORD *)(v3 + 16) & 3LL;
      if ( (*(_QWORD *)(v4 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v4 + 16) = v8 | *(_QWORD *)(v4 + 16) & 3LL;
      if ( (*(_QWORD *)(v8 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v9 )
        __fastfail(0x1Du);
      *(_QWORD *)(v9 + 8LL * v10) = v11;
      if ( v11 )
      {
        if ( *(_QWORD *)(v11 + 16) != v8 )
          __fastfail(0x1Du);
        *(_QWORD *)(v11 + 16) = v9;
      }
      *(_QWORD *)(v8 + 16) = *(_QWORD *)(a2 + 16);
      v12 = v10 != 0 ? 3 : 1;
      v13 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( v13 )
      {
        v14 = *(_QWORD *)(v13 + 8) == a2;
        if ( *(_QWORD *)(v13 + 8 * v14) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v13 + 8 * v14) = v8;
      }
      else
      {
        if ( *a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v8;
      }
      goto LABEL_20;
    }
  }
  else
  {
    v3 = *(_QWORD *)(a2 + 8);
  }
  v9 = *(_QWORD *)(a2 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
  if ( v3 )
  {
    if ( *(_QWORD *)(v3 + 16) != a2 )
      __fastfail(0x1Du);
    *(_QWORD *)(v3 + 16) = v9;
  }
  if ( v9 )
  {
    if ( *(_QWORD *)(v9 + 8) == a2 )
    {
      v12 = 3;
      *(_QWORD *)(v9 + 8) = v3;
    }
    else
    {
      if ( *(_QWORD *)v9 != a2 )
        __fastfail(0x1Du);
      v12 = 1;
      *(_QWORD *)v9 = v3;
    }
    while ( 1 )
    {
LABEL_20:
      v15 = (_BYTE *)(v9 + 16);
      LOBYTE(v2) = *(_BYTE *)(v9 + 16);
      v16 = v2 & 3;
      if ( (v2 & 3) == ((unsigned __int8)v12 ^ 2) )
      {
        LOBYTE(v2) = v2 & 0xFC;
        *v15 = v2;
        v17 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCuLL;
      }
      else
      {
        if ( !v16 )
        {
          *(_BYTE *)(v9 + 16) &= 0xFCu;
          *(_BYTE *)(v9 + 16) |= v12 & 3;
          return v2;
        }
        v19 = *(_QWORD *)v9;
        v17 = *(_QWORD *)v15 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v12 == 1 )
          v19 = *(_QWORD *)(v9 + 8);
        v20 = *(_BYTE *)(v19 + 16) & 3;
        if ( v20 == ((unsigned __int8)v12 ^ 2) )
        {
          v2 = RtlpTreeDoubleRotateNodes(a1, v9, v19, v12 == 1);
          *v15 &= 0xFCu;
          v9 = v2;
          *(_BYTE *)(v19 + 16) &= 0xFCu;
          v24 = *(unsigned __int8 *)(v2 + 16);
          LODWORD(v2) = v24 & 3;
          if ( v16 == (_DWORD)v2 )
          {
            *v15 &= 0xFCu;
            *v15 |= (v16 ^ 0xFE) & 3;
          }
          else if ( v16 == ((v24 ^ 0xFFFFFFFE) & 3) )
          {
            LOBYTE(v2) = *(_BYTE *)(v19 + 16) ^ (v16 ^ *(_BYTE *)(v19 + 16)) & 3;
            *(_BYTE *)(v19 + 16) = v2;
          }
          *(_BYTE *)(v9 + 16) &= 0xFCu;
        }
        else
        {
          v2 = *(_QWORD *)(v19 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v2 != v9 )
            __fastfail(0x1Du);
          v21 = v12 == 1;
          if ( *(_QWORD *)(v9 + 8 * v21) != v19 )
            __fastfail(0x1Du);
          if ( v17 )
          {
            if ( *(_QWORD *)(v17 + 8) == v9 )
            {
              *(_QWORD *)(v17 + 8) = v19;
            }
            else
            {
              if ( *(_QWORD *)v17 != v9 )
                __fastfail(0x1Du);
              *(_QWORD *)v17 = v19;
            }
          }
          else
          {
            if ( *a1 != v9 )
              __fastfail(0x1Du);
            *a1 = v19;
          }
          *(_QWORD *)(v19 + 16) &= 3uLL;
          *(_QWORD *)(v19 + 16) |= v17;
          v22 = *(_QWORD *)(v19 + 8LL * (v12 != 1));
          if ( v22 )
          {
            v2 = *(_QWORD *)(v22 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
            if ( v2 != v19 )
              __fastfail(0x1Du);
            *(_QWORD *)(v22 + 16) = v9 | *(_QWORD *)(v22 + 16) & 3LL;
          }
          *(_QWORD *)(v9 + 8 * v21) = v22;
          *(_QWORD *)(v19 + 8LL * (v12 != 1)) = v9;
          *(_QWORD *)v15 &= 3uLL;
          *(_QWORD *)v15 |= v19;
          *(_BYTE *)(v19 + 16) &= 0xFCu;
          if ( !v20 )
          {
            *(_BYTE *)(v19 + 16) |= (v12 ^ 0xFE) & 3;
            return v2;
          }
          *v15 &= 0xFCu;
          v9 = v19;
        }
      }
      if ( !v17 )
        return v2;
      v18 = *(_QWORD *)(v17 + 8) == v9;
      v9 = v17;
      v12 = 1;
      if ( v18 )
        v12 = 3;
    }
  }
  if ( *a1 != a2 )
    __fastfail(0x1Du);
  *a1 = v3;
  return v2;
}

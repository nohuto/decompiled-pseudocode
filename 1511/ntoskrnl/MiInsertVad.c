/*
 * XREFs of MiInsertVad @ 0x14004AD80
 * Callers:
 *     MiGetWsAndInsertVad @ 0x140062070 (MiGetWsAndInsertVad.c)
 *     MiInsertPrivateVad @ 0x1400BC014 (MiInsertPrivateVad.c)
 *     MiDeletePartialVad @ 0x1400D6084 (MiDeletePartialVad.c)
 *     MiMapLockedPagesInUserSpaceHelper @ 0x140103E00 (MiMapLockedPagesInUserSpaceHelper.c)
 *     MiInsertViewOfPhysicalSection @ 0x14013BD7C (MiInsertViewOfPhysicalSection.c)
 * Callees:
 *     RtlpTreeDoubleRotateNodes @ 0x14000CB20 (RtlpTreeDoubleRotateNodes.c)
 */

__int64 __fastcall MiInsertVad(unsigned __int64 a1, __int64 a2)
{
  unsigned __int64 v4; // r8
  unsigned __int64 v5; // rcx
  __int64 v6; // rax
  unsigned __int64 v7; // rcx
  unsigned __int64 v8; // rax
  unsigned __int64 v9; // rax
  unsigned __int64 *v10; // r10
  bool v11; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r8
  unsigned __int64 v14; // rax
  unsigned __int64 v15; // rsi
  _BYTE *v16; // r8
  char v17; // cl
  char v18; // di
  __int64 result; // rax
  _BOOL8 v20; // r8
  _QWORD *v21; // r9
  unsigned __int64 v22; // rcx
  __int64 v23; // rcx
  __int64 v24; // rax
  __int64 v25; // rdx
  __int64 v26; // r10

  v4 = *(unsigned int *)(a1 + 28) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 33) << 32);
  v5 = (unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32;
  v6 = *(unsigned int *)(a1 + 24);
  ++*(_QWORD *)(a2 + 1576);
  v7 = v6 | v5;
  v8 = *(_QWORD *)(a2 + 1152) >> 12;
  *(_QWORD *)(a2 + 1568) = a1;
  if ( v4 <= v8 )
  {
    *(_QWORD *)(a2 + 824) += ((v4 - v7) << 12) + 4096;
    v9 = *(_QWORD *)(a2 + 824);
    if ( *(_QWORD *)(a2 + 816) < v9 )
      *(_QWORD *)(a2 + 816) = v9;
  }
  v10 = (unsigned __int64 *)(a2 + 1552);
  v11 = 0;
  v12 = *(_QWORD *)(a2 + 1552);
  v13 = *(unsigned int *)(a1 + 24) | ((unsigned __int64)*(unsigned __int8 *)(a1 + 32) << 32);
  if ( v12 )
  {
    while ( 1 )
    {
      if ( v13 > (*(unsigned int *)(v12 + 28) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 33) << 32))
        || v13 >= (*(unsigned int *)(v12 + 24) | ((unsigned __int64)*(unsigned __int8 *)(v12 + 32) << 32)) )
      {
        v14 = *(_QWORD *)(v12 + 8);
        if ( !v14 )
        {
          v11 = 1;
          break;
        }
      }
      else
      {
        v14 = *(_QWORD *)v12;
        if ( !*(_QWORD *)v12 )
        {
          v11 = 0;
          break;
        }
      }
      v12 = v14;
    }
  }
  v15 = a1;
  *(_QWORD *)a1 = 0LL;
  *(_QWORD *)(a1 + 8) = 0LL;
  *(_QWORD *)(a1 + 16) = v12;
  if ( v12 )
  {
    v16 = (_BYTE *)(v12 + 16);
    *(_QWORD *)(v12 + 8LL * v11) = a1;
    v17 = (-1 - 2 * v11) & 3;
    v18 = *(_BYTE *)(v12 + 16) & 3;
    if ( v18 )
    {
LABEL_16:
      if ( v18 == v17 )
      {
        if ( (*(_BYTE *)(v15 + 16) & 3) == v18 )
        {
          if ( (*(_QWORD *)(v15 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v12 )
            __fastfail(0x1Du);
          v20 = !v11;
          v21 = (_QWORD *)(v12 + 8LL * v11);
          if ( *v21 != v15 )
            __fastfail(0x1Du);
          v22 = *(_QWORD *)(v12 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
          if ( v22 )
          {
            if ( *(_QWORD *)(v22 + 8) == v12 )
            {
              *(_QWORD *)(v22 + 8) = v15;
            }
            else
            {
              if ( *(_QWORD *)v22 != v12 )
                __fastfail(0x1Du);
              *(_QWORD *)v22 = v15;
            }
          }
          else
          {
            if ( *v10 != v12 )
              __fastfail(0x1Du);
            *v10 = v15;
          }
          *(_QWORD *)(v15 + 16) = v22 | *(_DWORD *)(v15 + 16) & 3;
          v23 = *(_QWORD *)(v15 + 8 * v20);
          if ( v23 )
          {
            v26 = *(_QWORD *)(v23 + 16);
            if ( (v26 & 0xFFFFFFFFFFFFFFFCuLL) != v15 )
              __fastfail(0x1Du);
            *(_QWORD *)(v23 + 16) = v12 | v26 & 3;
          }
          *v21 = v23;
          *(_QWORD *)(v15 + 8 * v20) = v12;
          *(_QWORD *)(v12 + 16) = v15 | *(_DWORD *)(v12 + 16) & 3;
          *(_BYTE *)(v15 + 16) &= 0xFCu;
          *(_BYTE *)(v12 + 16) &= 0xFCu;
        }
        else
        {
          v24 = RtlpTreeDoubleRotateNodes(v10, v12, v15, v11);
          *(_BYTE *)(v25 + 16) &= 0xFCu;
          *(_BYTE *)(v15 + 16) &= 0xFCu;
          if ( v18 == (*(_BYTE *)(v24 + 16) & 3) )
          {
            *(_BYTE *)(v25 + 16) ^= (v18 ^ *(_BYTE *)(v25 + 16) ^ 0xFE) & 3;
            *(_BYTE *)(v24 + 16) &= 0xFCu;
          }
          else
          {
            if ( v18 == ((*(_BYTE *)(v24 + 16) ^ 0xFE) & 3) )
              *(_BYTE *)(v15 + 16) ^= (v18 ^ *(_BYTE *)(v15 + 16)) & 3;
            *(_BYTE *)(v24 + 16) &= 0xFCu;
          }
        }
      }
      else
      {
        *(_BYTE *)(v12 + 16) &= 0xFCu;
      }
    }
    else
    {
      while ( 1 )
      {
        v15 = v12;
        *v16 ^= (v17 ^ *v16) & 3;
        v12 = *(_QWORD *)v16 & 0xFFFFFFFFFFFFFFFCuLL;
        if ( !v12 )
          break;
        v16 = (_BYTE *)(v12 + 16);
        v11 = *(_QWORD *)v12 != v15;
        v17 = (-1 - 2 * v11) & 3;
        v18 = *(_BYTE *)(v12 + 16) & 3;
        if ( v18 )
          goto LABEL_16;
      }
    }
  }
  else
  {
    *v10 = a1;
  }
  result = *(_DWORD *)(a1 + 48) & 7;
  if ( (_DWORD)result == 5 || (_DWORD)result == 2 && (*(_BYTE *)(a1 + 67) & 1) != 0 )
    ++*(_DWORD *)(a2 + 1692);
  return result;
}

/*
 * XREFs of RtlRbRemoveNode @ 0x18001C040
 * Callers:
 *     LdrpUnloadNode @ 0x18000D730 (LdrpUnloadNode.c)
 *     RtlpHpVsChunkCoalesce @ 0x18001BE40 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x18001C5A0 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x18003EA8C (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003ED5C (RtlpHpSegPageRangeCoalesce.c)
 *     RtlpHpLargeFree @ 0x18004F630 (RtlpHpLargeFree.c)
 *     EtwpRemoveRegistrationFromTable @ 0x180059814 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsFreeChunkRemove @ 0x18006E724 (RtlpHpVsFreeChunkRemove.c)
 * Callees:
 *     <none>
 */

unsigned __int64 __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 result; // rax
  unsigned __int64 v3; // r8
  _QWORD *v5; // r11
  unsigned __int64 v6; // r9
  unsigned __int64 v7; // rcx
  unsigned int v8; // edi
  char v9; // r11
  unsigned __int64 v10; // rax
  __int64 v11; // rsi
  __int64 v12; // r8
  unsigned __int64 v13; // rax
  unsigned __int64 v14; // rsi
  unsigned __int64 v15; // rsi
  _BOOL8 v16; // rax
  __int64 v17; // r11
  unsigned __int64 v18; // rdx
  __int64 v19; // r11
  __int64 v20; // r14
  unsigned __int64 v21; // r9
  __int64 v22; // r9
  unsigned __int64 v23; // r8
  __int64 v24; // rdi
  __int64 v25; // rbp
  __int64 v26; // r9
  __int64 v27; // rsi
  bool v28; // zf
  __int64 v29; // r8
  unsigned __int64 v30; // rax
  __int64 v31; // r9
  __int64 v32; // r8
  __int64 v33; // rdi
  _UNKNOWN *retaddr; // [rsp+8h] [rbp+0h] BYREF

  result = (unsigned __int64)&retaddr;
  v3 = *a2;
  v5 = (_QWORD *)a2[1];
  if ( *a2 )
  {
    if ( v5 )
    {
      v8 = 1;
      v6 = a2[1];
      v7 = v6;
      if ( *v5 )
      {
        v8 = 0;
        do
        {
          v7 = v6;
          v6 = *(_QWORD *)v6;
        }
        while ( *(_QWORD *)v6 );
      }
      *(_QWORD *)v6 = v3;
      v11 = *(_QWORD *)(v3 + 16);
      if ( (unsigned __int64 *)(v11 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v3 + 16) = v6 | v11 & 3;
      v12 = v5[2];
      if ( (unsigned __int64 *)(v12 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      v5[2] = v6 | v12 & 3;
      v3 = *(_QWORD *)(v6 + 8);
      v13 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v6 + 8) = v5;
      if ( v13 != v7 )
        __fastfail(0x1Du);
      v9 = *(_BYTE *)(v6 + 16) & 1;
      *(_QWORD *)(v6 + 16) = a2[2];
      v14 = a2[2];
      if ( v14 )
      {
        v15 = v14 & 0xFFFFFFFFFFFFFFFCuLL;
        v16 = *(_QWORD *)(v15 + 8) == (_QWORD)a2;
        if ( *(unsigned __int64 **)(v15 + 8 * v16) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v15 + 8 * v16) = v6;
      }
      else
      {
        if ( (unsigned __int64 *)*a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v6;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v3 = a2[1];
  }
  v6 = (unsigned __int64)a2;
  v7 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v7 )
  {
    if ( v3 )
      *(_QWORD *)(v3 + 16) = 0LL;
    if ( (unsigned __int64 *)*a1 != a2 )
      __fastfail(0x1Du);
    a1[1] = v3;
    *a1 = v3;
    return result;
  }
  if ( *(unsigned __int64 **)(v7 + 8) == a2 )
  {
    v8 = 1;
  }
  else
  {
    if ( *(unsigned __int64 **)v7 != a2 )
      __fastfail(0x1Du);
    v8 = 0;
    if ( (unsigned __int64 *)a1[1] == a2 )
    {
      v10 = v3;
      if ( !v3 )
        v10 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      a1[1] = v10;
    }
  }
  v9 = a2[2] & 1;
LABEL_7:
  result = v8;
  *(_QWORD *)(v7 + 8LL * v8) = v3;
  if ( v3 )
  {
    result = *(_QWORD *)(v3 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( result != v6 )
      __fastfail(0x1Du);
    *(_QWORD *)(v3 + 16) = v7;
  }
  else if ( !v9 )
  {
    while ( 1 )
    {
      v17 = v8 ^ 1LL;
      v18 = *(_QWORD *)(v7 + 8 * v17);
      if ( (*(_BYTE *)(v18 + 16) & 1) != 0 )
      {
        if ( (*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
          __fastfail(0x1Du);
        v30 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v30 )
        {
          if ( *(_QWORD *)(v30 + 8) == v7 )
          {
            *(_QWORD *)(v30 + 8) = v18;
          }
          else
          {
            if ( *(_QWORD *)v30 != v7 )
              __fastfail(0x1Du);
            *(_QWORD *)v30 = v18;
          }
        }
        else
        {
          if ( *a1 != v7 )
            __fastfail(0x1Du);
          *a1 = v18;
        }
        *(_QWORD *)(v18 + 16) &= 3uLL;
        *(_QWORD *)(v18 + 16) |= v30;
        v31 = *(_QWORD *)(v18 + 8LL * v8);
        if ( v31 )
        {
          v32 = *(_QWORD *)(v31 + 16);
          if ( (v32 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
            __fastfail(0x1Du);
          *(_QWORD *)(v31 + 16) = v7 | v32 & 3;
        }
        *(_QWORD *)(v7 + 8 * v17) = v31;
        *(_QWORD *)(v18 + 8LL * v8) = v7;
        *(_QWORD *)(v7 + 16) &= 3uLL;
        *(_QWORD *)(v7 + 16) |= v18;
        *(_BYTE *)(v18 + 16) &= ~1u;
        *(_BYTE *)(v7 + 16) |= 1u;
        v18 = *(_QWORD *)(v7 + 8 * v17);
      }
      if ( *(_QWORD *)v18 && (*(_BYTE *)(*(_QWORD *)v18 + 16LL) & 1) != 0 )
        break;
      result = *(_QWORD *)(v18 + 8);
      if ( result )
      {
        if ( (*(_BYTE *)(result + 16) & 1) != 0 )
          break;
      }
      if ( (*(_BYTE *)(v7 + 16) & 1) != 0 )
      {
        *(_BYTE *)(v7 + 16) &= ~1u;
        *(_BYTE *)(v18 + 16) |= 1u;
        return result;
      }
      *(_BYTE *)(v18 + 16) |= 1u;
      result = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      if ( !result )
        return result;
      v28 = *(_QWORD *)(result + 8) == v7;
      v7 = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v8 = v28;
    }
    v19 = v8 ^ 1LL;
    v20 = v8;
    v21 = *(_QWORD *)(v18 + 8 * v19);
    if ( !v21 || (*(_BYTE *)(v21 + 16) & 1) == 0 )
    {
      v23 = *(_QWORD *)(v18 + 8LL * v8);
      v24 = v8 ^ 1;
      *(_BYTE *)(v23 + 16) &= ~1u;
      if ( (*(_QWORD *)(v23 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      v25 = (unsigned int)v24 ^ 1LL;
      v26 = (unsigned int)v24;
      if ( *(_QWORD *)(v18 + 8 * v25) != v23 )
        __fastfail(0x1Du);
      if ( *(_QWORD *)(v7 + 8 * v24) != v18 || (*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
        __fastfail(0x1Du);
      *(_QWORD *)(v7 + 8 * v24) = v23;
      *(_QWORD *)(v23 + 16) &= 3uLL;
      *(_QWORD *)(v23 + 16) |= v7;
      v27 = *(_QWORD *)(v23 + 8 * v24);
      if ( v27 )
      {
        v33 = *(_QWORD *)(v27 + 16);
        if ( (v33 & 0xFFFFFFFFFFFFFFFCuLL) != v23 )
          __fastfail(0x1Du);
        *(_QWORD *)(v27 + 16) = v18 | v33 & 3;
      }
      *(_QWORD *)(v18 + 8 * v25) = v27;
      *(_QWORD *)(v23 + 8 * v26) = v18;
      v21 = v18;
      *(_QWORD *)(v18 + 16) &= 3uLL;
      *(_QWORD *)(v18 + 16) |= v23;
      v18 = v23;
    }
    *(_BYTE *)(v18 + 16) ^= (*(_BYTE *)(v7 + 16) ^ *(_BYTE *)(v18 + 16)) & 1;
    *(_BYTE *)(v7 + 16) &= ~1u;
    *(_BYTE *)(v21 + 16) &= ~1u;
    if ( (*(_QWORD *)(v18 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v7 )
      __fastfail(0x1Du);
    if ( *(_QWORD *)(v7 + 8 * v19) != v18 )
      __fastfail(0x1Du);
    result = *(_QWORD *)(v7 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( result )
    {
      if ( *(_QWORD *)(result + 8) == v7 )
      {
        *(_QWORD *)(result + 8) = v18;
      }
      else
      {
        if ( *(_QWORD *)result != v7 )
          __fastfail(0x1Du);
        *(_QWORD *)result = v18;
      }
    }
    else
    {
      if ( *a1 != v7 )
        __fastfail(0x1Du);
      *a1 = v18;
    }
    *(_QWORD *)(v18 + 16) &= 3uLL;
    *(_QWORD *)(v18 + 16) |= result;
    v22 = *(_QWORD *)(v18 + 8 * v20);
    if ( v22 )
    {
      v29 = *(_QWORD *)(v22 + 16);
      result = v29 & 0xFFFFFFFFFFFFFFFCuLL;
      if ( (v29 & 0xFFFFFFFFFFFFFFFCuLL) != v18 )
        __fastfail(0x1Du);
      *(_QWORD *)(v22 + 16) = v7 | v29 & 3;
    }
    *(_QWORD *)(v7 + 8 * v19) = v22;
    *(_QWORD *)(v18 + 8 * v20) = v7;
    *(_QWORD *)(v7 + 16) &= 3uLL;
    *(_QWORD *)(v7 + 16) |= v18;
  }
  return result;
}

/*
 * XREFs of RtlRbRemoveNode @ 0x1800280B0
 * Callers:
 *     EtwpRemoveRegistrationFromTable @ 0x18000E484 (EtwpRemoveRegistrationFromTable.c)
 *     RtlpHpVsChunkCoalesce @ 0x180027E80 (RtlpHpVsChunkCoalesce.c)
 *     RtlpHpVsChunkSplit @ 0x180028560 (RtlpHpVsChunkSplit.c)
 *     RtlpHpSegPageRangeAllocate @ 0x1800364A4 (RtlpHpSegPageRangeAllocate.c)
 *     RtlpHpSegPageRangeCoalesce @ 0x18003795C (RtlpHpSegPageRangeCoalesce.c)
 *     LdrpUnloadNode @ 0x180043080 (LdrpUnloadNode.c)
 *     RtlpHpLargeFree @ 0x1800585DC (RtlpHpLargeFree.c)
 *     RtlpHpVsFreeChunkRemove @ 0x1800663E8 (RtlpHpVsFreeChunkRemove.c)
 *     RtlpHpVirtLargeTreeFind @ 0x1800EB55C (RtlpHpVirtLargeTreeFind.c)
 * Callees:
 *     <none>
 */

void __fastcall RtlRbRemoveNode(unsigned __int64 *a1, unsigned __int64 *a2)
{
  unsigned __int64 v2; // r8
  _QWORD *v4; // r9
  unsigned __int64 v5; // r11
  unsigned __int64 v6; // rcx
  unsigned int v7; // r10d
  char v8; // r9
  __int64 v9; // rbx
  __int64 v10; // r8
  unsigned __int64 v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int64 v13; // rbx
  _BOOL8 v14; // rax
  unsigned __int64 v15; // rax
  __int64 v16; // rax
  unsigned __int64 v17; // rdx
  unsigned __int64 *v18; // r8
  __int64 v19; // rax
  __int64 v20; // r11
  __int64 v21; // r9
  unsigned __int64 v22; // r8
  unsigned __int64 v23; // rax
  __int64 v24; // r8
  bool v25; // zf
  unsigned __int64 v26; // rbx
  __int64 v27; // r10
  unsigned __int64 *v28; // rsi
  unsigned __int64 *v29; // r10
  unsigned __int64 v30; // r8
  unsigned __int64 v31; // rax
  unsigned __int64 *v32; // rbx
  unsigned __int64 v33; // r11
  __int64 v34; // r9
  __int64 v35; // r10
  __int64 v36; // rbp

  v2 = *a2;
  v4 = (_QWORD *)a2[1];
  if ( *a2 )
  {
    if ( v4 )
    {
      v5 = a2[1];
      v6 = v5;
      v7 = 1;
      if ( *v4 )
      {
        v7 = 0;
        do
        {
          v6 = v5;
          v5 = *(_QWORD *)v5;
        }
        while ( *(_QWORD *)v5 );
      }
      *(_QWORD *)v5 = v2;
      v9 = *(_QWORD *)(v2 + 16);
      if ( (unsigned __int64 *)(v9 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      *(_QWORD *)(v2 + 16) = v5 | v9 & 3;
      v10 = v4[2];
      if ( (unsigned __int64 *)(v10 & 0xFFFFFFFFFFFFFFFCuLL) != a2 )
        __fastfail(0x1Du);
      v4[2] = v5 | v10 & 3;
      v2 = *(_QWORD *)(v5 + 8);
      v11 = *(_QWORD *)(v5 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      *(_QWORD *)(v5 + 8) = v4;
      if ( v11 != v6 )
        __fastfail(0x1Du);
      v8 = *(_BYTE *)(v5 + 16) & 1;
      *(_QWORD *)(v5 + 16) = a2[2];
      v12 = a2[2];
      if ( v12 )
      {
        v13 = v12 & 0xFFFFFFFFFFFFFFFCuLL;
        v14 = *(_QWORD *)(v13 + 8) == (_QWORD)a2;
        if ( *(unsigned __int64 **)(v13 + 8 * v14) != a2 )
          __fastfail(0x1Du);
        *(_QWORD *)(v13 + 8 * v14) = v5;
      }
      else
      {
        if ( (unsigned __int64 *)*a1 != a2 )
          __fastfail(0x1Du);
        *a1 = v5;
      }
      goto LABEL_7;
    }
  }
  else
  {
    v2 = a2[1];
  }
  v5 = (unsigned __int64)a2;
  v6 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
  if ( !v6 )
  {
    if ( v2 )
      *(_QWORD *)(v2 + 16) = 0LL;
    if ( (unsigned __int64 *)*a1 != a2 )
      __fastfail(0x1Du);
    a1[1] = v2;
    *a1 = v2;
    return;
  }
  if ( *(unsigned __int64 **)(v6 + 8) == a2 )
  {
    v7 = 1;
  }
  else
  {
    if ( *(unsigned __int64 **)v6 != a2 )
      __fastfail(0x1Du);
    v7 = 0;
    if ( (unsigned __int64 *)a1[1] == a2 )
    {
      v15 = v2;
      if ( !v2 )
        v15 = a2[2] & 0xFFFFFFFFFFFFFFFCuLL;
      a1[1] = v15;
    }
  }
  v8 = a2[2] & 1;
LABEL_7:
  *(_QWORD *)(v6 + 8LL * v7) = v2;
  if ( v2 )
  {
    if ( (*(_QWORD *)(v2 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v5 )
      __fastfail(0x1Du);
    *(_QWORD *)(v2 + 16) = v6;
  }
  else if ( !v8 )
  {
    while ( 1 )
    {
      v16 = v7 ^ 1LL;
      v17 = *(_QWORD *)(v6 + 8 * v16);
      v18 = (unsigned __int64 *)(v6 + 8 * v16);
      if ( (*(_BYTE *)(v17 + 16) & 1) != 0 )
      {
        if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
          __fastfail(0x1Du);
        v31 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
        if ( v31 )
        {
          if ( *(_QWORD *)(v31 + 8) == v6 )
          {
            *(_QWORD *)(v31 + 8) = v17;
          }
          else
          {
            if ( *(_QWORD *)v31 != v6 )
              __fastfail(0x1Du);
            *(_QWORD *)v31 = v17;
          }
        }
        else
        {
          if ( *a1 != v6 )
            __fastfail(0x1Du);
          *a1 = v17;
        }
        *(_QWORD *)(v17 + 16) &= 3uLL;
        v32 = (unsigned __int64 *)(v17 + 8LL * v7);
        *(_QWORD *)(v17 + 16) |= v31;
        v33 = *v32;
        if ( *v32 )
        {
          v34 = *(_QWORD *)(v33 + 16);
          if ( (v34 & 0xFFFFFFFFFFFFFFFCuLL) != v17 )
            __fastfail(0x1Du);
          *(_QWORD *)(v33 + 16) = v6 | v34 & 3;
        }
        *v18 = v33;
        *v32 = v6;
        *(_QWORD *)(v6 + 16) &= 3uLL;
        *(_QWORD *)(v6 + 16) |= v17;
        *(_BYTE *)(v17 + 16) &= ~1u;
        *(_BYTE *)(v6 + 16) |= 1u;
        v17 = *v18;
      }
      if ( *(_QWORD *)v17 && (*(_BYTE *)(*(_QWORD *)v17 + 16LL) & 1) != 0 )
        break;
      v19 = *(_QWORD *)(v17 + 8);
      if ( v19 )
      {
        if ( (*(_BYTE *)(v19 + 16) & 1) != 0 )
          break;
      }
      if ( (*(_BYTE *)(v6 + 16) & 1) != 0 )
      {
        *(_BYTE *)(v6 + 16) &= ~1u;
        *(_BYTE *)(v17 + 16) |= 1u;
        return;
      }
      *(_BYTE *)(v17 + 16) |= 1u;
      if ( (*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) == 0 )
        return;
      v25 = *(_QWORD *)((*(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL) + 8) == v6;
      v6 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
      v7 = v25;
    }
    v20 = v7;
    v21 = 8 * (v7 ^ 1LL);
    v22 = *(_QWORD *)(v21 + v17);
    if ( !v22 || (*(_BYTE *)(v22 + 16) & 1) == 0 )
    {
      v26 = *(_QWORD *)(v17 + 8LL * v7);
      v27 = v7 ^ 1;
      *(_BYTE *)(v26 + 16) &= ~1u;
      if ( (*(_QWORD *)(v26 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v17 )
        __fastfail(0x1Du);
      v28 = (unsigned __int64 *)(v17 + 8 * ((unsigned int)v27 ^ 1LL));
      if ( *v28 != v26 )
        __fastfail(0x1Du);
      if ( *(_QWORD *)(v6 + 8 * v27) != v17 || (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
        __fastfail(0x1Du);
      *(_QWORD *)(v6 + 8 * v27) = v26;
      v29 = (unsigned __int64 *)(v26 + 8 * v27);
      *(_QWORD *)(v26 + 16) &= 3uLL;
      *(_QWORD *)(v26 + 16) |= v6;
      v30 = *v29;
      if ( *v29 )
      {
        v36 = *(_QWORD *)(v30 + 16);
        if ( (v36 & 0xFFFFFFFFFFFFFFFCuLL) != v26 )
          __fastfail(0x1Du);
        *(_QWORD *)(v30 + 16) = v17 | v36 & 3;
      }
      *v28 = v30;
      v22 = v17;
      *v29 = v17;
      *(_QWORD *)(v17 + 16) &= 3uLL;
      *(_QWORD *)(v17 + 16) |= v26;
      v17 = v26;
    }
    *(_BYTE *)(v17 + 16) ^= (*(_BYTE *)(v6 + 16) ^ *(_BYTE *)(v17 + 16)) & 1;
    *(_BYTE *)(v6 + 16) &= ~1u;
    *(_BYTE *)(v22 + 16) &= ~1u;
    if ( (*(_QWORD *)(v17 + 16) & 0xFFFFFFFFFFFFFFFCuLL) != v6 )
      __fastfail(0x1Du);
    if ( *(_QWORD *)(v21 + v6) != v17 )
      __fastfail(0x1Du);
    v23 = *(_QWORD *)(v6 + 16) & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v23 )
    {
      if ( *(_QWORD *)(v23 + 8) == v6 )
      {
        *(_QWORD *)(v23 + 8) = v17;
      }
      else
      {
        if ( *(_QWORD *)v23 != v6 )
          __fastfail(0x1Du);
        *(_QWORD *)v23 = v17;
      }
    }
    else
    {
      if ( *a1 != v6 )
        __fastfail(0x1Du);
      *a1 = v17;
    }
    *(_QWORD *)(v17 + 16) &= 3uLL;
    *(_QWORD *)(v17 + 16) |= v23;
    v24 = *(_QWORD *)(v17 + 8 * v20);
    if ( v24 )
    {
      v35 = *(_QWORD *)(v24 + 16);
      if ( (v35 & 0xFFFFFFFFFFFFFFFCuLL) != v17 )
        __fastfail(0x1Du);
      *(_QWORD *)(v24 + 16) = v6 | v35 & 3;
    }
    *(_QWORD *)(v21 + v6) = v24;
    *(_QWORD *)(v17 + 8 * v20) = v6;
    *(_QWORD *)(v6 + 16) &= 3uLL;
    *(_QWORD *)(v6 + 16) |= v17;
  }
}

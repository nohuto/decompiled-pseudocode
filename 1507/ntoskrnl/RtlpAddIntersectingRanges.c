/*
 * XREFs of RtlpAddIntersectingRanges @ 0x1405A0754
 * Callers:
 *     RtlpAddRange @ 0x1405A009C (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x1405A0878 (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x1405A0A38 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x1405A0E48 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // r14d
  __int64 v7; // rdi
  __int64 v9; // rcx
  _QWORD *v10; // rcx
  __int64 v11; // rdx
  _BYTE *v12; // rsi
  _QWORD *i; // rbx
  __int64 v14; // rbp
  __int64 v16; // rcx
  _QWORD *v17; // rax
  _QWORD *v18; // r8
  unsigned __int64 v19; // rbx
  _QWORD *v20; // r11
  __int64 v21; // rax
  _QWORD *v22; // rdx
  unsigned __int64 v23; // r9
  unsigned __int64 v24; // rcx
  bool v25; // cf
  __int64 v26; // rdx
  _QWORD *v27; // rax
  __int64 v28; // r8
  _QWORD *v29; // rcx
  __int64 v30; // r14
  __int64 v31; // rcx
  _QWORD *v32; // rax

  v4 = *((_BYTE *)a3 + 33) & 1;
  v5 = a4;
  v7 = a2;
  if ( (a4 & 1) == 0 )
  {
    v18 = (_QWORD *)(a2 + 40);
    if ( a1 != (_QWORD *)(a2 + 40) )
    {
      v19 = a3[1];
      do
      {
        if ( v19 < *(_QWORD *)a2 )
          break;
        if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
        {
          v20 = (_QWORD *)(a2 + 16);
          v21 = *(_QWORD *)(a2 + 16) - 40LL;
          v22 = *(_QWORD **)(a2 + 16);
          if ( v20 != v22 )
          {
            v23 = *a3;
            do
            {
              v24 = *(_QWORD *)v21;
              v25 = v23 < *(_QWORD *)v21;
              if ( v23 > *(_QWORD *)v21 )
              {
                if ( *(_QWORD *)(v21 + 8) < v23 )
                  goto LABEL_31;
                v25 = v23 < v24;
              }
              if ( (!v25 || v19 >= v24) && (!v4 || (*(_BYTE *)(v21 + 33) & 1) == 0) )
                return 3221226114LL;
LABEL_31:
              v21 = *v22 - 40LL;
              v22 = (_QWORD *)*v22;
            }
            while ( v20 != v22 );
          }
        }
        else if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
        {
          return 3221226114LL;
        }
        a2 = *v18 - 40LL;
        v18 = (_QWORD *)*v18;
      }
      while ( a1 != v18 );
    }
  }
  if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    v9 = RtlpCopyRangeListEntry(v7);
    if ( !v9 )
      return 3221225626LL;
    if ( (*(_BYTE *)(v7 + 33) & 0x10) != 0 )
    {
      --**(_DWORD **)(v7 + 16);
      *(_BYTE *)(v7 + 33) &= ~0x10u;
    }
    v10 = (_QWORD *)(v9 + 40);
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
    *(_WORD *)(v7 + 34) = 1;
    v11 = *(_QWORD *)(v7 + 16);
    *v10 = v11;
    v10[1] = v7 + 16;
    if ( *(_QWORD *)(v11 + 8) != v7 + 16 )
      __fastfail(3u);
    *(_QWORD *)(v11 + 8) = v10;
    *(_QWORD *)(v7 + 16) = v10;
  }
  v12 = (_BYTE *)(*(_QWORD *)(v7 + 40) - 40LL);
  for ( i = *(_QWORD **)(v7 + 40); ; i = (_QWORD *)(v14 + 40) )
  {
    v14 = *i - 40LL;
    if ( a1 == i || (unsigned __int64)a3[1] < *(_QWORD *)v12 )
      break;
    if ( (v12[34] & 1) != 0 )
    {
      v26 = *((_QWORD *)v12 + 2) - 40LL;
      v27 = (_QWORD *)*((_QWORD *)v12 + 2);
      while ( 1 )
      {
        v30 = *v27 - 40LL;
        if ( v12 + 16 == (_BYTE *)v27 )
          break;
        v28 = *v27;
        v29 = (_QWORD *)v27[1];
        if ( *(_QWORD **)(*v27 + 8LL) != v27 || (_QWORD *)*v29 != v27 )
          __fastfail(3u);
        *v29 = v28;
        *(_QWORD *)(v28 + 8) = v29;
        RtlpAddToMergedRange(v7, v26, a4);
        v27 = (_QWORD *)(v30 + 40);
        v26 = v30;
      }
      v31 = *i;
      v32 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v32 != i )
        __fastfail(3u);
      *v32 = v31;
      *(_QWORD *)(v31 + 8) = v32;
      RtlpFreeRangeListEntry(v12);
      v5 = a4;
    }
    else
    {
      v16 = *i;
      v17 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v17 != i )
        __fastfail(3u);
      *v17 = v16;
      *(_QWORD *)(v16 + 8) = v17;
      RtlpAddToMergedRange(v7, v12, v5);
    }
    v12 = (_BYTE *)v14;
  }
  return RtlpAddToMergedRange(v7, a3, v5);
}

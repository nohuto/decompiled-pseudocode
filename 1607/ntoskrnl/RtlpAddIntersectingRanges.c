/*
 * XREFs of RtlpAddIntersectingRanges @ 0x14055A7C8
 * Callers:
 *     RtlpAddRange @ 0x14055A11C (RtlpAddRange.c)
 * Callees:
 *     RtlpAddToMergedRange @ 0x14055A8F4 (RtlpAddToMergedRange.c)
 *     RtlpCopyRangeListEntry @ 0x14055AAB0 (RtlpCopyRangeListEntry.c)
 *     RtlpFreeRangeListEntry @ 0x14055AED8 (RtlpFreeRangeListEntry.c)
 */

__int64 __fastcall RtlpAddIntersectingRanges(_QWORD *a1, __int64 a2, __int64 *a3, unsigned int a4)
{
  char v4; // r10
  unsigned int v5; // r14d
  __int64 v7; // rdi
  _BYTE *v9; // rsi
  _QWORD *i; // rbx
  __int64 v11; // rbp
  __int64 v13; // rcx
  _QWORD *v14; // rax
  _QWORD *v15; // rcx
  __int64 v16; // rdx
  __int64 v17; // rcx
  _QWORD *v18; // rax
  _QWORD *v19; // r8
  unsigned __int64 v20; // rbx
  _QWORD *v21; // r11
  __int64 v22; // rax
  _QWORD *v23; // rdx
  unsigned __int64 v24; // r9
  unsigned __int64 v25; // rcx
  bool v26; // cf
  __int64 v27; // rdx
  _QWORD *v28; // rax
  __int64 v29; // r8
  _QWORD *v30; // rcx
  __int64 v31; // r14
  __int64 v32; // rcx
  _QWORD *v33; // rax

  v4 = *((_BYTE *)a3 + 33) & 1;
  v5 = a4;
  v7 = a2;
  if ( (a4 & 1) == 0 )
  {
    v19 = (_QWORD *)(a2 + 40);
    if ( a1 != (_QWORD *)(a2 + 40) )
    {
      v20 = a3[1];
      do
      {
        if ( v20 < *(_QWORD *)a2 )
          break;
        if ( (*(_BYTE *)(a2 + 34) & 1) != 0 )
        {
          v21 = (_QWORD *)(a2 + 16);
          v22 = *(_QWORD *)(a2 + 16) - 40LL;
          v23 = *(_QWORD **)(a2 + 16);
          if ( v21 != v23 )
          {
            v24 = *a3;
            do
            {
              v25 = *(_QWORD *)v22;
              v26 = v24 < *(_QWORD *)v22;
              if ( v24 > *(_QWORD *)v22 )
              {
                if ( *(_QWORD *)(v22 + 8) < v24 )
                  goto LABEL_31;
                v26 = v24 < v25;
              }
              if ( (!v26 || v20 >= v25) && (!v4 || (*(_BYTE *)(v22 + 33) & 1) == 0) )
                return 3221226114LL;
LABEL_31:
              v22 = *v23 - 40LL;
              v23 = (_QWORD *)*v23;
            }
            while ( v21 != v23 );
          }
        }
        else if ( !v4 || (*(_BYTE *)(a2 + 33) & 1) == 0 )
        {
          return 3221226114LL;
        }
        a2 = *v19 - 40LL;
        v19 = (_QWORD *)*v19;
      }
      while ( a1 != v19 );
    }
  }
  if ( (*(_BYTE *)(v7 + 34) & 1) == 0 )
  {
    v13 = RtlpCopyRangeListEntry(v7);
    if ( !v13 )
      return 3221225626LL;
    if ( (*(_BYTE *)(v7 + 33) & 0x10) != 0 )
    {
      --**(_DWORD **)(v7 + 16);
      *(_BYTE *)(v7 + 33) &= ~0x10u;
    }
    v14 = (_QWORD *)(v7 + 16);
    v15 = (_QWORD *)(v13 + 40);
    *(_QWORD *)(v7 + 24) = v7 + 16;
    *(_QWORD *)(v7 + 16) = v7 + 16;
    *(_WORD *)(v7 + 34) = 1;
    v16 = *(_QWORD *)(v7 + 16);
    if ( *(_QWORD *)(v16 + 8) != v7 + 16 )
      __fastfail(3u);
    *v15 = v16;
    v15[1] = v14;
    *(_QWORD *)(v16 + 8) = v15;
    *v14 = v15;
  }
  v9 = (_BYTE *)(*(_QWORD *)(v7 + 40) - 40LL);
  for ( i = *(_QWORD **)(v7 + 40); ; i = (_QWORD *)(v11 + 40) )
  {
    v11 = *i - 40LL;
    if ( a1 == i || (unsigned __int64)a3[1] < *(_QWORD *)v9 )
      break;
    if ( (v9[34] & 1) != 0 )
    {
      v27 = *((_QWORD *)v9 + 2) - 40LL;
      v28 = (_QWORD *)*((_QWORD *)v9 + 2);
      while ( 1 )
      {
        v31 = *v28 - 40LL;
        if ( v9 + 16 == (_BYTE *)v28 )
          break;
        v29 = *v28;
        v30 = (_QWORD *)v28[1];
        if ( *(_QWORD **)(*v28 + 8LL) != v28 || (_QWORD *)*v30 != v28 )
          __fastfail(3u);
        *v30 = v29;
        *(_QWORD *)(v29 + 8) = v30;
        RtlpAddToMergedRange(v7, v27, a4);
        v28 = (_QWORD *)(v31 + 40);
        v27 = v31;
      }
      v32 = *i;
      v33 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v33 != i )
        __fastfail(3u);
      *v33 = v32;
      *(_QWORD *)(v32 + 8) = v33;
      RtlpFreeRangeListEntry(v9);
      v5 = a4;
    }
    else
    {
      v17 = *i;
      v18 = (_QWORD *)i[1];
      if ( *(_QWORD **)(*i + 8LL) != i || (_QWORD *)*v18 != i )
        __fastfail(3u);
      *v18 = v17;
      *(_QWORD *)(v17 + 8) = v18;
      RtlpAddToMergedRange(v7, v9, v5);
    }
    v9 = (_BYTE *)v11;
  }
  return RtlpAddToMergedRange(v7, a3, v5);
}

/*
 * XREFs of bValidRangeGSUB @ 0x1C0150270
 * Callers:
 *     bCheckVerticalTable @ 0x1C01501E8 (bCheckVerticalTable.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bValidRangeGSUB(__int64 a1, unsigned int *a2)
{
  unsigned __int64 v2; // r8
  __int64 v5; // r13
  _WORD *v6; // rdx
  unsigned __int64 v7; // r9
  __int64 v8; // rbp
  __int64 v9; // rbx
  _WORD *v10; // r14
  _WORD *v11; // rsi
  unsigned __int16 v12; // ax
  __int64 v13; // r8
  int v14; // r11d
  __int64 v15; // rcx
  _DWORD *i; // rax
  __int64 result; // rax
  unsigned __int16 v18; // cx
  __int64 v19; // rax
  unsigned __int16 v20; // cx
  __int64 v21; // rdx
  __int64 v22; // rax
  unsigned int v23; // ecx
  unsigned int v24; // eax
  __int64 v25; // rdx
  _WORD *v26; // rcx
  __int64 v27; // r11
  __int64 v28; // rax
  __int64 v29; // r8

  v2 = *(unsigned int *)(a1 + 244);
  *a2 = 0;
  v5 = *(unsigned int *)(a1 + 240);
  v6 = (_WORD *)(v5 + *(_QWORD *)(a1 + 64));
  if ( (unsigned int)v2 < 0xA )
    return 0LL;
  v7 = (unsigned int)v2;
  v8 = (unsigned __int16)__ROR2__(v6[3], 8);
  v9 = (unsigned __int16)__ROR2__(v6[4], 8);
  v10 = (_WORD *)((char *)v6 + v8);
  v11 = (_WORD *)((char *)v6 + v9);
  if ( (unsigned __int64)(unsigned __int16)__ROR2__(v6[2], 8) + 10 > v2 )
    return 0LL;
  if ( v8 + 8 > v2 )
    return 0LL;
  if ( v9 + 4 > v2 )
    return 0LL;
  v12 = __ROR2__(*v10, 8);
  v13 = v12;
  if ( v8 + 2 * (v12 + 2 * (unsigned __int64)v12 + 1) > v7 )
    return 0LL;
  v14 = 0;
  v15 = 0LL;
  if ( !v12 )
    return 0LL;
  for ( i = v10 + 1; *i != 1953654134; i = (_DWORD *)((char *)i + 6) )
  {
    ++v14;
    if ( ++v15 >= v13 )
      return 0LL;
  }
  v18 = __ROR2__(v10[3 * v14 + 3], 8);
  if ( !v18 )
    return 0LL;
  v19 = (unsigned int)v8 + v18;
  if ( v19 + 6 > v7 )
    return 0LL;
  if ( __ROR2__(*(_WORD *)((char *)v6 + (unsigned int)v19 + 2), 8) != 1 )
    return 0LL;
  v20 = __ROR2__(*(_WORD *)((char *)v6 + (unsigned int)v19 + 4), 8);
  if ( __ROR2__(*v11, 8) < v20 )
    return 0LL;
  if ( v9 + 4 + 2 * (unsigned __int64)v20 > v7 )
    return 0LL;
  _mm_lfence();
  v21 = (unsigned __int16)__ROR2__(v11[v20 + 1], 8);
  if ( (unsigned int)v9 > -1 - (int)v21 )
    return 0LL;
  v22 = (unsigned int)(v9 + v21);
  if ( (unsigned int)v22 > 0xFFFFFFF7
    || v22 + 8 > v7
    || __ROR2__(*(_WORD *)((char *)v11 + v21), 8) != 1
    || __ROR2__(*(_WORD *)((char *)v11 + v21 + 4), 8) != 1 )
  {
    return 0LL;
  }
  v23 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v11 + v21 + 6), 8);
  v24 = v23 + v21;
  if ( v23 + (unsigned int)v21 < v23 || (v25 = v24 + (unsigned int)v9, *a2 = v24, (unsigned int)v25 < v24) )
  {
    *a2 = -1;
    return 0LL;
  }
  *a2 = v25;
  if ( (unsigned int)v25 > 0xFFFFFFF9 )
    return 0LL;
  if ( v25 + 6 > v7 )
    return 0LL;
  v26 = (_WORD *)(v5 + (unsigned int)v25 + *(_QWORD *)(a1 + 64));
  if ( __ROR2__(*v26, 8) != 2 )
    return 0LL;
  v27 = (unsigned __int16)__ROR2__(v26[1], 8);
  if ( (unsigned int)v25 > -1 - (int)v27 )
    return 0LL;
  v28 = (unsigned int)(v25 + v27);
  if ( (unsigned int)v28 > 0xFFFFFFFB )
    return 0LL;
  if ( v28 + 4 > v7 )
    return 0LL;
  if ( __ROR2__(*(_WORD *)((char *)v26 + v27), 8) != 1 )
    return 0LL;
  v29 = (unsigned __int16)__ROR2__(*(_WORD *)((char *)v26 + v27 + 2), 8);
  if ( (unsigned __int64)(unsigned int)v28 + 2 * (v29 + 2) > v7 || v25 + 2 * (v29 + 3) > v7 )
    return 0LL;
  result = 1LL;
  *a2 = v25 + v5;
  return result;
}

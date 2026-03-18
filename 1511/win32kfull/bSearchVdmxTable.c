/*
 * XREFs of bSearchVdmxTable @ 0x1C0118CA0
 * Callers:
 *     vQuantizeXform @ 0x1C01189B4 (vQuantizeXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSearchVdmxTable(__int64 a1, int a2, int a3, int a4, unsigned __int16 *a5, __int64 a6)
{
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned __int16 v11; // cx
  __int64 v12; // rdi
  unsigned int v13; // edx
  unsigned int v14; // ebx
  unsigned int v15; // r8d
  unsigned __int8 *v16; // rcx
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // r8
  unsigned __int8 v20; // al
  bool v21; // cc
  unsigned __int16 v22; // r10
  unsigned int v23; // edi
  unsigned int v24; // ebx
  _WORD *v25; // r10
  unsigned __int16 v26; // ax
  unsigned __int16 v27; // cx
  unsigned __int16 v28; // r8
  int v29; // r11d
  int v31; // r9d
  _WORD *v32; // rcx
  int v33; // r8d
  unsigned __int16 v34; // ax

  v9 = *(_DWORD *)(*(_QWORD *)(a6 + 192) + 84LL);
  if ( v9 < 6 )
    return 0LL;
  v10 = v9;
  v11 = __ROR2__(*(_WORD *)(a1 + 4), 8);
  v12 = v11;
  if ( 6 * ((unsigned __int64)v11 + 1) > v9 || (unsigned int)(a4 + 254) > 0x1FC )
    return 0LL;
  v13 = 0;
  v14 = v11;
  v15 = 0;
  if ( v11 )
  {
    v16 = (unsigned __int8 *)(a1 + 7);
    do
    {
      if ( *(v16 - 1) == 1 )
      {
        if ( !*v16 )
          break;
        v17 = a3 * *v16;
        if ( v17 >= a2 * v16[1] && v17 <= a2 * v16[2] )
          break;
      }
      ++v15;
      v16 += 4;
    }
    while ( v15 < v14 );
  }
  if ( v15 == v14 )
    return 0LL;
  v18 = (unsigned int)(__int16)__ROR2__(*(_WORD *)(a1 + 2 * (v15 + 2 * v12) + 6), 8);
  v19 = (unsigned int)(__int16)v18;
  if ( v18 + 4 > v10 )
    return 0LL;
  v20 = a4;
  v21 = a4 <= 0;
  if ( a4 < 0 )
  {
    v20 = -(char)a4;
    v21 = a4 <= 0;
  }
  if ( v21 && (v20 < *(_BYTE *)(v19 + a1 + 2) || v20 > *(_BYTE *)(v19 + a1 + 3)) )
    return 0LL;
  v22 = __ROR2__(*(_WORD *)(v19 + a1), 8);
  if ( v19 + 2 * (3 * (unsigned __int64)v22 + 2) > v10 )
    return 0LL;
  if ( a4 > 0 )
  {
    v23 = v22;
    v24 = 0;
    if ( v22 )
    {
      v25 = (_WORD *)(v19 + a1 + 8);
      while ( 1 )
      {
        v26 = __ROR2__(*v25, 8);
        v27 = __ROR2__(*(v25 - 1), 8);
        v28 = __ROR2__(*(v25 - 2), 8);
        a5[2] = v26;
        v29 = (__int16)v27 - (__int16)v26;
        *a5 = v28;
        a5[1] = v27;
        if ( v29 == a4 )
          break;
        if ( v29 <= a4 )
        {
          ++v24;
          v25 += 3;
          if ( v24 < v23 )
            continue;
        }
        return 0LL;
      }
      LOBYTE(v13) = v28 <= 0xFFu;
      return v13;
    }
    return 0LL;
  }
  if ( !v22 )
    return 0LL;
  v31 = -a4;
  v32 = (_WORD *)(v19 + a1 + 8);
  while ( 1 )
  {
    v33 = (unsigned __int16)__ROR2__(*(v32 - 2), 8);
    a5[1] = __ROR2__(*(v32 - 1), 8);
    v34 = __ROR2__(*v32, 8);
    *a5 = v33;
    a5[2] = v34;
    if ( v33 == v31 )
      break;
    if ( v33 <= v31 )
    {
      ++v13;
      v32 += 3;
      if ( v13 < v22 )
        continue;
    }
    return 0LL;
  }
  return 1LL;
}

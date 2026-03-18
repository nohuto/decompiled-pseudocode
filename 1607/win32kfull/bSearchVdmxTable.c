/*
 * XREFs of bSearchVdmxTable @ 0x1C001AAC0
 * Callers:
 *     vQuantizeXform @ 0x1C001A7D4 (vQuantizeXform.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall bSearchVdmxTable(__int64 a1, int a2, int a3, int a4, unsigned __int16 *a5, __int64 a6)
{
  unsigned int v9; // eax
  unsigned __int64 v10; // rsi
  unsigned __int16 v11; // cx
  __int64 v12; // rdi
  unsigned int v13; // r8d
  unsigned int v14; // ebx
  unsigned int v15; // edx
  unsigned __int8 *v16; // rcx
  int v17; // r10d
  __int64 v18; // rax
  __int64 v19; // r10
  unsigned __int8 v20; // al
  unsigned __int16 v21; // dx
  unsigned int v22; // edi
  unsigned int v23; // ebx
  _WORD *v24; // rdx
  unsigned __int16 v25; // ax
  unsigned __int16 v26; // cx
  unsigned __int16 v27; // r10
  int v28; // r11d
  unsigned int v30; // ebx
  int v31; // r9d
  _WORD *v32; // rcx
  int v33; // edx
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
  v20 = abs32(a4);
  if ( a4 <= 0 && (v20 < *(_BYTE *)(v19 + a1 + 2) || v20 > *(_BYTE *)(v19 + a1 + 3)) )
    return 0LL;
  v21 = __ROR2__(*(_WORD *)(v19 + a1), 8);
  if ( v19 + 2 * (3 * (unsigned __int64)v21 + 2) > v10 )
    return 0LL;
  if ( a4 > 0 )
  {
    v22 = v21;
    v23 = 0;
    if ( v21 )
    {
      v24 = (_WORD *)(v19 + a1 + 8);
      while ( 1 )
      {
        v25 = __ROR2__(*v24, 8);
        v26 = __ROR2__(*(v24 - 1), 8);
        v27 = __ROR2__(*(v24 - 2), 8);
        a5[2] = v25;
        v28 = (__int16)v26 - (__int16)v25;
        *a5 = v27;
        a5[1] = v26;
        if ( v28 == a4 )
          break;
        if ( v28 <= a4 )
        {
          ++v23;
          v24 += 3;
          if ( v23 < v22 )
            continue;
        }
        return 0LL;
      }
      LOBYTE(v13) = v27 <= 0xFFu;
      return v13;
    }
    return 0LL;
  }
  v30 = v21;
  if ( !v21 )
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
      if ( v13 < v30 )
        continue;
    }
    return 0LL;
  }
  return 1LL;
}

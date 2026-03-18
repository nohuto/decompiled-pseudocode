/*
 * XREFs of bVerifyResource @ 0x1C0018F18
 * Callers:
 *     bConvertFontRes @ 0x1C00193B8 (bConvertFontRes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bVerifyResource(__int16 *a1, _DWORD *a2)
{
  __int64 v2; // r10
  __int16 v4; // r14
  int v6; // r8d
  int v7; // ecx
  unsigned int v8; // ebp
  __int16 v9; // r11
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dl
  __int64 v14; // rbx
  int v15; // r9d
  unsigned __int16 *v16; // rdx
  unsigned int v17; // r9d
  unsigned __int16 *v18; // r8
  unsigned __int16 *v20; // r8

  v2 = *(_QWORD *)a2;
  v4 = *a1;
  v6 = (*(unsigned __int8 *)(*(_QWORD *)a2 + 116LL) << 24) | *(unsigned __int8 *)(*(_QWORD *)a2 + 113LL) | (*(unsigned __int16 *)(*(_QWORD *)a2 + 114LL) << 8);
  if ( v6 > 0x10000 && v4 == 512 )
    return 0LL;
  v7 = a1[4];
  v8 = *(unsigned __int8 *)(v2 + 2) | (*(unsigned __int8 *)(v2 + 5) << 24) | (*(unsigned __int16 *)(v2 + 3) << 8);
  if ( v8 > a2[3] )
    v8 = a2[3];
  v9 = *(_WORD *)(v2 + 74);
  if ( abs16(v9) > v7 )
    return 0LL;
  if ( *(__int16 *)(v2 + 78) < 0 )
    return 0LL;
  if ( *(__int16 *)(v2 + 76) > v9 )
    return 0LL;
  v10 = *((_BYTE *)a1 + 4);
  v11 = *((_BYTE *)a1 + 5);
  if ( v10 > v11 )
    return 0LL;
  v12 = *((_BYTE *)a1 + 6);
  if ( (unsigned __int8)(v10 + v12) > v11 )
  {
    if ( v12 < v10 || v12 > v11 )
      *((_BYTE *)a1 + 6) = 0;
    else
      *((_BYTE *)a1 + 6) = v12 - v10;
  }
  v13 = *((_BYTE *)a1 + 7);
  if ( (unsigned __int8)(v10 + v13) > v11 )
  {
    if ( v13 < v10 || v13 > v11 )
      *((_BYTE *)a1 + 7) = 0;
    else
      *((_BYTE *)a1 + 7) = v13 - v10;
  }
  v14 = *((int *)a1 + 4);
  if ( (_DWORD)v14 != 118 && (_DWORD)v14 != 148 )
    return 0LL;
  v15 = v11 - v10 + 1;
  v16 = (unsigned __int16 *)(v14 + *(_QWORD *)a2 + 2LL);
  if ( v4 == 512 )
  {
    if ( v6 != *v16 )
      return 0LL;
    v17 = 2 * v15;
    if ( v17 * 2 + (_DWORD)v14 + 2 > a2[3] )
      return 0LL;
    v18 = &v16[v17];
    while ( v16 < v18 )
    {
      if ( *v16 > v8 )
        return 0LL;
      v16 += 2;
    }
  }
  else
  {
    if ( v6 != ((*((unsigned __int8 *)v16 + 3) << 24) | *(unsigned __int8 *)v16 | (*(unsigned __int16 *)((char *)v16 + 1) << 8))
      || (unsigned int)(6 * v15 + v14 + 2) > a2[3] )
    {
      return 0LL;
    }
    v20 = (unsigned __int16 *)((char *)v16 + (unsigned int)(6 * v15));
    while ( v16 < v20 )
    {
      if ( (*(unsigned __int8 *)v16 | (*((unsigned __int8 *)v16 + 3) << 24) | (*(unsigned __int16 *)((char *)v16 + 1) << 8)) > v8 )
        return 0LL;
      v16 += 3;
    }
  }
  return v4 != 768
      || (*(_BYTE *)(v2 + 118) & 0xE0) == 0
      && !((*(unsigned __int8 *)(*(_QWORD *)a2 + 131LL) << 24) | *(unsigned __int8 *)(*(_QWORD *)a2 + 128LL) | (*(unsigned __int16 *)(*(_QWORD *)a2 + 129LL) << 8));
}

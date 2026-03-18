/*
 * XREFs of bVerifyResource @ 0x1C0148BC0
 * Callers:
 *     bConvertFontRes @ 0x1C0147A10 (bConvertFontRes.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall bVerifyResource(__int16 *a1, _DWORD *a2)
{
  __int64 v2; // r8
  __int16 v4; // bp
  int v5; // r10d
  unsigned int v6; // esi
  unsigned int v7; // edi
  __int16 v8; // dx
  int v9; // ecx
  unsigned __int8 v10; // cl
  unsigned __int8 v11; // r11
  unsigned __int8 v12; // dl
  unsigned __int8 v13; // dl
  __int64 v14; // rbx
  unsigned __int16 *v15; // rdx
  int v16; // r9d
  __int64 v17; // r9
  unsigned __int16 *v18; // r9
  unsigned __int16 *v20; // r9

  v2 = *(_QWORD *)a2;
  v4 = *a1;
  v5 = (*(unsigned __int8 *)(*(_QWORD *)a2 + 116LL) << 24) | *(unsigned __int8 *)(*(_QWORD *)a2 + 113LL) | (*(unsigned __int16 *)(*(_QWORD *)a2 + 114LL) << 8);
  if ( v5 > 0x10000 && v4 == 512 )
    return 0LL;
  v6 = a2[3];
  v7 = *(unsigned __int8 *)(v2 + 2) | (*(unsigned __int8 *)(v2 + 5) << 24) | (*(unsigned __int16 *)(v2 + 3) << 8);
  if ( v7 > v6 )
    v7 = a2[3];
  v8 = *(_WORD *)(v2 + 74);
  v9 = v8;
  if ( v8 < 0 )
    v9 = -v8;
  if ( v9 > a1[4] )
    return 0LL;
  if ( *(__int16 *)(v2 + 78) < 0 )
    return 0LL;
  if ( *(__int16 *)(v2 + 76) > v8 )
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
  v15 = (unsigned __int16 *)(v14 + v2 + 2);
  v16 = v11 - v10 + 1;
  if ( v4 == 512 )
  {
    if ( v5 != *v15 )
      return 0LL;
    v17 = (unsigned int)(4 * v16);
    if ( (int)v17 + (int)v14 + 2 > v6 )
      return 0LL;
    v18 = (unsigned __int16 *)((char *)v15 + v17);
    while ( v15 < v18 )
    {
      if ( *v15 > v7 )
        return 0LL;
      v15 += 2;
    }
  }
  else
  {
    if ( v5 != ((*((unsigned __int8 *)v15 + 3) << 24) | *(unsigned __int8 *)v15 | (*(unsigned __int16 *)((char *)v15 + 1) << 8))
      || 6 * v16 + (int)v14 + 2 > v6 )
    {
      return 0LL;
    }
    v20 = (unsigned __int16 *)((char *)v15 + (unsigned int)(6 * v16));
    while ( v15 < v20 )
    {
      if ( (*(unsigned __int8 *)v15 | (*((unsigned __int8 *)v15 + 3) << 24) | (*(unsigned __int16 *)((char *)v15 + 1) << 8)) > v7 )
        return 0LL;
      v15 += 3;
    }
  }
  return v4 != 768
      || (*(_BYTE *)(v2 + 118) & 0xE0) == 0
      && !((*(unsigned __int8 *)(v2 + 131) << 24) | *(unsigned __int8 *)(v2 + 128) | (*(unsigned __int16 *)(v2 + 129) << 8));
}

/*
 * XREFs of vSrcOpaqCopyS1D16 @ 0x1C0282390
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall vSrcOpaqCopyS1D16(
        __int64 a1,
        int a2,
        int a3,
        __int64 a4,
        int a5,
        int a6,
        int a7,
        int a8,
        unsigned __int16 a9,
        __int16 a10)
{
  int v11; // ebx
  int v12; // r8d
  char *v13; // r11
  __int64 v14; // r12
  int v15; // edi
  unsigned __int8 *v16; // r9
  __int64 v17; // r14
  int v18; // r10d
  char *v19; // rsi
  __int64 result; // rax
  __int64 v21; // r15
  char *v22; // r10
  unsigned __int8 v23; // dl
  char *v24; // rcx
  unsigned __int64 v25; // rax
  char *v26; // r8
  unsigned int v27; // edx
  unsigned __int8 v28; // cl
  unsigned __int64 v29; // rax

  v11 = a2 & 7;
  v12 = a6 - a5;
  v13 = (char *)(a4 + 2LL * a5);
  v14 = a6 - a5;
  v15 = 8 - v11;
  v16 = (unsigned __int8 *)(a1 + ((__int64)a2 >> 3));
  v17 = a7 - 2 * (a6 - a5);
  v18 = a3 - ((v11 + a6 - a5 + 7) >> 3);
  v19 = &v13[a8 * a7];
  LOWORD(a5) = a10;
  result = a9;
  HIWORD(a5) = a9;
  if ( v12 < 8 - v11 )
    v15 = v12;
  v21 = v18;
  do
  {
    v22 = &v13[2 * v14];
    if ( v11 )
    {
      v23 = *v16++ << v11;
      v24 = &v13[2 * v15];
      do
      {
        v25 = v23;
        v23 *= 2;
        result = *(unsigned __int16 *)((char *)&a5 + ((v25 >> 6) & 2));
        *(_WORD *)v13 = result;
        v13 += 2;
      }
      while ( v13 != v24 );
    }
    v26 = &v13[(v22 - v13) & 0xFFFFFFFFFFFFFFF0uLL];
    while ( v13 != v26 )
    {
      v27 = *v16++;
      *(_WORD *)v13 = *(_WORD *)((char *)&a5 + ((v27 >> 6) & 2));
      *((_WORD *)v13 + 1) = *(_WORD *)((char *)&a5 + ((v27 >> 5) & 2));
      *((_WORD *)v13 + 2) = *(_WORD *)((char *)&a5 + ((v27 >> 4) & 2));
      *((_WORD *)v13 + 3) = *(_WORD *)((char *)&a5 + ((v27 >> 3) & 2));
      *((_WORD *)v13 + 4) = *(_WORD *)((char *)&a5 + ((v27 >> 2) & 2));
      *((_WORD *)v13 + 5) = *(_WORD *)((char *)&a5 + ((v27 >> 1) & 2));
      *((_WORD *)v13 + 6) = *(_WORD *)((char *)&a5 + (v27 & 2));
      result = (int)(2 * (v27 & 1));
      *((_WORD *)v13 + 7) = *(_WORD *)((char *)&a5 + result);
      v13 += 16;
    }
    if ( v13 != v22 )
    {
      v28 = *v16++;
      do
      {
        v29 = v28;
        v28 *= 2;
        result = *(unsigned __int16 *)((char *)&a5 + ((v29 >> 6) & 2));
        *(_WORD *)v13 = result;
        v13 += 2;
      }
      while ( v13 != v22 );
    }
    v13 += v17;
    v16 += v21;
  }
  while ( v13 != v19 );
  return result;
}

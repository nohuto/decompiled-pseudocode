/*
 * XREFs of ?bCalcMeshExtent@@YAHPEAU_TRIVERTEX@@KPEAXKKPEAU_RECTL@@@Z @ 0x1C0033BF0
 * Callers:
 *     GreGradientFill @ 0x1C0033608 (GreGradientFill.c)
 * Callees:
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall bCalcMeshExtent(
        struct _TRIVERTEX *a1,
        unsigned int a2,
        _DWORD *a3,
        unsigned int a4,
        unsigned int a5,
        struct _RECTL *a6)
{
  LONG v6; // ebx
  LONG v7; // edi
  LONG v8; // esi
  LONG v9; // ebp
  int v14; // r13d
  __int64 v15; // rax
  unsigned int v16; // r8d
  __int64 v17; // rax
  LONG v18; // ecx
  LONG v19; // edx
  __int64 v20; // rax
  LONG v21; // r8d
  LONG v22; // r9d
  __int64 result; // rax
  int v24; // r8d
  __int64 v25; // r9
  __int64 v26; // rax
  __int64 v27; // rax
  LONG x; // ecx
  LONG y; // edx
  _DWORD v30[4]; // [rsp+0h] [rbp-48h]

  v6 = 0x7FFFFFFF;
  v7 = 0x80000000;
  v8 = 0x7FFFFFFF;
  v9 = 0x80000000;
  if ( a5 >= 2 )
  {
    if ( a5 == 2 )
    {
      v24 = 0;
      if ( a4 )
      {
LABEL_29:
        v25 = 0LL;
        v30[0] = *a3;
        v30[1] = a3[1];
        v30[2] = a3[2];
        while ( 1 )
        {
          v26 = (unsigned int)v30[v25];
          if ( (unsigned int)v26 >= a2 )
            break;
          v27 = v26;
          x = a1[v27].x;
          y = a1[v27].y;
          if ( x < v6 )
            v6 = a1[v27].x;
          if ( x > v7 )
            v7 = a1[v27].x;
          if ( y < v8 )
            v8 = a1[v27].y;
          if ( y > v9 )
            v9 = a1[v27].y;
          if ( ++v25 >= 3 )
          {
            a3 += 3;
            if ( ++v24 < a4 )
              goto LABEL_29;
LABEL_22:
            if ( (unsigned int)(v6 + 0x8000000) <= 0x10000000
              && (unsigned int)(v7 + 0x8000000) <= 0x10000000
              && (unsigned int)(v8 + 0x8000000) <= 0x10000000
              && (unsigned int)(v9 + 0x8000000) <= 0x10000000 )
            {
              a6->left = v6;
              result = 1LL;
              a6->right = v7;
              a6->top = v8;
              a6->bottom = v9;
              return result;
            }
            goto LABEL_43;
          }
        }
      }
    }
    goto LABEL_43;
  }
  v14 = 0;
  if ( !a4 )
  {
LABEL_43:
    a6->left = 0;
    a6->right = 0;
    a6->top = 0;
    a6->bottom = 0;
    return 0LL;
  }
  while ( 1 )
  {
    v15 = (unsigned int)*a3;
    v16 = a3[1];
    if ( (unsigned int)v15 > a2 || v16 > a2 )
      break;
    v17 = v15;
    v18 = a1[v17].x;
    v19 = a1[v17].y;
    v20 = v16;
    if ( v18 < v6 )
      v6 = v18;
    v21 = a1[v16].x;
    v22 = a1[v20].y;
    if ( v18 > v7 )
      v7 = v18;
    if ( v19 < v8 )
      v8 = v19;
    if ( v19 > v9 )
      v9 = v19;
    if ( v21 < v6 )
      v6 = v21;
    if ( v21 > v7 )
      v7 = v21;
    if ( v22 < v8 )
      v8 = a1[v20].y;
    if ( v22 > v9 )
      v9 = a1[v20].y;
    a3 += 2;
    if ( ++v14 >= a4 )
      goto LABEL_22;
  }
  result = 0LL;
  *(_QWORD *)&a6->left = 0LL;
  *(_QWORD *)&a6->right = 0LL;
  return result;
}

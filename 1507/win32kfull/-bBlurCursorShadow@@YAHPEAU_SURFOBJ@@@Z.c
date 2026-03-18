/*
 * XREFs of ?bBlurCursorShadow@@YAHPEAU_SURFOBJ@@@Z @ 0x1C0128F74
 * Callers:
 *     ?bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z @ 0x1C0128DB8 (-bShadowAlphaCursor@@YAHPEAU_SURFOBJ@@00PEAU_XLATEOBJ@@1PEAU_RECTL@@H@Z.c)
 * Callees:
 *     PALLOCMEM2 @ 0x1C0033FC4 (PALLOCMEM2.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

__int64 __fastcall bBlurCursorShadow(struct _SURFOBJ *a1)
{
  LONG cx; // eax
  struct _SURFOBJ *v2; // rbx
  _BYTE *v3; // r8
  char *v4; // r9
  char *v5; // rdi
  char *pvScan0; // r10
  _WORD **v7; // r11
  __int64 v8; // r15
  _WORD *v9; // r12
  unsigned __int64 v10; // r13
  __int64 v11; // rax
  unsigned __int64 v12; // rsi
  char *v13; // r14
  __int16 v14; // ax
  __int16 v15; // cx
  unsigned int v16; // r11d
  unsigned __int64 v17; // r14
  int v18; // r15d
  unsigned __int64 v19; // rdx
  __int64 v20; // r12
  _WORD *v21; // rsi
  __int64 v22; // r13
  unsigned int *v23; // rbx
  unsigned __int64 v24; // r8
  unsigned __int16 v25; // cx
  _WORD *v26; // r13
  __int64 v27; // rax
  unsigned __int64 v28; // r12
  char *v29; // rsi
  unsigned __int64 v30; // rbx
  __int16 v31; // ax
  __int16 v32; // cx
  __int64 v34; // rax
  _BYTE *v36; // [rsp+40h] [rbp-C8h] BYREF
  char *v37; // [rsp+48h] [rbp-C0h]
  char *v38; // [rsp+50h] [rbp-B8h]
  _BYTE v39[128]; // [rsp+58h] [rbp-B0h] BYREF
  char v40; // [rsp+D8h] [rbp-30h] BYREF
  char v41; // [rsp+158h] [rbp+50h] BYREF

  cx = a1->sizlBitmap.cx;
  v2 = a1;
  if ( cx < 3 || a1->sizlBitmap.cy < 3 )
    return 0LL;
  if ( cx <= 64 )
  {
    v3 = v39;
    v36 = v39;
    v4 = &v40;
    v5 = &v41;
LABEL_5:
    v38 = v5;
    v37 = v4;
    goto LABEL_6;
  }
  v36 = PALLOCMEM2((unsigned int)(6 * cx), 1886221383LL, 1);
  v3 = v36;
  if ( v36 )
  {
    v34 = v2->sizlBitmap.cx;
    v4 = &v36[2 * v34];
    v5 = &v4[2 * v34];
    goto LABEL_5;
  }
  v5 = v38;
  v4 = v37;
LABEL_6:
  if ( !v3 )
    return 0LL;
  pvScan0 = (char *)v2->pvScan0;
  v7 = (_WORD **)&v36;
  v8 = 3LL;
  do
  {
    v9 = *v7;
    v10 = 0LL;
    v11 = v2->sizlBitmap.cx - 2;
    v12 = (unsigned __int64)(2 * v11 + 1) >> 1;
    if ( *v7 > &(*v7)[v11] )
      v12 = 0LL;
    if ( v12 )
    {
      v13 = pvScan0 + 4;
      do
      {
        v14 = (unsigned __int8)v13[7];
        ++v10;
        v15 = (unsigned __int8)*(v13 - 1);
        v13 += 4;
        *v9++ = (unsigned __int8)*(v13 - 1) + v14 + v15;
      }
      while ( v10 < v12 );
    }
    ++v7;
    pvScan0 += v2->lDelta;
    --v8;
  }
  while ( v8 );
  v16 = 0;
  v17 = (unsigned __int64)v2->pvScan0 + v2->lDelta + 4;
  v18 = v2->sizlBitmap.cy - 2;
  if ( v2->sizlBitmap.cy != 2 )
  {
    while ( 1 )
    {
      --v18;
      v19 = (unsigned __int64)(4LL * (v2->sizlBitmap.cx - 2) + 3) >> 2;
      if ( v17 > v17 + 4LL * (v2->sizlBitmap.cx - 2) )
        v19 = 0LL;
      if ( v19 )
      {
        v20 = v5 - v3;
        v21 = v3;
        v22 = v4 - v3;
        v23 = (unsigned int *)v17;
        v24 = 0LL;
        do
        {
          ++v24;
          v25 = *v21 + *(_WORD *)((char *)v21 + v20) + *(_WORD *)((char *)v21 + v22);
          ++v21;
          *v23++ = (v25 << 21) & 0xFF000000;
        }
        while ( v24 < v19 );
        v2 = a1;
        v3 = v36;
      }
      v17 += v2->lDelta;
      if ( !v18 )
        break;
      v26 = (&v36)[v16];
      v27 = v2->sizlBitmap.cx - 2;
      v28 = (unsigned __int64)(2 * v27 + 1) >> 1;
      if ( v26 > &v26[v27] )
        v28 = 0LL;
      if ( v28 )
      {
        v29 = pvScan0 + 4;
        v30 = 0LL;
        do
        {
          v31 = (unsigned __int8)v29[7];
          ++v30;
          v32 = (unsigned __int8)*(v29 - 1);
          v29 += 4;
          *v26++ = (unsigned __int8)*(v29 - 1) + v31 + v32;
        }
        while ( v30 < v28 );
        v2 = a1;
      }
      ++v16;
      pvScan0 += v2->lDelta;
      if ( v16 >= 3 )
        v16 = 0;
    }
  }
  if ( v3 != v39 )
    Win32FreePool(v3);
  return 1LL;
}

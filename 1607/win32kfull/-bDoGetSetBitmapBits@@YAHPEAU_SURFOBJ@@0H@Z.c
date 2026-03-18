/*
 * XREFs of ?bDoGetSetBitmapBits@@YAHPEAU_SURFOBJ@@0H@Z @ 0x1C00FC6A8
 * Callers:
 *     GreGetBitmapBits @ 0x1C00FBF74 (GreGetBitmapBits.c)
 *     GreSetBitmapBits @ 0x1C00FC310 (GreSetBitmapBits.c)
 * Callees:
 *     memmove @ 0x1C015A040 (memmove.c)
 */

__int64 __fastcall bDoGetSetBitmapBits(struct _SURFOBJ *a1, struct _SURFOBJ *a2, int a3)
{
  char *pvBits; // rsi
  char *pvScan0; // rdi
  LONG lDelta; // r12d
  unsigned int v8; // r15d
  unsigned int v9; // edx
  unsigned int v10; // eax
  unsigned int cjBits; // ebx
  unsigned int v12; // edx
  char *v13; // rdi
  int v14; // r14d
  unsigned int v15; // ebx
  char *v18; // rsi
  __int64 iBitmapFormat; // rax
  char *v20; // rdi
  LONG v21; // r12d
  unsigned int v22; // r15d
  unsigned int v23; // edx
  unsigned int v24; // eax
  unsigned int v25; // ebx
  __int64 v26; // rdx
  char *v27; // rdi
  int v28; // r14d
  unsigned int v29; // ebx
  unsigned int v31; // r14d
  unsigned int v32; // r14d
  HDEV hdev; // [rsp+38h] [rbp-40h] BYREF
  HDEV v34[2]; // [rsp+40h] [rbp-38h] BYREF

  if ( !a3 )
  {
    SURFOBJ_TO_SURFACE(a1);
    v34[0] = a1->hdev;
    PDEVOBJ::vSync((PDEVOBJ *)v34, a1, 0LL, 0);
    pvBits = (char *)a2->pvBits;
    pvScan0 = (char *)a1->pvScan0;
    lDelta = a1->lDelta;
    v8 = ((unsigned int)(a1->sizlBitmap.cx * *((_DWORD *)&galBitsPerPixel + a1->iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
    v9 = v8 * a1->sizlBitmap.cy;
    v10 = a2->lDelta;
    cjBits = a2->cjBits;
    if ( (v10 & 0x80000000) != 0 || v10 >= v9 )
    {
      a2->cjBits = 0;
    }
    else
    {
      if ( cjBits + v10 > v9 )
        cjBits = v9 - v10;
      a2->cjBits = cjBits;
      v12 = v10 % v8;
      v13 = &pvScan0[lDelta * (v10 / v8)];
      if ( v10 % v8 )
      {
        v32 = cjBits;
        if ( v8 - v12 < cjBits )
          v32 = v8 - v12;
        memmove(&v13[v12], pvBits, v32);
        pvBits += v32;
        v13 += lDelta;
        cjBits -= v32;
      }
      v14 = cjBits / v8;
      v15 = cjBits % v8;
      while ( v14-- )
      {
        memmove(v13, pvBits, v8);
        pvBits += v8;
        v13 += lDelta;
      }
      if ( v15 )
        memmove(v13, pvBits, v15);
    }
    return 1LL;
  }
  SURFOBJ_TO_SURFACE(a2);
  hdev = a2->hdev;
  PDEVOBJ::vSync((PDEVOBJ *)&hdev, a2, 0LL, 0);
  v18 = (char *)a1->pvBits;
  iBitmapFormat = a2->iBitmapFormat;
  if ( !v18 )
  {
    a1->cjBits = a2->sizlBitmap.cy
               * (((unsigned int)(a2->sizlBitmap.cx * *((_DWORD *)&galBitsPerPixel + iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE);
    return 1LL;
  }
  v20 = (char *)a2->pvScan0;
  v21 = a2->lDelta;
  v22 = ((unsigned int)(a2->sizlBitmap.cx * *((_DWORD *)&galBitsPerPixel + iBitmapFormat) + 15) >> 3) & 0x1FFFFFFE;
  v23 = v22 * a2->sizlBitmap.cy;
  v24 = a1->lDelta;
  v25 = a1->cjBits;
  if ( (v24 & 0x80000000) == 0 && v24 < v23 )
  {
    if ( v25 + v24 > v23 )
      v25 = v23 - v24;
    a1->cjBits = v25;
    v26 = v24 % v22;
    v27 = &v20[v21 * (v24 / v22)];
    if ( v24 % v22 )
    {
      v31 = v25;
      if ( v22 - (unsigned int)v26 < v25 )
        v31 = v22 - v26;
      memmove(v18, &v27[v26], v31);
      v18 += v31;
      v27 += v21;
      v25 -= v31;
    }
    v28 = v25 / v22;
    v29 = v25 % v22;
    while ( v28-- )
    {
      memmove(v18, v27, v22);
      v18 += v22;
      v27 += v21;
    }
    if ( v29 )
      memmove(v18, v27, v29);
    return 1LL;
  }
  a1->cjBits = 0;
  return 0LL;
}

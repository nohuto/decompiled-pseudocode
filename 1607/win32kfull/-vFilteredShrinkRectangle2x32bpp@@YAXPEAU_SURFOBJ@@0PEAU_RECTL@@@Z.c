/*
 * XREFs of ?vFilteredShrinkRectangle2x32bpp@@YAXPEAU_SURFOBJ@@0PEAU_RECTL@@@Z @ 0x1C0288320
 * Callers:
 *     ?vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z @ 0x1C028825C (-vFilteredShrink2x32bpp@@YAXPEAU_SURFOBJ@@0PEAVECLIPOBJ@@PEAU_RECTL@@@Z.c)
 * Callees:
 *     <none>
 */

void __fastcall vFilteredShrinkRectangle2x32bpp(struct _SURFOBJ *a1, struct _SURFOBJ *a2, struct _RECTL *a3)
{
  __int64 lDelta; // r10
  LONG top; // r11d
  __int64 left; // r9
  int v6; // ebp
  int v7; // r14d
  LONG v8; // r8d
  unsigned __int8 *v9; // rsi
  char *v10; // r9
  __int64 v11; // rbx
  unsigned __int8 *v12; // rdx
  int v13; // r8d
  int v14; // ecx
  int v15; // eax
  int v16; // ecx
  __int64 v17; // [rsp+50h] [rbp+18h]

  lDelta = a2->lDelta;
  top = a3->top;
  left = a3->left;
  v6 = a3->bottom - top;
  v7 = a3->right - left;
  v8 = a1->lDelta;
  v9 = (unsigned __int8 *)a2->pvScan0 + 8 * (int)left + 2 * (int)lDelta * top;
  v10 = (char *)a1->pvScan0 + 4 * left + v8 * top;
  v11 = 2 * (a2->lDelta - 4 * v7);
  v17 = v8 - 4 * v7;
  do
  {
    v12 = &v9[lDelta];
    v13 = v7;
    do
    {
      v14 = *v9 + v12[4] + v12[4 - lDelta];
      v9 += 8;
      *v10 = ((unsigned int)*v12 + v14) >> 2;
      v10[1] = (v12[1] + v12[5] + v12[5 - lDelta] + (unsigned int)v12[1 - lDelta]) >> 2;
      v15 = v12[6 - lDelta];
      v16 = v12[2 - lDelta];
      v12 += 8;
      v10[2] = (*(v12 - 6) + (unsigned int)*(v12 - 2) + v15 + v16) >> 2;
      v10 += 4;
      --v13;
    }
    while ( v13 );
    v10 += v17;
    v9 += v11;
    --v6;
  }
  while ( v6 );
}

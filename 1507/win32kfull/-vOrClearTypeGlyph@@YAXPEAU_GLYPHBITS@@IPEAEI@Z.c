/*
 * XREFs of ?vOrClearTypeGlyph@@YAXPEAU_GLYPHBITS@@IPEAEI@Z @ 0x1C0265C1C
 * Callers:
 *     draw_clrt_f_ntb_o_to_temp_start @ 0x1C02660D0 (draw_clrt_f_ntb_o_to_temp_start.c)
 * Callees:
 *     <none>
 */

void __fastcall vOrClearTypeGlyph(struct _GLYPHBITS *a1, unsigned int a2, unsigned __int8 *a3, unsigned int a4)
{
  BYTE *aj; // rbp
  unsigned int cx; // r8d
  unsigned __int8 *v7; // r14
  __int64 v8; // r12
  __int64 v9; // rax
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rbx
  unsigned __int64 v12; // rdi
  unsigned __int8 *v13; // r14
  __int64 v14; // rsi
  unsigned __int8 v15; // al
  unsigned __int8 v16; // al
  unsigned __int8 v17; // cl
  unsigned int v18; // r10d
  unsigned int v19; // r9d
  unsigned int v20; // r8d
  __int64 v21; // [rsp+0h] [rbp-48h]
  unsigned __int8 *v22; // [rsp+50h] [rbp+8h]
  __int64 v23; // [rsp+60h] [rbp+18h]

  aj = a1->aj;
  cx = a1->sizlBitmap.cx;
  v7 = &a3[a4 * a1->sizlBitmap.cy];
  v22 = v7;
  if ( a3 < v7 )
  {
    v8 = a4;
    v9 = cx;
    v23 = a4;
    v21 = cx;
    while ( 1 )
    {
      v10 = &a3[v9];
      v11 = a3;
      v12 = v10 - a3;
      if ( a3 > v10 )
        v12 = 0LL;
      if ( v12 )
        break;
LABEL_20:
      v9 = v21;
      a3 += v8;
      aj += a2;
      if ( a3 >= v7 )
        return;
    }
    v13 = (unsigned __int8 *)off_1C031B238;
    v14 = aj - a3;
    while ( 1 )
    {
      v15 = *v11;
      if ( !*v11 )
        break;
      v17 = v11[v14];
      if ( v17 )
      {
        v18 = v13[4 * v15] + v13[4 * v17];
        v19 = v13[4 * v15 + 1] + v13[4 * v17 + 1];
        v20 = v13[4 * v15 + 2] + v13[4 * v17 + 2];
        if ( v18 > 6 )
          v18 = 6;
        if ( v19 > 6 )
          v19 = 6;
        if ( v20 > 6 )
          v20 = 6;
        v16 = gajStorage1[49 * v18 + 7 * v19 + v20];
        goto LABEL_17;
      }
LABEL_18:
      if ( ++v11 - a3 >= v12 )
      {
        v7 = v22;
        v8 = v23;
        goto LABEL_20;
      }
    }
    v16 = v11[v14];
LABEL_17:
    *v11 = v16;
    goto LABEL_18;
  }
}

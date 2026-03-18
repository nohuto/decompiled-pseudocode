/*
 * XREFs of sfac_ComputeIndex4 @ 0x1C001FF60
 * Callers:
 *     InvokeGlyphMappingF @ 0x1C001FB10 (InvokeGlyphMappingF.c)
 *     cjComputeGLYPHSET_MSFT_UNICODE @ 0x1C001FB60 (cjComputeGLYPHSET_MSFT_UNICODE.c)
 * Callees:
 *     sfac_ComputeBinarySearchParams @ 0x1C001EE68 (sfac_ComputeBinarySearchParams.c)
 */

__int16 __fastcall sfac_ComputeIndex4(_WORD *a1, unsigned __int16 a2, _WORD *a3)
{
  _WORD *v3; // rbx
  unsigned __int16 v4; // si
  unsigned __int16 v6; // dx
  unsigned __int16 v7; // r9
  __int16 v8; // r8
  unsigned __int16 v9; // dx
  __int16 v10; // ax
  _WORD *v11; // rdx
  unsigned __int16 v12; // ax
  __int16 *v13; // rdx
  __int16 v14; // r9
  __int16 v15; // r8
  _WORD *v16; // rdx
  __int16 v17; // r8
  unsigned __int16 v18; // ax
  __int16 v19; // ax
  __int16 v21; // [rsp+40h] [rbp+8h] BYREF
  unsigned __int16 v22; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int16 v23; // [rsp+58h] [rbp+20h] BYREF

  v3 = a1 + 4;
  v4 = __ROR2__(*a1, 8);
  if ( v4 >= 0x10u && a2 > 0xFFu )
  {
    if ( a3 )
    {
      v6 = a3[109];
      v7 = a3[111];
      v8 = a3[110];
    }
    else
    {
      sfac_ComputeBinarySearchParams(v4 >> 1, &v23, &v21, &v22);
      v7 = v22;
      v8 = v21;
      v6 = v23;
    }
    if ( a2 >= __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
      v3 = (_WORD *)((char *)v3 + v7);
    if ( v8 != 7 )
    {
      if ( v8 != 12 )
      {
        switch ( v8 )
        {
          case 4:
            goto LABEL_14;
          case 5:
            goto LABEL_12;
          case 6:
            goto LABEL_10;
          case 8:
            goto LABEL_32;
          case 9:
            goto LABEL_30;
          case 10:
            goto LABEL_28;
          case 11:
            goto LABEL_26;
          case 13:
            goto LABEL_42;
          case 14:
            goto LABEL_40;
          case 15:
            v6 >>= 1;
            if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
              v3 = (_WORD *)((char *)v3 + v6);
LABEL_40:
            v6 >>= 1;
            if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
              v3 = (_WORD *)((char *)v3 + v6);
LABEL_42:
            v6 >>= 1;
            if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
              v3 = (_WORD *)((char *)v3 + v6);
            break;
          default:
            goto LABEL_16;
        }
      }
      v6 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
        v3 = (_WORD *)((char *)v3 + v6);
LABEL_26:
      v6 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
        v3 = (_WORD *)((char *)v3 + v6);
LABEL_28:
      v6 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
        v3 = (_WORD *)((char *)v3 + v6);
LABEL_30:
      v6 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
        v3 = (_WORD *)((char *)v3 + v6);
LABEL_32:
      v6 >>= 1;
      if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
        v3 = (_WORD *)((char *)v3 + v6);
    }
    v6 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
      v3 = (_WORD *)((char *)v3 + v6);
LABEL_10:
    v6 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
      v3 = (_WORD *)((char *)v3 + v6);
LABEL_12:
    v6 >>= 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v6), 8) )
      v3 = (_WORD *)((char *)v3 + v6);
LABEL_14:
    v9 = v6 >> 1;
    if ( a2 > __ROR2__(*(_WORD *)((char *)v3 + v9), 8) )
      v3 = (_WORD *)((char *)v3 + v9);
  }
LABEL_16:
  if ( a2 > __ROR2__(*v3, 8) )
  {
    do
    {
      v10 = v3[1];
      ++v3;
    }
    while ( a2 > __ROR2__(v10, 8) );
  }
  v11 = (_WORD *)((char *)v3 + v4 + 2);
  v12 = __ROR2__(*v11, 8);
  if ( a2 >= v12 )
  {
    v13 = (_WORD *)((char *)v11 + v4);
    v14 = a2 - v12;
    v15 = *v13;
    v16 = (__int16 *)((char *)v13 + v4);
    v17 = __ROR2__(v15, 8);
    v18 = __ROR2__(*v16, 8);
    if ( !v18 )
      return a2 + v17;
    v19 = __ROR2__(*(_WORD *)((char *)v16 + v18 + (unsigned __int16)(2 * v14)), 8);
    if ( v19 )
      return v17 + v19;
  }
  return 0;
}

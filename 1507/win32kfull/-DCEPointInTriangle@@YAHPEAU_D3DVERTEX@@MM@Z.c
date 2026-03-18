/*
 * XREFs of ?DCEPointInTriangle@@YAHPEAU_D3DVERTEX@@MM@Z @ 0x1C01E4048
 * Callers:
 *     DCEHitTestWindow @ 0x1C01E47FC (DCEHitTestWindow.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall DCEPointInTriangle(struct _D3DVERTEX *a1, D3DVALUE a2, float a3)
{
  union _D3DVERTEX::$2970DA2ECFB38188FCB670891BDDBDFA *p_y; // r8
  float y; // xmm3_4
  char v6; // dl
  int v8; // r9d
  __int64 v9; // r11
  __int64 v10; // rbx
  __int64 v11; // r10
  int v12; // edi
  __int64 v13; // r10
  float v14; // xmm2_4
  float v15; // xmm6_4

  p_y = (union _D3DVERTEX::$2970DA2ECFB38188FCB670891BDDBDFA *)&a1->y;
  y = a1->y;
  v6 = 0;
  if ( y == a1[1].y && y == a3 && a2 >= a1->x && a1[1].x >= a2 )
    return 1LL;
  v8 = -1;
  v9 = 1LL;
  v10 = 3LL;
  if ( (float)(y - a3) >= 0.0 )
    v8 = 1;
  do
  {
    v11 = v9;
    if ( v9 >= 3 )
      v11 = 0LL;
    v12 = -1;
    v13 = v11;
    if ( (float)(a1[v13].y - a3) >= 0.0 )
      v12 = 1;
    if ( v8 != v12 )
    {
      v14 = p_y[-1].y - a2;
      if ( v14 <= 0.0 )
        goto LABEL_16;
      if ( (float)(a1[v13].x - a2) > 0.0 )
      {
LABEL_19:
        ++v6;
        goto LABEL_20;
      }
      if ( v14 <= 0.0 )
      {
LABEL_16:
        if ( (float)(a1[v13].x - a2) <= 0.0 )
        {
LABEL_20:
          v8 = v12;
          goto LABEL_21;
        }
      }
      v15 = a1[v13].y - p_y->y;
      if ( (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v15) & _xmm) <= 0.00000011920929
        || (float)(v14 - (float)((float)((float)(a1[v13].x - p_y[-1].y) * (float)(p_y->y - a3)) / v15)) <= 0.0 )
      {
        goto LABEL_20;
      }
      goto LABEL_19;
    }
LABEL_21:
    ++v9;
    p_y += 8;
    --v10;
  }
  while ( v10 );
  return v6 & 1;
}

/*
 * XREFs of ?SetProperty@CComponentTransform2D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18014EB80
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z @ 0x180020528 (-SetTransformMatrix@CComponentTransform2D@@AEAAJAEBUD2D_MATRIX_3X2_F@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x1800205A8 (-SetRotationAngle@CComponentTransform2D@@AEAAJM@Z.c)
 *     ?SetScale@CComponentTransform2D@@AEAAJMM@Z @ 0x1800205F0 (-SetScale@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetOffset@CComponentTransform2D@@AEAAJMM@Z @ 0x18002065C (-SetOffset@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform2D@@AEAAJMM@Z @ 0x1800206C8 (-SetCenter@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?SetAnchor@CComponentTransform2D@@AEAAJMM@Z @ 0x180020734 (-SetAnchor@CComponentTransform2D@@AEAAJMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform2D::SetProperty(CComponentTransform2D *a1, int a2, int a3, __int64 a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  int v8; // edx
  float v9; // xmm1_4
  int v10; // edx
  unsigned int v12; // [rsp+20h] [rbp-18h]

  if ( a3 == 18 )
  {
    v9 = *(float *)a4;
    v10 = a2 - 1003;
    if ( !v10 )
    {
      v4 = CComponentTransform2D::SetRotationAngle(a1, v9);
      v5 = v4;
      if ( v4 < 0 )
      {
        v12 = 148;
        goto LABEL_26;
      }
      return v5;
    }
    if ( v10 == 1 )
    {
      v4 = CComponentTransform2D::SetRotationAngle(a1, v9 * 0.017453292);
      v5 = v4;
      if ( v4 < 0 )
      {
        v12 = 152;
        goto LABEL_26;
      }
      return v5;
    }
    goto LABEL_21;
  }
  if ( a3 != 35 )
  {
    if ( a3 == 104 && a2 == 1006 )
    {
      v4 = CComponentTransform2D::SetTransformMatrix(a1, (const struct D2D_MATRIX_3X2_F *)a4);
      v5 = v4;
      if ( v4 < 0 )
      {
        v12 = 191;
LABEL_26:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v12);
        return v5;
      }
      return v5;
    }
LABEL_21:
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xD0u);
    return v5;
  }
  v6 = a2 - 1000;
  if ( !v6 )
  {
    v4 = CComponentTransform2D::SetAnchor(
           a1,
           COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
           COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
    v5 = v4;
    if ( v4 < 0 )
    {
      v12 = 165;
      goto LABEL_26;
    }
    return v5;
  }
  v7 = v6 - 1;
  if ( !v7 )
  {
    v4 = CComponentTransform2D::SetCenter(
           a1,
           COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
           COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
    v5 = v4;
    if ( v4 < 0 )
    {
      v12 = 169;
      goto LABEL_26;
    }
    return v5;
  }
  v8 = v7 - 1;
  if ( !v8 )
  {
    v4 = CComponentTransform2D::SetOffset(
           a1,
           COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
           COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
    v5 = v4;
    if ( v4 < 0 )
    {
      v12 = 173;
      goto LABEL_26;
    }
    return v5;
  }
  if ( v8 != 3 )
    goto LABEL_21;
  v4 = CComponentTransform2D::SetScale(
         a1,
         COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
         COERCE_DOUBLE((unsigned __int64)*(_DWORD *)(a4 + 4)));
  v5 = v4;
  if ( v4 < 0 )
  {
    v12 = 177;
    goto LABEL_26;
  }
  return v5;
}

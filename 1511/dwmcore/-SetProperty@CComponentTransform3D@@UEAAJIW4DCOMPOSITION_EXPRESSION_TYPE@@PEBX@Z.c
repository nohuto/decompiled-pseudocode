/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18012F6F0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x18012F398 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F468 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x18012F594 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18012F8B8 (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012F948 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18012FA78 (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x18012FBA8 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(CComponentTransform3D *a1, int a2, int a3, float *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v6; // edx
  int v7; // edx
  float v8; // xmm1_4
  int v9; // edx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v8 = *a4;
      v9 = a2 - 12;
      if ( !v9 )
      {
        v4 = CComponentTransform3D::SetRotationAngle(a1, v8);
        v5 = v4;
        if ( v4 < 0 )
        {
          v11 = 80;
          goto LABEL_31;
        }
        return v5;
      }
      if ( v9 == 1 )
      {
        v4 = CComponentTransform3D::SetRotationAngle(a1, v8 * 0.017453292);
        v5 = v4;
        if ( v4 < 0 )
        {
          v11 = 84;
          goto LABEL_31;
        }
        return v5;
      }
      goto LABEL_26;
    case 35:
      if ( a2 == 19 )
      {
        v4 = CComponentTransform3D::SetAnchor(
               a1,
               COERCE_DOUBLE((unsigned __int64)*(_DWORD *)a4),
               COERCE_DOUBLE((unsigned __int64)*((_DWORD *)a4 + 1)));
        v5 = v4;
        if ( v4 < 0 )
        {
          v11 = 97;
          goto LABEL_31;
        }
        return v5;
      }
      goto LABEL_26;
    case 52:
      v6 = a2 - 18;
      if ( !v6 )
      {
        v4 = CComponentTransform3D::SetCenter(a1, *a4, a4[1], a4[2]);
        v5 = v4;
        if ( v4 < 0 )
        {
          v11 = 110;
          goto LABEL_31;
        }
        return v5;
      }
      v7 = v6 - 3;
      if ( !v7 )
      {
        v4 = CComponentTransform3D::SetRotationAxis(a1, *a4, a4[1], a4[2]);
        v5 = v4;
        if ( v4 < 0 )
        {
          v11 = 114;
          goto LABEL_31;
        }
        return v5;
      }
      if ( v7 == 1 )
      {
        v4 = CComponentTransform3D::SetScale(a1, *a4, a4[1], a4[2]);
        v5 = v4;
        if ( v4 < 0 )
        {
          v11 = 118;
          goto LABEL_31;
        }
        return v5;
      }
      goto LABEL_26;
  }
  if ( a3 != 71 )
  {
    if ( a3 == 265 && a2 == 17 )
    {
      v4 = CComponentTransform3D::SetTransformMatrix(a1, (const struct D2DMatrix *)a4);
      v5 = v4;
      if ( v4 < 0 )
      {
        v11 = 146;
LABEL_31:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v11);
        return v5;
      }
      return v5;
    }
LABEL_26:
    v5 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xA3u);
    return v5;
  }
  if ( a2 != 20 )
    goto LABEL_26;
  v4 = CComponentTransform3D::SetOrientation(a1, *a4, a4[1], a4[2], a4[3]);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 132;
    goto LABEL_31;
  }
  return v5;
}

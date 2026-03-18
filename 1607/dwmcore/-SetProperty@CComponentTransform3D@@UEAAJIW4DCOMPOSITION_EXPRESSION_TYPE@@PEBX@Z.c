/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001B5F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z @ 0x180023584 (-SetTransformMatrix@CComponentTransform3D@@AEAAJAEBUD2DMatrix@@@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18002381C (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z @ 0x180023864 (-SetOrientation@CComponentTransform3D@@AEAAJMMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAJMMM@Z @ 0x18002392C (-SetScale@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z @ 0x1800239E4 (-SetRotationAxis@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAJMMM@Z @ 0x180023A58 (-SetCenter@CComponentTransform3D@@AEAAJMMM@Z.c)
 *     ?SetAnchor@CComponentTransform3D@@AEAAJMM@Z @ 0x180023B10 (-SetAnchor@CComponentTransform3D@@AEAAJMM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(CComponentTransform3D *a1, int a2, int a3, float *a4)
{
  int v4; // eax
  unsigned int v5; // ebx
  int v7; // edx
  int v8; // edx
  float v9; // xmm1_4
  int v10; // edx
  unsigned int v11; // [rsp+20h] [rbp-18h]

  switch ( a3 )
  {
    case 18:
      v9 = *a4;
      v10 = a2 - 12;
      if ( !v10 )
      {
        v4 = CComponentTransform3D::SetRotationAngle(a1, v9);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 141;
        goto LABEL_32;
      }
      if ( v10 == 1 )
      {
        v4 = CComponentTransform3D::SetRotationAngle(a1, v9 * 0.017453292);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 145;
        goto LABEL_32;
      }
      goto LABEL_29;
    case 35:
      if ( a2 == 19 )
      {
        v4 = CComponentTransform3D::SetAnchor(a1, *a4, a4[1]);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 158;
        goto LABEL_32;
      }
      goto LABEL_29;
    case 52:
      v7 = a2 - 18;
      if ( !v7 )
      {
        v4 = CComponentTransform3D::SetCenter(a1, *a4, a4[1], a4[2]);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 171;
        goto LABEL_32;
      }
      v8 = v7 - 3;
      if ( !v8 )
      {
        v4 = CComponentTransform3D::SetRotationAxis(a1, *a4, a4[1], a4[2]);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 175;
        goto LABEL_32;
      }
      if ( v8 == 1 )
      {
        v4 = CComponentTransform3D::SetScale(a1, *a4, a4[1], a4[2]);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 179;
        goto LABEL_32;
      }
LABEL_29:
      v5 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0xE0u);
      return v5;
    case 71:
      if ( a2 == 20 )
      {
        v4 = CComponentTransform3D::SetOrientation(a1, *a4, a4[1], a4[2], a4[3]);
        v5 = v4;
        if ( v4 >= 0 )
          return v5;
        v11 = 193;
LABEL_32:
        MilInstrumentationCheckHR(0x14u, 0LL, 0, v4, v11);
        return v5;
      }
      goto LABEL_29;
  }
  if ( a3 != 265 || a2 != 17 )
    goto LABEL_29;
  v4 = CComponentTransform3D::SetTransformMatrix(a1, (const struct D2DMatrix *)a4);
  v5 = v4;
  if ( v4 < 0 )
  {
    v11 = 207;
    goto LABEL_32;
  }
  return v5;
}

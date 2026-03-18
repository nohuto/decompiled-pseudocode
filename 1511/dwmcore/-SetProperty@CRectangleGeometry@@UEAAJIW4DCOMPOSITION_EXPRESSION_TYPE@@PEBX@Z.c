/*
 * XREFs of ?SetProperty@CRectangleGeometry@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18001D7F0
 * Callers:
 *     <none>
 * Callees:
 *     ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065570 (-SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800655B8 (-SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065600 (-SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180065648 (-SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065690 (-SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800656D8 (-SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180065720 (-SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180065764 (-SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x1800657A8 (-SetBottom@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x18006580C (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x180065870 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetLeft@CRectangleGeometry@@AEAAJM@Z @ 0x1800658D8 (-SetLeft@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CRectangleGeometry::SetProperty(CRectangleGeometry *a1, unsigned int a2, int a3, float *a4)
{
  unsigned int v4; // edx
  unsigned int v5; // edx
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ebx
  unsigned int v10; // edx
  unsigned int v11; // edx
  unsigned int v12; // edx
  unsigned int v13; // edx
  unsigned int v14; // edx
  unsigned int v15; // [rsp+20h] [rbp-18h]

  if ( a3 != 18 )
  {
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x88u);
    return v8;
  }
  if ( a2 > 6 )
  {
    v11 = a2 - 7;
    if ( !v11 )
    {
      v7 = CRectangleGeometry::SetTopRightRadiusY(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 102;
      goto LABEL_42;
    }
    v12 = v11 - 1;
    if ( !v12 )
    {
      v7 = CRectangleGeometry::SetBottomLeftRadiusX(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 106;
      goto LABEL_42;
    }
    v13 = v12 - 1;
    if ( !v13 )
    {
      v7 = CRectangleGeometry::SetBottomLeftRadiusY(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 110;
      goto LABEL_42;
    }
    v14 = v13 - 1;
    if ( !v14 )
    {
      v7 = CRectangleGeometry::SetBottomRightRadiusX(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 114;
      goto LABEL_42;
    }
    if ( v14 == 1 )
    {
      v7 = CRectangleGeometry::SetBottomRightRadiusY(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 118;
      goto LABEL_42;
    }
    goto LABEL_33;
  }
  if ( a2 == 6 )
  {
    v7 = CRectangleGeometry::SetTopRightRadiusX(a1, *a4);
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
    v15 = 98;
    goto LABEL_42;
  }
  if ( !a2 )
  {
    v7 = CRectangleGeometry::SetLeft(a1, *a4);
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
    v15 = 74;
    goto LABEL_42;
  }
  v4 = a2 - 1;
  if ( !v4 )
  {
    v7 = CRectangleGeometry::SetTop(a1, *a4);
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
    v15 = 78;
    goto LABEL_42;
  }
  v5 = v4 - 1;
  if ( !v5 )
  {
    v7 = CRectangleGeometry::SetRight(a1, *a4);
    v8 = v7;
    if ( v7 >= 0 )
      return v8;
    v15 = 82;
LABEL_42:
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, v15);
    return v8;
  }
  v6 = v5 - 1;
  if ( v6 )
  {
    v10 = v6 - 1;
    if ( !v10 )
    {
      v7 = CRectangleGeometry::SetTopLeftRadiusX(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 90;
      goto LABEL_42;
    }
    if ( v10 == 1 )
    {
      v7 = CRectangleGeometry::SetTopLeftRadiusY(a1, *a4);
      v8 = v7;
      if ( v7 >= 0 )
        return v8;
      v15 = 94;
      goto LABEL_42;
    }
LABEL_33:
    v8 = -2147024809;
    MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x7Eu);
    return v8;
  }
  v7 = CRectangleGeometry::SetBottom(a1, *a4);
  v8 = v7;
  if ( v7 < 0 )
  {
    v15 = 86;
    goto LABEL_42;
  }
  return v8;
}

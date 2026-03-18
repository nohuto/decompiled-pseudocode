/*
 * XREFs of ?NotifyFloatPropertyChanged@CPropertyChangeResource@@QEAAJIM@Z @ 0x180023EC8
 * Callers:
 *     ?SetRotationAngle@CComponentTransform2D@@AEAAJM@Z @ 0x1800205A8 (-SetRotationAngle@CComponentTransform2D@@AEAAJM@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAJM@Z @ 0x18002381C (-SetRotationAngle@CComponentTransform3D@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180095998 (-SetBottomRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x1800959E0 (-SetBottomRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180095A28 (-SetBottomLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180095A70 (-SetBottomLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180095AB8 (-SetTopRightRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180095B00 (-SetTopRightRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z @ 0x180095B48 (-SetTopLeftRadiusY@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z @ 0x180095B90 (-SetTopLeftRadiusX@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetBottom@CRectangleGeometry@@AEAAJM@Z @ 0x180095BD8 (-SetBottom@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetRight@CRectangleGeometry@@AEAAJM@Z @ 0x180095C54 (-SetRight@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetTop@CRectangleGeometry@@AEAAJM@Z @ 0x180095CD0 (-SetTop@CRectangleGeometry@@AEAAJM@Z.c)
 *     ?SetLeft@CRectangleGeometry@@AEAAJM@Z @ 0x180095D4C (-SetLeft@CRectangleGeometry@@AEAAJM@Z.c)
 * Callees:
 *     ?ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z @ 0x180023E90 (-ShouldNotify@CPropertyChangeResource@@AEAA_NI@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CPropertyChangeResource::NotifyFloatPropertyChanged(
        CPropertyChangeResource *this,
        __int64 a2,
        float a3)
{
  int v3; // ebx
  __int64 v4; // rcx
  int v5; // r10d
  __int64 v7; // rax
  __int64 v8; // r11
  unsigned int v9; // edx
  _QWORD v10[3]; // [rsp+40h] [rbp-18h] BYREF

  v3 = 0;
  if ( CPropertyChangeResource::ShouldNotify(this) )
  {
    v7 = *(_QWORD *)(v4 + 112);
    v8 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v4 + 16) + 1232LL) + 56LL);
    if ( v7 )
      v9 = *(_DWORD *)(v7 + 52);
    else
      v9 = 0;
    v10[0] = v9;
    v10[1] = *(unsigned int *)(v4 + 120);
    v3 = ((__int64 (__fastcall *)(__int64, _QWORD *, __int64, __int64, _WORD, void *, int, _QWORD))CoreUICallSend)(
           v8,
           v10,
           2LL,
           5LL,
           0,
           &unk_1801AD3CA,
           v5,
           a3);
    if ( v3 == -2018375675 )
      v3 = 0;
    if ( v3 < 0 )
      MilInstrumentationCheckHR(0x14u, 0LL, 0, v3, 0x77u);
  }
  return (unsigned int)v3;
}

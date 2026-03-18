/*
 * XREFs of ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18011F4C0
 * Callers:
 *     <none>
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x18006CFD4 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?SetCenter@CComponentTransform3D@@AEAAXMMM@Z @ 0x18011F368 (-SetCenter@CComponentTransform3D@@AEAAXMMM@Z.c)
 *     ?SetOrientation@CComponentTransform3D@@AEAAXMMMM@Z @ 0x18011F3F0 (-SetOrientation@CComponentTransform3D@@AEAAXMMMM@Z.c)
 *     ?SetRotationAngle@CComponentTransform3D@@AEAAXM@Z @ 0x18011F610 (-SetRotationAngle@CComponentTransform3D@@AEAAXM@Z.c)
 *     ?SetRotationAxis@CComponentTransform3D@@AEAAXMMM@Z @ 0x18011F654 (-SetRotationAxis@CComponentTransform3D@@AEAAXMMM@Z.c)
 *     ?SetScale@CComponentTransform3D@@AEAAXMMM@Z @ 0x18011F6E8 (-SetScale@CComponentTransform3D@@AEAAXMMM@Z.c)
 */

__int64 __fastcall CComponentTransform3D::SetProperty(__int64 a1, int a2, int a3, __int64 a4)
{
  unsigned int v4; // ebx
  int v5; // edx
  int v6; // edx

  v4 = 0;
  switch ( a3 )
  {
    case 17:
      if ( a2 == 10 )
      {
        CComponentTransform3D::SetRotationAngle((CComponentTransform3D *)(a1 - 8), *(float *)a4);
        return v4;
      }
      goto LABEL_17;
    case 51:
      v5 = a2 - 15;
      if ( !v5 )
      {
        CComponentTransform3D::SetCenter(
          (CComponentTransform3D *)(a1 - 8),
          *(float *)a4,
          *(float *)(a4 + 4),
          *(float *)(a4 + 8));
        return v4;
      }
      v6 = v5 - 2;
      if ( !v6 )
      {
        CComponentTransform3D::SetRotationAxis(
          (CComponentTransform3D *)(a1 - 8),
          *(float *)a4,
          *(float *)(a4 + 4),
          *(float *)(a4 + 8));
        return v4;
      }
      if ( v6 == 1 )
      {
        CComponentTransform3D::SetScale(
          (CComponentTransform3D *)(a1 - 8),
          *(float *)a4,
          *(float *)(a4 + 4),
          *(float *)(a4 + 8));
        return v4;
      }
      goto LABEL_17;
    case 68:
      if ( a2 == 16 )
      {
        CComponentTransform3D::SetOrientation(
          (CComponentTransform3D *)(a1 - 8),
          *(float *)a4,
          *(float *)(a4 + 4),
          *(float *)(a4 + 8),
          *(float *)(a4 + 12));
        return v4;
      }
LABEL_17:
      v4 = -2147024809;
      MilInstrumentationCheckHR(0x14u, 0LL, 0, -2147024809, 0x82u);
      return v4;
  }
  if ( a3 != 262 || a2 != 14 )
    goto LABEL_17;
  *(_OWORD *)(a1 + 216) = *(_OWORD *)a4;
  *(_OWORD *)(a1 + 232) = *(_OWORD *)(a4 + 16);
  *(_OWORD *)(a1 + 248) = *(_OWORD *)(a4 + 32);
  *(_OWORD *)(a1 + 264) = *(_OWORD *)(a4 + 48);
  CResource::NotifyOnChanged((_DWORD *)a1, 0, 0LL);
  return v4;
}

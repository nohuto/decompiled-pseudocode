/*
 * XREFs of ?SetRotationAngle@CComponentTransform3D@@AEAAXM@Z @ 0x18011F610
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18011F4C0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CComponentTransform3D::SetRotationAngle(CComponentTransform3D *this, float a2)
{
  if ( *((double *)this + 24) != a2 )
  {
    *((double *)this + 24) = a2;
    CResource::NotifyOnChanged((_DWORD *)this + 2, 0, 0LL);
  }
}

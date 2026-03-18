/*
 * XREFs of ?SetOrientation@CComponentTransform3D@@AEAAXMMMM@Z @ 0x18011F3F0
 * Callers:
 *     ?SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z @ 0x18011F4C0 (-SetProperty@CComponentTransform3D@@UEAAJIW4DCOMPOSITION_EXPRESSION_TYPE@@PEBX@Z.c)
 * Callees:
 *     ?NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800486B8 (-NotifyOnChanged@CResource@@QEAAXW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 */

void __fastcall CComponentTransform3D::SetOrientation(
        CComponentTransform3D *this,
        float a2,
        float a3,
        float a4,
        float a5)
{
  if ( *((double *)this + 17) != a2
    || *((double *)this + 18) != a3
    || *((double *)this + 19) != a4
    || *((double *)this + 20) != a5 )
  {
    *((double *)this + 18) = a3;
    *((double *)this + 17) = a2;
    *((double *)this + 20) = a5;
    *((double *)this + 19) = a4;
    CResource::NotifyOnChanged((_DWORD *)this + 2, 0, 0LL);
  }
}

/*
 * XREFs of ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x18000C394
 * Callers:
 *     ?ConvertInnerToOuterBounds@CVisual@@IEAAJXZ @ 0x180052300 (-ConvertInnerToOuterBounds@CVisual@@IEAAJXZ.c)
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x1800538C0 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVisual::GetEffectiveSize(CVisual *this, float *a2, float *a3)
{
  *a2 = *((float *)this + 48);
  *a3 = *((float *)this + 49);
  return *((float *)this + 48) != 0.0 && *((float *)this + 49) != 0.0;
}

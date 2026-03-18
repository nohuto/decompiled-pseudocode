/*
 * XREFs of ?GetEffectiveSize@CVisual@@QEBA_NPEAM0@Z @ 0x1800092F4
 * Callers:
 *     ?OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z @ 0x18004BB70 (-OnChanged@CVisual@@UEAAHW4Flags@NotificationEventArgs@@PEAUIUnknown@@@Z.c)
 * Callees:
 *     <none>
 */

_BOOL8 __fastcall CVisual::GetEffectiveSize(CVisual *this, float *a2, float *a3)
{
  *a2 = *((float *)this + 33);
  *a3 = *((float *)this + 34);
  return *((float *)this + 33) != 0.0 && *((float *)this + 34) != 0.0;
}

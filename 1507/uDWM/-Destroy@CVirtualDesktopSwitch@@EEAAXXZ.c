/*
 * XREFs of ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x180090930
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x180093854 (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::Destroy(CVirtualDesktopSwitch *this)
{
  CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(this);
  CStoryboard::Destroy(this);
}

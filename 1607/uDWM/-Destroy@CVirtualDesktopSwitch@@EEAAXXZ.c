/*
 * XREFs of ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x180091F10
 * Callers:
 *     <none>
 * Callees:
 *     ?_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ @ 0x1800940EC (-_ReleasePreviousDesktopComponents@CVirtualDesktopSwitch@@AEAAXXZ.c)
 */

void __fastcall CVirtualDesktopSwitch::Destroy(CVirtualDesktopSwitch *this)
{
  CVirtualDesktopSwitch::_ReleasePreviousDesktopComponents(this);
  CStoryboard::Destroy(this);
}

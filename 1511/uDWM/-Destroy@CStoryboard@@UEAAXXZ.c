/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x180006CE0
 * Callers:
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x180001BD0 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800046F0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x180093730 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x180007384 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}

/*
 * XREFs of ?Destroy@CStoryboard@@UEAAXXZ @ 0x18000F3A0
 * Callers:
 *     ?Destroy@CSlideOut@@UEAAXXZ @ 0x18003C530 (-Destroy@CSlideOut@@UEAAXXZ.c)
 *     ?Destroy@CAppArrangementDelayed@@EEAAXXZ @ 0x1800908F0 (-Destroy@CAppArrangementDelayed@@EEAAXXZ.c)
 *     ?Destroy@CVirtualDesktopSwitch@@EEAAXXZ @ 0x180090930 (-Destroy@CVirtualDesktopSwitch@@EEAAXXZ.c)
 * Callees:
 *     ?_Cleanup@CStoryboard@@IEAAXXZ @ 0x18000F944 (-_Cleanup@CStoryboard@@IEAAXXZ.c)
 */

void __fastcall CStoryboard::Destroy(CStoryboard *this)
{
  CStoryboard::_Cleanup(this);
  CStoryboard::Release(this);
}

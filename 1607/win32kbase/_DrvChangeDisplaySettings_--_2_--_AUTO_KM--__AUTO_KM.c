/*
 * XREFs of _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0062714
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0062064 (DrvChangeDisplaySettings.c)
 *     ??_G_AUTO_KM@?1??DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@@PEAXW4_MODE@@HHPEAU_MDEV@@PEAPEAU6@KHHHPEAEPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z@UEAAPEAXI@Z @ 0x1C00C5690 (--_G_AUTO_KM@-1--DrvChangeDisplaySettings@@YAJPEAU_UNICODE_STRING@@PEAUHDEV__@@PEAU_devicemodeW@.c)
 * Callees:
 *     Win32FreePool @ 0x1C0036A50 (Win32FreePool.c)
 */

void __fastcall DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM(AUTO_TGO *this)
{
  *(_QWORD *)this = `DrvChangeDisplaySettings'::`2'::_AUTO_KM::`vftable';
  if ( *((_QWORD *)this + 7) )
    Win32FreePool();
  if ( *((_QWORD *)this + 6) )
    Win32FreePool();
  AUTO_TGO::~AUTO_TGO(this);
}

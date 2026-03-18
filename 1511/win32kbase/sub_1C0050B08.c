/*
 * XREFs of sub_1C0050B08 @ 0x1C0050B08
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C0050464 (DrvChangeDisplaySettings.c)
 *     ??_E_AUTO_KM@?3??DrvChangeDisplaySettings@@9@UEAAPEAXI@Z @ 0x1C00B99D0 (--_E_AUTO_KM@-3--DrvChangeDisplaySettings@@9@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0020110 (Win32FreePool.c)
 */

void __fastcall sub_1C0050B08(AUTO_TGO *this)
{
  *(_QWORD *)this = `DrvChangeDisplaySettings'::`4'::_AUTO_KM::`vftable';
  if ( *((_QWORD *)this + 7) )
    Win32FreePool();
  if ( *((_QWORD *)this + 6) )
    Win32FreePool();
  AUTO_TGO::~AUTO_TGO(this);
}

/*
 * XREFs of _DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM @ 0x1C001BCF0
 * Callers:
 *     DrvChangeDisplaySettings @ 0x1C001B64C (DrvChangeDisplaySettings.c)
 *     ??_E_AUTO_KM@?3??DrvChangeDisplaySettings@@9@UEAAPEAXI@Z @ 0x1C00B7AF0 (--_E_AUTO_KM@-3--DrvChangeDisplaySettings@@9@UEAAPEAXI@Z.c)
 * Callees:
 *     Win32FreePool @ 0x1C0033BB0 (Win32FreePool.c)
 */

void __fastcall DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM(AUTO_TGO *this)
{
  __int64 v2; // rcx
  __int64 v3; // rcx

  *(_QWORD *)this = `DrvChangeDisplaySettings'::`4'::_AUTO_KM::`vftable';
  v2 = *((_QWORD *)this + 7);
  if ( v2 )
    Win32FreePool(v2);
  v3 = *((_QWORD *)this + 6);
  if ( v3 )
    Win32FreePool(v3);
  AUTO_TGO::~AUTO_TGO(this);
}

/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C001CA10
 * Callers:
 *     _DrvChangeDisplaySettings_::_4_::_AUTO_KM::__AUTO_KM @ 0x1C001BCF0 (_DrvChangeDisplaySettings_--_4_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvSetDisplayConfig_::_18_::_AUTO::__AUTO @ 0x1C001C858 (_DrvSetDisplayConfig_--_18_--_AUTO--__AUTO.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C00B7A70 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C004C300 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((char *)this + 16);
}

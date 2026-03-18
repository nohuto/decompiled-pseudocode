/*
 * XREFs of ??1AUTO_TGO@@MEAA@XZ @ 0x1C00647B4
 * Callers:
 *     _DrvChangeDisplaySettings_::_2_::_AUTO_KM::__AUTO_KM @ 0x1C0062714 (_DrvChangeDisplaySettings_--_2_--_AUTO_KM--__AUTO_KM.c)
 *     _DrvSetDisplayConfig_::_2_::_AUTO::__AUTO @ 0x1C00645DC (_DrvSetDisplayConfig_--_2_--_AUTO--__AUTO.c)
 *     ??_GAUTO_TGO@@MEAAPEAXI@Z @ 0x1C00C5610 (--_GAUTO_TGO@@MEAAPEAXI@Z.c)
 * Callees:
 *     PopThreadGuardedObject @ 0x1C00648D0 (PopThreadGuardedObject.c)
 */

void __fastcall AUTO_TGO::~AUTO_TGO(AUTO_TGO *this)
{
  bool v1; // zf

  v1 = *((_DWORD *)this + 2) == 0;
  *(_QWORD *)this = &AUTO_TGO::`vftable';
  if ( !v1 )
    PopThreadGuardedObject((char *)this + 16);
}

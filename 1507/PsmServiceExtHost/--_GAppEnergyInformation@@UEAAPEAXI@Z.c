/*
 * XREFs of ??_GAppEnergyInformation@@UEAAPEAXI@Z @ 0x180048E90
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1AppEnergyInformation@@UEAA@XZ @ 0x180048BC8 (--1AppEnergyInformation@@UEAA@XZ.c)
 */

AppEnergyInformation *__fastcall AppEnergyInformation::`scalar deleting destructor'(
        AppEnergyInformation *this,
        char a2)
{
  AppEnergyInformation::~AppEnergyInformation(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

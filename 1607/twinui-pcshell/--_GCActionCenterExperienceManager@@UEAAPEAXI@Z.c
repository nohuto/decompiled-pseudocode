/*
 * XREFs of ??_GCActionCenterExperienceManager@@UEAAPEAXI@Z @ 0x180010040
 * Callers:
 *     <none>
 * Callees:
 *     ??1CActionCenterExperienceManager@@UEAA@XZ @ 0x18001009C (--1CActionCenterExperienceManager@@UEAA@XZ.c)
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

CActionCenterExperienceManager *__fastcall CActionCenterExperienceManager::`scalar deleting destructor'(
        CActionCenterExperienceManager *this,
        char a2)
{
  CActionCenterExperienceManager::~CActionCenterExperienceManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

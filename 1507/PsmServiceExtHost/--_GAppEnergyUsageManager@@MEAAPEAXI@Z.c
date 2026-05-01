/*
 * XREFs of ??_GAppEnergyUsageManager@@MEAAPEAXI@Z @ 0x180048ED0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??1AppEnergyUsageManager@@MEAA@XZ @ 0x180048C88 (--1AppEnergyUsageManager@@MEAA@XZ.c)
 */

struct _RTL_CRITICAL_SECTION *__fastcall AppEnergyUsageManager::`scalar deleting destructor'(
        struct _RTL_CRITICAL_SECTION *this,
        char a2)
{
  AppEnergyUsageManager::~AppEnergyUsageManager(this);
  if ( (a2 & 1) != 0 )
    operator delete(this);
  return this;
}

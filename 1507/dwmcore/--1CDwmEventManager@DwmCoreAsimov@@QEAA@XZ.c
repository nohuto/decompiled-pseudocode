/*
 * XREFs of ??1CDwmEventManager@DwmCoreAsimov@@QEAA@XZ @ 0x1800976FC
 * Callers:
 *     _DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__ @ 0x18009C6E0 (_DwmCoreAsimov--CDwmEventManager--GetManager_--_2_--_dynamic_atexit_destructor_for__manager__.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 *     ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x180123C04 (--1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::~CDwmEventManager(DwmCoreAsimov::CDwmEventManager *this)
{
  DwmCoreAsimov::CDwmEventManager_Private *v1; // rsi

  v1 = qword_180195EF0;
  if ( qword_180195EF0 )
  {
    DwmCoreAsimov::CDwmEventManager_Private::~CDwmEventManager_Private(qword_180195EF0);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DwmCoreAsimov::CDwmEventManager_Private *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  }
}

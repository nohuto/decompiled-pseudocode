/*
 * XREFs of ??1CDwmEventManager@DwmCoreAsimov@@QEAA@XZ @ 0x1800BD280
 * Callers:
 *     _DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__ @ 0x1800C2F00 (_DwmCoreAsimov--CDwmEventManager--GetManager_--_2_--_dynamic_atexit_destructor_for__manager__.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x180162A48 (--1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::~CDwmEventManager(DwmCoreAsimov::CDwmEventManager *this)
{
  DwmCoreAsimov::CDwmEventManager_Private *v1; // rbx

  v1 = qword_1801F0290;
  if ( qword_1801F0290 )
  {
    DwmCoreAsimov::CDwmEventManager_Private::~CDwmEventManager_Private(qword_1801F0290);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DwmCoreAsimov::CDwmEventManager_Private *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  }
}

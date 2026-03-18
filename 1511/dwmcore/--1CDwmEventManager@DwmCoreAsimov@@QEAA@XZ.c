/*
 * XREFs of ??1CDwmEventManager@DwmCoreAsimov@@QEAA@XZ @ 0x1800BA3E8
 * Callers:
 *     _DwmCoreAsimov::CDwmEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__ @ 0x1800BFAE0 (_DwmCoreAsimov--CDwmEventManager--GetManager_--_2_--_dynamic_atexit_destructor_for__manager__.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ??1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ @ 0x1801391B8 (--1CDwmEventManager_Private@DwmCoreAsimov@@QEAA@XZ.c)
 */

void __fastcall DwmCoreAsimov::CDwmEventManager::~CDwmEventManager(DwmCoreAsimov::CDwmEventManager *this)
{
  DwmCoreAsimov::CDwmEventManager_Private *v1; // rsi

  v1 = qword_1801A3F10;
  if ( qword_1801A3F10 )
  {
    DwmCoreAsimov::CDwmEventManager_Private::~CDwmEventManager_Private(qword_1801A3F10);
    (*(void (__fastcall **)(WPF::ProcessHeapImpl *, DwmCoreAsimov::CDwmEventManager_Private *))(*(_QWORD *)WPF::g_pProcessHeap
                                                                                              + 32LL))(
      WPF::g_pProcessHeap,
      v1);
  }
}

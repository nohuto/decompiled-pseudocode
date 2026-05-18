/*
 * XREFs of ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x1800064E8
 * Callers:
 *     ?FallBackToBDD@@YA_NXZ @ 0x18000271C (-FallBackToBDD@@YA_NXZ.c)
 *     ?CleanupOldDwmProcess@@YAJXZ @ 0x1800028C4 (-CleanupOldDwmProcess@@YAJXZ.c)
 *     ?DwmpCreateSessionProcessWorker@@YAKPEAX@Z @ 0x180002B90 (-DwmpCreateSessionProcessWorker@@YAKPEAX@Z.c)
 * Callees:
 *     ??0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z @ 0x1800061F8 (--0CDwmInitEventManager@DwmInitAsimov@@AEAA@PEBU_TlgProvider_t@@@Z.c)
 *     atexit @ 0x180006EE8 (atexit.c)
 */

void **__fastcall DwmInitAsimov::CDwmInitEventManager::GetManager(
        const struct _TlgProvider_t *a1,
        const struct _TlgProvider_t *a2)
{
  if ( (dword_18000FFDC & 1) == 0 )
  {
    dword_18000FFDC |= 1u;
    DwmInitAsimov::CDwmInitEventManager::CDwmInitEventManager(a1, a2);
    atexit(DwmInitAsimov::CDwmInitEventManager::GetManager_::_2_::_dynamic_atexit_destructor_for__manager__);
  }
  return &qword_18000FFE0;
}

/*
 * XREFs of PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__ @ 0x180001160
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCriticalSection@ATL@@QEAA@XZ @ 0x180013560 (--0CCriticalSection@ATL@@QEAA@XZ.c)
 */

int PickerHostContextManager::_dynamic_initializer_for__s_csPickerHostContextList__()
{
  ATL::CCriticalSection::CCriticalSection((ATL::CCriticalSection *)&PickerHostContextManager::s_csPickerHostContextList);
  return atexit((void (__cdecl *)())PickerHostContextManager::_dynamic_atexit_destructor_for__s_csPickerHostContextList__);
}

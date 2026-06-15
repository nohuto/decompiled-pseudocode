/*
 * XREFs of _SafeRegCreateKeyEx_::_19_::_dynamic_atexit_destructor_for__delKey__ @ 0x18004D150
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SafeRegCreateKeyEx_::_19_::_dynamic_atexit_destructor_for__delKey__()
{
  FreeLibrary(hLibModule);
  hLibModule = 0LL;
  qword_1800E6B68 = 0LL;
}

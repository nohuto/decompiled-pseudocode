/*
 * XREFs of _SafeRegCreateKeyEx_::_19_::_dynamic_atexit_destructor_for__delKey__ @ 0x1800490A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall SafeRegCreateKeyEx_::_19_::_dynamic_atexit_destructor_for__delKey__()
{
  FreeLibrary(hLibModule);
  hLibModule = 0LL;
  qword_1800E8BA8 = 0LL;
}

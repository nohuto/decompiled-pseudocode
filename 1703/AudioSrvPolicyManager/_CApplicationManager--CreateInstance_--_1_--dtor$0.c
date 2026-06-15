/*
 * XREFs of _CApplicationManager::CreateInstance_::_1_::dtor$0 @ 0x1800225F7
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x1800210D4 (--3@YAXPEAX_K@Z.c)
 */

void __fastcall CApplicationManager::CreateInstance_::_1_::dtor_0(__int64 a1, __int64 a2)
{
  operator delete(*(void **)(a2 + 64));
}

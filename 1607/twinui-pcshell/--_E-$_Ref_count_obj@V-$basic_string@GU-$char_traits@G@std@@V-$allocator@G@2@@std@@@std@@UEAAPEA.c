/*
 * XREFs of ??_E?$_Ref_count_obj@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@UEAAPEAXI@Z @ 0x180019DC0
 * Callers:
 *     <none>
 * Callees:
 *     ??3@YAXPEAX_K@Z @ 0x18002F44C (--3@YAXPEAX_K@Z.c)
 */

_QWORD *__fastcall std::_Ref_count_obj<std::wstring>::`vector deleting destructor'(_QWORD *a1, char a2)
{
  *a1 = &std::_Ref_count_base::`vftable';
  if ( (a2 & 1) != 0 )
    operator delete(a1);
  return a1;
}

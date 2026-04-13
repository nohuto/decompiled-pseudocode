/*
 * XREFs of ?message@_Iostream_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180002EB0
 * Callers:
 *     <none>
 * Callees:
 *     ?message@_Generic_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180002E30 (-message@_Generic_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z @ 0x1800048DC (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@PEBD_K@Z.c)
 */

_QWORD *__fastcall std::_Iostream_error_category::message(__int64 a1, _QWORD *a2, int a3)
{
  if ( a3 == 1 )
  {
    a2[3] = 15LL;
    a2[2] = 0LL;
    *(_BYTE *)a2 = 0;
    std::string::assign(a2, "iostream stream error", 0x15uLL);
  }
  else
  {
    std::_Generic_error_category::message(a1, a2, a3);
  }
  return a2;
}

/*
 * XREFs of ?substr@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEBA?AV12@_K0@Z @ 0x180012890
 * Callers:
 *     ?SplitString@?A0x15bf3041@@YA?AV?$vector@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@V?$allocator@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@2@@std@@AEBV?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@3@PEBG@Z @ 0x18000DB70 (-SplitString@-A0x15bf3041@@YA-AV-$vector@V-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2.c)
 * Callees:
 *     ?assign@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x1800162C4 (-assign@-$basic_string@GU-$char_traits@G@std@@V-$allocator@G@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 */

_QWORD *__fastcall std::wstring::substr(__int64 a1, _QWORD *a2)
{
  a2[3] = 7LL;
  a2[2] = 0LL;
  *(_WORD *)a2 = 0;
  std::wstring::assign(a2);
  return a2;
}

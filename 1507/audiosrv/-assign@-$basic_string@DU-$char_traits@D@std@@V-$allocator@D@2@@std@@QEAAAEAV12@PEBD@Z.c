/*
 * XREFs of ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@PEBD@Z @ 0x180068AD8
 * Callers:
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180068750 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 * Callees:
 *     ?length@?$char_traits@D@std@@SA_KPEBD@Z @ 0x180068DC0 (-length@-$char_traits@D@std@@SA_KPEBD@Z.c)
 */

__int64 __fastcall std::string::assign(__int64 a1, __int64 a2)
{
  __int64 v4; // rax

  v4 = std::char_traits<char>::length(a2);
  return std::string::assign(a1, a2, v4);
}

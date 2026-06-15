/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180068E60
 * Callers:
 *     <none>
 * Callees:
 *     ?_Winerror_map@std@@YAPEBDH@Z @ 0x180042C90 (-_Winerror_map@std@@YAPEBDH@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180068750 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 */

__int64 __fastcall std::_System_error_category::message(__int64 a1, __int64 a2, int a3)
{
  std::_Winerror_map(a3);
  std::string::string(a2);
  return a2;
}

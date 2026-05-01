/*
 * XREFs of ?_Destroy@?$_Ref_count_obj@V?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@@std@@EEAAXXZ @ 0x180019DA0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall std::_Ref_count_obj<std::wstring>::_Destroy(__int64 a1, __int64 a2)
{
  LOBYTE(a2) = 1;
  return std::wstring::_Tidy(a1 + 16, a2, 0LL);
}

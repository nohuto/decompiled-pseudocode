/*
 * XREFs of ?_Tidy@?$basic_string@GU?$char_traits@G@std@@V?$allocator@G@2@@std@@QEAAX_N_K@Z @ 0x180019CA4
 * Callers:
 *     _std::basic_string_unsigned_short_std::char_traits_unsigned_short__std::allocator_unsigned_short___::_Copy_::_1_::catch$0 @ 0x18005AC2B (_std--basic_string_unsigned_short_std--char_traits_unsigned_short__std--allocator_u_ea_18005AC2B.c)
 * Callees:
 *     memcpy_0 @ 0x180058E98 (memcpy_0.c)
 */

void __fastcall std::wstring::_Tidy(void **a1, char a2, void *a3)
{
  void *v5; // rsi

  if ( a2 && (unsigned __int64)a1[3] >= 8 )
  {
    v5 = *a1;
    if ( a3 )
      memcpy_0(a1, *a1, 2LL * (_QWORD)a3);
    operator delete(v5);
  }
  a1[3] = (void *)7;
  a1[2] = a3;
  *((_WORD *)a1 + (_QWORD)a3) = 0;
}

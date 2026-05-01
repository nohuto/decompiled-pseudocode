/*
 * XREFs of ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18000989C
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180009440 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 *     ??1?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@XZ @ 0x180009774 (--1-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@XZ.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180009B94 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     _std::basic_string_char_std::char_traits_char__std::allocator_char___::_Copy_::_1_::catch$0 @ 0x180030AAD (_std--basic_string_char_std--char_traits_char__std--allocator_char___--_Copy_--_1_--catch$0.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x18002F080 (--3@YAXPEAX@Z.c)
 *     memcpy_0 @ 0x180030408 (memcpy_0.c)
 */

void __fastcall std::string::_Tidy(void **a1, char a2, size_t a3)
{
  void **v4; // rbx
  char *v5; // rdi
  char *v6; // rax
  unsigned __int64 v7; // rdi

  v4 = a1;
  if ( a2 && (unsigned __int64)a1[3] >= 0x10 )
  {
    v5 = (char *)*a1;
    if ( a3 )
      memcpy_0(a1, *a1, a3);
    if ( (unsigned __int64)v4[3] + 1 >= 0x1000 )
    {
      if ( ((unsigned __int8)v5 & 0x1F) != 0 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v6 = (char *)*((_QWORD *)v5 - 1);
      if ( v6 >= v5 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v7 = v5 - v6;
      if ( v7 < 8 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      if ( v7 > 0x27 )
      {
        _o__invalid_parameter_noinfo_noreturn();
        __debugbreak();
      }
      v5 = v6;
    }
    operator delete(v5);
  }
  v4[3] = (void *)15;
  v4[2] = (void *)a3;
  if ( (unsigned __int64)v4[3] >= 0x10 )
    v4 = (void **)*v4;
  *((_BYTE *)v4 + a3) = 0;
}

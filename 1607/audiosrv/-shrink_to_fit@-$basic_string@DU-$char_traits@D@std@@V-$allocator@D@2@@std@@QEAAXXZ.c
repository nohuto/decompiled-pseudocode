/*
 * XREFs of ?shrink_to_fit@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXXZ @ 0x180051A0C
 * Callers:
 *     ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x1800518D0 (-message@_System_error_category@std@@UEBA-AV-$basic_string@DU-$char_traits@D@std@@V-$allocator@D.c)
 * Callees:
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x180027AD0 (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     __security_check_cookie @ 0x180035F50 (__security_check_cookie.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@AEBV01@@Z @ 0x180051374 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@AEBV01@@Z.c)
 *     ?_Swap_bx@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXAEAV12@@Z @ 0x1800515A4 (-_Swap_bx@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXAEAV12@@Z.c)
 */

// Hidden C++ exception states: #wind=1
void __fastcall std::string::shrink_to_fit(void **Src)
{
  void *v2; // rcx
  void *v3; // rcx
  void *v4[2]; // [rsp+28h] [rbp-30h] BYREF
  void *v5; // [rsp+38h] [rbp-20h]
  void *v6; // [rsp+40h] [rbp-18h]

  if ( ((unsigned __int64)Src[2] | 0xF) < (unsigned __int64)Src[3] )
  {
    std::string::string((__int64)v4, Src);
    if ( Src != v4 )
    {
      std::string::_Swap_bx((__int64)Src, v4);
      v2 = Src[2];
      Src[2] = v5;
      v5 = v2;
      v3 = Src[3];
      Src[3] = v6;
      v6 = v3;
    }
    std::string::_Tidy(v4, 1, 0LL);
  }
}

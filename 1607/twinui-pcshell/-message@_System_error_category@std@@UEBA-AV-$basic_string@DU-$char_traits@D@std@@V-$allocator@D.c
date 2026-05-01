/*
 * XREFs of ?message@_System_error_category@std@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@2@H@Z @ 0x180009440
 * Callers:
 *     <none>
 * Callees:
 *     ?resize@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K@Z @ 0x180009674 (-resize@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K@Z.c)
 *     ??0?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAA@PEBD@Z @ 0x180009784 (--0-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAA@PEBD@Z.c)
 *     ?_Tidy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_N_K@Z @ 0x18000989C (-_Tidy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_N_K@Z.c)
 *     ?assign@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z @ 0x180009960 (-assign@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAAEAV12@AEBV12@_K1@Z.c)
 *     ?_Swap_bx@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAXAEAV12@@Z @ 0x180009AD4 (-_Swap_bx@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAXAEAV12@@Z.c)
 *     ?_Copy@?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@QEAAX_K0@Z @ 0x180009B94 (-_Copy@-$basic_string@DU-$char_traits@D@std@@V-$allocator@D@2@@std@@QEAAX_K0@Z.c)
 *     __security_check_cookie @ 0x18002E500 (__security_check_cookie.c)
 *     memset @ 0x18002F32C (memset.c)
 */

// Hidden C++ exception states: #wind=2
_QWORD *__fastcall std::_System_error_category::message(__int64 a1, _QWORD *a2, unsigned int a3)
{
  void **v5; // rcx
  void **v6; // rax
  char *v7; // rdx
  unsigned int v8; // eax
  __int64 v9; // rdx
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  __int64 v12; // rdx
  unsigned __int64 v13; // rcx
  void *Src[2]; // [rsp+30h] [rbp-50h] BYREF
  __int64 v16; // [rsp+40h] [rbp-40h]
  unsigned __int64 v17; // [rsp+48h] [rbp-38h]
  _BYTE v18[16]; // [rsp+50h] [rbp-30h] BYREF
  __int64 v19; // [rsp+60h] [rbp-20h]
  __int64 v20; // [rsp+68h] [rbp-18h]

  v17 = 15LL;
  v16 = 0LL;
  LOBYTE(Src[0]) = 0;
  std::string::_Copy(Src);
  v5 = Src;
  if ( v17 >= 0x10 )
    v5 = (void **)Src[0];
  memset(v5, 0, 0x7FFFuLL);
  v16 = 0x7FFFLL;
  v6 = Src;
  if ( v17 >= 0x10 )
    v6 = (void **)Src[0];
  *((_BYTE *)v6 + 0x7FFF) = 0;
  v7 = (char *)Src;
  if ( v17 >= 0x10 )
    v7 = (char *)Src[0];
  v8 = std::_Winerror_message(a3, v7, 0x7FFFu);
  if ( v8 )
  {
    std::string::resize(Src, v8);
    if ( (v16 | 0xFuLL) < v17 )
    {
      v20 = 15LL;
      v19 = 0LL;
      v18[0] = 0;
      std::string::assign(v18);
      std::string::_Swap_bx(Src, v18);
      v10 = v16;
      v16 = v19;
      v19 = v10;
      v11 = v17;
      v17 = v20;
      v20 = v11;
      LOBYTE(v12) = 1;
      std::string::_Tidy(v18, v12, 0LL);
    }
    a2[3] = 15LL;
    a2[2] = 0LL;
    *(_BYTE *)a2 = 0;
    v13 = v17;
    if ( v17 >= 0x10 )
    {
      *a2 = Src[0];
      Src[0] = 0LL;
    }
    else if ( v16 != -1 )
    {
      memmove(a2, Src, v16 + 1);
      v13 = v17;
    }
    a2[2] = v16;
    a2[3] = v13;
    v17 = 15LL;
    v16 = 0LL;
    LOBYTE(Src[0]) = 0;
  }
  else
  {
    std::string::string(a2, "unknown error");
  }
  LOBYTE(v9) = 1;
  std::string::_Tidy(Src, v9, 0LL);
  return a2;
}

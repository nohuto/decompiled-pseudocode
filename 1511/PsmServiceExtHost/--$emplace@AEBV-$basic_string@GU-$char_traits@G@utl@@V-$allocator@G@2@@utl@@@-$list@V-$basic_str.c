/*
 * XREFs of ??$emplace@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@?$list@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$allocator@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@@utl@@QEAA?AV?$_DlistIt@U?$_DlistNode@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@@1@V?$_DlistConstIt@U?$_DlistNode@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@@1@AEBV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@@Z @ 0x18004F898
 * Callers:
 *     ?RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180052790 (-RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@P.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??$?RV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEBV01@@?$construct@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@utl@@QEBA_NPEAV?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@1@AEBV21@@Z @ 0x1800296D4 (--$-RV-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEBV01@@-$construct@V-$basic_.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 *     ??2@YAPEAX_KAEBUnothrow_t@std@@@Z @ 0x18002BB1C (--2@YAPEAX_KAEBUnothrow_t@std@@@Z.c)
 */

void ***__fastcall utl::list<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::allocator<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>>::emplace<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &>(
        __int64 a1,
        void ***a2,
        _QWORD *a3,
        __int64 a4)
{
  void **v7; // rax
  __int64 v8; // rcx
  void **v9; // rbx
  void **v10; // rdx
  void ***v11; // rax

  v7 = (void **)operator new(0x30uLL, (const struct std::nothrow_t *)&std::nothrow);
  v9 = v7;
  if ( v7
    && utl::construct<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>::operator()<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>> const &>(
         v8,
         (__int64)(v7 + 2),
         a4) )
  {
    v10 = v9;
    v9 = 0LL;
  }
  else
  {
    v10 = v9;
    if ( v9 )
    {
      utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v9 + 2);
      v10 = 0LL;
    }
  }
  *a2 = 0LL;
  if ( v10 )
  {
    *a2 = v10;
    v11 = (void ***)a3[1];
    v10[1] = v11;
    *v10 = a3;
    *v11 = v10;
    a3[1] = v10;
    ++*(_QWORD *)(a1 + 16);
  }
  if ( v9 )
    operator delete(v9);
  return a2;
}

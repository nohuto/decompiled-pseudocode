/*
 * XREFs of ?clear@?$list@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@V?$allocator@V?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@@2@@utl@@QEAAXXZ @ 0x180053C48
 * Callers:
 *     ?RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@PEAXJ@Z @ 0x180052790 (-RecvCallback@AppEnergyUsageManager@@UEAAXW4RMExecServiceProviderCallbackType@2ExecutionModel@@P.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18001269C (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x18002BB10 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::list<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>,utl::allocator<utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>>>::clear(
        void ***a1)
{
  void **v2; // rdi
  void **v3; // rdx
  _QWORD *v4; // rax

  while ( 1 )
  {
    v2 = *a1;
    if ( *a1 == (void **)a1 )
      break;
    v3 = (void **)v2[1];
    v4 = *v2;
    *v3 = *v2;
    v4[1] = v3;
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(v2 + 2);
    operator delete(v2);
  }
  a1[2] = 0LL;
}

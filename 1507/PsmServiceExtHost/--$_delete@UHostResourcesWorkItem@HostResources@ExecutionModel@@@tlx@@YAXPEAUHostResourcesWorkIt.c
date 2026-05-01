/*
 * XREFs of ??$_delete@UHostResourcesWorkItem@HostResources@ExecutionModel@@@tlx@@YAXPEAUHostResourcesWorkItem@HostResources@ExecutionModel@@@Z @ 0x180019348
 * Callers:
 *     ?RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z @ 0x180018250 (-RecvCallback@HostResources@ExecutionModel@@UEAAXW4RMExecServiceProviderCallbackType@32@PEAXJ@Z.c)
 *     ?NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z @ 0x1800183B4 (-NotifyPackageStateChange@HostResources@ExecutionModel@@IEAAXKPEAXPEBGW4RPPackageState@@@Z.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180024D70 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall tlx::_delete<ExecutionModel::HostResources::HostResourcesWorkItem>(void **Block)
{
  void *v2; // rcx

  if ( Block )
  {
    v2 = Block[4];
    if ( v2 )
    {
      operator delete(v2);
      Block[4] = 0LL;
    }
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit(Block);
    operator delete(Block);
  }
}

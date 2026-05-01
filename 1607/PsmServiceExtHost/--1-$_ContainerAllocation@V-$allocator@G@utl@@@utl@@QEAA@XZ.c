/*
 * XREFs of ??1?$_ContainerAllocation@V?$allocator@G@utl@@@utl@@QEAA@XZ @ 0x1800284A8
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000BCD0 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ?_GrowAlloc@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAA?AV?$_ContainerAllocation@V?$allocator@G@utl@@@2@_K@Z @ 0x18000D850 (-_GrowAlloc@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAA-AV-$_ContainerAllo.c)
 *     ?assign@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18000D940 (-assign@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 *     ?append@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@QEAA_NPEBG_K@Z @ 0x18002D5B0 (-append@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@QEAA_NPEBG_K@Z.c)
 * Callees:
 *     ??3@YAXPEAXAEBUnothrow_t@std@@@Z @ 0x180020924 (--3@YAXPEAXAEBUnothrow_t@std@@@Z.c)
 */

void __fastcall utl::_ContainerAllocation<utl::allocator<unsigned short>>::~_ContainerAllocation<utl::allocator<unsigned short>>(
        void **a1)
{
  void *v1; // rcx

  v1 = *a1;
  if ( v1 )
    operator delete(v1);
}

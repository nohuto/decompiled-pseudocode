/*
 * XREFs of ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x1800337EC
 * Callers:
 *     ?ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PSM_INTERNAL_HOST_STATE@@@Z @ 0x18000B3B0 (-ApplicationStateNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGQEAKQEA_KKPEAXW4_PS.c)
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x180033A9C (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 * Callees:
 *     RmpFreeHeap @ 0x18000A4A4 (RmpFreeHeap.c)
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x180016628 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x180023DC0 (--3@YAXPEAX@Z.c)
 */

void __fastcall tlx::_delete<ModernResourceEnforcer::ModernResourceEnforcerWorkItem>(void *Block)
{
  void *v2; // rcx
  void *v3; // rcx

  if ( Block )
  {
    if ( *((_DWORD *)Block + 32) > 1u )
    {
      v2 = (void *)*((_QWORD *)Block + 14);
      if ( v2 )
        RmpFreeHeap(v2);
      v3 = (void *)*((_QWORD *)Block + 15);
      if ( v3 )
        RmpFreeHeap(v3);
    }
    utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)Block + 1);
    operator delete(Block);
  }
}

/*
 * XREFs of ??_GModernResourceEnforcerWorkItem@ModernResourceEnforcer@@QEAAPEAXI@Z @ 0x1800283E4
 * Callers:
 *     ?MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z @ 0x18000BCD0 (-MemoryLimitNotification@ModernResourceEnforcer@@QEAAXPEAT_RM_SID@@KPEBGK_K@Z.c)
 *     ??$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@Z @ 0x18002965C (--$_delete@UModernResourceEnforcerWorkItem@ModernResourceEnforcer@@@tlx@@YAXPEAUModernResourceEn.c)
 * Callees:
 *     ?_Uninit@?$basic_string@GU?$char_traits@G@utl@@V?$allocator@G@2@@utl@@AEAAXXZ @ 0x18000D828 (-_Uninit@-$basic_string@GU-$char_traits@G@utl@@V-$allocator@G@2@@utl@@AEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x18001FB04 (--3@YAXPEAX@Z.c)
 */

ModernResourceEnforcer::ModernResourceEnforcerWorkItem *__fastcall ModernResourceEnforcer::ModernResourceEnforcerWorkItem::`scalar deleting destructor'(
        ModernResourceEnforcer::ModernResourceEnforcerWorkItem *this)
{
  void *v2; // r8
  void *v3; // r8

  if ( *((_DWORD *)this + 32) > 1u )
  {
    v2 = (void *)*((_QWORD *)this + 14);
    if ( v2 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v2);
    v3 = (void *)*((_QWORD *)this + 15);
    if ( v3 )
      RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, v3);
  }
  utl::basic_string<unsigned short,utl::char_traits<unsigned short>,utl::allocator<unsigned short>>::_Uninit((void **)this + 1);
  operator delete(this);
  return this;
}

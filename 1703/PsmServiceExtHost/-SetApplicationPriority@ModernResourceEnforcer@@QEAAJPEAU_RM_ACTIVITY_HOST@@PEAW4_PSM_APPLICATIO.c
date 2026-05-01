/*
 * XREFs of ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000AD88
 * Callers:
 *     ?RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180002A54 (-RmpSystemApplyPsmPriorityToHost@@YAJPEAU_RM_ACTIVITY_HOST@@W4_PSM_APPLICATION_PRIORITY@@@Z.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     memset_0 @ 0x1800217E2 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationPriority(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        enum _PSM_APPLICATION_PRIORITY *a3)
{
  int v6; // eax
  _DWORD v8[12]; // [rsp+40h] [rbp-48h] BYREF

  memset_0(v8, 0, sizeof(v8));
  if ( a3 )
  {
    v6 = *(_DWORD *)a3;
    v8[0] |= 0x10u;
    v8[8] = v6;
  }
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _DWORD *))this + 11))(
           (char *)a2 + 528,
           *((unsigned int *)a2 + 149),
           (char *)a2 + 64,
           6LL,
           -1LL,
           v8);
}

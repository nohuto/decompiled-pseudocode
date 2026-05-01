/*
 * XREFs of ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x18000C79C
 * Callers:
 *     RmpSystemApplyPsmPriorityToHost @ 0x1800184B4 (RmpSystemApplyPsmPriorityToHost.c)
 * Callees:
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 *     memset_0 @ 0x180020A42 (memset_0.c)
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
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
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _DWORD *))this + 12))(
           (char *)a2 + 520,
           *((unsigned int *)a2 + 147),
           (char *)a2 + 56,
           6LL,
           -1LL,
           v8);
}

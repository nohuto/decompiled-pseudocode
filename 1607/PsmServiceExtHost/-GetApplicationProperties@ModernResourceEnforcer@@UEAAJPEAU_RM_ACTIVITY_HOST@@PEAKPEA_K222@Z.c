/*
 * XREFs of ?GetApplicationProperties@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEAKPEA_K222@Z @ 0x180029760
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::GetApplicationProperties(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned int *a3,
        unsigned __int64 *a4,
        unsigned __int64 *a5,
        unsigned __int64 *a6,
        unsigned __int64 *a7)
{
  return (*(__int64 (__fastcall **)(ModernResourceEnforcer *, char *, char *, _QWORD, _DWORD, _QWORD, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, _QWORD, unsigned __int64 *))(*(_QWORD *)this + 112LL))(
           this,
           (char *)a2 + 56,
           (char *)a2 + 520,
           *((unsigned int *)a2 + 147),
           *((_DWORD *)a2 + 148),
           *((_QWORD *)a2 + 3),
           a3,
           a4,
           a5,
           a6,
           0LL,
           a7);
}

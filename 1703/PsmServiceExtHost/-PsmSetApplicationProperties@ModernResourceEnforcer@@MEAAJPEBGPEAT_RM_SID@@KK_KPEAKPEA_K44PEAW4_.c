/*
 * XREFs of ?PsmSetApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@4@Z @ 0x18000AF30
 * Callers:
 *     ?RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS@@K@Z @ 0x180008E60 (-RmpActivityHostApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@PEAU_RM_ENFORCEMENT_SETTINGS.c)
 * Callees:
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x180021800 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmSetApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11,
        unsigned __int64 *a12)
{
  int v13; // ecx
  int v14; // eax
  __int64 v15; // rax
  bool v16; // zf
  __int64 v17; // rax
  __int64 v18; // rax
  __int64 result; // rax
  int v20; // eax
  __int64 v21; // rax
  __int64 v22; // [rsp+40h] [rbp-68h] BYREF
  __int64 v23; // [rsp+48h] [rbp-60h]
  __int64 v24; // [rsp+50h] [rbp-58h]
  __int64 v25; // [rsp+58h] [rbp-50h]
  __int64 v26; // [rsp+60h] [rbp-48h]
  __int64 v27; // [rsp+68h] [rbp-40h]

  if ( __PAIR128__((unsigned __int64)a8, (unsigned __int64)a7) == 0 && !a9 && !a10 && !a11 && !a12 )
    return 0LL;
  v13 = 0;
  v22 = 0LL;
  v23 = 0LL;
  v24 = 0LL;
  v25 = 0LL;
  v26 = 0LL;
  v27 = 0LL;
  if ( a7 )
  {
    v14 = *a7;
    v13 = 1;
    LODWORD(v22) = 1;
    HIDWORD(v22) = v14;
  }
  if ( a8 )
  {
    v15 = *a8;
    v13 |= 2u;
    v16 = *a8 == -1LL;
    LODWORD(v22) = v13;
    if ( v16 )
      v15 = 0LL;
    v23 = v15;
  }
  if ( a9 )
  {
    v17 = *a9;
    v13 |= 4u;
    v16 = *a9 == -1LL;
    LODWORD(v22) = v13;
    if ( v16 )
      v17 = 0LL;
    v24 = v17;
  }
  if ( a10 )
  {
    v18 = *a10;
    v13 |= 8u;
    v16 = *a10 == -1LL;
    LODWORD(v22) = v13;
    if ( v16 )
      v18 = 0LL;
    v25 = v18;
  }
  if ( a11 )
  {
    v20 = *(_DWORD *)a11;
    v13 |= 0x10u;
    LODWORD(v22) = v13;
    LODWORD(v26) = v20;
  }
  if ( a12 )
  {
    v21 = *a12;
    LODWORD(v22) = v13 | 0x20;
    v27 = v21;
  }
  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, __int64 *))this
            + 11))(
             a3,
             a4,
             a2,
             a5,
             a6,
             &v22);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

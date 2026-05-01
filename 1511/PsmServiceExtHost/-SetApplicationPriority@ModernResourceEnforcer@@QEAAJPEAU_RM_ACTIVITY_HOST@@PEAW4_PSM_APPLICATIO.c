/*
 * XREFs of ?SetApplicationPriority@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180004F68
 * Callers:
 *     RmpActivityHostApplyExecutionSpeed @ 0x180004E7C (RmpActivityHostApplyExecutionSpeed.c)
 * Callees:
 *     __security_check_cookie @ 0x18002B0C0 (__security_check_cookie.c)
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 *     memset_0 @ 0x18002BC7E (memset_0.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetApplicationPriority(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        enum _PSM_APPLICATION_PRIORITY *a3)
{
  int v6; // eax
  _DWORD v8[12]; // [rsp+30h] [rbp-58h] BYREF

  memset_0(v8, 0, sizeof(v8));
  if ( a3 )
  {
    v6 = *(_DWORD *)a3;
    v8[0] |= 0x10u;
    v8[8] = v6;
  }
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, __int64, __int64, _DWORD *))this + 10))(
           (char *)a2 + 512,
           *((unsigned int *)a2 + 145),
           (char *)a2 + 48,
           6LL,
           -1LL,
           v8);
}

/*
 * XREFs of ?FreezePureHost@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18003AB78
 * Callers:
 *     RmpEnforcementUpdateFreezeState @ 0x180047338 (RmpEnforcementUpdateFreezeState.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::FreezePureHost(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        char a3)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, char))this + 17))(
           (char *)a2 + 512,
           *((unsigned int *)a2 + 145),
           (char *)a2 + 48,
           *((_QWORD *)a2 + 3),
           a3);
}

/*
 * XREFs of ?SetHostSwapState@ModernResourceEnforcer@@QEAAJPEAU_RM_ACTIVITY_HOST@@E@Z @ 0x18001748C
 * Callers:
 *     RmpEnforcementUpdateSwapState @ 0x18001CB14 (RmpEnforcementUpdateSwapState.c)
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::SetHostSwapState(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        char a3)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, char))this + 16))(
           (char *)a2 + 512,
           *((unsigned int *)a2 + 145),
           (char *)a2 + 48,
           *((unsigned int *)a2 + 146),
           *((_QWORD *)a2 + 3),
           a3);
}

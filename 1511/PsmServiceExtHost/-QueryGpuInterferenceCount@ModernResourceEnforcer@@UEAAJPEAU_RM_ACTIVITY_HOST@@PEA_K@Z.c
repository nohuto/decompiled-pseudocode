/*
 * XREFs of ?QueryGpuInterferenceCount@ModernResourceEnforcer@@UEAAJPEAU_RM_ACTIVITY_HOST@@PEA_K@Z @ 0x18003AF60
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryGpuInterferenceCount(
        ModernResourceEnforcer *this,
        struct _RM_ACTIVITY_HOST *a2,
        unsigned __int64 *a3)
{
  return (*((__int64 (__fastcall **)(char *, _QWORD, char *, _QWORD, _QWORD, unsigned __int64 *))this + 20))(
           (char *)a2 + 512,
           *((unsigned int *)a2 + 145),
           (char *)a2 + 48,
           *((unsigned int *)a2 + 146),
           *((_QWORD *)a2 + 3),
           a3);
}

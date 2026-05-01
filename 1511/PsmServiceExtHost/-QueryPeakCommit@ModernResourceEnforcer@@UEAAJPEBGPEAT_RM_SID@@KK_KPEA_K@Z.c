/*
 * XREFs of ?QueryPeakCommit@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z @ 0x18003AFF0
 * Callers:
 *     <none>
 * Callees:
 *     PsmInitializeServiceExtension2 @ 0x18002B3C0 (PsmInitializeServiceExtension2.c)
 */

int __fastcall ModernResourceEnforcer::QueryPeakCommit(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  int v7; // eax

  v7 = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, _QWORD, unsigned __int64 *))this
        + 12))(
         a3,
         a4,
         a2,
         a5,
         a6,
         0LL,
         a7);
  if ( v7 >= 0 )
    v7 = 0;
  return v7 | 0x10000000;
}

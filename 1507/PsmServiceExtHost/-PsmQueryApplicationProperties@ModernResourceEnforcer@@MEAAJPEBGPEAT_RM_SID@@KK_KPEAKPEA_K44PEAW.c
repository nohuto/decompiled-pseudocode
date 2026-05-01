/*
 * XREFs of ?PsmQueryApplicationProperties@ModernResourceEnforcer@@MEAAJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180033BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORITY@@@Z @ 0x180009FC0 (-LogQueryApplicationProperties@@YAXJPEBGPEAT_RM_SID@@KK_KPEAKPEA_K44PEAW4_PSM_APPLICATION_PRIORI.c)
 *     PsmInitializeServiceExtension2 @ 0x180024620 (PsmInitializeServiceExtension2.c)
 */

__int64 __fastcall ModernResourceEnforcer::PsmQueryApplicationProperties(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        const SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned int *a7,
        unsigned __int64 *a8,
        unsigned __int64 *a9,
        unsigned __int64 *a10,
        enum _PSM_APPLICATION_PRIORITY *a11)
{
  unsigned int v11; // edi

  v11 = (*((__int64 (__fastcall **)(const SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, unsigned int *, unsigned __int64 *, unsigned __int64 *, unsigned __int64 *, enum _PSM_APPLICATION_PRIORITY *))this
         + 11))(
          a3,
          a4,
          a2,
          a5,
          a6,
          a7,
          a8,
          a9,
          a10,
          a11);
  LogQueryApplicationProperties(v11, a2, a3, a4, a5, a6, a7, a8, a9, a10);
  return v11;
}

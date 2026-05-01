/*
 * XREFs of ?QueryPeakCommit@ModernResourceEnforcer@@UEAAJPEBGPEAT_RM_SID@@KK_KPEA_K@Z @ 0x180029BF0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x180020A60 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall ModernResourceEnforcer::QueryPeakCommit(
        ModernResourceEnforcer *this,
        const unsigned __int16 *a2,
        union _RM_SID *a3,
        unsigned int a4,
        unsigned int a5,
        unsigned __int64 a6,
        unsigned __int64 *a7)
{
  __int64 result; // rax

  result = (*((__int64 (__fastcall **)(union _RM_SID *, _QWORD, const unsigned __int16 *, _QWORD, unsigned __int64, _QWORD, unsigned __int64 *))this
            + 14))(
             a3,
             a4,
             a2,
             a5,
             a6,
             0LL,
             a7);
  if ( (int)result >= 0 )
    return 0LL;
  return result;
}

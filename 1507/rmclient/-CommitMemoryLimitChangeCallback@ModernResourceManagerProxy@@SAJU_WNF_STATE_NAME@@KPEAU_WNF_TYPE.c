/*
 * XREFs of ?CommitMemoryLimitChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000F490
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLimitChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD),
        __m128i *a5,
        unsigned int a6)
{
  if ( a6 == 16 )
    ((void (__fastcall **)(__int64, unsigned __int64, struct _WNF_TYPE_ID *))a4)[5](
      a5->m128i_i64[0],
      _mm_srli_si128(*a5, 8).m128i_u64[0],
      a3);
  return 0LL;
}

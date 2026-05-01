/*
 * XREFs of ?CommitMemoryLevelChangeCallback@ModernResourceManagerProxy@@SAJU_WNF_STATE_NAME@@KPEAU_WNF_TYPE_ID@@PEAXPEBXK@Z @ 0x18000F450
 * Callers:
 *     <none>
 * Callees:
 *     _guard_check_icall_nop @ 0x180008AA0 (_guard_check_icall_nop.c)
 */

__int64 __fastcall ModernResourceManagerProxy::CommitMemoryLevelChangeCallback(
        struct _WNF_STATE_NAME a1,
        __int64 a2,
        struct _WNF_TYPE_ID *a3,
        void (__fastcall **a4)(_QWORD, _QWORD, _QWORD),
        _DWORD *a5,
        unsigned int a6)
{
  if ( a6 == 4 )
  {
    if ( *a5 )
      ((void (__fastcall **)(_QWORD, __int64, struct _WNF_TYPE_ID *))a4)[4](a4[4], a2, a3);
    else
      ((void (__fastcall **)(_QWORD, __int64, struct _WNF_TYPE_ID *))a4)[3](a4[3], a2, a3);
  }
  return 0LL;
}

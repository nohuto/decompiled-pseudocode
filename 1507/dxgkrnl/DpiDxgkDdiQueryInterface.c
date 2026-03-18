/*
 * XREFs of DpiDxgkDdiQueryInterface @ 0x1C00C68C8
 * Callers:
 *     DpiPdoDispatchPnp @ 0x1C005E640 (DpiPdoDispatchPnp.c)
 *     DpiQueryMiniportInterface @ 0x1C00C6840 (DpiQueryMiniportInterface.c)
 * Callees:
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pjq @ 0x1C0029100 (Template_pjq.c)
 */

__int64 __fastcall DpiDxgkDdiQueryInterface(__int64 a1, __int64 a2, __int128 **a3)
{
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // rbx
  __int64 v9; // r8
  __int64 v10; // r9
  _QWORD *v11; // rax
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int128 v14; // [rsp+30h] [rbp-38h] BYREF

  if ( bTracingEnabled )
  {
    v14 = 0uLL;
    if ( *a3 )
      v14 = **a3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
      Template_pjq(a1, &EventEnterDdiQueryInterface, (__int64)a3, a2, &v14, 0);
  }
  v8 = (*(int (__fastcall **)(__int64, __int128 **))(a1 + 256))(a2, a3);
  if ( bTracingEnabled )
  {
    v14 = 0uLL;
    if ( *a3 )
      v14 = **a3;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v13) = v8;
      Template_pjq(v7, &EventExitDdiQueryInterface, v9, a2, &v14, v13);
    }
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v9, v10);
  v11[5] = 0LL;
  v11[6] = 0LL;
  v11[7] = 0LL;
  v11[3] = a1;
  v11[4] = v8;
  return (unsigned int)v8;
}

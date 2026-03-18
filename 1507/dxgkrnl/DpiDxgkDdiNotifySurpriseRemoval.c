/*
 * XREFs of DpiDxgkDdiNotifySurpriseRemoval @ 0x1C017069C
 * Callers:
 *     DpiFdoHandleDevicePower @ 0x1C00BC6D0 (DpiFdoHandleDevicePower.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pqq @ 0x1C001B818 (Template_pqq.c)
 */

__int64 __fastcall DpiDxgkDdiNotifySurpriseRemoval(__int64 a1, __int64 a2, __int64 a3)
{
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  __int64 v10; // rdi
  _QWORD *v11; // rax
  __int64 v13; // [rsp+20h] [rbp-18h]
  int v14; // [rsp+20h] [rbp-18h]
  __int64 v15; // [rsp+28h] [rbp-10h]
  int v16; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v16 = 0;
    v14 = 0;
    Template_pqq(a1, &EventEnterDdiNotifySurpriseRemoval, a3, a2, v14, v16);
  }
  v5 = (*(__int64 (__fastcall **)(__int64, _QWORD))(a1 + 792))(a2, 0LL);
  v10 = v5;
  if ( bTracingEnabled )
  {
    v7 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v15) = v5;
      LODWORD(v13) = 0;
      Template_pqq(
        (unsigned int)Microsoft_Windows_DxgKrnlEnableBits,
        &EventExitDdiNotifySurpriseRemoval,
        v8,
        a2,
        v13,
        v15);
    }
  }
  v11 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
  v11[4] = 0LL;
  v11[3] = a1;
  v11[5] = v10;
  v11[6] = 0LL;
  v11[7] = 0LL;
  return (unsigned int)v10;
}

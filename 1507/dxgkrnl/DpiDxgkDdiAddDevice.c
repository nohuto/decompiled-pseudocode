/*
 * XREFs of DpiDxgkDdiAddDevice @ 0x1C00C73F0
 * Callers:
 *     DpiAddDevice @ 0x1C00C5300 (DpiAddDevice.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_ppq @ 0x1C00286B0 (Template_ppq.c)
 */

__int64 __fastcall DpiDxgkDdiAddDevice(__int64 a1, __int64 a2, __int64 *a3)
{
  int v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  _QWORD *v12; // rax
  __int64 v14; // [rsp+28h] [rbp-10h]
  int v15; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v15 = 0;
    Template_ppq(a1, &EventEnterDdiAddDevice, (__int64)a3, a2, 0LL, v15);
  }
  v6 = (*(__int64 (__fastcall **)(__int64, __int64 *))(a1 + 144))(a2, a3);
  v11 = v6;
  if ( bTracingEnabled )
  {
    v8 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v14) = v6;
      Template_ppq(*a3, &EventExitDdiAddDevice, v9, a2, *a3, v14);
    }
  }
  v12 = (_QWORD *)WdLogNewEntry5_WdTrace(v8, v7, v9, v10);
  v12[7] = 0LL;
  v12[3] = a1;
  v12[4] = a2;
  v12[5] = a3;
  v12[6] = v11;
  return (unsigned int)v11;
}

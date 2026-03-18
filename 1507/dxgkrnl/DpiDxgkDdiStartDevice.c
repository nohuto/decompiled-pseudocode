/*
 * XREFs of DpiDxgkDdiStartDevice @ 0x1C00C6EE0
 * Callers:
 *     DpiFdoStartAdapter @ 0x1C00C3E10 (DpiFdoStartAdapter.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_pqqq @ 0x1C001B894 (Template_pqqq.c)
 */

__int64 __fastcall DpiDxgkDdiStartDevice(__int64 a1, __int64 a2, unsigned int *a3, __int64 a4, _DWORD *a5, _DWORD *a6)
{
  int v10; // eax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rdi
  _QWORD *v16; // rax
  __int64 v18; // [rsp+20h] [rbp-38h]
  unsigned int v19; // [rsp+20h] [rbp-38h]
  __int64 v20; // [rsp+28h] [rbp-30h]
  int v21; // [rsp+28h] [rbp-30h]
  __int64 v22; // [rsp+30h] [rbp-28h]
  int v23; // [rsp+30h] [rbp-28h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v23 = 0;
    v21 = 0;
    v19 = *a3;
    Template_pqqq(a1, &EventEnterDdiStartDevice, (__int64)a3, a2, v19, v21, v23);
  }
  v10 = (*(__int64 (__fastcall **)(__int64, unsigned int *, __int64, _DWORD *, _DWORD *))(a1 + 152))(a2, a3, a4, a5, a6);
  v15 = v10;
  if ( bTracingEnabled )
  {
    v12 = (unsigned int)Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v22) = v10;
      LODWORD(v20) = *a6;
      LODWORD(v18) = *a5;
      Template_pqqq((unsigned int)*a5, &EventExitDdiStartDevice, v13, a2, v18, v20, v22);
    }
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdTrace(v12, v11, v13, v14);
  v16[3] = a1;
  v16[4] = *a3;
  v16[5] = (unsigned int)*a5;
  v16[6] = (unsigned int)*a6;
  v16[7] = v15;
  return (unsigned int)v15;
}

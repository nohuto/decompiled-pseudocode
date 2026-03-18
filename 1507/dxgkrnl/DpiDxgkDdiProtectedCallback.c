/*
 * XREFs of DpiDxgkDdiProtectedCallback @ 0x1C017074C
 * Callers:
 *     DpiFdoExcludeAdapterAccess @ 0x1C0167580 (DpiFdoExcludeAdapterAccess.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_ppq @ 0x1C00286B0 (Template_ppq.c)
 */

NTSTATUS __fastcall DpiDxgkDdiProtectedCallback(
        __int64 a1,
        __int64 (__fastcall *a2)(__int64, __int64, _QWORD),
        __int64 a3,
        unsigned int a4)
{
  NTSTATUS result; // eax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+28h] [rbp-10h]

  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    Template_ppq(a1, &EventEnterDdiProtectedCallback, a3, a1, a3, a4);
  result = a2(a1, a3, a4);
  if ( bTracingEnabled )
  {
    result = Microsoft_Windows_DxgKrnlEnableBits;
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
    {
      LODWORD(v11) = a4;
      return Template_ppq(v9, &EventExitDdiProtectedCallback, v10, a1, a3, v11);
    }
  }
  return result;
}

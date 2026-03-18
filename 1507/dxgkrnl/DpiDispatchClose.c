/*
 * XREFs of DpiDispatchClose @ 0x1C00A9B30
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 */

__int64 __fastcall DpiDispatchClose(__int64 a1, IRP *a2, __int64 a3)
{
  unsigned int v3; // edi
  __int64 v6; // rbp
  __int64 (__fastcall *v7)(__int64, IRP *); // rax
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v11; // [rsp+20h] [rbp-18h]
  int v12; // [rsp+20h] [rbp-18h]

  v3 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    v12 = 0;
    Template_xq(a1, &EventEnterDpiDispatchClose, a3, a1, v12);
  }
  v6 = *(_QWORD *)(a1 + 64);
  v7 = *(__int64 (__fastcall **)(__int64, IRP *))(v6 + 96);
  if ( v7 )
  {
    v3 = v7(a1, a2);
  }
  else
  {
    a2->IoStatus.Status = 0;
    IofCompleteRequest(a2, 0);
  }
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x80u) != 0 )
  {
    LODWORD(v11) = v3;
    Template_xq(v8, &EventExitDpiDispatchClose, v9, a1, v11);
  }
  return v3;
}

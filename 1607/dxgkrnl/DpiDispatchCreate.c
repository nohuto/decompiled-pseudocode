/*
 * XREFs of DpiDispatchCreate @ 0x1C00D1100
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 */

__int64 __fastcall DpiDispatchCreate(__int64 a1, IRP *a2, __int64 a3)
{
  char v3; // r14
  __int64 v6; // rbp
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rbx
  __int64 (__fastcall *v13)(__int64, IRP *); // rax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v17; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-28h]

  v3 = 0;
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
    Template_xq(a1, &EventEnterDpiDispatchCreate, a3, a1, 0);
  v6 = *(_QWORD *)(a1 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, &byte_1C00FF410, 1u, 0x20u);
  v12 = v7;
  if ( v7 < 0 )
  {
    v17 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v17 + 24) = v12;
    WdLogEvent5_WdWarning(v17);
LABEL_9:
    a2->IoStatus.Status = v12;
    IofCompleteRequest(a2, 0);
    goto LABEL_5;
  }
  v13 = *(__int64 (__fastcall **)(__int64, IRP *))(v6 + 104);
  v3 = 1;
  if ( !v13 )
  {
    if ( a2->RequestorMode && !*(_BYTE *)(v6 + 57) )
      LODWORD(v12) = -1073741790;
    goto LABEL_9;
  }
  LODWORD(v12) = v13(a1, a2);
LABEL_5:
  if ( (int)v12 < 0 && v3 == 1 )
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v6 + 64), 0LL, 0x20u);
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v12;
    Template_xq(v14, &EventExitDpiDispatchCreate, v15, a1, RemlockSize);
  }
  return (unsigned int)v12;
}

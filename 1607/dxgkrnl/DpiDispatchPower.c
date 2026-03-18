/*
 * XREFs of DpiDispatchPower @ 0x1C00DFA40
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     LoadEtwStackLocation @ 0x1C0022E34 (LoadEtwStackLocation.c)
 *     Template_phbq @ 0x1C002F348 (Template_phbq.c)
 */

__int64 __fastcall DpiDispatchPower(__int64 a1, IRP *a2)
{
  char v2; // r14
  __int64 v5; // rbp
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rdi
  __int64 (__fastcall *v12)(__int64, IRP *); // rax
  NTSTATUS v13; // eax
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 EtwStackLocation; // rax
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v22[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v23; // [rsp+90h] [rbp-88h]
  __int128 v24; // [rsp+A0h] [rbp-78h]
  __int128 v25; // [rsp+B0h] [rbp-68h]
  __int128 v26; // [rsp+C0h] [rbp-58h]
  __int64 v27; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v22, (__int64)a2);
    v23 = *(_OWORD *)EtwStackLocation;
    v24 = *(_OWORD *)(EtwStackLocation + 16);
    v25 = *(_OWORD *)(EtwStackLocation + 32);
    v26 = *(_OWORD *)(EtwStackLocation + 48);
    v27 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_phbq(v18, &EventEnterDpiDispatchPower, v19, a1);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), a2, &byte_1C00FF410, 1u, 0x20u);
  v11 = v6;
  if ( v6 < 0 )
  {
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = v11;
    WdLogEvent5_WdWarning(v20);
    goto LABEL_12;
  }
  v12 = *(__int64 (__fastcall **)(__int64, IRP *))(v5 + 136);
  v2 = 1;
  if ( !v12 )
  {
    LODWORD(v11) = 0;
    if ( *(_QWORD *)(v5 + 160) )
    {
      PoStartNextPowerIrp(a2);
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      v13 = PoCallDriver(*(PDEVICE_OBJECT *)(v5 + 160), a2);
      goto LABEL_5;
    }
LABEL_12:
    PoStartNextPowerIrp(a2);
    a2->IoStatus.Status = v11;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_7;
    goto LABEL_6;
  }
  v13 = v12(a1, a2);
LABEL_5:
  LODWORD(v11) = v13;
LABEL_6:
  IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), a2, 0x20u);
LABEL_7:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v11;
    Template_xq(v14, &EventExitDpiDispatchPower, v15, a1, RemlockSize);
  }
  return (unsigned int)v11;
}

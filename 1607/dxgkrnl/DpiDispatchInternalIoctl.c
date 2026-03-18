/*
 * XREFs of DpiDispatchInternalIoctl @ 0x1C00C1780
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     LoadEtwStackLocation @ 0x1C0022E34 (LoadEtwStackLocation.c)
 *     Template_phbq @ 0x1C002F348 (Template_phbq.c)
 */

__int64 __fastcall DpiDispatchInternalIoctl(__int64 a1, IRP *a2)
{
  char v2; // r14
  __int64 v5; // rsi
  NTSTATUS v6; // eax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rbx
  __int64 (__fastcall *v12)(__int64, IRP *); // rax
  __int64 v13; // rcx
  __int64 v14; // r8
  __int64 EtwStackLocation; // rax
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v21[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v22; // [rsp+90h] [rbp-88h]
  __int128 v23; // [rsp+A0h] [rbp-78h]
  __int128 v24; // [rsp+B0h] [rbp-68h]
  __int128 v25; // [rsp+C0h] [rbp-58h]
  __int64 v26; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v21, (__int64)a2);
    v22 = *(_OWORD *)EtwStackLocation;
    v23 = *(_OWORD *)(EtwStackLocation + 16);
    v24 = *(_OWORD *)(EtwStackLocation + 32);
    v25 = *(_OWORD *)(EtwStackLocation + 48);
    v26 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_phbq(v17, &EventEnterDpiDispatchInternalIoctl, v18, a1);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), a2, &byte_1C00FF410, 1u, 0x20u);
  v11 = v6;
  if ( v6 < 0 )
  {
    v19 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v19 + 24) = v11;
    WdLogEvent5_WdWarning(v19);
    goto LABEL_15;
  }
  v12 = *(__int64 (__fastcall **)(__int64, IRP *))(v5 + 112);
  v2 = 1;
  if ( !v12 )
  {
    if ( *(_BYTE *)(v5 + 56) == 1 && *(_QWORD *)(v5 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      LODWORD(v11) = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 160), a2);
      goto LABEL_5;
    }
    LODWORD(v11) = -1073741637;
LABEL_15:
    a2->IoStatus.Status = v11;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_6;
    goto LABEL_5;
  }
  LODWORD(v11) = v12(a1, a2);
  if ( (_DWORD)v11 != -1073741738 )
LABEL_5:
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), a2, 0x20u);
LABEL_6:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v11;
    Template_xq(v13, &EventExitDpiDispatchInternalIoctl, v14, a1, RemlockSize);
  }
  return (unsigned int)v11;
}

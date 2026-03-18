/*
 * XREFs of DpiDispatchPnp @ 0x1C00D8310
 * Callers:
 *     <none>
 * Callees:
 *     DpiGdoDispatchGdiPnp @ 0x1C000D1F8 (DpiGdoDispatchGdiPnp.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001E838 (Template_xq.c)
 *     LoadEtwStackLocation @ 0x1C0022E34 (LoadEtwStackLocation.c)
 *     Template_phbq @ 0x1C002F348 (Template_phbq.c)
 */

__int64 __fastcall DpiDispatchPnp(__int64 a1, IRP *a2)
{
  char v2; // r14
  __int64 v5; // rbx
  struct _IO_REMOVE_LOCK *v6; // r15
  NTSTATUS v7; // eax
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rsi
  __int64 (__fastcall *v13)(__int64, IRP *); // rax
  int MinorFunction; // ebx
  __int64 v15; // rcx
  __int64 v16; // r8
  __int64 EtwStackLocation; // rax
  __int64 v19; // rcx
  __int64 v20; // r8
  __int64 v21; // rax
  __int64 RemlockSize; // [rsp+20h] [rbp-F8h]
  _BYTE v23[80]; // [rsp+40h] [rbp-D8h] BYREF
  __int128 v24; // [rsp+90h] [rbp-88h]
  __int128 v25; // [rsp+A0h] [rbp-78h]
  __int128 v26; // [rsp+B0h] [rbp-68h]
  __int128 v27; // [rsp+C0h] [rbp-58h]
  __int64 v28; // [rsp+D0h] [rbp-48h]

  v2 = 0;
  if ( bTracingEnabled )
  {
    EtwStackLocation = LoadEtwStackLocation((__int64)v23, (__int64)a2);
    v24 = *(_OWORD *)EtwStackLocation;
    v25 = *(_OWORD *)(EtwStackLocation + 16);
    v26 = *(_OWORD *)(EtwStackLocation + 32);
    v27 = *(_OWORD *)(EtwStackLocation + 48);
    v28 = *(_QWORD *)(EtwStackLocation + 64);
    if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
      Template_phbq(v19, &EventEnterDpiDispatchPnp, v20, a1);
  }
  v5 = *(_QWORD *)(a1 + 64);
  v6 = (struct _IO_REMOVE_LOCK *)(v5 + 64);
  v7 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v5 + 64), a2, &byte_1C00FF410, 1u, 0x20u);
  v12 = v7;
  if ( v7 < 0 )
  {
    v21 = WdLogNewEntry5_WdWarning(v9, v8, v10, v11);
    *(_QWORD *)(v21 + 24) = v12;
    WdLogEvent5_WdWarning(v21);
    goto LABEL_12;
  }
  v13 = *(__int64 (__fastcall **)(__int64, IRP *))(v5 + 128);
  v2 = 1;
  if ( !v13 )
  {
    LODWORD(v12) = -1073741637;
    if ( *(_BYTE *)(v5 + 56) == 1 && *(_QWORD *)(v5 + 160) )
    {
      ++a2->CurrentLocation;
      ++a2->Tail.Overlay.CurrentStackLocation;
      LODWORD(v12) = IofCallDriver(*(PDEVICE_OBJECT *)(v5 + 160), a2);
      goto LABEL_5;
    }
    if ( *(_DWORD *)(v5 + 16) == 1953656900 && *(_DWORD *)(v5 + 20) == 6 )
      LODWORD(v12) = DpiGdoDispatchGdiPnp(a1, (__int64)a2);
LABEL_12:
    a2->IoStatus.Status = v12;
    IofCompleteRequest(a2, 0);
    if ( v2 != 1 )
      goto LABEL_6;
    goto LABEL_5;
  }
  MinorFunction = a2->Tail.Overlay.CurrentStackLocation->MinorFunction;
  LODWORD(v12) = v13(a1, a2);
  if ( MinorFunction != 2 )
LABEL_5:
    IoReleaseRemoveLockEx(v6, a2, 0x20u);
LABEL_6:
  if ( bTracingEnabled && (Microsoft_Windows_DxgKrnlEnableBits & 0x40) != 0 )
  {
    LODWORD(RemlockSize) = v12;
    Template_xq(v15, &EventExitDpiDispatchPnp, v16, a1, RemlockSize);
  }
  return (unsigned int)v12;
}

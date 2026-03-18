/*
 * XREFs of DpiFdoThermalActiveCooling @ 0x1C016F900
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C016FBA0 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C000B7B0 (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000DC2C (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     Template_pt @ 0x1C00236C8 (Template_pt.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C00A9EA8 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C00A9F1C (DpiAcquireCoreSyncAccessSafe.c)
 */

void __fastcall DpiFdoThermalActiveCooling(__int64 a1, unsigned __int8 a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, &byte_1C00ED620, 1u, 0x20u);
  v7 = v5;
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 483) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) < 0 )
    {
      **(_BYTE **)(v2 + 3360) = 1;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        LODWORD(v12) = a2;
        Template_pt(v10, v9, v11, a1, v12);
      }
      LOBYTE(v9) = a2;
      (*(void (__fastcall **)(_QWORD, __int64))(*(_QWORD *)(v2 + 3360) + 48LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 3360) + 16LL),
        v9);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
    *(_BYTE *)(*(_QWORD *)(v2 + 3360) + 2LL) = a2;
    if ( *(_BYTE *)(v2 + 483) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalActiveCooling, 0x20u);
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v8[4] = 0LL;
    v8[3] = DpiFdoThermalActiveCooling;
    v8[5] = v7;
    WdLogEvent5_WdError(v8);
  }
}

/*
 * XREFs of DpiFdoThermalPassiveCooling @ 0x1C016B240
 * Callers:
 *     DxgkHandleThermalCoolingDrtEscape @ 0x1C016B390 (DxgkHandleThermalCoolingDrtEscape.c)
 * Callees:
 *     DpiEnableD3Requests @ 0x1C0005A7C (DpiEnableD3Requests.c)
 *     DpiCheckForOutstandingD3Requests @ 0x1C000C824 (DpiCheckForOutstandingD3Requests.c)
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     Template_xq @ 0x1C001B6CC (Template_xq.c)
 *     DpiReleaseCoreSyncAccessSafe @ 0x1C0061D64 (DpiReleaseCoreSyncAccessSafe.c)
 *     DpiAcquireCoreSyncAccessSafe @ 0x1C0061DDC (DpiAcquireCoreSyncAccessSafe.c)
 */

void __fastcall DpiFdoThermalPassiveCooling(__int64 a1, unsigned int a2)
{
  __int64 v2; // rbx
  NTSTATUS v5; // eax
  __int64 v6; // rcx
  __int64 v7; // rbp
  _QWORD *v8; // rax
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // [rsp+20h] [rbp-28h]

  v2 = *(_QWORD *)(a1 + 64);
  v5 = IoAcquireRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, &byte_1C00E2920, 1u, 0x20u);
  v7 = v5;
  if ( v5 >= 0 )
  {
    KeEnterCriticalRegion();
    if ( *(_BYTE *)(v2 + 451) )
      DpiCheckForOutstandingD3Requests(v2);
    ExAcquireResourceSharedLite(*(PERESOURCE *)(v2 + 168), 1u);
    if ( (int)DpiAcquireCoreSyncAccessSafe(a1, 0) < 0 )
    {
      *(_BYTE *)(*(_QWORD *)(v2 + 3296) + 1LL) = 1;
    }
    else
    {
      if ( (Microsoft_Windows_DxgKrnlEnableBits & 0x8000) != 0 )
      {
        LODWORD(v11) = a2;
        Template_xq(v9, &EventDpiFdoThermalPassiveCooling, v10, a1, v11);
      }
      (*(void (__fastcall **)(_QWORD, _QWORD))(*(_QWORD *)(v2 + 3296) + 56LL))(
        *(_QWORD *)(*(_QWORD *)(v2 + 3296) + 16LL),
        a2);
      DpiReleaseCoreSyncAccessSafe(a1, 0);
    }
    *(_DWORD *)(*(_QWORD *)(v2 + 3296) + 4LL) = a2;
    if ( *(_BYTE *)(v2 + 451) )
      DpiEnableD3Requests(*(_QWORD *)(v2 + 24));
    ExReleaseResourceLite(*(PERESOURCE *)(v2 + 168));
    KeLeaveCriticalRegion();
    IoReleaseRemoveLockEx((PIO_REMOVE_LOCK)(v2 + 64), DpiFdoThermalPassiveCooling, 0x20u);
  }
  else
  {
    v8 = (_QWORD *)WdLogNewEntry5_WdError(v6);
    v8[4] = 0LL;
    v8[3] = DpiFdoThermalPassiveCooling;
    v8[5] = v7;
    WdLogEvent5_WdError(v8);
  }
}

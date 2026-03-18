/*
 * XREFs of Bulk_WdfEvtIoCanceledOnQueue @ 0x1C002F0B0
 * Callers:
 *     <none>
 * Callees:
 *     Bulk_TransferData_Initialize @ 0x1C00017A4 (Bulk_TransferData_Initialize.c)
 *     _guard_dispatch_icall_nop @ 0x1C000FEA0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall Bulk_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rbx
  __int64 v4; // rax
  __int64 v5; // rdi
  __int64 *v6; // rdx

  v3 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a1,
         off_1C00432F0);
  v4 = (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, __int64, void *))(WdfFunctions_01015 + 1616))(
         WdfDriverGlobals,
         a2,
         off_1C0043070);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 16) )
    Bulk_TransferData_Initialize(v3, (_QWORD *)v4, a2);
  *(_DWORD *)(v5 + 48) = 3;
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  v6 = *(__int64 **)(v3 + 360);
  if ( *v6 != v3 + 352 )
    __fastfail(3u);
  *(_QWORD *)v5 = v3 + 352;
  *(_QWORD *)(v5 + 8) = v6;
  *v6 = v5;
  *(_QWORD *)(v3 + 360) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
  return (*(__int64 (__fastcall **)(PWDF_DRIVER_GLOBALS, _QWORD))(WdfFunctions_01015 + 896))(
           WdfDriverGlobals,
           *(_QWORD *)(v3 + 80));
}

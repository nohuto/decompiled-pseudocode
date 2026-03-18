/*
 * XREFs of Bulk_WdfEvtIoCanceledOnQueue @ 0x1C002D370
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 *     Bulk_TransferData_Initialize @ 0x1C002CB50 (Bulk_TransferData_Initialize.c)
 */

__int64 __fastcall Bulk_WdfEvtIoCanceledOnQueue(__int64 a1, __int64 a2)
{
  __int64 v3; // rdi
  __int64 v4; // rax
  __int64 v5; // rbx
  __int64 *v6; // rdx

  v3 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C0040310);
  v4 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a2,
         off_1C0040068);
  v5 = v4;
  if ( !*(_BYTE *)(v4 + 16) )
    Bulk_TransferData_Initialize(v3, (_QWORD *)v4, a2);
  *(_DWORD *)(v5 + 48) = 3;
  *(_BYTE *)(v3 + 96) = KeAcquireSpinLockRaiseToDpc((PKSPIN_LOCK)(v3 + 88));
  v6 = *(__int64 **)(v3 + 360);
  *(_QWORD *)v5 = v3 + 352;
  *(_QWORD *)(v5 + 8) = v6;
  if ( *v6 != v3 + 352 )
    __fastfail(3u);
  *v6 = v5;
  *(_QWORD *)(v3 + 360) = v5;
  KeReleaseSpinLock((PKSPIN_LOCK)(v3 + 88), *(_BYTE *)(v3 + 96));
  return (*(__int64 (__fastcall **)(_LIST_ENTRY *, _QWORD))(WdfFunctions_01015 + 896))(
           WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
           *(_QWORD *)(v3 + 80));
}

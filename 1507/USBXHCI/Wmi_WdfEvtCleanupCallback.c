/*
 * XREFs of Wmi_WdfEvtCleanupCallback @ 0x1C0033660
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void __fastcall Wmi_WdfEvtCleanupCallback(__int64 a1)
{
  __int64 v1; // rbx
  void *v2; // rcx

  v1 = (*(__int64 (__fastcall **)(_LIST_ENTRY *, __int64, void *))(WdfFunctions_01015 + 1616))(
         WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink,
         a1,
         off_1C00401D0);
  v2 = *(void **)(v1 + 16);
  if ( v2 )
  {
    ExFreePoolWithTag(v2, 0x49434858u);
    *(_QWORD *)(v1 + 16) = 0LL;
    *(_DWORD *)(v1 + 8) = 0;
  }
}

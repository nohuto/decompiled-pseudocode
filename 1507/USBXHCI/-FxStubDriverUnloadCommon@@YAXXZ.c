/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0039C18
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0007828 (FxDriverEntryWorker.c)
 *     FxStubDriverMiniportUnload @ 0x1C0039CB0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0039CC0 (FxStubDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0007C30 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnloadCommon(void)
{
  _QWORD *v0; // rbx
  void (__fastcall *v1)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, _LIST_ENTRY *, _QWORD *); // rax

  v0 = &Ucx_BIND_INFO;
  if ( off_1C00414A8 != &__KMDF_CLASS_BIND_START && &Ucx_BIND_INFO <= off_1C00414A8 )
  {
    do
    {
      v1 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, _LIST_ENTRY *, _QWORD *))v0[8];
      if ( v1 )
        v1(WdfVersionUnbindClass, &unk_1C00404D0, WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, v0);
      else
        WdfVersionUnbindClass(&unk_1C00404D0, WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink, v0);
      v0 += 10;
    }
    while ( v0 <= (_QWORD *)off_1C00414A8 );
  }
  WdfVersionUnbind(&WPP_MAIN_CB.Dpc.SystemArgument2, &unk_1C00404D0, WPP_MAIN_CB.DeviceLock.Header.WaitListHead.Blink);
}

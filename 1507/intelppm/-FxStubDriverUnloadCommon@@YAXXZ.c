/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0003398
 * Callers:
 *     FxDriverEntryWorker @ 0x1C0001A48 (FxDriverEntryWorker.c)
 *     FxStubDriverMiniportUnload @ 0x1C0003430 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0003440 (FxStubDriverUnload.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0002260 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnloadCommon(void)
{
  _QWORD *v0; // rbx
  void (__fastcall *v1)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax

  v0 = &__KMDF_CLASS_BIND_END;
  if ( off_1C000B118 != &__KMDF_CLASS_BIND_START && &__KMDF_CLASS_BIND_END <= (_QWORD *)off_1C000B118 )
  {
    do
    {
      v1 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *))v0[8];
      if ( v1 )
        v1(WdfVersionUnbindClass, &unk_1C000B038, WdfDriverGlobals, v0);
      else
        WdfVersionUnbindClass(&unk_1C000B038, WdfDriverGlobals, v0);
      v0 += 10;
    }
    while ( v0 <= (_QWORD *)off_1C000B118 );
  }
  WdfVersionUnbind(&DestinationString, &unk_1C000B038, WdfDriverGlobals);
}

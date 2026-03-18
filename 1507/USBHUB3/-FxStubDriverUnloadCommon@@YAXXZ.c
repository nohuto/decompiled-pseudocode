/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C00307A8
 * Callers:
 *     FxStubDriverUnload @ 0x1C0030840 (FxStubDriverUnload.c)
 *     FxStubDriverMiniportUnload @ 0x1C0030870 (FxStubDriverMiniportUnload.c)
 *     FxDriverEntryWorker @ 0x1C0030898 (FxDriverEntryWorker.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C00342F0 (_guard_dispatch_icall_nop.c)
 */

void FxStubDriverUnloadCommon(void)
{
  _QWORD *v0; // rbx
  void (__fastcall *v1)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *); // rax

  v0 = &__KMDF_CLASS_BIND_END;
  if ( off_1C005A628 != &__KMDF_CLASS_BIND_START && &__KMDF_CLASS_BIND_END <= off_1C005A628 )
  {
    do
    {
      v1 = (void (__fastcall *)(__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD), void *, PWDF_DRIVER_GLOBALS, _QWORD *))v0[8];
      if ( v1 )
        v1(WdfVersionUnbindClass, &unk_1C005A590, WdfDriverGlobals, v0);
      else
        WdfVersionUnbindClass(&unk_1C005A590, WdfDriverGlobals, v0);
      v0 += 10;
    }
    while ( v0 <= (_QWORD *)off_1C005A628 );
  }
  WdfVersionUnbind(&DestinationString, &unk_1C005A590, WdfDriverGlobals);
}

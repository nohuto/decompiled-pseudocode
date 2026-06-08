/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002470
 * Callers:
 *     DriverEntry_0 @ 0x1C00024D0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0002600 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0002610 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002750 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C000B000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C000B000, WdfDriverGlobals);
}

/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0002530
 * Callers:
 *     DriverEntry_0 @ 0x1C0002590 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C00026C0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C00026D0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0002810 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C000C000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C000C000, WdfDriverGlobals);
}

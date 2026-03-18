/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C000FA60
 * Callers:
 *     DriverEntry_0 @ 0x1C000FAC0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C000FBF0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C000FC00 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C000FD40 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0043000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0043000, WdfDriverGlobals);
}

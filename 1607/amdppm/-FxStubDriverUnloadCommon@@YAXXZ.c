/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0006350
 * Callers:
 *     DriverEntry_0 @ 0x1C00063B0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C00064E0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C00064F0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0006630 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0009000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0009000, WdfDriverGlobals);
}

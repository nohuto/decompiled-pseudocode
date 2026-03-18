/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0010830
 * Callers:
 *     DriverEntry_0 @ 0x1C0010890 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C00109C0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C00109D0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0010B10 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0041000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0041000, WdfDriverGlobals);
}

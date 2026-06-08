/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0005960
 * Callers:
 *     DriverEntry_0 @ 0x1C00059C0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0005AF0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0005B00 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0005C40 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0009000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0009000, WdfDriverGlobals);
}

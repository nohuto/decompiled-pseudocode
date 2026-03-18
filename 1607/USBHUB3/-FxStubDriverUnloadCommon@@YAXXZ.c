/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0034E00
 * Callers:
 *     DriverEntry_0 @ 0x1C0034E60 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0034F90 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0034FA0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C00350E0 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0058000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0058000, WdfDriverGlobals);
}

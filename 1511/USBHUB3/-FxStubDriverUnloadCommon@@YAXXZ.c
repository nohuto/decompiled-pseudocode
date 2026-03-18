/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0034B90
 * Callers:
 *     DriverEntry_0 @ 0x1C0034BF0 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C0034D20 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C0034D30 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0034E70 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0057000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0057000, WdfDriverGlobals);
}

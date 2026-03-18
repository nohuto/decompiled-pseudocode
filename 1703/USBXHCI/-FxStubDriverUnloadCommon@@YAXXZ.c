/*
 * XREFs of ?FxStubDriverUnloadCommon@@YAXXZ @ 0x1C0010610
 * Callers:
 *     DriverEntry_0 @ 0x1C0010680 (DriverEntry_0.c)
 *     FxStubDriverMiniportUnload @ 0x1C00107B0 (FxStubDriverMiniportUnload.c)
 *     FxStubDriverUnload @ 0x1C00107C0 (FxStubDriverUnload.c)
 * Callees:
 *     ?FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z @ 0x1C0010910 (-FxStubUnbindClasses@@YAXPEAU_WDF_BIND_INFO@@@Z.c)
 */

void FxStubDriverUnloadCommon(void)
{
  FxStubUnbindClasses((struct _WDF_BIND_INFO *)&unk_1C0045000);
  WdfVersionUnbind_0(&DestinationString, &unk_1C0045000, WdfDriverGlobals);
}

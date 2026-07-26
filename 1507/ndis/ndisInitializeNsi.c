/*
 * XREFs of ndisInitializeNsi @ 0x1C00B3934
 * Callers:
 *     ?ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_MINIPORT_DRIVER_CHARACTERISTICS@@PEAPEAX@Z @ 0x1C001C6DC (-ndisInternalRegisterMiniportDriver@@YAHPEAU_DRIVER_OBJECT@@PEAU_UNICODE_STRING@@PEAXPEAU_NDIS_M.c)
 *     NdisIfRegisterProvider @ 0x1C001F950 (NdisIfRegisterProvider.c)
 *     ndisIfCreatePersistedInterface @ 0x1C0020620 (ndisIfCreatePersistedInterface.c)
 *     ndisIfDeletePersistedInterface @ 0x1C003E528 (ndisIfDeletePersistedInterface.c)
 *     ndisMInitializeAdapter @ 0x1C00E9E1C (ndisMInitializeAdapter.c)
 * Callees:
 *     <none>
 */

NTSTATUS ndisInitializeNsi()
{
  return RtlRunOnceExecuteOnce(&ndisNsiInitOnceBlock, (PRTL_RUN_ONCE_INIT_FN)ndisInitializeNsiInitFn, 0LL, 0LL);
}

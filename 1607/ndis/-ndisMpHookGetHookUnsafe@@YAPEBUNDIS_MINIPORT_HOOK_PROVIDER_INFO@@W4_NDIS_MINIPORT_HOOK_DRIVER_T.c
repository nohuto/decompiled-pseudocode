/*
 * XREFs of ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C0027BCC
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C00E3B00 (NdisMDeregisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *__fastcall ndisMpHookGetHookUnsafe(
        enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE a1)
{
  return (struct MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 136 * a1 + 24);
}

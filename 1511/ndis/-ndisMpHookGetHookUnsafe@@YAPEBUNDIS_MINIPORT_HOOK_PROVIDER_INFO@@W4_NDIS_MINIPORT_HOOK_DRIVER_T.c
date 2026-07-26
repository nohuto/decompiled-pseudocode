/*
 * XREFs of ?ndisMpHookGetHookUnsafe@@YAPEBUNDIS_MINIPORT_HOOK_PROVIDER_INFO@@W4_NDIS_MINIPORT_HOOK_DRIVER_TYPE@@@Z @ 0x1C002761C
 * Callers:
 *     NdisMDeregisterWdiMiniportDriver @ 0x1C00DDD30 (NdisMDeregisterWdiMiniportDriver.c)
 * Callees:
 *     <none>
 */

const struct NDIS_MINIPORT_HOOK_PROVIDER_INFO *__fastcall ndisMpHookGetHookUnsafe(
        enum _NDIS_MINIPORT_HOOK_DRIVER_TYPE a1)
{
  return (struct MINIPORT_HOOK_DRIVER *)((char *)g_MiniportHookDrivers + 136 * a1 + 24);
}

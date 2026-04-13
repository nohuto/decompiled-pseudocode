/*
 * XREFs of ?QueryInterface@ContentDeliveryManagerConfigurationStatics@ContentManagement@@WCA@EAAJAEBU_GUID@@PEAPEAX@Z @ 0x1800226D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ContentManagement::ContentDeliveryManagerConfigurationStatics::QueryInterface(
        __int64 a1,
        const struct _GUID *a2,
        void **a3)
{
  return ContentManagement::ContentDeliveryManagerConfigurationStatics::QueryInterface(
           (ContentManagement::ContentDeliveryManagerConfigurationStatics *)(a1 - 32),
           a2,
           a3);
}

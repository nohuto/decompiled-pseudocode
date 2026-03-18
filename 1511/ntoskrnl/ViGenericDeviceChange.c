/*
 * XREFs of ViGenericDeviceChange @ 0x1406CE734
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericDeviceChange(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_DEVICE_CHANGE, 24LL);
}

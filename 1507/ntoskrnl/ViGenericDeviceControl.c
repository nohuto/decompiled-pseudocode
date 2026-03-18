/*
 * XREFs of ViGenericDeviceControl @ 0x1407521D0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ViGenericDeviceControl(__int64 a1, __int64 a2)
{
  return ViGenericDispatchHandler(a1, a2, pXdvIRP_MJ_DEVICE_CONTROL, 14LL);
}

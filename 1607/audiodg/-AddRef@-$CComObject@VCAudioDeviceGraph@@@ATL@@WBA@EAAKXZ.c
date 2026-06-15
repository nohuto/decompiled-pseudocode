/*
 * XREFs of ?AddRef@?$CComObject@VCAudioDeviceGraph@@@ATL@@WBA@EAAKXZ @ 0x140019F60
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

unsigned int __fastcall ATL::CComObject<CAudioDeviceGraph>::AddRef(__int64 a1, volatile int *a2)
{
  return ATL::CComObject<CAPOWrapperSrv>::AddRef(a1 - 16, a2);
}

/*
 * XREFs of ?AddRef@?$CComContainedObject@VCAPOWrapperSrv@@@ATL@@WBA@EAAKXZ @ 0x140019F50
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CAPOWrapperSrv>::AddRef(__int64 a1)
{
  return ATL::CComContainedObject<CAudioDeviceGraph>::AddRef(a1 - 16);
}

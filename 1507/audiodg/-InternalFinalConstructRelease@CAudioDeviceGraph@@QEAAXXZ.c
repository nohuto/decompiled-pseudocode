/*
 * XREFs of ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x1400271D0
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140014354 (-CreateInstance@-$CComCreator@V-$CComObject@VCAudioDeviceGraph@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PE.c)
 * Callees:
 *     <none>
 */

void __fastcall CAudioDeviceGraph::InternalFinalConstructRelease(CAudioDeviceGraph *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((char *)this + 24);
}

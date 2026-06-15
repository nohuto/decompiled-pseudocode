/*
 * XREFs of ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x14002B670
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x140012E3C (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceShared@@@ATL@@@ATL@@SAJPEAXAEBU_G.c)
 * Callees:
 *     <none>
 */

void __fastcall CSystemAudioDeviceShared::InternalFinalConstructRelease(CSystemAudioDeviceShared *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 86);
}

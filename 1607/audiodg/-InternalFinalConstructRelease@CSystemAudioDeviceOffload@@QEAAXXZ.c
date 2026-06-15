/*
 * XREFs of ?InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ @ 0x14002CB28
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x14002BF68 (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@@ATL@@SAJPEAXAEBU_.c)
 * Callees:
 *     <none>
 */

void __fastcall CSystemAudioDeviceOffload::InternalFinalConstructRelease(CSystemAudioDeviceOffload *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 74);
}

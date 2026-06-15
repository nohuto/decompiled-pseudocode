/*
 * XREFs of ?InternalFinalConstructRelease@CSystemAudioDeviceSharedNew@@QEAAXXZ @ 0x14002E2FC
 * Callers:
 *     ?CreateInstance@?$CComCreator@V?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEBU_GUID@@PEAPEAX@Z @ 0x1400144DC (-CreateInstance@-$CComCreator@V-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@@ATL@@SAJPEAXAEB.c)
 * Callees:
 *     <none>
 */

void __fastcall CSystemAudioDeviceSharedNew::InternalFinalConstructRelease(CSystemAudioDeviceSharedNew *this)
{
  ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease((int *)this + 72);
}

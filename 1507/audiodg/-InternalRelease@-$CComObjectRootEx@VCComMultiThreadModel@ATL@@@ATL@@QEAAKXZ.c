/*
 * XREFs of ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1400271E0
 * Callers:
 *     ?InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ @ 0x1400271D0 (-InternalFinalConstructRelease@CAudioDeviceGraph@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ @ 0x14002A2BC (-InternalFinalConstructRelease@CStreamGroup@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ @ 0x14002B65C (-InternalFinalConstructRelease@CSystemAudioDeviceExclusive@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ @ 0x14002CF04 (-InternalFinalConstructRelease@CSystemAudioDeviceShared@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceSharedNew@@QEAAXXZ @ 0x14002E2FC (-InternalFinalConstructRelease@CSystemAudioDeviceSharedNew@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ @ 0x14002EC64 (-InternalFinalConstructRelease@CSystemAudioDeviceOffload@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CVpoContext@@QEAAXXZ @ 0x140034818 (-InternalFinalConstructRelease@CVpoContext@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessClientInputEndpoint@@QEAAXXZ @ 0x140037938 (-InternalFinalConstructRelease@CCrossProcessClientInputEndpoint@@QEAAXXZ.c)
 *     ?InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ @ 0x14003794C (-InternalFinalConstructRelease@CCrossProcessServerOutputEndpoint@@QEAAXXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComObjectRootEx<ATL::CComMultiThreadModel>::InternalRelease(int *a1)
{
  return ATL::CComMultiThreadModel::SafeDecrementReference(a1);
}

/*
 * XREFs of ?SafeDecrementReference@CComMultiThreadModel@ATL@@SAKPEAJ@Z @ 0x140027358
 * Callers:
 *     ?Release@?$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ @ 0x140001400 (-Release@-$CComObject@VCSystemAudioDeviceOffload@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ @ 0x14000EB10 (-Release@-$CComObject@VCAudioDeviceGraph@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ @ 0x140013830 (-Release@-$CComObjectCached@VCComClassFactory@ATL@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ @ 0x140013A50 (-Release@-$CComObject@VCStreamGroup@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ @ 0x140013B90 (-Release@-$CComObject@VCSystemAudioDeviceSharedNew@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ @ 0x140013DA0 (-Release@-$CComObject@VCCrossProcessServerInputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCVpoContext@@@ATL@@UEAAKXZ @ 0x1400167B0 (-Release@-$CComObject@VCVpoContext@@@ATL@@UEAAKXZ.c)
 *     ?InternalRelease@?$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ @ 0x1400271E0 (-InternalRelease@-$CComObjectRootEx@VCComMultiThreadModel@ATL@@@ATL@@QEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ @ 0x14002B7B0 (-Release@-$CComObject@VCSystemAudioDeviceExclusive@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14002D290 (-Release@-$CComObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x140038C50 (-Release@-$CComAggObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140038D70 (-Release@-$CComObject@VCCrossProcessClientOutputEndpoint@@@ATL@@UEAAKXZ.c)
 *     ?Release@?$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ @ 0x140038E10 (-Release@-$CComObject@VCCrossProcessServerOutputEndpoint@@@ATL@@UEAAKXZ.c)
 * Callees:
 *     <none>
 */

// attributes: thunk
unsigned int __fastcall ATL::CComMultiThreadModel::SafeDecrementReference(int *a1)
{
  return ATL::SafeDecrementReferenceMultiThread(a1);
}

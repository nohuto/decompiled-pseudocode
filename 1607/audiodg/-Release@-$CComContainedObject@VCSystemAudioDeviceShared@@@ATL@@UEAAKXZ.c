/*
 * XREFs of ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@UEAAKXZ @ 0x14002B720
 * Callers:
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ @ 0x140019A40 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@W7EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ @ 0x140019A50 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ @ 0x140019A60 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBA@EAAKXZ.c)
 *     ?Release@?$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ @ 0x140019A70 (-Release@-$CComContainedObject@VCSystemAudioDeviceShared@@@ATL@@WBBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall ATL::CComContainedObject<CSystemAudioDeviceShared>::Release(__int64 a1)
{
  return (*(__int64 (__fastcall **)(_QWORD))(**(_QWORD **)(a1 + 344) + 16LL))(*(_QWORD *)(a1 + 344));
}

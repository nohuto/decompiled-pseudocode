/*
 * XREFs of ?ProviderFinalRelease@CMeterSoftware@@UEAAXXZ @ 0x18006D0E0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ @ 0x180001A70 (-Release@-$CComPtrBase@UIAudioMeter@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CMeterSoftware::ProviderFinalRelease(CMeterSoftware *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  ATL::CComPtrBase<IAudioMeter>::Release((__int64 *)this + 5);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}

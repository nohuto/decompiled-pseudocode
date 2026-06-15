/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14002D370
 * Callers:
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14002D08C (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400022F4 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400050F0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x1400175EC (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceOffload::Cleanup(CSystemAudioDeviceOffload *this)
{
  char *v2; // rcx

  if ( *((_DWORD *)this + 95) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  ATL::CComPtrBase<IAudioProcessor>::Release((__int64 *)this + 28);
  v2 = (char *)*((_QWORD *)this + 44);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
}

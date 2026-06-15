/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x140001DD0
 * Callers:
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x140001E1C (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 * Callees:
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x1400012E0 (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ @ 0x140001344 (-Release@-$CComPtrBase@UIAudioProcessor@@@ATL@@QEAAXXZ.c)
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x140010E70 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
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

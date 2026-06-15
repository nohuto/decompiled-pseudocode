/*
 * XREFs of ?Cleanup@CSystemAudioDeviceOffload@@MEAAXXZ @ 0x14002BD60
 * Callers:
 *     ??1CSystemAudioDeviceOffload@@UEAA@XZ @ 0x14002BAC4 (--1CSystemAudioDeviceOffload@@UEAA@XZ.c)
 * Callees:
 *     ?Cleanup@CSystemAudioDeviceBase@@MEAAXXZ @ 0x1400036C0 (-Cleanup@CSystemAudioDeviceBase@@MEAAXXZ.c)
 *     ?Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z @ 0x14001614C (-Remove@CSystemAudioDeviceCollection@@SAXPEAVCSystemAudioDeviceBase@@@Z.c)
 *     ?Release@?$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ @ 0x140016D04 (-Release@-$CComPtrBase@UIAudioProcessingObject@@@ATL@@QEAAXXZ.c)
 */

void __fastcall CSystemAudioDeviceOffload::Cleanup(CSystemAudioDeviceOffload *this)
{
  char *v2; // rcx

  if ( *((_DWORD *)this + 95) )
    CSystemAudioDeviceCollection::Remove(this);
  CSystemAudioDeviceBase::Cleanup(this);
  ATL::CComPtrBase<IAudioProcessingObject>::Release((_QWORD *)this + 28);
  v2 = (char *)*((_QWORD *)this + 44);
  if ( (unsigned __int64)(v2 - 1) <= 0xFFFFFFFFFFFFFFFDuLL )
  {
    CloseHandle(v2);
    *((_QWORD *)this + 44) = 0LL;
  }
}

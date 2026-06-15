/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18006FAF0
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18006F7C8 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(CVolumeSoftware *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_BYTE *)this + 140) )
      CVolumeSoftware::PersistVolumeState((const wchar_t **)this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    ATL::CComPtrBase<IPart>::Release((__int64 *)this + 11);
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
}

/*
 * XREFs of ?ProviderFinalRelease@CVolumeSoftware@@UEAAXXZ @ 0x18006E330
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistVolumeState@CVolumeSoftware@@AEAAXXZ @ 0x18006E008 (-PersistVolumeState@CVolumeSoftware@@AEAAXXZ.c)
 */

void __fastcall CVolumeSoftware::ProviderFinalRelease(CVolumeSoftware *this)
{
  if ( *((_QWORD *)this + 2) )
  {
    if ( *((_BYTE *)this + 140) )
      CVolumeSoftware::PersistVolumeState((const wchar_t **)this);
    EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
    Microsoft::WRL::WeakRef::~WeakRef((CVolumeSoftware *)((char *)this + 88));
    LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 96));
  }
}

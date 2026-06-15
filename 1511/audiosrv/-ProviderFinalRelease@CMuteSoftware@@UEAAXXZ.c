/*
 * XREFs of ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x18006C860
 * Callers:
 *     <none>
 * Callees:
 *     ??1WeakRef@WRL@Microsoft@@QEAA@XZ @ 0x180002254 (--1WeakRef@WRL@Microsoft@@QEAA@XZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18006C5E8 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 */

void __fastcall CMuteSoftware::ProviderFinalRelease(CMuteSoftware *this)
{
  if ( *((_QWORD *)this + 4) && *((_BYTE *)this + 96) )
    CMuteSoftware::PersistMuteState((const wchar_t **)this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  Microsoft::WRL::WeakRef::~WeakRef((CMuteSoftware *)((char *)this + 40));
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}

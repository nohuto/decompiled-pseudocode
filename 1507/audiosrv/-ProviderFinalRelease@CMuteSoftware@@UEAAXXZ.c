/*
 * XREFs of ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x18006DD50
 * Callers:
 *     <none>
 * Callees:
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x180068230 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x18006DAD8 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 */

void __fastcall CMuteSoftware::ProviderFinalRelease(CMuteSoftware *this)
{
  if ( *((_QWORD *)this + 4) && *((_BYTE *)this + 96) )
    CMuteSoftware::PersistMuteState((const wchar_t **)this);
  EnterCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
  ATL::CComPtrBase<IPart>::Release((__int64 *)this + 5);
  LeaveCriticalSection((LPCRITICAL_SECTION)((char *)this + 48));
}

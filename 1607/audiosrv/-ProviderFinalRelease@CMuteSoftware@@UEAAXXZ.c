/*
 * XREFs of ?ProviderFinalRelease@CMuteSoftware@@UEAAXXZ @ 0x180056110
 * Callers:
 *     <none>
 * Callees:
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x180017B40 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x180017BA0 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ?Release@?$CComPtrBase@UIPart@@@ATL@@QEAAXXZ @ 0x18004FFB4 (-Release@-$CComPtrBase@UIPart@@@ATL@@QEAAXXZ.c)
 *     ?PersistMuteState@CMuteSoftware@@AEAAXXZ @ 0x180055EF8 (-PersistMuteState@CMuteSoftware@@AEAAXXZ.c)
 */

void __fastcall CMuteSoftware::ProviderFinalRelease(CMuteSoftware *this)
{
  LPCRITICAL_SECTION v2; // [rsp+20h] [rbp-18h] BYREF
  char v3; // [rsp+28h] [rbp-10h]

  if ( *((_QWORD *)this + 4) && *((_BYTE *)this + 96) )
    CMuteSoftware::PersistMuteState((const wchar_t **)this);
  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)&v2, (struct _RTL_CRITICAL_SECTION *)((char *)this + 48));
  ATL::CComPtrBase<IPart>::Release((_QWORD *)this + 5);
  if ( v3 )
    ATL::CCritSecLock::Unlock(&v2);
}

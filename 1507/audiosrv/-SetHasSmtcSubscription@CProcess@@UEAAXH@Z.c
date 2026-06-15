/*
 * XREFs of ?SetHasSmtcSubscription@CProcess@@UEAAXH@Z @ 0x180003930
 * Callers:
 *     ?SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@H@Z @ 0x1800025F4 (-SetSmtcSubscriptionState@CApplicationManager@@QEAAJPEAVCProcess@@H@Z.c)
 * Callees:
 *     ?OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ @ 0x180002F3C (-OnSmtcSubscriptionChanged@CApplication@@QEAAXXZ.c)
 *     ?Unlock@CCritSecLock@ATL@@QEAAXXZ @ 0x18001B220 (-Unlock@CCritSecLock@ATL@@QEAAXXZ.c)
 *     ??0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z @ 0x18001B244 (--0CCritSecLock@ATL@@QEAA@AEAU_RTL_CRITICAL_SECTION@@_N@Z.c)
 */

void __fastcall CProcess::SetHasSmtcSubscription(CProcess *this, int a2, bool a3)
{
  __int64 v5; // rdx
  bool v6; // r8
  int v7; // ecx
  bool v8; // zf
  _BYTE v9[24]; // [rsp+20h] [rbp-18h] BYREF

  ATL::CCritSecLock::CCritSecLock((ATL::CCritSecLock *)v9, (struct _RTL_CRITICAL_SECTION *)((char *)this + 16), a3);
  if ( *((_DWORD *)this + 112) || a2 )
  {
    v7 = a2 != 0 ? 1 : -1;
    v8 = v7 + *((_DWORD *)this + 112) == 0;
    *((_DWORD *)this + 112) += v7;
    if ( v8 || *((_DWORD *)this + 112) == 1 && a2 )
      CApplication::OnSmtcSubscriptionChanged(*((CApplication **)this + 26), v5, v6);
  }
  if ( v9[8] )
    ATL::CCritSecLock::Unlock((ATL::CCritSecLock *)v9);
}

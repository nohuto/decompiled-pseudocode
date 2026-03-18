/*
 * XREFs of ?RemoveAdapterFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@@Z @ 0x1C007B938
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000F0E4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C4860 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0001B90 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C007C060 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Cleanup@SESSION_ADAPTER@@QEAAXXZ @ 0x1C007C210 (-Cleanup@SESSION_ADAPTER@@QEAAXXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveAdapterFromSession(DXGSESSIONDATA *this, const struct _LUID *a2)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  __int64 v5; // rcx
  SESSION_ADAPTER *v6; // rbx
  SESSION_ADAPTER **v8; // rdx
  SESSION_ADAPTER **v9; // rcx
  _QWORD *v11; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(this, a2);
  v6 = SessionAdapterFromLuid;
  if ( SessionAdapterFromLuid )
  {
    if ( (*((_DWORD *)SessionAdapterFromLuid + 16))-- == 1 )
    {
      SESSION_ADAPTER::Cleanup(SessionAdapterFromLuid);
      v8 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 6);
      v9 = (SESSION_ADAPTER **)*((_QWORD *)v6 + 7);
      if ( v8[1] != (SESSION_ADAPTER *)((char *)v6 + 48) || *v9 != (SESSION_ADAPTER *)((char *)v6 + 48) )
        __fastfail(3u);
      *v9 = (SESSION_ADAPTER *)v8;
      v8[1] = (SESSION_ADAPTER *)v9;
      SESSION_ADAPTER::`scalar deleting destructor'(v6);
    }
    return 0LL;
  }
  else
  {
    v11 = (_QWORD *)WdLogNewEntry5_WdError(v5);
    v11[3] = a2->HighPart;
    v11[4] = a2->LowPart;
    v11[5] = this;
    v11[6] = -1073741811LL;
    WdLogEvent5_WdError(v11);
    return 3221225485LL;
  }
}

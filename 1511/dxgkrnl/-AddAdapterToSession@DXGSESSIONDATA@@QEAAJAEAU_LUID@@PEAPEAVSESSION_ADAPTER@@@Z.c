/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C009EE04
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000D6DC (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C5018 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0008128 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C009F360 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C009FAB4 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        struct _LUID *a2,
        struct SESSION_ADAPTER **a3)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct SESSION_ADAPTER **v7; // r8
  _QWORD *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // rcx
  __int64 v11; // r8
  __int64 v12; // r9
  _QWORD *v13; // rbx
  struct _LUID v14; // rax
  __int64 v15; // r8
  __int64 v16; // r9
  int v17; // r14d
  DXGSESSIONDATA **v18; // rdx
  DXGSESSIONDATA *v19; // rax
  _QWORD *v20; // rax
  _QWORD *v22; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( v7 )
      *v7 = SessionAdapterFromLuid;
    return 0LL;
  }
  v8 = operator new[](0x60uLL, 0x4B677844u, PagedPool);
  v13 = v8;
  if ( v8 )
  {
    *v8 = this;
    v14 = *a2;
    v13[2] = 0LL;
    v13[3] = 0LL;
    *((_DWORD *)v13 + 12) = 0;
    *((_DWORD *)v13 + 13) = 0;
    v13[7] = 0LL;
    v13[8] = 0LL;
    *((_DWORD *)v13 + 18) = 0;
    *((_DWORD *)v13 + 19) = 0;
    v13[1] = v14;
    v13[11] = v13 + 10;
    v13[10] = v13 + 10;
  }
  else
  {
    v13 = 0LL;
  }
  if ( v13 )
  {
    v17 = SESSION_ADAPTER::Initialize((SESSION_ADAPTER *)v13);
    if ( v17 >= 0 )
    {
      v18 = this[2321];
      v19 = (DXGSESSIONDATA *)(v13 + 4);
      v13[4] = this + 2320;
      v13[5] = v18;
      if ( *v18 != (DXGSESSIONDATA *)(this + 2320) )
        __fastfail(3u);
      *v18 = v19;
      this[2321] = (DXGSESSIONDATA **)v19;
      ++*((_DWORD *)v13 + 12);
      if ( a3 )
        *a3 = (struct SESSION_ADAPTER *)v13;
      v20 = (_QWORD *)WdLogNewEntry5_WdEvent(this + 2320, v18, v15, v16);
      v20[3] = a2->HighPart;
      v20[4] = a2->LowPart;
      v20[5] = this;
      WdLogEvent5_WdEvent(v20);
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v13);
    return (unsigned int)v17;
  }
  else
  {
    v22 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10, v9, v11, v12);
    v22[3] = a2->HighPart;
    v22[4] = a2->LowPart;
    v22[5] = this;
    WdLogEvent5_WdLowResource(v22);
    return 3221225495LL;
  }
}

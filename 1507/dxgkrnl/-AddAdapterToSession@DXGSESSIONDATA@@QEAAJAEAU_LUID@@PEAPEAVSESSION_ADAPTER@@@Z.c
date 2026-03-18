/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C008F1B0
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000CAD8 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C005F3B0 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C000F0B8 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C008F454 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C00DAB14 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        struct _LUID *a2,
        struct SESSION_ADAPTER **a3)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct SESSION_ADAPTER **v7; // r8
  _QWORD *v9; // rax
  __int64 v10; // rcx
  _QWORD *v11; // rbx
  struct _LUID v12; // rax
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // r14d
  DXGSESSIONDATA **v16; // rdx
  DXGSESSIONDATA *v17; // rax
  _QWORD *v18; // rax
  _QWORD *v19; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 12);
    if ( v7 )
      *v7 = SessionAdapterFromLuid;
    return 0LL;
  }
  v9 = operator new[](0x60uLL, 0x4B677844u, PagedPool);
  v11 = v9;
  if ( v9 )
  {
    *v9 = this;
    v12 = *a2;
    v11[2] = 0LL;
    v11[3] = 0LL;
    *((_DWORD *)v11 + 12) = 0;
    *((_DWORD *)v11 + 13) = 0;
    v11[7] = 0LL;
    v11[8] = 0LL;
    *((_DWORD *)v11 + 18) = 0;
    *((_DWORD *)v11 + 19) = 0;
    v11[1] = v12;
    v11[11] = v11 + 10;
    v11[10] = v11 + 10;
  }
  else
  {
    v11 = 0LL;
  }
  if ( v11 )
  {
    v15 = SESSION_ADAPTER::Initialize((SESSION_ADAPTER *)v11);
    if ( v15 >= 0 )
    {
      v16 = this[2318];
      v17 = (DXGSESSIONDATA *)(v11 + 4);
      v11[4] = this + 2317;
      v11[5] = v16;
      if ( *v16 != (DXGSESSIONDATA *)(this + 2317) )
        __fastfail(3u);
      *v16 = v17;
      this[2318] = (DXGSESSIONDATA **)v17;
      ++*((_DWORD *)v11 + 12);
      if ( a3 )
        *a3 = (struct SESSION_ADAPTER *)v11;
      v18 = (_QWORD *)WdLogNewEntry5_WdEvent(this + 2317, v16, v13, v14);
      v18[3] = a2->HighPart;
      v18[4] = a2->LowPart;
      v18[5] = this;
      WdLogEvent5_WdEvent(v18);
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v11);
    return (unsigned int)v15;
  }
  else
  {
    v19 = (_QWORD *)WdLogNewEntry5_WdLowResource(v10);
    v19[3] = a2->HighPart;
    v19[4] = a2->LowPart;
    v19[5] = this;
    WdLogEvent5_WdLowResource(v19);
    return 3221225495LL;
  }
}

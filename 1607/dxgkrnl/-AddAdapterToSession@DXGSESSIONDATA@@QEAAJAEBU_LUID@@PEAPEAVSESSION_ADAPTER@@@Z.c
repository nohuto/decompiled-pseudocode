/*
 * XREFs of ?AddAdapterToSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@PEAPEAVSESSION_ADAPTER@@@Z @ 0x1C007B9AC
 * Callers:
 *     ?SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z @ 0x1C000F0E4 (-SetAdapterLuidInRemoteSession@DXGSESSIONDATA@@QEAAXPEAU_LUID@@@Z.c)
 *     DxgkUseAdapterViewInCurrentSession @ 0x1C00C4860 (DxgkUseAdapterViewInCurrentSession.c)
 * Callees:
 *     ??_GSESSION_ADAPTER@@QEAAPEAXI@Z @ 0x1C0001B90 (--_GSESSION_ADAPTER@@QEAAPEAXI@Z.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C007C060 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?Initialize@SESSION_ADAPTER@@QEAAJXZ @ 0x1C007C820 (-Initialize@SESSION_ADAPTER@@QEAAJXZ.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::AddAdapterToSession(
        DXGSESSIONDATA ***this,
        const struct _LUID *a2,
        DXGSESSIONDATA *****a3)
{
  struct SESSION_ADAPTER *SessionAdapterFromLuid; // rax
  struct SESSION_ADAPTER **v7; // r8
  DXGSESSIONDATA ****v8; // rax
  __int64 v9; // rcx
  DXGSESSIONDATA ****v10; // rbx
  struct _LUID v11; // rax
  int v12; // r14d
  DXGSESSIONDATA **v13; // rdx
  DXGSESSIONDATA *v14; // rcx
  _QWORD *v15; // rax
  _QWORD *v17; // rax

  SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid((DXGSESSIONDATA *)this, a2);
  if ( SessionAdapterFromLuid )
  {
    ++*((_DWORD *)SessionAdapterFromLuid + 16);
    if ( v7 )
      *v7 = SessionAdapterFromLuid;
    return 0LL;
  }
  v8 = (DXGSESSIONDATA ****)operator new(0x70uLL, 0x4B677844u, PagedPool);
  v10 = v8;
  if ( v8 )
  {
    *v8 = this;
    v11 = *a2;
    v10[2] = 0LL;
    v10[3] = 0LL;
    *((_DWORD *)v10 + 16) = 0;
    *((_DWORD *)v10 + 17) = 0;
    v10[9] = 0LL;
    v10[10] = 0LL;
    *((_DWORD *)v10 + 22) = 0;
    *((_DWORD *)v10 + 23) = 0;
    v10[1] = (DXGSESSIONDATA ***)v11;
    v10[13] = (DXGSESSIONDATA ***)(v10 + 12);
    v10[12] = (DXGSESSIONDATA ***)(v10 + 12);
  }
  else
  {
    v10 = 0LL;
  }
  if ( v10 )
  {
    v12 = SESSION_ADAPTER::Initialize((SESSION_ADAPTER *)v10);
    if ( v12 >= 0 )
    {
      v13 = this[2318];
      v14 = (DXGSESSIONDATA *)(v10 + 6);
      if ( *v13 != (DXGSESSIONDATA *)(this + 2317) )
        __fastfail(3u);
      *(_QWORD *)v14 = this + 2317;
      v10[7] = (DXGSESSIONDATA ***)v13;
      *v13 = v14;
      this[2318] = (DXGSESSIONDATA **)v14;
      ++*((_DWORD *)v10 + 16);
      if ( a3 )
        *a3 = v10;
      v15 = (_QWORD *)WdLogNewEntry5_WdEvent();
      v15[3] = a2->HighPart;
      v15[4] = a2->LowPart;
      v15[5] = this;
      WdLogEvent5_WdEvent(v15);
      return 0LL;
    }
    SESSION_ADAPTER::`scalar deleting destructor'((SESSION_ADAPTER *)v10);
    return (unsigned int)v12;
  }
  else
  {
    v17 = (_QWORD *)WdLogNewEntry5_WdLowResource(v9);
    v17[3] = a2->HighPart;
    v17[4] = a2->LowPart;
    v17[5] = this;
    WdLogEvent5_WdLowResource(v17);
    return 3221225495LL;
  }
}

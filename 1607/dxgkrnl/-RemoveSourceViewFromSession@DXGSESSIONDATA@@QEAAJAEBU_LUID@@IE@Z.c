/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEBU_LUID@@IE@Z @ 0x1C007BB34
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00C5F04 (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C000181C (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C007ABDC (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z @ 0x1C007BCE4 (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEBU_LUID@@I@Z.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z @ 0x1C007C090 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEBU_LUID@@I@Z.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C018018C (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        const struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v9; // rcx
  struct DISPLAY_SOURCE *OwnedDisplaySource; // r15
  SESSION_VIEW *SessionViewFromSource; // rax
  SESSION_VIEW *v12; // rbx
  SESSION_VIEW **v13; // r8
  SESSION_VIEW **v14; // rdx
  _QWORD *v16; // rax
  unsigned __int8 v17[40]; // [rsp+20h] [rbp-28h] BYREF

  v4 = 0;
  v5 = a3;
  v17[0] = 0;
  OwnedDisplaySource = DXGSESSIONDATA::GetOwnedDisplaySource(this, a2, a3);
  if ( OwnedDisplaySource )
  {
    SessionViewFromSource = DXGSESSIONDATA::GetSessionViewFromSource(this, a2, v5);
    v12 = SessionViewFromSource;
    if ( SessionViewFromSource )
    {
      if ( a4 )
      {
        SESSION_VIEW::RemoveAllDisplaySource(SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource(SessionViewFromSource, OwnedDisplaySource, v17);
        if ( !v17[0] )
          return v4;
      }
      v13 = (SESSION_VIEW **)*((_QWORD *)v12 + 1);
      v14 = (SESSION_VIEW **)*((_QWORD *)v12 + 2);
      if ( v13[1] != (SESSION_VIEW *)((char *)v12 + 8) || *v14 != (SESSION_VIEW *)((char *)v12 + 8) )
        __fastfail(3u);
      *v14 = (SESSION_VIEW *)v13;
      v13[1] = (SESSION_VIEW *)v14;
      SESSION_VIEW::`scalar deleting destructor'(v12);
      return v4;
    }
  }
  v16 = (_QWORD *)WdLogNewEntry5_WdError(v9);
  v16[3] = v5;
  v16[4] = a2->HighPart;
  v16[5] = a2->LowPart;
  v16[6] = this;
  v16[7] = -1073741811LL;
  WdLogEvent5_WdError(v16);
  return 3221225485LL;
}

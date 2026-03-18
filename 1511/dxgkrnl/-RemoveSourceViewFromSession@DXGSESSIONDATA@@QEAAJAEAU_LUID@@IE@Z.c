/*
 * XREFs of ?RemoveSourceViewFromSession@DXGSESSIONDATA@@QEAAJAEAU_LUID@@IE@Z @ 0x1C009EF8C
 * Callers:
 *     DxgkRemoveSessionViewForCurrentSession @ 0x1C00AE93C (DxgkRemoveSessionViewForCurrentSession.c)
 * Callees:
 *     ??_GSESSION_VIEW@@QEAAPEAXI@Z @ 0x1C0008038 (--_GSESSION_VIEW@@QEAAPEAXI@Z.c)
 *     ?RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ @ 0x1C009DB7C (-RemoveAllDisplaySource@SESSION_VIEW@@QEAAXXZ.c)
 *     ?GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z @ 0x1C009ED20 (-GetSessionViewFromSource@DXGSESSIONDATA@@QEBAPEAVSESSION_VIEW@@AEAU_LUID@@I@Z.c)
 *     ?GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z @ 0x1C009F13C (-GetOwnedDisplaySource@DXGSESSIONDATA@@QEBAPEAVDISPLAY_SOURCE@@AEAU_LUID@@I@Z.c)
 *     ?RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z @ 0x1C015AD08 (-RemoveDisplaySource@SESSION_VIEW@@QEAAJPEAVDISPLAY_SOURCE@@PEAE@Z.c)
 */

__int64 __fastcall DXGSESSIONDATA::RemoveSourceViewFromSession(
        DXGSESSIONDATA *this,
        struct _LUID *a2,
        unsigned int a3,
        char a4)
{
  unsigned int v4; // r14d
  __int64 v5; // rsi
  __int64 v9; // rcx
  struct DISPLAY_SOURCE *OwnedDisplaySource; // r15
  DXGSESSIONDATA **SessionViewFromSource; // rax
  DXGSESSIONDATA **v12; // rbx
  DXGSESSIONDATA *v13; // r8
  DXGSESSIONDATA ***v14; // rdx
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
        SESSION_VIEW::RemoveAllDisplaySource((SESSION_VIEW *)SessionViewFromSource);
      }
      else
      {
        v4 = SESSION_VIEW::RemoveDisplaySource((SESSION_VIEW *)SessionViewFromSource, OwnedDisplaySource, v17);
        if ( !v17[0] )
          return v4;
      }
      v13 = v12[1];
      v14 = (DXGSESSIONDATA ***)v12[2];
      if ( *((DXGSESSIONDATA ***)v13 + 1) != v12 + 1 || *v14 != v12 + 1 )
        __fastfail(3u);
      *v14 = (DXGSESSIONDATA **)v13;
      *((_QWORD *)v13 + 1) = v14;
      SESSION_VIEW::`scalar deleting destructor'((SESSION_VIEW *)v12);
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

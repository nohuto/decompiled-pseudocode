/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00F78E4
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00F7678 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00F7744 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  _QWORD *v6; // rax
  __int64 v7; // rcx
  __int64 result; // rax
  __int64 v9; // rax
  __int64 v10; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v9 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v9 + 24) = 16LL;
LABEL_12:
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v9 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v9 + 24) = 830LL;
    goto LABEL_12;
  }
  v5 = (_DWORD *)*((_QWORD *)SessionData + 1);
  if ( !v5 )
  {
    v9 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v9 + 24) = 837LL;
    goto LABEL_12;
  }
  *((_DWORD *)this + 2) = *v5;
  v6 = operator new(0x18uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v6 )
  {
    v6[1] = 0LL;
    *v6 = 0LL;
    *((_DWORD *)v6 + 4) = 50;
  }
  *((_QWORD *)this + 3) = v6;
  if ( v6 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result < 0 )
      *((_DWORD *)this + 13) = 0;
    else
      return 0LL;
  }
  else
  {
    v10 = WdLogNewEntry5_WdLowResource(v7);
    *(_QWORD *)(v10 + 24) = 847LL;
    WdLogEvent5_WdLowResource(v10);
    return 3221225495LL;
  }
  return result;
}

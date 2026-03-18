/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00D1D08
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00D19F8 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00D1AC0 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // rax
  __int64 result; // rax
  DXGGLOBAL *Global; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v12; // rcx
  _DWORD *v13; // rcx
  _QWORD *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v5 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v5 + 24) = 16LL;
LABEL_3:
    WdLogEvent5_WdError(v5);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)this, a2, a3, a4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v8, v9, v10);
  if ( !SessionData )
  {
    v5 = WdLogNewEntry5_WdError(v12);
    *(_QWORD *)(v5 + 24) = 799LL;
    goto LABEL_3;
  }
  v13 = (_DWORD *)*((_QWORD *)SessionData + 1);
  if ( !v13 )
  {
    v5 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v5 + 24) = 806LL;
    goto LABEL_3;
  }
  *((_DWORD *)this + 2) = *v13;
  v14 = operator new[](0x28uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v14 )
  {
    *v14 = 0LL;
    v14[1] = 0LL;
    *((_DWORD *)v14 + 6) = 0;
    v14[2] = 0LL;
    *((_DWORD *)v14 + 7) = 50;
    *((_DWORD *)v14 + 8) = 11;
  }
  *((_QWORD *)this + 3) = v14;
  if ( v14 )
  {
    result = OUTPUTDUPL_MGR::CreateSourceContextLists(this);
    if ( (int)result >= 0 )
      return 0LL;
    else
      *((_DWORD *)this + 13) = 0;
  }
  else
  {
    v16 = WdLogNewEntry5_WdLowResource(v15);
    *(_QWORD *)(v16 + 24) = 816LL;
    WdLogEvent5_WdLowResource(v16);
    return 3221225495LL;
  }
  return result;
}

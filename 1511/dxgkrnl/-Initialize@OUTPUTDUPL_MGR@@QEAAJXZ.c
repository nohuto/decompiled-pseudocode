/*
 * XREFs of ?Initialize@OUTPUTDUPL_MGR@@QEAAJXZ @ 0x1C00DBC44
 * Callers:
 *     ?CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C00DB9E8 (-CreateOutputDuplManager@@YAJIPEAVADAPTER_DISPLAY@@PEAU_LUID@@1PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 * Callees:
 *     ??0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z @ 0x1C0006DD4 (--0DXGFASTMUTEX@@QEAA@W4_DXGK_BLOCK_THREAD_REASON@@W4DXGK_LOCK_ORDER@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ @ 0x1C00DBAB0 (-CreateSourceContextLists@OUTPUTDUPL_MGR@@AEAAJXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::Initialize(OUTPUTDUPL_MGR *this)
{
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v4; // rcx
  _DWORD *v5; // rcx
  __int64 v6; // rax
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 result; // rax
  __int64 v12; // rax
  __int64 v13; // rax

  if ( *((_DWORD *)this + 13) > 0x10u )
  {
    v12 = WdLogNewEntry5_WdError(this);
    *(_QWORD *)(v12 + 24) = 16LL;
LABEL_13:
    WdLogEvent5_WdError(v12);
    return 3221225485LL;
  }
  Global = DXGGLOBAL::GetGlobal((__int64)this);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v12 = WdLogNewEntry5_WdError(v4);
    *(_QWORD *)(v12 + 24) = 786LL;
    goto LABEL_13;
  }
  v5 = (_DWORD *)*((_QWORD *)SessionData + 1);
  if ( !v5 )
  {
    v12 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v12 + 24) = 793LL;
    goto LABEL_13;
  }
  *((_DWORD *)this + 2) = *v5;
  v6 = (__int64)operator new[](0x40uLL, 0x674D444Fu, (POOL_TYPE)512);
  if ( v6 )
    v6 = DXGFASTMUTEX::DXGFASTMUTEX(v6, 50, 11);
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
    v13 = WdLogNewEntry5_WdLowResource(v8, v7, v9, v10);
    *(_QWORD *)(v13 + 24) = 803LL;
    WdLogEvent5_WdLowResource(v13);
    return 3221225495LL;
  }
  return result;
}

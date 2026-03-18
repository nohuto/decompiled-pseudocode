/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C009E4A0
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00C6800 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006E64 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0006F4C (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0006FAC (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C009F1F0 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C015AB8C (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this)
{
  int v2; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v4; // rdx
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // r9
  DXGSESSIONDATA *v8; // rax
  __int64 v9; // rdx
  __int64 v10; // r8
  __int64 v11; // r9
  DXGSESSIONDATA *v12; // rcx
  _QWORD *v13; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  _BYTE v19[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v20[24]; // [rsp+30h] [rbp-18h] BYREF

  v2 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId();
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v20, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v20);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, (DXGSESSIONMGR *)((char *)this + 104));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 24) )
  {
    v2 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v2 < 0 )
      goto LABEL_11;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 24) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v5);
      *(_QWORD *)(v15 + 24) = 3144LL;
      WdLogEvent5_WdAssertion(v15);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId) )
  {
    v16 = WdLogNewEntry5_WdAssertion(v5);
    *(_QWORD *)(v16 + 24) = 3145LL;
    WdLogEvent5_WdAssertion(v16);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId) )
  {
    v17 = WdLogNewEntry5_WdWarning(v5, v4, v6, v7);
    *(_QWORD *)(v17 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v17 + 32) = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v17);
  }
  else
  {
    v8 = (DXGSESSIONDATA *)operator new[](0x48C0uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v8 )
      v12 = DXGSESSIONDATA::DXGSESSIONDATA(v8, CurrentProcessSessionId);
    else
      v12 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId) = v12;
    if ( !*(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 42) |= 1u;
      v18 = WdLogNewEntry5_WdLowResource(v12, v9, v10, v11);
      *(_QWORD *)(v18 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v18);
      v2 = -1073741801;
    }
  }
  if ( v2 >= 0 )
  {
    v13 = (_QWORD *)WdLogNewEntry5_WdEvent(v12, v9, v10, v11);
    v13[3] = CurrentProcessSessionId;
    v13[4] = *(_QWORD *)(*((_QWORD *)this + 8) + 8 * CurrentProcessSessionId);
    v13[5] = *((unsigned int *)this + 24);
    WdLogEvent5_WdEvent(v13);
  }
LABEL_11:
  if ( v19[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  if ( v20[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v20);
  return (unsigned int)v2;
}

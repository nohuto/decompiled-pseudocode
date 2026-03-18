/*
 * XREFs of ?CreateSession@DXGSESSIONMGR@@QEAAJXZ @ 0x1C00D8498
 * Callers:
 *     ?DxgkNotifySessionStateChange@@YAJK@Z @ 0x1C00D8150 (-DxgkNotifySessionStateChange@@YAJK@Z.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??0DXGSESSIONDATA@@QEAA@K@Z @ 0x1C00D85B4 (--0DXGSESSIONDATA@@QEAA@K@Z.c)
 *     ?IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z @ 0x1C0156878 (-IncreaseNumSessions@DXGSESSIONMGR@@AEAAJK@Z.c)
 */

__int64 __fastcall DXGSESSIONMGR::CreateSession(DXGSESSIONMGR *this, __int64 a2, __int64 a3, __int64 a4)
{
  int v5; // esi
  __int64 CurrentProcessSessionId; // rbp
  __int64 v7; // rdx
  __int64 v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  DXGSESSIONDATA *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // r8
  __int64 v14; // r9
  DXGSESSIONDATA *v15; // rcx
  _QWORD *v16; // rax
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[16]; // [rsp+20h] [rbp-28h] BYREF
  _BYTE v23[24]; // [rsp+30h] [rbp-18h] BYREF

  v5 = 0;
  CurrentProcessSessionId = (unsigned int)PsGetCurrentProcessSessionId(this, a2, a3, a4);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v23, this);
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v23);
  DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v22, (DXGSESSIONMGR *)((char *)this + 80));
  DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v22);
  if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
  {
    v5 = DXGSESSIONMGR::IncreaseNumSessions(this, CurrentProcessSessionId);
    if ( v5 < 0 )
      goto LABEL_11;
    if ( (unsigned int)CurrentProcessSessionId >= *((_DWORD *)this + 18) )
    {
      v18 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
      *(_QWORD *)(v18 + 24) = 3072LL;
      WdLogEvent5_WdAssertion(v18);
    }
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
  {
    v19 = WdLogNewEntry5_WdAssertion(v8, v7, v9, v10);
    *(_QWORD *)(v19 + 24) = 3073LL;
    WdLogEvent5_WdAssertion(v19);
  }
  if ( *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
  {
    v20 = WdLogNewEntry5_WdWarning(v8, v7, v9, v10);
    *(_QWORD *)(v20 + 24) = CurrentProcessSessionId;
    *(_QWORD *)(v20 + 32) = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    WdLogEvent5_WdWarning(v20);
  }
  else
  {
    v11 = (DXGSESSIONDATA *)operator new[](0x48A0uLL, 0x4B677844u, (POOL_TYPE)512);
    if ( v11 )
      v15 = DXGSESSIONDATA::DXGSESSIONDATA(v11, CurrentProcessSessionId);
    else
      v15 = 0LL;
    *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) = v15;
    if ( !*(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId) )
    {
      *((_DWORD *)this + 30) |= 1u;
      v21 = WdLogNewEntry5_WdLowResource(v15);
      *(_QWORD *)(v21 + 24) = CurrentProcessSessionId;
      WdLogEvent5_WdLowResource(v21);
      v5 = -1073741801;
    }
  }
  if ( v5 >= 0 )
  {
    v16 = (_QWORD *)WdLogNewEntry5_WdEvent(v15, v12, v13, v14);
    v16[3] = CurrentProcessSessionId;
    v16[4] = *(_QWORD *)(*((_QWORD *)this + 5) + 8 * CurrentProcessSessionId);
    v16[5] = *((unsigned int *)this + 18);
    WdLogEvent5_WdEvent(v16);
  }
LABEL_11:
  if ( v22[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v22);
  if ( v23[8] )
    DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v23);
  return (unsigned int)v5;
}

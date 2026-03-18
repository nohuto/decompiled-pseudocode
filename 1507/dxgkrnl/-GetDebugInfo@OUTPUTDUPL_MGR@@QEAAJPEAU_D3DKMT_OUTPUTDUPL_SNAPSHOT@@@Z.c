/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C01531E4
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C015624C (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002878 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0002938 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0002970 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C0152400 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C0153870 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  __int64 v4; // r9
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rbp
  __int64 v10; // rbx
  __int64 *v11; // r15
  UINT i; // edi
  __int64 v13; // r13
  __int64 v14; // rax
  __int64 v15; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v21; // rcx
  __int64 v22; // rax
  struct DXGFASTMUTEX *const *v23; // rcx
  _BYTE v24[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v6 = this[13];
  v7 = 56 * (unsigned int)v6 * this[2];
  v8 = v7 + 24;
  if ( a2->Size < (unsigned __int64)(v7 + 24) )
  {
    a2->Size = v7 + 24;
    return 1075707914LL;
  }
  v9 = 0LL;
  a2->NumVidPnSources = v6;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v9 < a2->NumVidPnSources; v9 = (unsigned int)(v9 + 1) )
  {
    v10 = *((_QWORD *)this + 2);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v24, *(struct DXGFASTMUTEX *const *)(v10 + 24 * v9));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v24);
    v11 = *(__int64 **)(v10 + 24 * v9 + 8);
    for ( i = 0; i < a2->NumOutputDuplContexts; ++v11 )
    {
      v13 = *v11;
      v14 = i + (_DWORD)v9 * a2->NumOutputDuplContexts;
      if ( *v11 )
      {
        v15 = v14;
        a2->OutputDuplDebugInfos[v14].Status = (*(_DWORD *)(v13 + 288) != 0) + 1;
        a2->OutputDuplDebugInfos[v15].ProcessID = PsGetProcessId(*(PEPROCESS *)(v13 + 24));
        a2->OutputDuplDebugInfos[v15].AccumulatedPresents = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 272) + 8LL) + 4LL);
        a2->OutputDuplDebugInfos[v15].LastMouseTime.QuadPart = **(_QWORD **)(v13 + 272);
        a2->OutputDuplDebugInfos[v15].LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v13 + 272) + 8LL)
                                                                           + 8LL);
        *(_OWORD *)a2->OutputDuplDebugInfos[v15].ProcessName = *(_OWORD *)PsGetProcessImageFileName(*(_QWORD *)(v13 + 24));
      }
      else
      {
        memset(&a2->OutputDuplDebugInfos[v14], 0, sizeof(a2->OutputDuplDebugInfos[v14]));
      }
      ++i;
    }
    if ( v24[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v24);
  }
  Global = DXGGLOBAL::GetGlobal(v8, v6, v7, v4);
  SessionData = DXGGLOBAL::GetSessionData(Global, v17, v18, v19);
  if ( !SessionData )
  {
    v22 = WdLogNewEntry5_WdError(v21);
    *(_QWORD *)(v22 + 24) = 2033LL;
LABEL_16:
    WdLogEvent5_WdError(v22);
    return 3221225485LL;
  }
  v23 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionData + 1);
  if ( !v23 )
  {
    v22 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v22 + 24) = 2040LL;
    goto LABEL_16;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v23, a2);
  return 0LL;
}

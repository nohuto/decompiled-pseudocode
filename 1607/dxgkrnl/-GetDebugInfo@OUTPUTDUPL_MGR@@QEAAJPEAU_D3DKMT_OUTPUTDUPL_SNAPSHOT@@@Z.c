/*
 * XREFs of ?GetDebugInfo@OUTPUTDUPL_MGR@@QEAAJPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C017C000
 * Callers:
 *     OutputDuplGetDebugInfo @ 0x1C017F514 (OutputDuplGetDebugInfo.c)
 * Callees:
 *     ??0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z @ 0x1C0009D08 (--0DXGAUTOMUTEX@@QEAA@QEAVDXGFASTMUTEX@@E@Z.c)
 *     ?Release@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009D40 (-Release@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     ?Acquire@DXGAUTOMUTEX@@QEAAXXZ @ 0x1C0009DB0 (-Acquire@DXGAUTOMUTEX@@QEAAXXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z @ 0x1C017B180 (-AddDebugInfo@OUTPUTDUPL_SESSION_MGR@@QEAAXPEAU_D3DKMT_OUTPUTDUPL_SNAPSHOT@@@Z.c)
 *     ?IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ @ 0x1C017C778 (-IsDiagRegKeyEnabled@OUTPUTDUPL_MGR@@AEAAHXZ.c)
 */

__int64 __fastcall OUTPUTDUPL_MGR::GetDebugInfo(UINT *this, struct _D3DKMT_OUTPUTDUPL_SNAPSHOT *a2)
{
  UINT v5; // edx
  unsigned __int64 v6; // rcx
  __int64 v7; // rbp
  __int64 v8; // rbx
  __int64 *v9; // r15
  UINT i; // edi
  __int64 v11; // r13
  __int64 v12; // rax
  __int64 v13; // rbx
  DXGGLOBAL *Global; // rax
  struct DXGSESSIONDATA *SessionData; // rax
  __int64 v16; // rcx
  __int64 v17; // rax
  struct DXGFASTMUTEX *const *v18; // rcx
  _BYTE v19[40]; // [rsp+20h] [rbp-28h] BYREF

  if ( !(unsigned int)OUTPUTDUPL_MGR::IsDiagRegKeyEnabled((OUTPUTDUPL_MGR *)this) )
    return 3221225506LL;
  v5 = this[13];
  v6 = 56 * v5 * this[2] + 24LL;
  if ( a2->Size < v6 )
  {
    a2->Size = 56 * v5 * this[2] + 24;
    return 1075707914LL;
  }
  v7 = 0LL;
  a2->NumVidPnSources = v5;
  for ( a2->NumOutputDuplContexts = this[2]; (unsigned int)v7 < a2->NumVidPnSources; v7 = (unsigned int)(v7 + 1) )
  {
    v8 = *((_QWORD *)this + 2);
    DXGAUTOMUTEX::DXGAUTOMUTEX((DXGAUTOMUTEX *)v19, *(struct DXGFASTMUTEX *const *)(v8 + 24 * v7));
    DXGAUTOMUTEX::Acquire((DXGAUTOMUTEX *)v19);
    v9 = *(__int64 **)(v8 + 24 * v7 + 8);
    for ( i = 0; i < a2->NumOutputDuplContexts; ++v9 )
    {
      v11 = *v9;
      v12 = i + (_DWORD)v7 * a2->NumOutputDuplContexts;
      if ( *v9 )
      {
        v13 = v12;
        a2->OutputDuplDebugInfos[v12].Status = (*(_DWORD *)(v11 + 288) != 0) + 1;
        a2->OutputDuplDebugInfos[v13].ProcessID = PsGetProcessId(*(PEPROCESS *)(v11 + 24));
        a2->OutputDuplDebugInfos[v13].AccumulatedPresents = *(_DWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 8LL) + 4LL);
        a2->OutputDuplDebugInfos[v13].LastMouseTime.QuadPart = **(_QWORD **)(v11 + 272);
        a2->OutputDuplDebugInfos[v13].LastPresentTime.QuadPart = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(v11 + 272) + 8LL)
                                                                           + 8LL);
        *(_OWORD *)a2->OutputDuplDebugInfos[v13].ProcessName = *(_OWORD *)PsGetProcessImageFileName(*(_QWORD *)(v11 + 24));
      }
      else
      {
        memset(&a2->OutputDuplDebugInfos[v12], 0, sizeof(a2->OutputDuplDebugInfos[v12]));
      }
      ++i;
    }
    if ( v19[8] )
      DXGAUTOMUTEX::Release((DXGAUTOMUTEX *)v19);
  }
  Global = DXGGLOBAL::GetGlobal(v6);
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( !SessionData )
  {
    v17 = WdLogNewEntry5_WdError(v16);
    *(_QWORD *)(v17 + 24) = 2079LL;
LABEL_16:
    WdLogEvent5_WdError(v17);
    return 3221225485LL;
  }
  v18 = (struct DXGFASTMUTEX *const *)*((_QWORD *)SessionData + 1);
  if ( !v18 )
  {
    v17 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v17 + 24) = 2086LL;
    goto LABEL_16;
  }
  OUTPUTDUPL_SESSION_MGR::AddDebugInfo(v18, a2);
  return 0LL;
}

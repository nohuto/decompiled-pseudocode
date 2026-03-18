/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C0065A90
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C0066644 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C008AC40 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C008F454 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C008F48C (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C017DB68 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CheckAdapterViewSessionOwnership(CCD_TOPOLOGY *this, unsigned int a2)
{
  __int64 v2; // rbx
  DXGGLOBAL *Global; // rax
  __int64 v5; // rcx
  DXGSESSIONDATA *SessionData; // r8
  __int64 v7; // r14
  __int64 v8; // rdx
  __int64 v9; // rcx
  SESSION_ADAPTER *SessionAdapterFromLuid; // r12
  unsigned int v11; // edi
  unsigned int i; // esi
  __int64 v13; // rcx
  __int64 v15; // rbx
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  _QWORD *v20; // rbx
  __int64 v21; // rdx
  __int64 v22; // rcx
  __int64 v23; // r8
  __int64 v24; // r9
  _QWORD *v25; // rbx
  __int64 v26; // rdx
  __int64 v27; // r8
  __int64 v28; // r9

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v7 = 168 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionData,
                               (struct _LUID *)(168 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v11 = *(_DWORD *)(v8 + 148);
      for ( i = 0; v11; v11 >>= 1 )
      {
        if ( (v11 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          v25 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v25[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
          v26 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
          v25[4] = *(unsigned int *)(v26 + v7);
          v25[5] = i;
          v25[6] = (unsigned int)PsGetCurrentProcessSessionId(i, v26, v27, v28);
          v25[7] = -1073741790LL;
          WdLogEvent5_WdError(v25);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 148) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v20 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v20[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v21 = *(_QWORD *)(*((_QWORD *)this + 8) + 40LL);
      v22 = *(unsigned int *)(v21 + v7);
      v20[4] = v22;
      v20[5] = (unsigned int)PsGetCurrentProcessSessionId(v22, v21, v23, v24);
      v20[6] = -1073741790LL;
      WdLogEvent5_WdError(v20);
      return 3221225506LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId(v17, v16, v18, v19);
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}

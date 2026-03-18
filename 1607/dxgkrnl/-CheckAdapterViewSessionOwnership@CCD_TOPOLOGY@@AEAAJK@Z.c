/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C008C62C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008A2E8 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z @ 0x1C007C060 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEBU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C007C114 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C00A3E48 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z @ 0x1C01AB1AC (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEBU_LUID@@IJ@Z.c)
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
  _QWORD *v16; // rbx
  _QWORD *v17; // rbx

  v2 = a2;
  Global = DXGGLOBAL::GetGlobal();
  SessionData = DXGGLOBAL::GetSessionData(Global);
  if ( SessionData )
  {
    v7 = 168 * v2;
    SessionAdapterFromLuid = DXGSESSIONDATA::GetSessionAdapterFromLuid(
                               SessionData,
                               (const struct _LUID *)(168 * v2 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)));
    if ( SessionAdapterFromLuid )
    {
      v11 = *(_DWORD *)(v8 + 148);
      for ( i = 0; v11; v11 >>= 1 )
      {
        if ( (v11 & 1) != 0 && !SESSION_ADAPTER::GetDisplaySource(SessionAdapterFromLuid, i) )
        {
          v17 = (_QWORD *)WdLogNewEntry5_WdError(v13);
          v17[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
          v17[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
          v17[5] = i;
          v17[6] = (unsigned int)PsGetCurrentProcessSessionId();
          v17[7] = -1073741790LL;
          WdLogEvent5_WdError(v17);
          *(_DWORD *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 148) &= ~(1 << i);
          CCD_TOPOLOGY::MarkPathsApplyFailure(
            this,
            (const struct _LUID *)(v7 + *(_QWORD *)(*((_QWORD *)this + 8) + 40LL)),
            i,
            -1073741790);
        }
        ++i;
      }
      return 0LL;
    }
    else
    {
      v16 = (_QWORD *)WdLogNewEntry5_WdError(v9);
      v16[3] = *(int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7 + 4);
      v16[4] = *(unsigned int *)(*(_QWORD *)(*((_QWORD *)this + 8) + 40LL) + v7);
      v16[5] = (unsigned int)PsGetCurrentProcessSessionId();
      v16[6] = -1073741790LL;
      WdLogEvent5_WdError(v16);
      return 3221225506LL;
    }
  }
  else
  {
    v15 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v15 + 24) = (unsigned int)PsGetCurrentProcessSessionId();
    *(_QWORD *)(v15 + 32) = -1073741811LL;
    WdLogEvent5_WdError(v15);
    return 3221225485LL;
  }
}

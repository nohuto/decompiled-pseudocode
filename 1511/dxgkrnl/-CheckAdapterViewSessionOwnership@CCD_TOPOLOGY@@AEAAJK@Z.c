/*
 * XREFs of ?CheckAdapterViewSessionOwnership@CCD_TOPOLOGY@@AEAAJK@Z @ 0x1C00A423C
 * Callers:
 *     ?ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A4E18 (-ApplyTopology@CCD_TOPOLOGY@@QEAAJI@Z.c)
 * Callees:
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ @ 0x1C0097258 (-GetSessionData@DXGGLOBAL@@QEAAPEAVDXGSESSIONDATA@@XZ.c)
 *     ?GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z @ 0x1C009F360 (-GetSessionAdapterFromLuid@DXGSESSIONDATA@@QEBAPEAVSESSION_ADAPTER@@AEAU_LUID@@@Z.c)
 *     ?GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z @ 0x1C009F398 (-GetDisplaySource@SESSION_ADAPTER@@QEBAPEAVDISPLAY_SOURCE@@I@Z.c)
 *     ?MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z @ 0x1C0181FE0 (-MarkPathsApplyFailure@CCD_TOPOLOGY@@AEAAXAEAU_LUID@@IJ@Z.c)
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
  Global = DXGGLOBAL::GetGlobal((__int64)this);
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

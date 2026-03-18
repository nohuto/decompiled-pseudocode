/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C0089084
 * Callers:
 *     MonitorGetMonitorInformationForTargets @ 0x1C00D868C (MonitorGetMonitorInformationForTargets.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01AEE60 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     DmmGetNextVideoPresentTarget @ 0x1C0088D50 (DmmGetNextVideoPresentTarget.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C0088EC4 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C0089AD0 (DmmIsTargetForcable.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        struct _FAST_MUTEX *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        int a4)
{
  unsigned int v6; // edx
  __int64 v7; // rax
  __int64 v8; // rcx
  int v9; // eax
  __int64 v10; // rbx
  _QWORD *Owner; // rax
  unsigned int v12; // r13d
  char v13; // r15
  int IsTargetForcable; // eax
  __int64 v15; // rcx
  __int64 v16; // r14
  __int64 v17; // rdx
  __int64 v18; // rcx
  __int64 v19; // r8
  __int64 v20; // r9
  struct DXGMONITOR *i; // rdi
  int MonitorInstance; // eax
  __int64 v24; // rcx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rax
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  _QWORD *v32; // rax
  int v33; // [rsp+20h] [rbp-28h]
  int v34; // [rsp+28h] [rbp-20h]
  unsigned int v35; // [rsp+90h] [rbp+48h] BYREF
  struct DXGMONITOR *v36; // [rsp+98h] [rbp+50h] BYREF
  void *v37; // [rsp+A0h] [rbp+58h]
  int v38; // [rsp+A8h] [rbp+60h] BYREF

  v38 = a4;
  v37 = a3;
  if ( !a2 )
  {
    v25 = WdLogNewEntry5_WdAssertion(this);
    WdLogEvent5_WdAssertion(v25);
  }
  v35 = -1;
  v6 = -1;
  do
  {
    LODWORD(v10) = DmmGetNextVideoPresentTarget(*((_QWORD *)this->Owner + 2), v6, &v35);
    if ( (int)v10 < 0 )
      break;
    Owner = this->Owner;
    v12 = 0;
    LOBYTE(v38) = 0;
    v13 = 0;
    IsTargetForcable = DmmIsTargetForcable(Owner[2], v35, &v38, 0LL);
    v10 = IsTargetForcable;
    if ( IsTargetForcable < 0 )
    {
      v32 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v32[3] = v35;
      v32[4] = this;
      v32[5] = v10;
      WdLogEvent5_WdError(v32);
      if ( (_DWORD)v10 == -1073741275 )
        LODWORD(v10) = -1073741823;
      return (unsigned int)v10;
    }
    v16 = v35;
    if ( !&v36 )
    {
      v26 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v26);
    }
    if ( (_DWORD)v16 == -1 )
    {
      v27 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v27);
    }
    if ( this == (struct _FAST_MUTEX *)-168LL )
    {
      v28 = WdLogNewEntry5_WdAssertion(v15);
      WdLogEvent5_WdAssertion(v28);
    }
    KeAcquireGuardedMutex(this + 3);
    for ( i = *(struct DXGMONITOR **)&this[2].Contention; ; i = *(struct DXGMONITOR **)i )
    {
      if ( i == (struct DXGMONITOR *)&this[2].Contention || !i )
      {
        v7 = WdLogNewEntry5_WdTrace(v18, v17, v19, v20);
        *(_QWORD *)(v7 + 24) = v16;
        *(_QWORD *)(v7 + 32) = this;
        if ( this == (struct _FAST_MUTEX *)-168LL )
        {
          v31 = WdLogNewEntry5_WdAssertion(v8);
          WdLogEvent5_WdAssertion(v31);
        }
        KeReleaseGuardedMutex(this + 3);
        goto LABEL_9;
      }
      if ( *((_DWORD *)i + 7) == (_DWORD)v16 )
        break;
    }
    v36 = i;
    if ( this == (struct _FAST_MUTEX *)-168LL )
    {
      v29 = WdLogNewEntry5_WdAssertion(v18);
      WdLogEvent5_WdAssertion(v29);
    }
    KeReleaseGuardedMutex(this + 3);
    v12 = *((_DWORD *)i + 94);
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance(this, v35, 1, (ULONG **)&v36);
    LODWORD(v10) = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
      if ( MonitorInstance != -1073741275 )
      {
        v30 = WdLogNewEntry5_WdError(v24);
        *(_QWORD *)(v30 + 24) = v35;
        *(_QWORD *)(v30 + 32) = this;
        WdLogEvent5_WdError(v30);
        return (unsigned int)v10;
      }
    }
    else
    {
      v13 = 1;
    }
LABEL_9:
    LOBYTE(v34) = v13;
    LOBYTE(v33) = v38;
    v9 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
           *((_QWORD *)this->Owner + 2),
           v37,
           v35,
           v12,
           v33,
           v34);
    v6 = v35;
    LODWORD(v10) = v9;
  }
  while ( v35 != -1 && v9 >= 0 );
  return (unsigned int)v10;
}

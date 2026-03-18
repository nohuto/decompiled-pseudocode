/*
 * XREFs of ?_GetMonitorInformationForTargets@MONITOR_MGR@@QEAAJP6AJPEAX0IW4_DMM_VIDPN_MONITOR_TYPE@@EE@Z0I@Z @ 0x1C008CF18
 * Callers:
 *     MonitorGetMonitorInformationForTargets @ 0x1C00635B8 (MonitorGetMonitorInformationForTargets.c)
 *     ?_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z @ 0x1C01811C8 (-_DRTGetTargetInformation@MONITOR_MGR@@QEAAJPEAU_D3DKMT_DRT_MONITOR@@@Z.c)
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1C0010930 (_guard_dispatch_icall_nop.c)
 *     DmmGetNextVideoPresentTarget @ 0x1C008A470 (DmmGetNextVideoPresentTarget.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     DmmIsTargetForcable @ 0x1C008D4E4 (DmmIsTargetForcable.c)
 */

__int64 __fastcall MONITOR_MGR::_GetMonitorInformationForTargets(
        MONITOR_MGR *this,
        int (__high *a2)(void *, void *, unsigned int, enum _DMM_VIDPN_MONITOR_TYPE, unsigned __int8, unsigned __int8),
        void *a3,
        __int64 a4)
{
  unsigned int v7; // edx
  struct DXGMONITOR *v8; // rbx
  __int64 v9; // rax
  unsigned int v10; // r15d
  char v11; // si
  int IsTargetForcable; // eax
  __int64 v13; // rcx
  int MonitorInstance; // eax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  int v19; // eax
  __int64 v21; // rax
  __int64 v22; // rax
  __int64 v23; // rax
  _QWORD *v24; // rax
  int v25; // [rsp+20h] [rbp-20h]
  int v26; // [rsp+28h] [rbp-18h]
  unsigned int v27; // [rsp+80h] [rbp+40h] BYREF
  struct DXGMONITOR *v28; // [rsp+88h] [rbp+48h] BYREF
  int v29; // [rsp+98h] [rbp+58h] BYREF

  v29 = a4;
  if ( !a2 )
  {
    v21 = WdLogNewEntry5_WdAssertion(this, 0LL, a3, a4);
    WdLogEvent5_WdAssertion(v21);
  }
  v7 = -1;
  v27 = -1;
  do
  {
    LODWORD(v8) = DmmGetNextVideoPresentTarget(*(_QWORD *)(*((_QWORD *)this + 1) + 16LL), v7, &v27);
    if ( (int)v8 < 0 )
      break;
    v9 = *((_QWORD *)this + 1);
    v10 = 0;
    LOBYTE(v29) = 0;
    v11 = 0;
    IsTargetForcable = DmmIsTargetForcable(*(_QWORD *)(v9 + 16), v27, &v29, 0LL);
    v8 = (struct DXGMONITOR *)IsTargetForcable;
    if ( IsTargetForcable < 0 )
    {
      v24 = (_QWORD *)WdLogNewEntry5_WdError(v13);
      v24[3] = v27;
      v24[4] = this;
      v24[5] = v8;
      WdLogEvent5_WdError(v24);
      if ( (_DWORD)v8 == -1073741275 )
        LODWORD(v8) = -1073741823;
      return (unsigned int)v8;
    }
    v28 = 0LL;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v27, 0LL, (ULONG **)&v28);
    LODWORD(v8) = MonitorInstance;
    if ( MonitorInstance < 0 )
      goto LABEL_7;
    v8 = v28;
    if ( !v28 )
    {
      v22 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
      WdLogEvent5_WdAssertion(v22);
    }
    v10 = *((_DWORD *)v8 + 94);
    LOBYTE(v17) = 1;
    MonitorInstance = MONITOR_MGR::_GetMonitorInstance((struct _FAST_MUTEX *)this, v27, v17, (ULONG **)&v28);
    LODWORD(v8) = MonitorInstance;
    if ( MonitorInstance < 0 )
    {
LABEL_7:
      if ( MonitorInstance != -1073741275 )
      {
        v23 = WdLogNewEntry5_WdError(v16);
        *(_QWORD *)(v23 + 24) = v27;
        *(_QWORD *)(v23 + 32) = this;
        WdLogEvent5_WdError(v23);
        return (unsigned int)v8;
      }
    }
    else
    {
      v11 = 1;
    }
    LOBYTE(v26) = v11;
    LOBYTE(v25) = v29;
    v19 = ((__int64 (__fastcall *)(_QWORD, void *, _QWORD, _QWORD, int, int))a2)(
            *(_QWORD *)(*((_QWORD *)this + 1) + 16LL),
            a3,
            v27,
            v10,
            v25,
            v26);
    v7 = v27;
    LODWORD(v8) = v19;
  }
  while ( v27 != -1 && v19 >= 0 );
  return (unsigned int)v8;
}

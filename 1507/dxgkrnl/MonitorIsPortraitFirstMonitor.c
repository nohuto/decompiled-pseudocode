/*
 * XREFs of MonitorIsPortraitFirstMonitor @ 0x1C00DDB00
 * Callers:
 *     ?OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z @ 0x1C00CD444 (-OnMonitorConnectionChanged@VIDPN_MGR@@QEAAJI@Z.c)
 * Callees:
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsInternalVideoOutput @ 0x1C0004FC0 (IsInternalVideoOutput.c)
 *     EDIDV1_IsEDIDBaseBlock @ 0x1C00086F8 (EDIDV1_IsEDIDBaseBlock.c)
 *     ?_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z @ 0x1C008CC74 (-_GetMonitorInstance@MONITOR_MGR@@QEAAJIEPEAPEAVDXGMONITOR@@@Z.c)
 *     ?_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ @ 0x1C0097F90 (-_GetEdidBaseBlockPtr@DXGMONITOR@@QEBAPEBXXZ.c)
 */

__int64 __fastcall MonitorIsPortraitFirstMonitor(DXGADAPTER *a1, unsigned int a2, bool *a3, bool *a4)
{
  __int64 v8; // rdx
  __int64 v9; // rcx
  __int64 v10; // r8
  __int64 v11; // r9
  __int64 v12; // rax
  struct _FAST_MUTEX *v13; // rcx
  __int64 result; // rax
  __int64 v15; // rdx
  __int64 v16; // rcx
  __int64 v17; // r8
  __int64 v18; // r9
  struct DXGMONITOR *v19; // rdi
  _QWORD *EdidBaseBlockPtr; // rax
  int IsEDIDBaseBlock; // ebx
  __int64 v22; // r8
  unsigned int v23; // ecx
  unsigned int v24; // edx
  __int64 v25; // rax
  __int64 v26; // rax
  __int64 v27; // rax
  __int64 v28; // rdx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // r9
  __int64 v32; // rax
  struct DXGMONITOR *v33; // [rsp+40h] [rbp+8h] BYREF

  if ( !a1 || a2 == -1 || !a3 )
    return 3221225485LL;
  if ( !DXGADAPTER::IsCoreResourceSharedOwner(a1) )
  {
    v25 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v25);
  }
  if ( !*((_QWORD *)a1 + 247) )
  {
    v12 = WdLogNewEntry5_WdAssertion(v9, v8, v10, v11);
    WdLogEvent5_WdAssertion(v12);
  }
  v13 = *(struct _FAST_MUTEX **)(*((_QWORD *)a1 + 247) + 96LL);
  if ( !v13 )
  {
    v26 = WdLogNewEntry5_WdError(0LL);
    *(_QWORD *)(v26 + 24) = a1;
    WdLogEvent5_WdError(v26);
    return 3221225485LL;
  }
  v33 = 0LL;
  result = MONITOR_MGR::_GetMonitorInstance(v13, a2, 0LL, (ULONG **)&v33);
  if ( (int)result < 0 )
    return result;
  v19 = v33;
  if ( !v33 )
  {
    v27 = WdLogNewEntry5_WdAssertion(v16, v15, v17, v18);
    WdLogEvent5_WdAssertion(v27);
    v32 = WdLogNewEntry5_WdAssertion(v29, v28, v30, v31);
    WdLogEvent5_WdAssertion(v32);
  }
  KeEnterCriticalRegion();
  ExAcquireResourceSharedLite((PERESOURCE)((char *)v19 + 240), 1u);
  EdidBaseBlockPtr = DXGMONITOR::_GetEdidBaseBlockPtr(v19);
  if ( !EdidBaseBlockPtr )
  {
LABEL_23:
    IsEDIDBaseBlock = -1073741275;
    goto LABEL_21;
  }
  IsEDIDBaseBlock = EDIDV1_IsEDIDBaseBlock(EdidBaseBlockPtr);
  if ( IsEDIDBaseBlock >= 0 )
  {
    if ( *(_WORD *)(v22 + 54) || *(_BYTE *)(v22 + 56) )
    {
      v23 = *(unsigned __int8 *)(v22 + 59) | (*(unsigned __int8 *)(v22 + 61) >> 4 << 8);
      if ( (*(unsigned __int8 *)(v22 + 56) | (*(unsigned __int8 *)(v22 + 58) >> 4 << 8)) < v23 )
      {
        *a3 = IsInternalVideoOutput(*((_DWORD *)v19 + 8));
      }
      else
      {
        *a3 = 0;
        v24 = v23;
      }
      if ( a4 )
        *a4 = v24 < 0x400;
      IsEDIDBaseBlock = 0;
      goto LABEL_21;
    }
    goto LABEL_23;
  }
LABEL_21:
  ExReleaseResourceLite((PERESOURCE)((char *)v19 + 240));
  KeLeaveCriticalRegion();
  return (unsigned int)IsEDIDBaseBlock;
}

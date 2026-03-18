/*
 * XREFs of ?TdrIsRecoveryRequired@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C0144410
 * Callers:
 *     ?TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z @ 0x1C015F9C0 (-TriggerDisplayOnlyTdr@DXGDODPRESENT@@QEAAHW4_TDR_TIMEOUT_REASON@@I_K@Z.c)
 * Callees:
 *     ?IsDxgmms2@DXGADAPTER@@QEBAEXZ @ 0x1C0003150 (-IsDxgmms2@DXGADAPTER@@QEBAEXZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z @ 0x1C012D3D0 (-PrepareToReset@DXGADAPTER@@QEAAJPEAU_TDR_RECOVERY_CONTEXT@@@Z.c)
 *     ?TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0143230 (-TdrCollectDbgInfoStage1@@YAXPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0144300 (-TdrHistoryIsLimitExhausted@@YA_NPEBU_TDR_HISTORY@@PEBU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     ?TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z @ 0x1C01443CC (-TdrIsDisplayOnlyTdr@@YA_NW4_TDR_TIMEOUT_REASON@@@Z.c)
 *     ?TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z @ 0x1C014480C (-TdrRetrieveSecondaryBucketingKey@@YAXPEAU_TDR_RECOVERY_CONTEXT@@PEAK@Z.c)
 *     ?TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z @ 0x1C0144900 (-TdrUpdateDbgReport@@YA_NPEAU_TDR_RECOVERY_CONTEXT@@_N@Z.c)
 *     TdrAllowToDebugTimeout @ 0x1C0144BCC (TdrAllowToDebugTimeout.c)
 *     TdrBugcheckOnTimeout @ 0x1C0144D30 (TdrBugcheckOnTimeout.c)
 */

char __fastcall TdrIsRecoveryRequired(struct _TDR_RECOVERY_CONTEXT *a1)
{
  __int64 v2; // rdx
  __int64 v3; // rcx
  __int64 v4; // r8
  unsigned __int8 CurrentIrql; // di
  __int64 v6; // rax
  unsigned int v8; // eax
  int v9; // ecx
  __int64 v10; // rax
  DXGADAPTER *v11; // rcx
  int v12; // eax
  unsigned int v13; // [rsp+38h] [rbp+10h] BYREF

  if ( !g_TdrConfig
    || (unsigned int)TdrAllowToDebugTimeout()
    || _InterlockedCompareExchange64((volatile signed __int64 *)&g_TdrRecoveryInProgress, (signed __int64)a1, 0LL) )
  {
    return 0;
  }
  CurrentIrql = KeGetCurrentIrql();
  if ( CurrentIrql )
  {
    v6 = WdLogNewEntry5_WdCriticalError(v3, v2, v4);
    *(_QWORD *)(v6 + 32) = CurrentIrql;
    *(_QWORD *)(v6 + 24) = a1;
    WdLogEvent5_WdCriticalError(v6);
    return 0;
  }
  if ( KeAreAllApcsDisabled() )
  {
    v8 = *((_DWORD *)a1 + 4);
    if ( v8 > 0xA || (v9 = 1682, !_bittest(&v9, v8)) )
    {
      TdrCollectDbgInfoStage1(a1, 0);
      TdrRetrieveSecondaryBucketingKey(a1, &v13);
      *((_QWORD *)a1 + 352) = 0LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
    WdDiagNotifyUser(8LL, 2LL, 0LL, 0LL);
    return 0;
  }
  TdrUpdateDbgReport(a1, 1);
  v10 = *(_QWORD *)(*((_QWORD *)a1 + 4) + 1992LL);
  if ( v10
    && (*(int (__fastcall **)(struct _TDR_RECOVERY_CONTEXT *))(*(_QWORD *)(*(_QWORD *)(v10 + 400) + 8LL) + 496LL))(a1) < 0 )
  {
    *((_QWORD *)a1 + 11) = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*(_QWORD *)(*((_QWORD *)a1 + 4) + 1992LL) + 400LL) + 8LL)
                                     + 496LL);
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  }
  TdrCollectDbgInfoStage1(a1, 1);
  if ( ((*((_DWORD *)a1 + 4) - 2) & 0xFFFFFFFB) == 0 && !*((_QWORD *)a1 + 8) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( TdrHistoryIsLimitExhausted((const struct _TDR_HISTORY *)&g_TdrHistory, a1, 0) && g_TdrDebugMode != 3 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( g_TdrConfig == 1 )
    TdrBugcheckOnTimeout((ULONG_PTR)a1);
  if ( !TdrIsDisplayOnlyTdr(*((_DWORD *)a1 + 4)) && !DXGADAPTER::IsDxgmms2(*((DXGADAPTER **)a1 + 4)) )
  {
    v12 = DXGADAPTER::PrepareToReset(v11, a1);
    if ( v12 < 0 )
    {
      if ( v12 != -1073741643 )
        *((_QWORD *)a1 + 11) = -1LL;
      TdrBugcheckOnTimeout((ULONG_PTR)a1);
    }
  }
  return 1;
}

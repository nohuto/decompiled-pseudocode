/*
 * XREFs of ?RmpRsEnforcedThresholdsTimerCallback@@YAXPEAU_TP_CALLBACK_INSTANCE@@PEAXPEAU_TP_TIMER@@@Z @ 0x18002DD70
 * Callers:
 *     <none>
 * Callees:
 *     _TlgWrite @ 0x180005A80 (_TlgWrite.c)
 *     ?RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z @ 0x180005B60 (-RmpActivityHostComputeAndApplyEnforcementSettings@@YAJPEAU_RM_ACTIVITY_HOST@@@Z.c)
 *     _TlgKeywordOn @ 0x180006FC0 (_TlgKeywordOn.c)
 *     ?RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z @ 0x180014210 (-RmpObjectRelease@@YAXPEAU_RM_OBJECT_HEADER@@@Z.c)
 *     ?RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@@Z @ 0x180017778 (-RmpResourceSetGetReportedCommitThresholds@@YAXPEAU_RM_RESOURCE_SET@@PEAU_RM_COMMIT_THRESHOLDS@@.c)
 *     __security_check_cookie @ 0x180020EF0 (__security_check_cookie.c)
 *     ?RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z @ 0x18002DBEC (-RmpRsEnforcedThresholdsArmTimer@@YAXPEAU_RM_RS_ENFORCEMENT_CONTEXT@@@Z.c)
 */

void __fastcall RmpRsEnforcedThresholdsTimerCallback(
        struct _TP_CALLBACK_INSTANCE *a1,
        struct _RM_RS_ENFORCEMENT_CONTEXT *a2,
        struct _TP_TIMER *a3)
{
  int v4; // esi
  const struct _TlgProvider_t *v5; // rcx
  const GUID *v6; // r8
  const GUID *v7; // r9
  bool v8; // zf
  __int64 v9; // rdi
  struct _RM_OBJECT_HEADER *v10; // rcx
  const struct _TlgProvider_t *v11; // rcx
  int v12; // edx
  const GUID *v13; // r8
  const GUID *v14; // r9
  int v15; // [rsp+38h] [rbp-79h] BYREF
  __int64 v16; // [rsp+40h] [rbp-71h] BYREF
  unsigned __int64 v17; // [rsp+48h] [rbp-69h] BYREF
  __int64 v18; // [rsp+50h] [rbp-61h] BYREF
  char v19[16]; // [rsp+58h] [rbp-59h] BYREF
  __int64 v20; // [rsp+68h] [rbp-49h]
  EVENT_DATA_DESCRIPTOR v21; // [rsp+78h] [rbp-39h] BYREF
  __int64 *v22; // [rsp+98h] [rbp-19h]
  int v23; // [rsp+A0h] [rbp-11h]
  int v24; // [rsp+A4h] [rbp-Dh]
  int *v25; // [rsp+A8h] [rbp-9h]
  int v26; // [rsp+B0h] [rbp-1h]
  int v27; // [rsp+B4h] [rbp+3h]
  __int64 *v28; // [rsp+B8h] [rbp+7h]
  int v29; // [rsp+C0h] [rbp+Fh]
  int v30; // [rsp+C4h] [rbp+13h]
  EVENT_DATA_DESCRIPTOR pData; // [rsp+D8h] [rbp+27h] BYREF

  v4 = 1;
  if ( (unsigned int)dword_18004D030 > 4 && TlgKeywordOn(a1, 1uLL) )
    TlgWrite(v5, &unk_180041384, v6, v7, 2u, &pData);
  v16 = 0LL;
  RtlEnterCriticalSection(&RmpGlobalLock);
  v8 = *((_QWORD *)a2 + 6) == 0LL;
  v9 = *(_QWORD *)a2;
  v18 = *(_QWORD *)(*(_QWORD *)a2 + 24LL);
  if ( v8 )
  {
    v4 = 0;
    v10 = (struct _RM_OBJECT_HEADER *)v9;
  }
  else
  {
    RtlQueryUnbiasedInterruptTime(&v17);
    if ( v17 < *((_QWORD *)a2 + 6) )
    {
      TpSetTimerEx(*((_QWORD *)a2 + 5), 0LL, 0LL, 0LL);
      RmpRsEnforcedThresholdsArmTimer(a2);
      goto LABEL_12;
    }
    *((_QWORD *)a2 + 6) = 0LL;
    *(_QWORD *)(v9 + 144) = 0LL;
    v4 = 2;
    RmpResourceSetGetReportedCommitThresholds((struct _RM_RESOURCE_SET *)v9, (struct _RM_COMMIT_THRESHOLDS *)v19);
    v16 = v20;
    RmpActivityHostComputeAndApplyEnforcementSettings(*(struct _RM_ACTIVITY_HOST **)(*(_QWORD *)(v9 + 40) + 1392LL));
    v10 = *(struct _RM_OBJECT_HEADER **)a2;
  }
  RmpObjectRelease(v10);
  if ( *((_QWORD *)a2 + 5) )
    TpReleaseTimer();
  RtlFreeHeap(NtCurrentPeb()->ProcessHeap, 0, a2);
LABEL_12:
  RtlLeaveCriticalSection(&RmpGlobalLock);
  if ( (unsigned int)dword_18004D030 > 4 )
  {
    if ( TlgKeywordOn(v11, 9uLL) )
    {
      v24 = 0;
      v27 = 0;
      v30 = 0;
      v22 = &v18;
      v25 = &v15;
      v28 = &v16;
      v23 = v12 - 1;
      v15 = v4;
      v26 = 4;
      v29 = v12 - 1;
      TlgWrite((TraceLoggingHProvider)(unsigned int)(v12 - 1), &unk_1800413B1, v13, v14, 5u, &v21);
    }
  }
}

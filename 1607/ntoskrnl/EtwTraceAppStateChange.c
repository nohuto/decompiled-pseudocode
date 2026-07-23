/*
 * XREFs of EtwTraceAppStateChange @ 0x14051B448
 * Callers:
 *     PsSetProcessTelemetryAppState @ 0x14051B7DC (PsSetProcessTelemetryAppState.c)
 * Callees:
 *     ObFastDereferenceObject @ 0x14000F210 (ObFastDereferenceObject.c)
 *     KiStackAttachProcess @ 0x1400CB090 (KiStackAttachProcess.c)
 *     KiUnstackDetachProcess @ 0x1400CC6C0 (KiUnstackDetachProcess.c)
 *     ExAcquireRundownProtection @ 0x1400D1D70 (ExAcquireRundownProtection.c)
 *     ExReleaseRundownProtection @ 0x1400D1DA0 (ExReleaseRundownProtection.c)
 *     TraceLoggingProviderEnabled @ 0x14010CF00 (TraceLoggingProviderEnabled.c)
 *     __security_check_cookie @ 0x14014CFC0 (__security_check_cookie.c)
 *     memset @ 0x140171AC0 (memset.c)
 *     ExFreePoolWithTag @ 0x140254000 (ExFreePoolWithTag.c)
 *     PsReferencePrimaryToken @ 0x140417AE0 (PsReferencePrimaryToken.c)
 *     PsQueryStatisticsProcess @ 0x14044DA90 (PsQueryStatisticsProcess.c)
 *     EtwpQueryTokenPackageInfo @ 0x14045CA10 (EtwpQueryTokenPackageInfo.c)
 *     EtwpQueryProcessOtherInfo @ 0x14045CACC (EtwpQueryProcessOtherInfo.c)
 *     EtwpQueryProcessCommandLine @ 0x14045CB04 (EtwpQueryProcessCommandLine.c)
 *     ObGetProcessHandleCount @ 0x14051B034 (ObGetProcessHandleCount.c)
 *     EtwpWriteAppStateChangeSummary @ 0x14054AF18 (EtwpWriteAppStateChangeSummary.c)
 *     EtwpAppStateChangeSummaryShouldLogCommandLine @ 0x14054C304 (EtwpAppStateChangeSummaryShouldLogCommandLine.c)
 *     EtwpInitStateChangeInfo @ 0x14054C3D4 (EtwpInitStateChangeInfo.c)
 *     EtwpWriteAppStateChangeWithStats @ 0x14054C4C8 (EtwpWriteAppStateChangeWithStats.c)
 *     EtwpWriteAppStateChange @ 0x14054CE4C (EtwpWriteAppStateChange.c)
 */

void __fastcall EtwTraceAppStateChange(struct _EX_RUNDOWN_REF *BugCheckParameter1, __int64 a2)
{
  unsigned __int64 v4; // rcx
  unsigned __int64 v5; // r9
  char v6; // r10
  unsigned __int64 v7; // kr00_8
  unsigned __int64 v8; // rcx
  int v9; // r8d
  int v10; // ecx
  int v11; // eax
  int v12; // eax
  UCHAR v13; // dl
  int *p_ProcessHandleCount; // r15
  char v15; // r14
  char v16; // si
  PACCESS_TOKEN v17; // rbx
  int v18; // [rsp+30h] [rbp-D0h] BYREF
  __int64 v19; // [rsp+38h] [rbp-C8h] BYREF
  PVOID v20[2]; // [rsp+40h] [rbp-C0h] BYREF
  _QWORD v21[5]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v22; // [rsp+78h] [rbp-88h]
  __int64 v23; // [rsp+80h] [rbp-80h]
  __int64 v24; // [rsp+90h] [rbp-70h]
  __int64 v25; // [rsp+98h] [rbp-68h]
  int ProcessHandleCount; // [rsp+B0h] [rbp-50h] BYREF
  unsigned __int64 v27; // [rsp+B4h] [rbp-4Ch]
  unsigned __int64 v28; // [rsp+BCh] [rbp-44h]
  __int64 v29; // [rsp+C4h] [rbp-3Ch]
  int v30; // [rsp+CCh] [rbp-34h]
  int v31; // [rsp+D0h] [rbp-30h]
  int v32; // [rsp+D4h] [rbp-2Ch]
  int v33; // [rsp+D8h] [rbp-28h]
  _BYTE v34[37]; // [rsp+DCh] [rbp-24h] BYREF
  unsigned __int64 v35; // [rsp+101h] [rbp+1h]
  unsigned __int64 v36; // [rsp+109h] [rbp+9h]
  unsigned __int64 v37; // [rsp+111h] [rbp+11h]
  unsigned __int64 v38; // [rsp+119h] [rbp+19h]
  unsigned __int64 v39; // [rsp+121h] [rbp+21h]
  _BYTE v40[48]; // [rsp+140h] [rbp+40h] BYREF
  WCHAR PackageSize[208]; // [rsp+170h] [rbp+70h] BYREF

  if ( TraceLoggingProviderEnabled(&stru_1402F3640, a2, 0x600000000001uLL) )
  {
    EtwpInitStateChangeInfo(BugCheckParameter1, v34);
    v4 = *(_QWORD *)a2 - *(_QWORD *)(a2 + 16);
    v5 = *(_QWORD *)a2 - BugCheckParameter1[233].Count;
    v6 = *(_BYTE *)(a2 + 52);
    v34[1] = *(_BYTE *)(a2 + 48);
    v7 = v4;
    v8 = *(_QWORD *)(a2 + 32) - *(_QWORD *)(a2 + 24);
    v35 = v7 / 0x2710;
    v34[0] = v6;
    v36 = v8 / 0x2710;
    v37 = v5 / 0x2710;
    v38 = *(_QWORD *)(a2 + 32) / 0x2710uLL;
    v39 = *(_QWORD *)(a2 + 40) / 0x2710uLL;
    if ( v6 == 3 )
    {
      PsQueryStatisticsProcess((__int64)BugCheckParameter1, v21);
      ProcessHandleCount = ObGetProcessHandleCount(BugCheckParameter1, 0LL);
      v9 = -1;
      v10 = -1;
      v27 = BugCheckParameter1[158].Count << 12;
      v28 = BugCheckParameter1[159].Count << 12;
      v11 = -1;
      if ( v22 < 0xFFFFFFFFLL )
        v11 = v22;
      v30 = v11;
      v12 = -1;
      if ( v23 < 0xFFFFFFFFLL )
        v12 = v23;
      v31 = v12;
      if ( v24 / 1024 < 0xFFFFFFFFLL )
        v10 = v24 / 1024;
      v32 = v10;
      if ( v25 / 1024 < 0xFFFFFFFFLL )
        v9 = v25 / 1024;
      v33 = v9;
      v29 = v21[3];
      EtwpWriteAppStateChangeWithStats(BugCheckParameter1, v34, &ProcessHandleCount, 1024LL);
      p_ProcessHandleCount = &ProcessHandleCount;
    }
    else
    {
      EtwpWriteAppStateChange(v34);
      LODWORD(p_ProcessHandleCount) = 0;
    }
    if ( TraceLoggingProviderEnabled(&stru_1402F3640, v13, 0x400000000000uLL) )
    {
      memset(PackageSize, 0, 0x198uLL);
      v19 = 0LL;
      v15 = 0;
      v16 = 1;
      memset(v20, 0, sizeof(v20));
      v18 = 0;
      if ( (struct _EX_RUNDOWN_REF *)KeGetCurrentThread()->ApcState.Process != BugCheckParameter1 )
      {
        if ( ExAcquireRundownProtection(BugCheckParameter1 + 92) )
        {
          KiStackAttachProcess((_KPROCESS *)BugCheckParameter1, 0, (__int64)v40);
          v15 = 1;
        }
        else
        {
          v16 = 0;
        }
      }
      v17 = PsReferencePrimaryToken((PEPROCESS)BugCheckParameter1);
      EtwpQueryTokenPackageInfo(v17, PackageSize, &v18);
      ObFastDereferenceObject((signed __int64 *)&BugCheckParameter1[107], (unsigned __int64)v17);
      if ( v16 )
      {
        if ( BugCheckParameter1[127].Count
          && (unsigned __int8)EtwpAppStateChangeSummaryShouldLogCommandLine(BugCheckParameter1) )
        {
          EtwpQueryProcessCommandLine((__int64)BugCheckParameter1, (__int64)v20);
        }
        EtwpQueryProcessOtherInfo((__int64)BugCheckParameter1, (__int64)&v19);
      }
      if ( v15 )
      {
        KiUnstackDetachProcess((struct _KTHREAD *)v40, 0);
        ExReleaseRundownProtection(BugCheckParameter1 + 92);
      }
      EtwpWriteAppStateChangeSummary(
        (_DWORD)BugCheckParameter1,
        (unsigned int)v34,
        (_DWORD)p_ProcessHandleCount,
        (unsigned int)PackageSize,
        (__int64)&v19,
        (__int64)v20);
      if ( v20[1] )
        ExFreePoolWithTag(v20[1], 0);
    }
  }
}

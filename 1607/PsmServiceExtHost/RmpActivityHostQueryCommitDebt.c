/*
 * XREFs of RmpActivityHostQueryCommitDebt @ 0x180007494
 * Callers:
 *     ?RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z @ 0x180003B2C (-RmpTelemetryLogGlobalState@@YAXPEAU_RM_SERVICE_GLOBALS@@@Z.c)
 *     RmpActivityHostPopulateMetrics @ 0x1800090B0 (RmpActivityHostPopulateMetrics.c)
 *     RmpActivityHostQueryCommit @ 0x18000AFD0 (RmpActivityHostQueryCommit.c)
 *     ?AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInfo@2@W4Enum@PendType@2@PEA_NPEAV12@@Z @ 0x180012DB0 (-AcquireInternalResources@ResourceSet@ExecutionModel@@SAJPEAU_RM_ACTIVITY_HOST@@PEBU_ResourceInf.c)
 *     ?ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV?$list@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@V?$allocator@V?$CComPtr@VBaseResourceSet@ExecutionModel@@@ATL@@@utl@@@utl@@@Z @ 0x18001A274 (-ProcessPendingRequestList@ResourceSet@ExecutionModel@@SAXPEAVBaseResourceSet@2@PEAV-$list@V-$CC.c)
 * Callees:
 *     RmpActivityHostActOnProcesses @ 0x1800077F4 (RmpActivityHostActOnProcesses.c)
 *     _TlgKeywordOn @ 0x180015FE0 (_TlgKeywordOn.c)
 *     _TlgWrite @ 0x180016EE0 (_TlgWrite.c)
 *     __security_check_cookie @ 0x180020070 (__security_check_cookie.c)
 */

__int64 __fastcall RmpActivityHostQueryCommitDebt(__int64 a1, _QWORD *a2)
{
  const struct _TlgProvider_t *v3; // rcx
  const GUID *cData; // r8
  const GUID *v6; // r9
  int v7; // [rsp+30h] [rbp-9h] BYREF
  __int64 v8; // [rsp+38h] [rbp-1h] BYREF
  EVENT_DATA_DESCRIPTOR pData; // [rsp+40h] [rbp+7h] BYREF
  int *v10; // [rsp+60h] [rbp+27h]
  int v11; // [rsp+68h] [rbp+2Fh]
  int v12; // [rsp+6Ch] [rbp+33h]
  __int64 *v13; // [rsp+70h] [rbp+37h]
  int v14; // [rsp+78h] [rbp+3Fh]
  int v15; // [rsp+7Ch] [rbp+43h]

  *a2 = 0LL;
  v7 = RmpActivityHostActOnProcesses((struct _RM_ACTIVITY_HOST *)a1, a2);
  LODWORD(v3) = v7;
  if ( v7 < 0 )
  {
    if ( (unsigned int)dword_18004C030 > 4 && TlgKeywordOn((TraceLoggingHProvider)(unsigned int)v7, 1uLL) )
    {
      v12 = 0;
      v15 = 0;
      v10 = &v7;
      v8 = *(_QWORD *)(a1 + 24);
      v13 = &v8;
      v11 = (int)cData;
      v14 = 8;
      TlgWrite(v3, &unk_18004356C, cData, v6, (UINT32)cData, &pData);
      LODWORD(v3) = v7;
    }
  }
  else
  {
    LODWORD(v3) = 0;
  }
  return (unsigned int)v3;
}

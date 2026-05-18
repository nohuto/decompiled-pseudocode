/*
 * XREFs of ?FallBackToBDD@@YA_NXZ @ 0x180002790
 * Callers:
 *     ?ShouldRestartSession@@YA_NU_FILETIME@@@Z @ 0x18000285C (-ShouldRestartSession@@YA_NU_FILETIME@@@Z.c)
 * Callees:
 *     ?TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z @ 0x18000159C (-TraceLoggingWriteEtw@@YAXW4DwmInitEtwType@@JI@Z.c)
 *     ?AddData@?$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateType@@I$0A@$0A@@@UEAAXW4DwmInitTelemetryAggregateType@@I_N1@Z @ 0x1800036F0 (-AddData@-$CAggregateTelemetryCount@VCDwmInitTelemetryAggregator@@W4DwmInitTelemetryAggregateTyp.c)
 *     ?ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z @ 0x180005CD8 (-ReportFallbackToBdd@CDwmInitEventManager@DwmInitAsimov@@QEAAXU_GUID@@JH0GG@Z.c)
 *     ?GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z @ 0x180005E88 (-GetManager@CDwmInitEventManager@DwmInitAsimov@@SAAEAV12@PEBU_TlgProvider_t@@@Z.c)
 *     memset_0 @ 0x180007B86 (memset_0.c)
 */

bool FallBackToBDD(void)
{
  int v0; // edi
  int v1; // r9d
  const struct _TlgProvider_t *v2; // rcx
  DwmInitAsimov::CDwmInitEventManager *Manager; // rax
  int v4; // r9d
  unsigned __int16 v6; // [rsp+28h] [rbp-60h]
  unsigned __int16 v7; // [rsp+30h] [rbp-58h]
  struct _GUID v8; // [rsp+40h] [rbp-48h] BYREF
  struct _GUID v9; // [rsp+50h] [rbp-38h] BYREF
  __int64 v10; // [rsp+60h] [rbp-28h] BYREF
  int v11; // [rsp+68h] [rbp-20h]
  __int64 v12; // [rsp+70h] [rbp-18h]
  int v13; // [rsp+78h] [rbp-10h]

  memset_0(&v10, 0, 0x20uLL);
  v11 = 1029;
  v10 = 0LL;
  v12 = 0LL;
  v13 = 0;
  v0 = D3DKMTEscape(&v10);
  if ( v0 >= 0 )
  {
    LOBYTE(v1) = 1;
    CAggregateTelemetryCount<CDwmInitTelemetryAggregator,enum DwmInitTelemetryAggregateType,unsigned int,0,0>::AddData(
      (unsigned int)&gDwmInitTelemetryAggregator,
      1,
      1,
      v1,
      1);
    v8 = gDwmInitTargetAppSessionGuid;
    v9 = gDwmInitTelemetryActivityId;
    Manager = DwmInitAsimov::CDwmInitEventManager::GetManager(v2);
    DwmInitAsimov::CDwmInitEventManager::ReportFallbackToBdd(Manager, &v9, v0, v4, &v8, v6, v7);
    TraceLoggingWriteEtw(1, v0 | 0x10000000, (const GUID *)(unsigned int)gDwmNumRetriesSoFar);
  }
  return v0 >= 0;
}

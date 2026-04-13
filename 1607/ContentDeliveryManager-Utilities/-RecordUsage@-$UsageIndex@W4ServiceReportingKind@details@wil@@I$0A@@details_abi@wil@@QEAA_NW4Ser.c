/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4ServiceReportingKind@details@wil@@I$0A@@details_abi@wil@@QEAA_NW4ServiceReportingKind@details@3@II@Z @ 0x18000BFF4
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z.c)
 * Callees:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180007510 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil::details::ServiceReportingKind,unsigned int,0>::RecordUsage(
        wil::details_abi::RawUsageIndex *a1,
        char a2,
        int a3)
{
  char v4; // [rsp+48h] [rbp+10h] BYREF
  int v5; // [rsp+50h] [rbp+18h] BYREF

  v5 = a3;
  v4 = a2;
  return wil::details_abi::RawUsageIndex::RecordUsage(a1, &v4, 1uLL, &v5, 4uLL, 1u);
}

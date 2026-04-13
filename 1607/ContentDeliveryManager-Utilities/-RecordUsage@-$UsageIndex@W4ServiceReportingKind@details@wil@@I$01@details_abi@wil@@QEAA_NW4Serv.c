/*
 * XREFs of ?RecordUsage@?$UsageIndex@W4ServiceReportingKind@details@wil@@I$01@details_abi@wil@@QEAA_NW4ServiceReportingKind@details@3@II@Z @ 0x18000BFBC
 * Callers:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z.c)
 * Callees:
 *     ?RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z @ 0x180007510 (-RecordUsage@RawUsageIndex@details_abi@wil@@QEAA_NPEAX_K01I@Z.c)
 */

bool __fastcall wil::details_abi::UsageIndex<enum wil::details::ServiceReportingKind,unsigned int,2>::RecordUsage(
        wil::details_abi::RawUsageIndex *a1,
        char a2,
        int a3,
        unsigned int a4)
{
  char v5; // [rsp+48h] [rbp+10h] BYREF
  int v6; // [rsp+50h] [rbp+18h] BYREF

  v6 = a3;
  v5 = a2;
  return wil::details_abi::RawUsageIndex::RecordUsage(a1, &v5, 1uLL, &v6, 4uLL, a4);
}

/*
 * XREFs of ?ReportUsageToService@details@wil@@YAXIAEATFeaturePropertyCache@12@W4ServiceReportingKind@12@_K@Z @ 0x180008CCC
 * Callers:
 *     ?StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU?$IVector@PEAVAppInstallInfoRecord@ContentManagement@@@Collections@Foundation@Windows@@PEAPEAU?$IVectorView@PEAVAppInstallInfoRecord@ContentManagement@@@456@@Z @ 0x180009330 (-StartBatchInstalls@AppManager@ContentManagement@@UEAAJPEAU-$IVector@PEAVAppInstallInfoRecord@Co.c)
 *     ?SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@CreativeFramework@@V?$function@$$A6AJAEAVValueSetHelper@Triggers@CreativeFramework@@@Z@wistd@@@Z @ 0x180020834 (-SendAppServiceMessage@ContentManagementService@ContentManagement@@AEAAJW4TriggerId@Triggers@Cre.c)
 * Callees:
 *     ?RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z @ 0x1800085B8 (-RecordFeatureUsage@FeatureStateManager@details@wil@@QEAAXIW4ServiceReportingKind@23@_K@Z.c)
 *     ?QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATFeaturePropertyCache@23@@Z @ 0x18000885C (-QueueBackgroundUsageReporting@EnabledStateManager@details@wil@@QEAAXIAEATFeaturePropertyCache@2.c)
 *     ??$ModifyFeatureData@V_lambda_4519d56dbdf3905e1863bc9ba459680b_@@@details@wil@@YA_NAEATFeaturePropertyCache@01@$$QEAV_lambda_4519d56dbdf3905e1863bc9ba459680b_@@@Z @ 0x18000E48C (--$ModifyFeatureData@V_lambda_4519d56dbdf3905e1863bc9ba459680b_@@@details@wil@@YA_NAEATFeaturePr.c)
 *     ??$ModifyFeatureData@V_lambda_1e73f40952ee841e84c920be3ee357be_@@@details@wil@@YA_NAEATFeaturePropertyCache@01@$$QEAV_lambda_1e73f40952ee841e84c920be3ee357be_@@@Z @ 0x18000E588 (--$ModifyFeatureData@V_lambda_1e73f40952ee841e84c920be3ee357be_@@@details@wil@@YA_NAEATFeaturePr.c)
 */

void __fastcall wil::details::ReportUsageToService(
        unsigned int a1,
        union wil::details::FeaturePropertyCache *a2,
        unsigned __int8 a3)
{
  int v5; // ecx
  signed __int32 v6; // r8d
  unsigned __int8 v7; // [rsp+20h] [rbp-60h] BYREF
  signed __int32 v8; // [rsp+28h] [rbp-58h]
  int v9; // [rsp+2Ch] [rbp-54h]
  __int64 v10; // [rsp+30h] [rbp-50h] BYREF
  int v11; // [rsp+38h] [rbp-48h]
  int v12; // [rsp+40h] [rbp-40h] BYREF
  _QWORD v13[3]; // [rsp+48h] [rbp-38h] BYREF
  _QWORD v14[4]; // [rsp+60h] [rbp-20h] BYREF

  v7 = a3;
  v10 = 0LL;
  v12 = 1;
  v11 = 0;
  if ( !a3 )
    goto LABEL_23;
  if ( a3 == 1 )
  {
LABEL_22:
    v13[0] = &v10;
    v13[1] = &v7;
    v13[2] = &v12;
    wil::details::ModifyFeatureData<_lambda_1e73f40952ee841e84c920be3ee357be_>(a2, v13);
    goto LABEL_24;
  }
  if ( a3 <= 3u )
    goto LABEL_7;
  if ( a3 == 4 )
  {
LABEL_23:
    v14[0] = &v10;
    v14[1] = &v7;
    v14[2] = &v12;
    wil::details::ModifyFeatureData<_lambda_4519d56dbdf3905e1863bc9ba459680b_>(a2, v14);
LABEL_24:
    if ( (_BYTE)v10 )
      wil::details::EnabledStateManager::QueueBackgroundUsageReporting(
        (RTL_SRWLOCK *)&wil::details::g_enabledStateManager,
        a1,
        a2);
    goto LABEL_26;
  }
  if ( a3 == 5 )
    goto LABEL_22;
  if ( (unsigned __int8)(a3 - 6) > 1u )
  {
    LOBYTE(v11) = a3;
    HIDWORD(v10) = 1;
    goto LABEL_24;
  }
LABEL_7:
  v9 = 0;
  switch ( a3 )
  {
    case 2u:
      v5 = 0x8000;
      break;
    case 3u:
      v5 = 0x20000;
      break;
    case 6u:
      v5 = 0x10000;
      break;
    case 7u:
      v5 = 0x40000;
      break;
    default:
      goto LABEL_16;
  }
  v9 = v5;
LABEL_16:
  while ( 1 )
  {
    v8 = *(_DWORD *)a2;
    v8 = *(_DWORD *)a2;
    v6 = v8;
    LOBYTE(v10) = 0;
    if ( (v9 & v8) == v9 )
      break;
    v8 |= v9;
    if ( (v8 & 0x80000000) == 0 )
    {
      LOBYTE(v10) = 1;
      v8 |= 0x80000000;
    }
    if ( v6 == _InterlockedCompareExchange((volatile signed __int32 *)a2, v8, v6) )
      goto LABEL_24;
  }
LABEL_26:
  if ( HIDWORD(v10) )
    wil::details::FeatureStateManager::RecordFeatureUsage(&wil::details::g_featureStateManager, a1, v11, HIDWORD(v10));
}

/*
 * XREFs of DxgkSimulateMonitorsIfNecessary @ 0x1C01560F0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C0131470 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C0011390 (__security_check_cookie.c)
 *     memset @ 0x1C0012400 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C00A68F0 (DxgkWriteDiagEntry.c)
 *     DxgkSetPresenterViewMode @ 0x1C00C5F30 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01548FC (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C01553A0 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0155734 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkSimulateMonitorsIfNecessary(
        struct _LUID a1,
        unsigned int a2,
        unsigned int a3,
        __int64 a4,
        _BYTE *a5)
{
  unsigned int v9; // r14d
  int v10; // eax
  __int64 v11; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v13; // rax
  __int64 v15; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v16; // [rsp+38h] [rbp-89h]
  __int64 v17; // [rsp+3Ch] [rbp-85h]
  int v18; // [rsp+44h] [rbp-7Dh]
  int v19; // [rsp+48h] [rbp-79h]
  __int16 v20; // [rsp+4Ch] [rbp-75h]
  unsigned int v21; // [rsp+50h] [rbp-71h]
  struct _LUID v22; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v23[12]; // [rsp+60h] [rbp-61h] BYREF

  v18 = -1;
  v22 = a1;
  v15 = 0LL;
  v16 = 0;
  v17 = 0LL;
  v19 = 257;
  v9 = 0;
  v20 = 0;
  v21 = 0;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 != 10 )
  {
    if ( (a3 || ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) != 0 || a4 == 2) && (a3 != 1 || a4) && a3 != 3 )
    {
      if ( a3 != 6 )
        goto LABEL_21;
      if ( a4 )
      {
        v11 = ((__int64 (__fastcall *)(_QWORD))WdLogNewEntry5_WdAssertion)(a1);
        *(_QWORD *)(v11 + 24) = 4583LL;
        WdLogEvent5_WdAssertion(v11);
      }
      v10 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v15, &v22, a2, a4);
    }
    else
    {
      DxgkSetPresenterViewMode(0LL, 0);
      v10 = HandleMonitorArrival((__int64)&v15, &v22, a2, a3, a4);
    }
LABEL_20:
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_28;
    goto LABEL_21;
  }
  if ( a4 == 2 )
  {
LABEL_8:
    DxgkSetPresenterViewMode(0LL, 0);
    v10 = HandleMonitorDepartureCase((__int64)&v15, &v22, a2, a3, a4);
    goto LABEL_20;
  }
LABEL_21:
  a5[1] = 0;
  if ( !HIDWORD(v15) )
  {
    Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1);
    v13 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
    if ( v13 )
    {
      a5[1] = *((_BYTE *)v13 + 1896) & 1;
      DXGADAPTER::ReleaseReference(v13);
    }
  }
  if ( BYTE1(v19) )
  {
    if ( (_BYTE)v20 )
      *a5 = 1;
  }
  else
  {
    v9 = -1071774941;
  }
LABEL_28:
  memset(v23, 0, sizeof(v23));
  memset(&v23[1], 0, 36);
  v23[0] = 0x6000000002LL;
  v23[11] = __PAIR64__(HIDWORD(v15), v16);
  LODWORD(v23[6]) = BYTE1(v19) & 1 | (4 * (BYTE2(v19) & 1 | (2 * (HIBYTE(v19) & 1))));
  HIDWORD(v23[6]) = a3;
  v23[7] = a4;
  v23[8] = a1;
  v23[9] = __PAIR64__(v21, a2);
  v23[10] = __PAIR64__(v15, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v23);
  return v9;
}

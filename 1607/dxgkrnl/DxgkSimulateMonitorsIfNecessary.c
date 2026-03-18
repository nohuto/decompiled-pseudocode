/*
 * XREFs of DxgkSimulateMonitorsIfNecessary @ 0x1C017ABA0
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C014F880 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     __security_check_cookie @ 0x1C00117E0 (__security_check_cookie.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DxgkWriteDiagEntry @ 0x1C00C0600 (DxgkWriteDiagEntry.c)
 *     DxgkSetPresenterViewMode @ 0x1C00DAD60 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179100 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEA.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_KPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179C4C (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCENARIO_CONTEXT@@@Z @ 0x1C0179FF4 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IPEAU_DXGK_DISPLAY_SCEN.c)
 */

__int64 __fastcall DxgkSimulateMonitorsIfNecessary(struct _LUID a1, unsigned int a2, int a3, __int64 a4, _BYTE *a5)
{
  __int64 v8; // rcx
  unsigned int v9; // r14d
  struct _LUID v10; // rbx
  int v11; // eax
  bool v12; // zf
  __int64 v13; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v15; // rax
  __int64 v17; // [rsp+30h] [rbp-D0h] BYREF
  unsigned int v18; // [rsp+38h] [rbp-C8h]
  __int64 v19; // [rsp+3Ch] [rbp-C4h]
  int v20; // [rsp+44h] [rbp-BCh]
  int v21; // [rsp+48h] [rbp-B8h]
  __int16 v22; // [rsp+4Ch] [rbp-B4h]
  unsigned int v23; // [rsp+50h] [rbp-B0h]
  struct _LUID v24; // [rsp+58h] [rbp-A8h] BYREF
  unsigned __int64 v25; // [rsp+60h] [rbp-A0h] BYREF
  _QWORD v26[12]; // [rsp+70h] [rbp-90h] BYREF
  _QWORD v27[8]; // [rsp+D0h] [rbp-30h] BYREF

  v24 = a1;
  memset(v27, 0, sizeof(v27));
  EtwActivityIdControl(3u, (LPGUID)&v27[1]);
  v9 = 0;
  v20 = -1;
  v10 = v24;
  v27[7] = MEMORY[0xFFFFF78000000014];
  LODWORD(v27[3]) = 40;
  v17 = 0LL;
  v18 = 0;
  v19 = 0LL;
  v21 = 257;
  v22 = 0;
  v23 = 0;
  if ( !a3 && (a4 == 2 || a4 == 5) || a3 == 1 && a4 == 1 )
    goto LABEL_8;
  if ( a3 == 10 )
  {
    if ( a4 == 2 )
    {
LABEL_8:
      DxgkSetPresenterViewMode(0LL, 0);
      v11 = HandleMonitorDepartureCase((__int64)&v17, &v24, a2, a3, a4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27);
      goto LABEL_22;
    }
    v12 = a4 == 1;
  }
  else
  {
    if ( !a3 && ((a4 - 1) & 0xFFFFFFFFFFFFFFFCuLL) == 0 && a4 != 2 || a3 == 1 && !a4 )
      goto LABEL_21;
    v12 = a3 == 3;
  }
  if ( v12 )
  {
LABEL_21:
    DxgkSetPresenterViewMode(0LL, 0);
    v11 = HandleMonitorArrival((__int64)&v17, &v24, a2, a3, a4, (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27);
    goto LABEL_22;
  }
  if ( a3 == 6 )
  {
    if ( a4 )
    {
      v13 = WdLogNewEntry5_WdAssertion(v8);
      *(_QWORD *)(v13 + 24) = 4659LL;
      WdLogEvent5_WdAssertion(v13);
    }
    v11 = HandleRapidHPDAction(
            (struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v17,
            &v24,
            a2,
            (struct _DXGK_DISPLAY_SCENARIO_CONTEXT *)v27);
LABEL_22:
    v9 = v11;
    if ( v11 < 0 )
      goto LABEL_30;
  }
  a5[1] = 0;
  if ( !HIDWORD(v17) )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    v15 = DXGGLOBAL::ReferenceAdapterByLuid(Global, v10, &v25);
    if ( v15 )
    {
      a5[1] = *((_BYTE *)v15 + 2032) & 1;
      DXGADAPTER::ReleaseReference(v15);
    }
  }
  if ( BYTE1(v21) )
  {
    if ( (_BYTE)v22 )
      *a5 = 1;
  }
  else
  {
    v9 = -1071774941;
  }
LABEL_30:
  memset(v26, 0, sizeof(v26));
  memset(&v26[1], 0, 36);
  v26[0] = 0x6000000002LL;
  v26[11] = __PAIR64__(HIDWORD(v17), v18);
  LODWORD(v26[6]) = BYTE1(v21) & 1 | (4 * (BYTE2(v21) & 1 | (2 * (HIBYTE(v21) & 1))));
  HIDWORD(v26[6]) = a3;
  v26[7] = a4;
  v26[8] = v10;
  v26[9] = __PAIR64__(v23, a2);
  v26[10] = __PAIR64__(v17, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v26);
  return v9;
}

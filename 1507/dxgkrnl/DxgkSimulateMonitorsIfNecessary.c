/*
 * XREFs of DxgkSimulateMonitorsIfNecessary @ 0x1C0151E80
 * Callers:
 *     DxgkPollDisplayChildren @ 0x1C012AED0 (DxgkPollDisplayChildren.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     __security_check_cookie @ 0x1C000FC20 (__security_check_cookie.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     DxgkWriteDiagEntry @ 0x1C009AC30 (DxgkWriteDiagEntry.c)
 *     DxgkSetPresenterViewMode @ 0x1C00B13F0 (DxgkSetPresenterViewMode.c)
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 *     ?HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z @ 0x1C0151500 (-HandleRapidHPDAction@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@I@Z.c)
 */

__int64 __fastcall DxgkSimulateMonitorsIfNecessary(struct _LUID a1, __int64 a2, __int64 a3, __int64 a4, _BYTE *a5)
{
  unsigned int v6; // edi
  unsigned int v7; // r12d
  unsigned int v9; // r14d
  int v10; // eax
  bool v11; // zf
  __int64 v12; // rax
  DXGGLOBAL *Global; // rax
  struct DXGADAPTER *v14; // rax
  __int64 v15; // rdx
  __int64 v16; // r8
  __int64 v17; // r9
  __int64 v19; // [rsp+30h] [rbp-91h] BYREF
  unsigned int v20; // [rsp+38h] [rbp-89h]
  __int64 v21; // [rsp+3Ch] [rbp-85h]
  int v22; // [rsp+44h] [rbp-7Dh]
  int v23; // [rsp+48h] [rbp-79h]
  char v24; // [rsp+4Ch] [rbp-75h]
  unsigned int v25; // [rsp+50h] [rbp-71h]
  struct _LUID v26; // [rsp+58h] [rbp-69h] BYREF
  _QWORD v27[12]; // [rsp+60h] [rbp-61h] BYREF

  v22 = -1;
  v26 = a1;
  v19 = 0LL;
  v6 = a3;
  v20 = 0;
  v7 = a2;
  v21 = 0LL;
  v23 = 257;
  v9 = 0;
  v24 = 0;
  v25 = 0;
  if ( !(_DWORD)a3 && a4 == 2 )
    goto LABEL_5;
  if ( (_DWORD)a3 == 1 )
  {
    if ( a4 == 1 )
    {
LABEL_5:
      DxgkSetPresenterViewMode(0LL, 0LL, a3, a4);
      v10 = HandleMonitorDepartureCase((__int64)&v19, &v26, v7, v6);
      goto LABEL_16;
    }
    v11 = a4 == 0;
  }
  else
  {
    if ( (_DWORD)a3 )
      goto LABEL_10;
    v11 = ((a4 - 1) & 0xFFFFFFFFFFFFFFFDuLL) == 0;
  }
  if ( v11 )
  {
LABEL_11:
    DxgkSetPresenterViewMode(0LL, 0LL, a3, a4);
    v10 = HandleMonitorArrival((__int64)&v19, &v26, v7, v6, a4);
    goto LABEL_16;
  }
LABEL_10:
  if ( (_DWORD)a3 == 3 )
    goto LABEL_11;
  if ( (_DWORD)a3 == 6 )
  {
    if ( a4 )
    {
      v12 = ((__int64 (__fastcall *)(_QWORD, _QWORD, _QWORD, _QWORD))WdLogNewEntry5_WdAssertion)(a1, a2, a3, a4);
      *(_QWORD *)(v12 + 24) = 4259LL;
      WdLogEvent5_WdAssertion(v12);
    }
    v10 = HandleRapidHPDAction((struct MONITORSCOUNT_CALLBACK_CONTEXT *const)&v19, &v26, v7, a4);
LABEL_16:
    v9 = v10;
    if ( v10 < 0 )
      goto LABEL_24;
  }
  a5[1] = 0;
  if ( !HIDWORD(v19) )
  {
    Global = DXGGLOBAL::GetGlobal(*(_QWORD *)&a1, a2, a3, a4);
    v14 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
    if ( v14 )
    {
      a5[1] = *((_BYTE *)v14 + 1888) & 1;
      DXGADAPTER::ReleaseReference(v14);
    }
  }
  if ( BYTE1(v23) )
  {
    if ( v24 )
      *a5 = 1;
  }
  else
  {
    v9 = -1071774941;
  }
LABEL_24:
  memset(v27, 0, sizeof(v27));
  memset(&v27[1], 0, 36);
  v27[0] = 0x6000000002LL;
  v27[11] = __PAIR64__(HIDWORD(v19), v20);
  LODWORD(v27[6]) = BYTE1(v23) & 1 | (4 * (BYTE2(v23) & 1 | (2 * (HIBYTE(v23) & 1))));
  HIDWORD(v27[6]) = v6;
  v27[7] = a4;
  v27[8] = a1;
  v27[9] = __PAIR64__(v25, v7);
  v27[10] = __PAIR64__(v19, v9);
  DxgkWriteDiagEntry((struct _DXGK_DIAG_HEADER *)v27, v15, v16, v17);
  return v9;
}

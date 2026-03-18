/*
 * XREFs of ?CopyRenewScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C017D524
 * Callers:
 *     ?HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0150824 (-HandleMonitorArrival@@YAJPEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z.c)
 *     ?HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@@_K@Z @ 0x1C0151318 (-HandleMonitorDepartureCase@@YAJQEAUMONITORSCOUNT_CALLBACK_CONTEXT@@AEBU_LUID@@IW4MONITOR_EVENT@.c)
 * Callees:
 *     ?Global@CCD_BTL@@SAAEAV1@XZ @ 0x1C0062EFC (-Global@CCD_BTL@@SAAEAV1@XZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C006307C (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0065150 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z @ 0x1C0066E5C (-CopyInheritScope@CCD_TOPOLOGY@@QEAAJAEBV1@@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 */

__int64 __fastcall CCD_TOPOLOGY::CopyRenewScope(void **this, const struct CCD_TOPOLOGY *a2)
{
  __int64 v3; // rdx
  __int64 v4; // rcx
  int ConnectivitySetId; // ebx
  __int64 v6; // r8
  __int64 v7; // r9
  CCD_BTL *v8; // rcx
  __int64 v9; // r8
  __int64 v10; // r9
  int v12; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  __int64 v14; // [rsp+30h] [rbp-38h]
  __int64 v15; // [rsp+38h] [rbp-30h]
  __int16 v16; // [rsp+40h] [rbp-28h]
  __int64 v17; // [rsp+48h] [rbp-20h]
  __int64 v18; // [rsp+50h] [rbp-18h]

  ConnectivitySetId = CCD_TOPOLOGY::CopyInheritScope(this, a2);
  if ( ConnectivitySetId >= 0 )
  {
    v12 = 0;
    v13 = 0LL;
    v14 = 0LL;
    v17 = 0LL;
    v18 = 0LL;
    v15 = 0LL;
    v16 = 0;
    CCD_BTL::Global(v4, v3, v6, v7);
    ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v8, (struct CCD_SET_STRING_ID *)&v12);
    if ( ConnectivitySetId >= 0 )
      ConnectivitySetId = CCD_TOPOLOGY::SetConnectivityHash(
                            (CCD_TOPOLOGY *)this,
                            (const struct CCD_SET_STRING_ID *)&v12,
                            v9,
                            v10);
    CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v12);
  }
  return (unsigned int)ConnectivitySetId;
}

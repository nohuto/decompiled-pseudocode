/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00630A0
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C00663CC (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
 * Callees:
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C006307C (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C0063620 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C0063694 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C0065150 (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C0066060 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C0067128 (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 */

__int64 __fastcall CCD_BTL::RetrieveActiveTopology(
        CCD_BTL *this,
        char a2,
        bool a3,
        struct CCD_TOPOLOGY *a4,
        CCD_BTL *a5)
{
  struct DXGGLOBAL *Global; // rax
  __int64 v9; // rbx
  __int64 v10; // rax
  unsigned __int16 v11; // cx
  int ConnectivitySetId; // eax
  __int64 v13; // rcx
  int v14; // eax
  _QWORD *v16; // rax
  struct CCD_TOPOLOGY *v17; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v18; // [rsp+28h] [rbp-48h]
  int v19; // [rsp+30h] [rbp-40h] BYREF
  __int64 v20; // [rsp+38h] [rbp-38h]
  __int64 v21; // [rsp+40h] [rbp-30h]
  __int64 v22; // [rsp+48h] [rbp-28h]
  __int16 v23; // [rsp+50h] [rbp-20h]
  __int64 v24; // [rsp+58h] [rbp-18h]
  __int64 v25; // [rsp+60h] [rbp-10h]

  CCD_TOPOLOGY::Clear(a4);
  v17 = a4;
  v18 = 0;
  Global = DXGGLOBAL::GetGlobal();
  LODWORD(v9) = DXGGLOBAL::IterateAdaptersWithCallback(
                  Global,
                  BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_,
                  &v17,
                  1LL);
  if ( (int)v9 >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v17);
    LODWORD(v9) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo(
                    (CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v17,
                    a3);
  }
  if ( (int)v9 >= 0 )
  {
    v10 = *((_QWORD *)a4 + 8);
    if ( v10 )
      v11 = *(_WORD *)(v10 + 20);
    else
      v11 = 0;
    if ( v18 > v11 )
      LODWORD(v9) = -1073741789;
    if ( a5 )
      *(_WORD *)a5 = v18;
    if ( (int)v9 >= 0 && !a2 )
    {
      v19 = 0;
      v20 = 0LL;
      v21 = 0LL;
      v24 = 0LL;
      v25 = 0LL;
      v22 = 0LL;
      v23 = 0;
      ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(a5, (struct CCD_SET_STRING_ID *)&v19);
      v9 = ConnectivitySetId;
      if ( ConnectivitySetId < 0
        || (v14 = CCD_TOPOLOGY::SetConnectivityHash(a4, (const struct CCD_SET_STRING_ID *)&v19), v9 = v14, v14 < 0) )
      {
        v16 = (_QWORD *)WdLogNewEntry5_WdError(v13);
        v16[3] = v9;
        v16[4] = &v19;
        v16[5] = a4;
        v16[6] = *((_QWORD *)a4 + 8);
        WdLogEvent5_WdError(v16);
      }
      CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v19);
    }
  }
  return (unsigned int)v9;
}

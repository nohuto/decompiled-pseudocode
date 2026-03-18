/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00631C0
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C0063D9C (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
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

__int64 __fastcall CCD_BTL::RetrieveAllPaths(CCD_BTL *this, struct CCD_TOPOLOGY *a2, unsigned __int16 *a3)
{
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  __int64 v7; // rcx
  unsigned __int16 v8; // dx
  CCD_BTL *v9; // rcx
  int ConnectivitySetId; // eax
  __int64 v11; // rcx
  __int64 v12; // rbx
  int v13; // eax
  _QWORD *v14; // rax
  struct CCD_TOPOLOGY *v15; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v16; // [rsp+28h] [rbp-48h]
  int v17; // [rsp+30h] [rbp-40h] BYREF
  __int64 v18; // [rsp+38h] [rbp-38h]
  __int64 v19; // [rsp+40h] [rbp-30h]
  __int64 v20; // [rsp+48h] [rbp-28h]
  __int16 v21; // [rsp+50h] [rbp-20h]
  __int64 v22; // [rsp+58h] [rbp-18h]
  __int64 v23; // [rsp+60h] [rbp-10h]

  CCD_TOPOLOGY::Clear(a2);
  v15 = a2;
  v16 = 0;
  Global = DXGGLOBAL::GetGlobal();
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             Global,
             BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_,
             &v15,
             1LL);
  if ( (int)result >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v15);
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v15, 1);
    if ( (int)result >= 0 )
    {
      v7 = *((_QWORD *)a2 + 8);
      if ( v7 )
        v8 = *(_WORD *)(v7 + 20);
      else
        v8 = 0;
      v9 = (CCD_BTL *)v16;
      if ( v16 > v8 )
        result = 3221225507LL;
      if ( a3 )
        *a3 = v16;
      if ( (int)result >= 0 )
      {
        v17 = 0;
        v18 = 0LL;
        v19 = 0LL;
        v22 = 0LL;
        v23 = 0LL;
        v20 = 0LL;
        v21 = 0;
        ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v9, (struct CCD_SET_STRING_ID *)&v17);
        v12 = ConnectivitySetId;
        if ( ConnectivitySetId < 0
          || (v13 = CCD_TOPOLOGY::SetConnectivityHash(a2, (const struct CCD_SET_STRING_ID *)&v17), v12 = v13, v13 < 0) )
        {
          v14 = (_QWORD *)WdLogNewEntry5_WdError(v11);
          v14[3] = v12;
          v14[4] = &v17;
          v14[5] = a2;
          v14[6] = *((_QWORD *)a2 + 8);
          WdLogEvent5_WdError(v14);
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v17);
        return (unsigned int)v12;
      }
    }
  }
  return result;
}

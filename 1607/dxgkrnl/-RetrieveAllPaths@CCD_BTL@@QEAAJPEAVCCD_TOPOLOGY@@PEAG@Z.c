/*
 * XREFs of ?RetrieveAllPaths@CCD_BTL@@QEAAJPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6BA8
 * Callers:
 *     ?RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z @ 0x1C008CCA8 (-RetrieveAllPaths@CCD_TOPOLOGY@@QEAAJPEAG@Z.c)
 * Callees:
 *     ?SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z @ 0x1C008BC5C (-SetConnectivityHash@CCD_TOPOLOGY@@QEAAJAEBVCCD_SET_STRING_ID@@@Z.c)
 *     ?Clear@CCD_TOPOLOGY@@QEAAXXZ @ 0x1C008CC40 (-Clear@CCD_TOPOLOGY@@QEAAXXZ.c)
 *     ?_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ @ 0x1C008D3C4 (-_SortPathsModalityByPriorityOrder@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJXZ.c)
 *     ?_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z @ 0x1C008D438 (-_FillActiveDWMCloneGroupInfo@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJ_N@Z.c)
 *     ?_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ @ 0x1C008E13C (-_Cleanup@CCD_SET_STRING_ID@@AEAAXXZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C00A3D30 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z @ 0x1C00B6B84 (-RetrieveConnectivitySetId@CCD_BTL@@QEAAJPEAVCCD_SET_STRING_ID@@@Z.c)
 */

__int64 __fastcall CCD_BTL::RetrieveAllPaths(CCD_BTL *this, void **a2, unsigned __int16 *a3)
{
  __int64 v5; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 result; // rax
  _WORD *v8; // rcx
  unsigned __int16 v9; // dx
  CCD_BTL *v10; // rcx
  int ConnectivitySetId; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  int v14; // eax
  _QWORD *v15; // rax
  void **v16; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v17; // [rsp+28h] [rbp-48h]
  int v18; // [rsp+30h] [rbp-40h] BYREF
  __int64 v19; // [rsp+38h] [rbp-38h]
  __int64 v20; // [rsp+40h] [rbp-30h]
  __int64 v21; // [rsp+48h] [rbp-28h]
  __int16 v22; // [rsp+50h] [rbp-20h]
  __int64 v23; // [rsp+58h] [rbp-18h]
  __int64 v24; // [rsp+60h] [rbp-10h]

  CCD_TOPOLOGY::Clear(a2);
  v16 = a2;
  v17 = 0;
  Global = DXGGLOBAL::GetGlobal(v5);
  result = DXGGLOBAL::IterateAdaptersWithCallback(
             (__int64)Global,
             (__int64 (__fastcall *)(_QWORD *, __int64))BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectAllPathsAdaptersCallback_1_,
             (__int64)&v16,
             1);
  if ( (int)result >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v16);
    result = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo((CCD_TOPOLOGY **)&v16, 1);
    if ( (int)result >= 0 )
    {
      v8 = a2[8];
      if ( v8 )
        v9 = v8[10];
      else
        v9 = 0;
      v10 = (CCD_BTL *)v17;
      if ( v17 > v9 )
        result = 3221225507LL;
      if ( a3 )
        *a3 = v17;
      if ( (int)result >= 0 )
      {
        v18 = 0;
        v19 = 0LL;
        v20 = 0LL;
        v23 = 0LL;
        v24 = 0LL;
        v21 = 0LL;
        v22 = 0;
        ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(v10, (struct CCD_SET_STRING_ID *)&v18);
        v13 = ConnectivitySetId;
        if ( ConnectivitySetId < 0
          || (v14 = CCD_TOPOLOGY::SetConnectivityHash((CCD_TOPOLOGY *)a2, (const struct CCD_SET_STRING_ID *)&v18),
              v13 = v14,
              v14 < 0) )
        {
          v15 = (_QWORD *)WdLogNewEntry5_WdError(v12);
          v15[3] = v13;
          v15[4] = &v18;
          v15[5] = a2;
          v15[6] = a2[8];
          WdLogEvent5_WdError(v15);
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v18);
        return (unsigned int)v13;
      }
    }
  }
  return result;
}

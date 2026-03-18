/*
 * XREFs of ?RetrieveActiveTopology@CCD_BTL@@QEAAJ_N0PEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C00B6A44
 * Callers:
 *     ?RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z @ 0x1C008A078 (-RetrieveActive@CCD_TOPOLOGY@@QEAAJ_N00PEAG@Z.c)
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

__int64 __fastcall CCD_BTL::RetrieveActiveTopology(CCD_BTL *this, char a2, char a3, void **a4, CCD_BTL *a5)
{
  __int64 v8; // rcx
  struct DXGGLOBAL *Global; // rax
  __int64 (__fastcall *v10)(DXGADAPTER *, CCD_BTL_ACTIVE_PATHS_COLLECTOR *); // rdx
  __int64 v11; // rbx
  _WORD *v12; // rax
  unsigned __int16 v13; // cx
  int ConnectivitySetId; // eax
  __int64 v15; // rcx
  int v16; // eax
  _QWORD *v18; // rax
  void **v19; // [rsp+20h] [rbp-50h] BYREF
  unsigned __int16 v20; // [rsp+28h] [rbp-48h]
  int v21; // [rsp+30h] [rbp-40h] BYREF
  __int64 v22; // [rsp+38h] [rbp-38h]
  __int64 v23; // [rsp+40h] [rbp-30h]
  __int64 v24; // [rsp+48h] [rbp-28h]
  __int16 v25; // [rsp+50h] [rbp-20h]
  __int64 v26; // [rsp+58h] [rbp-18h]
  __int64 v27; // [rsp+60h] [rbp-10h]

  CCD_TOPOLOGY::Clear(a4);
  v19 = a4;
  v20 = 0;
  if ( (*((_DWORD *)a4 + 21) & 2) != 0 )
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    v10 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_0_;
  }
  else
  {
    Global = DXGGLOBAL::GetGlobal(v8);
    v10 = BtlPreAcquireSharedAccess__CCD_BTL_ACTIVE_PATHS_COLLECTOR::_CollectActiveAdaptersCallback_1_;
  }
  LODWORD(v11) = DXGGLOBAL::IterateAdaptersWithCallback(
                   (__int64)Global,
                   (__int64 (__fastcall *)(_QWORD *, __int64))v10,
                   (__int64)&v19,
                   1);
  if ( (int)v11 >= 0 )
  {
    CCD_BTL_ACTIVE_PATHS_COLLECTOR::_SortPathsModalityByPriorityOrder((CCD_BTL_ACTIVE_PATHS_COLLECTOR *)&v19);
    LODWORD(v11) = CCD_BTL_ACTIVE_PATHS_COLLECTOR::_FillActiveDWMCloneGroupInfo((CCD_TOPOLOGY **)&v19, a3);
    if ( (int)v11 >= 0 )
    {
      v12 = a4[8];
      if ( v12 )
        v13 = v12[10];
      else
        v13 = 0;
      if ( v20 > v13 )
        LODWORD(v11) = -1073741789;
      if ( a5 )
        *(_WORD *)a5 = v20;
      if ( (int)v11 >= 0 && !a2 )
      {
        v21 = 0;
        v22 = 0LL;
        v23 = 0LL;
        v26 = 0LL;
        v27 = 0LL;
        v24 = 0LL;
        v25 = 0;
        ConnectivitySetId = CCD_BTL::RetrieveConnectivitySetId(a5, (struct CCD_SET_STRING_ID *)&v21);
        v11 = ConnectivitySetId;
        if ( ConnectivitySetId < 0
          || (v16 = CCD_TOPOLOGY::SetConnectivityHash((CCD_TOPOLOGY *)a4, (const struct CCD_SET_STRING_ID *)&v21),
              v11 = v16,
              v16 < 0) )
        {
          v18 = (_QWORD *)WdLogNewEntry5_WdError(v15);
          v18[3] = v11;
          v18[4] = &v21;
          v18[5] = a4;
          v18[6] = a4[8];
          WdLogEvent5_WdError(v18);
        }
        CCD_SET_STRING_ID::_Cleanup((CCD_SET_STRING_ID *)&v21);
      }
    }
  }
  return (unsigned int)v11;
}

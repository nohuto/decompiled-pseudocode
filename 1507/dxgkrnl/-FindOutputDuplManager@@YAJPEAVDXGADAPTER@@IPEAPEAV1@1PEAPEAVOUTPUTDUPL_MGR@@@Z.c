/*
 * XREFs of ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C008EB3C
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C008F594 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1P6AJPEAV3@21@Z@Z @ 0x1C00AD274 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@1I@Z@Z @ 0x1C00DB07C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_M.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C01549EC (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@1@Z@Z @ 0x1C0155068 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C015519C (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPE.c)
 *     DxgkCreateOutputDupl @ 0x1C0155520 (DxgkCreateOutputDupl.c)
 *     OutputDuplGetDebugInfo @ 0x1C015624C (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C0156310 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C008ACE4 (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008CBD0 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?FindIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAU_LUID@@0PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C013F70C (-FindIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAU_LUID@@0PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall FindOutputDuplManager(
        struct DXGADAPTER *a1,
        __int64 a2,
        struct DXGADAPTER **a3,
        struct DXGADAPTER **a4,
        struct OUTPUTDUPL_MGR **a5)
{
  __int64 v6; // r15
  int v9; // eax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  __int64 v14; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v17; // rdx
  __int64 v18; // r8
  __int64 v19; // r9
  __int64 v20; // rax
  __int64 PairingAdapters; // rbp
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  DXGADAPTER *v27; // rcx
  __int64 v28; // rax
  struct DXGADAPTER *v29; // rax
  DXGGLOBAL *v30; // rax
  _QWORD *v31; // rax
  __int64 v32; // rax
  struct _LUID v33; // [rsp+20h] [rbp-38h] BYREF
  struct DXGADAPTER *v34; // [rsp+28h] [rbp-30h] BYREF
  DXGADAPTER *v35; // [rsp+30h] [rbp-28h]
  struct _LUID v36; // [rsp+60h] [rbp+8h] BYREF

  v6 = (unsigned int)a2;
  if ( (*((_DWORD *)a1 + 71) & 0x80u) != 0 )
  {
    v35 = 0LL;
    v34 = a1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1, a2, (__int64)a3, (__int64)a4);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))lambda_64442d6d833ab582a74ea50372b0cb19_::_helper_func_cdecl_,
      (__int64)&v34,
      1LL);
    if ( v35 )
    {
      PairingAdapters = (int)DxgkpGetPairingAdapters(v35, 0LL, a3, a4);
      DXGADAPTER::ReleaseReference(v35);
      if ( (int)PairingAdapters >= 0 )
      {
        if ( !*a3 || !*a4 )
        {
          v28 = WdLogNewEntry5_WdAssertion(v23, v22, v24, v25);
          *(_QWORD *)(v28 + 24) = 2944LL;
          WdLogEvent5_WdAssertion(v28);
        }
        v29 = *a4;
        v33 = *(struct _LUID *)((char *)v34 + 252);
        v36 = *(struct _LUID *)((char *)v29 + 252);
        v30 = DXGGLOBAL::GetGlobal(*(_QWORD *)&v36, v22, v24, v25);
        LODWORD(PairingAdapters) = DXGGLOBAL::FindIndirectOutputDuplMgr(v30, &v33, &v36, a5);
        if ( (int)PairingAdapters < 0 )
        {
          if ( *a4 )
          {
            DXGADAPTER::ReleaseReference(*a4);
            *a4 = 0LL;
          }
          if ( *a3 )
          {
            DXGADAPTER::ReleaseReference(*a3);
            *a3 = 0LL;
          }
        }
      }
      else
      {
        v26 = (_QWORD *)WdLogNewEntry5_WdError(v23);
        v27 = v35;
        v26[4] = 0LL;
        v26[3] = v27;
        v26[5] = PairingAdapters;
        WdLogEvent5_WdError(v26);
      }
      return (unsigned int)PairingAdapters;
    }
    else
    {
      v20 = WdLogNewEntry5_WdWarning(0LL, v17, v18, v19);
      *(_QWORD *)(v20 + 24) = 2924LL;
      WdLogEvent5_WdWarning(v20);
      return 3221226021LL;
    }
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, (unsigned int)a2, a3, a4);
    v14 = v9;
    if ( v9 < 0 )
    {
      v31 = (_QWORD *)WdLogNewEntry5_WdError(v11);
      v31[3] = a1;
      v31[4] = v6;
      v31[5] = v14;
      WdLogEvent5_WdError(v31);
      return (unsigned int)v14;
    }
    else
    {
      if ( !*a3 || !*a4 )
      {
        v32 = WdLogNewEntry5_WdAssertion(v11, v10, v12, v13);
        *(_QWORD *)(v32 + 24) = 2984LL;
        WdLogEvent5_WdAssertion(v32);
      }
      *a5 = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)*a4 + 247) + 104LL);
      return 0LL;
    }
  }
}

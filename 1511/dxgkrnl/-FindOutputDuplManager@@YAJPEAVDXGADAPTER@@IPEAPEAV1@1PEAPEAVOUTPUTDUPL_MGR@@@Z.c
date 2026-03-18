/*
 * XREFs of ?FindOutputDuplManager@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C009FD44
 * Callers:
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@ZPEBU2@PEBU3@II@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DXGKARG_SETPOINTERSHAPE@@II@Z12IIP6AJPEAV3@312II@Z@Z @ 0x1C009FC40 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAJPEBU_DXGKARG_SETPOINTERPOSITION@@PEBU_DX.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXI@ZIP6AJPEAV3@1I@Z@Z @ 0x1C00BBA7C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXI@ZI@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_M.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2@@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@Z1P6AJPEAV3@21@Z@Z @ 0x1C00C04E8 (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXPEBU_DXGKARG_SETPOINTERPOSITION@@@ZPEBU2.c)
 *     ?OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PEAPEAV2@@Z @ 0x1C0158AF0 (-OutputDuplPresentInternal@@YAJPEAVDXGADAPTER@@PEAVDXGCONTEXT@@PEAU_D3DKMT_OUTPUTDUPLPRESENT@@PE.c)
 *     ?RunForAdapter@?$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR@@EAAXXZP6AJPEAV3@1@Z@Z @ 0x1C015934C (-RunForAdapter@-$OutputDuplThunks@P8OUTPUTDUPL_MGR@@EAAXXZ@@SAJPEAVDXGADAPTER@@IP8OUTPUTDUPL_MGR.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C0159480 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPE.c)
 *     DxgkCreateOutputDupl @ 0x1C0159800 (DxgkCreateOutputDupl.c)
 *     OutputDuplGetDebugInfo @ 0x1C015A52C (OutputDuplGetDebugInfo.c)
 *     OutputDuplGetDiagnosticBuffer @ 0x1C015A5F0 (OutputDuplGetDiagnosticBuffer.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z @ 0x1C008A660 (-DxgkpGetPairingAdapters@@YAJPEAVDXGADAPTER@@IPEAPEAV1@1@Z.c)
 *     ?IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS@@@Z @ 0x1C009735C (-IterateAdaptersWithCallback@DXGGLOBAL@@QEAAJP6AJPEAVDXGADAPTER@@PEAX@Z1W4_ITERATE_ADAPTER_FLAGS.c)
 *     ?FindIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAU_LUID@@0PEAPEAVOUTPUTDUPL_MGR@@@Z @ 0x1C0145BA0 (-FindIndirectOutputDuplMgr@DXGGLOBAL@@QEAAJPEAU_LUID@@0PEAPEAVOUTPUTDUPL_MGR@@@Z.c)
 */

__int64 __fastcall FindOutputDuplManager(
        struct DXGADAPTER *a1,
        unsigned int a2,
        struct DXGADAPTER **a3,
        struct DXGADAPTER **a4,
        struct OUTPUTDUPL_MGR **a5)
{
  __int64 v7; // r15
  int v9; // eax
  __int64 v10; // rcx
  __int64 v11; // r14
  struct DXGGLOBAL *Global; // rax
  __int64 v14; // rdx
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  __int64 PairingAdapters; // rbp
  __int64 v19; // rcx
  _QWORD *v20; // rax
  DXGADAPTER *v21; // rcx
  __int64 v22; // rax
  struct DXGADAPTER *v23; // rax
  DXGGLOBAL *v24; // rax
  _QWORD *v25; // rax
  __int64 v26; // rax
  struct _LUID v27; // [rsp+20h] [rbp-38h] BYREF
  struct DXGADAPTER *v28; // [rsp+28h] [rbp-30h] BYREF
  DXGADAPTER *v29; // [rsp+30h] [rbp-28h]
  struct _LUID v30; // [rsp+60h] [rbp+8h] BYREF

  v7 = a2;
  if ( (*((_DWORD *)a1 + 71) & 0x100) != 0 )
  {
    v29 = 0LL;
    v28 = a1;
    Global = DXGGLOBAL::GetGlobal((__int64)a1);
    DXGGLOBAL::IterateAdaptersWithCallback(
      (__int64)Global,
      (__int64 (__fastcall *)(_QWORD *, __int64))sub_1C0156460,
      (__int64)&v28,
      1);
    if ( v29 )
    {
      PairingAdapters = (int)DxgkpGetPairingAdapters(v29, 0, a3, a4);
      DXGADAPTER::ReleaseReference(v29);
      if ( (int)PairingAdapters >= 0 )
      {
        if ( !*a3 || !*a4 )
        {
          v22 = WdLogNewEntry5_WdAssertion(v19);
          *(_QWORD *)(v22 + 24) = 2919LL;
          WdLogEvent5_WdAssertion(v22);
        }
        v23 = *a4;
        v27 = *(struct _LUID *)((char *)v28 + 252);
        v30 = *(struct _LUID *)((char *)v23 + 252);
        v24 = DXGGLOBAL::GetGlobal(*(_QWORD *)&v30);
        LODWORD(PairingAdapters) = DXGGLOBAL::FindIndirectOutputDuplMgr(v24, &v27, &v30, a5);
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
        v20 = (_QWORD *)WdLogNewEntry5_WdError(v19);
        v21 = v29;
        v20[4] = 0LL;
        v20[3] = v21;
        v20[5] = PairingAdapters;
        WdLogEvent5_WdError(v20);
      }
      return (unsigned int)PairingAdapters;
    }
    else
    {
      v17 = WdLogNewEntry5_WdWarning(0LL, v14, v15, v16);
      *(_QWORD *)(v17 + 24) = 2899LL;
      WdLogEvent5_WdWarning(v17);
      return 3221226021LL;
    }
  }
  else
  {
    v9 = DxgkpGetPairingAdapters(a1, a2, a3, a4);
    v11 = v9;
    if ( v9 < 0 )
    {
      v25 = (_QWORD *)WdLogNewEntry5_WdError(v10);
      v25[3] = a1;
      v25[4] = v7;
      v25[5] = v11;
      WdLogEvent5_WdError(v25);
      return (unsigned int)v11;
    }
    else
    {
      if ( a3 && !*a3 || a4 && !*a4 )
      {
        v26 = WdLogNewEntry5_WdAssertion(v10);
        *(_QWORD *)(v26 + 24) = 2959LL;
        WdLogEvent5_WdAssertion(v26);
      }
      *a5 = *(struct OUTPUTDUPL_MGR **)(*((_QWORD *)*a4 + 248) + 128LL);
      return 0LL;
    }
  }
}

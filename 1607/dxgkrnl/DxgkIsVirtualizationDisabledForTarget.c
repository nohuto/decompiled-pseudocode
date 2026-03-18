/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C00C0D60
 * Callers:
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C008B4F0 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C008D6CC (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BA730 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00C06E0 (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00C33E0 (DxgkDisplayConfigDeviceInfo.c)
 *     ??RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z @ 0x1C01AC31C (--RBTL_TOPOLOGY_CONSTRUCTOR@@QEAAJIPEAVCCD_TOPOLOGY@@PEAG@Z.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C0082A44 (IsVirtualizationDisabledForTarget.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00C219C (DmmGetVideoOutputTechnology.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(
        __int64 a1,
        unsigned int a2,
        bool *a3,
        bool *a4,
        __int64 a5,
        __int64 a6)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v10; // rax
  __int64 v11; // rcx
  struct DXGADAPTER *v12; // rdi
  __int64 v13; // rcx
  int v14; // eax
  __int64 v15; // rcx
  __int64 v16; // rbx
  int VideoOutputTechnology; // eax
  __int64 v19; // rcx
  __int64 v20; // rax
  __int64 v21; // rax
  _QWORD *v22; // rax
  unsigned __int64 v23; // [rsp+20h] [rbp-78h] BYREF
  _BYTE v24[80]; // [rsp+30h] [rbp-68h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v10 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a1, &v23);
  v12 = v10;
  if ( v10 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v10) )
    {
      v21 = WdLogNewEntry5_WdAssertion(v13);
      *(_QWORD *)(v21 + 24) = 6734LL;
      WdLogEvent5_WdAssertion(v21);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v12, 0LL);
    DXGADAPTER::ReleaseReference(v12);
    v14 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
    v16 = v14;
    if ( v14 < 0 )
    {
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v15);
      v22[3] = SHIDWORD(a1);
      v22[4] = (unsigned int)a1;
      v22[5] = v16;
    }
    else
    {
      if ( !a5
        || (VideoOutputTechnology = DmmGetVideoOutputTechnology(v12, a2, a5, a6),
            v16 = VideoOutputTechnology,
            VideoOutputTechnology >= 0) )
      {
        LODWORD(v16) = IsVirtualizationDisabledForTarget((__int64)v12, a2, a3, a4);
LABEL_7:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
        return (unsigned int)v16;
      }
      v22 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v22[3] = v12;
      v22[4] = v16;
    }
    WdLogEvent5_WdError(v22);
    goto LABEL_7;
  }
  v20 = WdLogNewEntry5_WdError(v11);
  *(_QWORD *)(v20 + 24) = SHIDWORD(a1);
  *(_QWORD *)(v20 + 32) = (unsigned int)a1;
  WdLogEvent5_WdError(v20);
  return 3221225485LL;
}

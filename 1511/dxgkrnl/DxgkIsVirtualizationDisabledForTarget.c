/*
 * XREFs of DxgkIsVirtualizationDisabledForTarget @ 0x1C00A8EB0
 * Callers:
 *     ?_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@@_N2@Z @ 0x1C00A1E9C (-_ProcessVidPnPath@CCD_BTL_ACTIVE_PATHS_COLLECTOR@@AEAAJPEAVDXGADAPTER@@PEAVDMMVIDPNPRESENTPATH@.c)
 *     ?MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z @ 0x1C00A3190 (-MakeCloneGroupContentResolutionValid@CCD_TOPOLOGY@@QEAAJI@Z.c)
 *     ?ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z @ 0x1C00A883C (-ConvertPathModalityToDisplayConfig@@YAJPEAU_D3DKMT_GETPATHSMODALITY@@HHHHHPEAU_QDC_CONTEXT@@@Z.c)
 *     DxgkDisplayConfigDeviceInfo @ 0x1C00AA880 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BC590 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     IsVirtualizationDisabledForTarget @ 0x1C00A16BC (IsVirtualizationDisabledForTarget.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00AA170 (DmmGetVideoOutputTechnology.c)
 */

__int64 __fastcall DxgkIsVirtualizationDisabledForTarget(__int64 a1, unsigned int a2, bool *a3, bool *a4, __int64 a5)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v9; // rax
  __int64 v10; // rcx
  struct DXGADAPTER *v11; // rdi
  __int64 v12; // rcx
  int v13; // eax
  __int64 v14; // rcx
  __int64 v15; // rbx
  int VideoOutputTechnology; // eax
  __int64 v18; // rcx
  __int64 v19; // rax
  __int64 v20; // rax
  _QWORD *v21; // rax
  _BYTE v22[64]; // [rsp+20h] [rbp-58h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v9 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a1);
  v11 = v9;
  if ( v9 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v9) )
    {
      v20 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v20 + 24) = 6393LL;
      WdLogEvent5_WdAssertion(v20);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v11, 0LL);
    DXGADAPTER::ReleaseReference(v11);
    v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
    v15 = v13;
    if ( v13 < 0 )
    {
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v14);
      v21[3] = SHIDWORD(a1);
      v21[4] = (unsigned int)a1;
      v21[5] = v15;
    }
    else
    {
      if ( !a5
        || (VideoOutputTechnology = DmmGetVideoOutputTechnology(v11, a2, a5, 0LL),
            v15 = VideoOutputTechnology,
            VideoOutputTechnology >= 0) )
      {
        LODWORD(v15) = IsVirtualizationDisabledForTarget(v11, a2, a3, a4);
LABEL_7:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
        return (unsigned int)v15;
      }
      v21 = (_QWORD *)WdLogNewEntry5_WdError(v18);
      v21[3] = v11;
      v21[4] = v15;
    }
    WdLogEvent5_WdError(v21);
    goto LABEL_7;
  }
  v19 = WdLogNewEntry5_WdError(v10);
  *(_QWORD *)(v19 + 24) = SHIDWORD(a1);
  *(_QWORD *)(v19 + 32) = (unsigned int)a1;
  WdLogEvent5_WdError(v19);
  return 3221225485LL;
}

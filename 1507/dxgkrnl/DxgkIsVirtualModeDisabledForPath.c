/*
 * XREFs of DxgkIsVirtualModeDisabledForPath @ 0x1C0062720
 * Callers:
 *     DxgkDisplayConfigDeviceInfo @ 0x1C0062960 (DxgkDisplayConfigDeviceInfo.c)
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00A9150 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     DmmGetVideoOutputTechnology @ 0x1C00627F0 (DmmGetVideoOutputTechnology.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 *     MonitorIsMonitorVirtualModeDisabled @ 0x1C008D39C (MonitorIsMonitorVirtualModeDisabled.c)
 */

__int64 __fastcall DxgkIsVirtualModeDisabledForPath(struct _LUID a1, unsigned int a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v8; // rax
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rdi
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  int v15; // eax
  __int64 v16; // rcx
  __int64 v17; // rbx
  int VideoOutputTechnology; // eax
  __int64 v19; // rcx
  __int64 v21; // rax
  __int64 v22; // rax
  _QWORD *v23; // rax
  _BYTE v24[64]; // [rsp+20h] [rbp-58h] BYREF

  Global = DXGGLOBAL::GetGlobal();
  v8 = DXGGLOBAL::ReferenceAdapterByLuid(Global, a1);
  v10 = v8;
  if ( v8 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v8) )
    {
      v22 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v22 + 24) = 5975LL;
      WdLogEvent5_WdAssertion(v22);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v24, v10, 0LL);
    DXGADAPTER::ReleaseReference(v10);
    v15 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v24);
    v17 = v15;
    if ( v15 < 0 )
    {
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v16);
      v23[3] = a1.HighPart;
      v23[4] = a1.LowPart;
      v23[5] = v17;
    }
    else
    {
      if ( !a4
        || (VideoOutputTechnology = DmmGetVideoOutputTechnology(v10, a2, a4, 0LL),
            v17 = VideoOutputTechnology,
            VideoOutputTechnology >= 0) )
      {
        LODWORD(v17) = MonitorIsMonitorVirtualModeDisabled(v10, a2, a3);
LABEL_8:
        COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v24);
        return (unsigned int)v17;
      }
      v23 = (_QWORD *)WdLogNewEntry5_WdError(v19);
      v23[3] = v10;
      v23[4] = v17;
    }
    WdLogEvent5_WdError(v23);
    goto LABEL_8;
  }
  v21 = WdLogNewEntry5_WdError(v9);
  *(_QWORD *)(v21 + 24) = a1.HighPart;
  *(_QWORD *)(v21 + 32) = a1.LowPart;
  WdLogEvent5_WdError(v21);
  return 3221225485LL;
}

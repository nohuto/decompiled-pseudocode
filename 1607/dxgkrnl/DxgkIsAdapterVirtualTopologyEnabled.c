/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C014EAF8
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BA730 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAX_K@Z @ 0x1C0008780 (-ReleaseReference@DXGADAPTER@@QEAAX_K@Z.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00094F0 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z @ 0x1C00A3C10 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@PEA_K@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 */

__int64 __fastcall DxgkIsAdapterVirtualTopologyEnabled(__int64 a1, _DWORD *a2)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v4; // rax
  __int64 v5; // rcx
  struct DXGADAPTER *v6; // rdi
  __int64 v7; // rax
  __int64 v9; // rcx
  __int64 v10; // rax
  int v11; // eax
  __int64 v12; // rcx
  __int64 v13; // rbx
  _QWORD *v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  _BYTE v17[80]; // [rsp+20h] [rbp-58h] BYREF
  unsigned __int64 v19; // [rsp+90h] [rbp+18h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a1, &v19);
  v6 = v4;
  if ( v4 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v4) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 6822LL;
      WdLogEvent5_WdAssertion(v10);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6, 0LL);
    DXGADAPTER::ReleaseReference(v6);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    v13 = v11;
    if ( v11 >= 0 )
    {
      v15 = *((_QWORD *)v6 + 266);
      if ( v15 )
      {
        *a2 = *(unsigned __int8 *)(v15 + 134);
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v16 + 24) = 6844LL;
        WdLogEvent5_WdError(v16);
        LODWORD(v13) = -1073741811;
      }
    }
    else
    {
      v14 = (_QWORD *)WdLogNewEntry5_WdError(v12);
      v14[3] = SHIDWORD(a1);
      v14[4] = (unsigned int)a1;
      v14[5] = v13;
      WdLogEvent5_WdError(v14);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
    return (unsigned int)v13;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v5);
    *(_QWORD *)(v7 + 24) = SHIDWORD(a1);
    *(_QWORD *)(v7 + 32) = (unsigned int)a1;
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}

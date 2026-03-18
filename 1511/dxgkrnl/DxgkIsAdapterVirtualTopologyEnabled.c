/*
 * XREFs of DxgkIsAdapterVirtualTopologyEnabled @ 0x1C0130554
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00BC590 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C0003184 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C00031F4 (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0003940 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C00039D0 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0003A40 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C0076C30 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C00971C0 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
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
  _BYTE v17[64]; // [rsp+20h] [rbp-48h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1);
  v4 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a1);
  v6 = v4;
  if ( v4 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v4) )
    {
      v10 = WdLogNewEntry5_WdAssertion(v9);
      *(_QWORD *)(v10 + 24) = 31420LL;
      WdLogEvent5_WdAssertion(v10);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, v6, 0LL);
    DXGADAPTER::ReleaseReference(v6);
    v11 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
    v13 = v11;
    if ( v11 >= 0 )
    {
      v15 = *((_QWORD *)v6 + 248);
      if ( v15 )
      {
        *a2 = *(unsigned __int8 *)(v15 + 158);
      }
      else
      {
        v16 = WdLogNewEntry5_WdError(v12);
        *(_QWORD *)(v16 + 24) = 31442LL;
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

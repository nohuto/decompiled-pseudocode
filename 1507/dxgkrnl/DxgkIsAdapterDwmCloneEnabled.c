/*
 * XREFs of DxgkIsAdapterDwmCloneEnabled @ 0x1C0129EC4
 * Callers:
 *     DxgkConvertLegacyQDCAdapterAndIdToActual @ 0x1C00A9150 (DxgkConvertLegacyQDCAdapterAndIdToActual.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ?ReleaseReference@DXGADAPTER@@QEAAXXZ @ 0x1C00024C0 (-ReleaseReference@DXGADAPTER@@QEAAXXZ.c)
 *     ?IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ @ 0x1C000250C (-IsCoreResourceSharedOwner@DXGADAPTER@@QEBAEXZ.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z @ 0x1C008ABA8 (-ReferenceAdapterByLuid@DXGGLOBAL@@QEAAPEAVDXGADAPTER@@U_LUID@@@Z.c)
 */

__int64 __fastcall DxgkIsAdapterDwmCloneEnabled(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  DXGGLOBAL *Global; // rax
  DXGADAPTER *v6; // rax
  __int64 v7; // rcx
  struct DXGADAPTER *v8; // rdi
  __int64 v9; // rax
  __int64 v11; // rdx
  __int64 v12; // rcx
  __int64 v13; // r8
  __int64 v14; // r9
  __int64 v15; // rax
  int v16; // eax
  __int64 v17; // rcx
  __int64 v18; // rbx
  _QWORD *v19; // rax
  __int64 v20; // rax
  __int64 v21; // rax
  _BYTE v22[64]; // [rsp+20h] [rbp-48h] BYREF

  Global = DXGGLOBAL::GetGlobal(a1, (__int64)a2, a3, a4);
  v6 = DXGGLOBAL::ReferenceAdapterByLuid(Global, (struct _LUID)a1);
  v8 = v6;
  if ( v6 )
  {
    if ( DXGADAPTER::IsCoreResourceSharedOwner(v6) )
    {
      v15 = WdLogNewEntry5_WdAssertion(v12, v11, v13, v14);
      *(_QWORD *)(v15 + 24) = 30717LL;
      WdLogEvent5_WdAssertion(v15);
    }
    COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v22, v8, 0LL);
    DXGADAPTER::ReleaseReference(v8);
    v16 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v22);
    v18 = v16;
    if ( v16 >= 0 )
    {
      v20 = *((_QWORD *)v8 + 247);
      if ( v20 )
      {
        *a2 = *(unsigned __int8 *)(v20 + 133);
      }
      else
      {
        v21 = WdLogNewEntry5_WdError(v17);
        *(_QWORD *)(v21 + 24) = 30739LL;
        WdLogEvent5_WdError(v21);
        LODWORD(v18) = -1073741811;
      }
    }
    else
    {
      v19 = (_QWORD *)WdLogNewEntry5_WdError(v17);
      v19[3] = SHIDWORD(a1);
      v19[4] = (unsigned int)a1;
      v19[5] = v18;
      WdLogEvent5_WdError(v19);
    }
    COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v22);
    return (unsigned int)v18;
  }
  else
  {
    v9 = WdLogNewEntry5_WdError(v7);
    *(_QWORD *)(v9 + 24) = SHIDWORD(a1);
    *(_QWORD *)(v9 + 32) = (unsigned int)a1;
    WdLogEvent5_WdError(v9);
    return 3221225485LL;
  }
}

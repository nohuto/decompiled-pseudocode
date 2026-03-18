/*
 * XREFs of ?ReleaseVidPn@DXGDMMTEST_INTERFACE_IMPL@@YAJIQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C017A060
 * Callers:
 *     <none>
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0004D58 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0004E78 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z @ 0x1C00B02A0 (-ReleaseVidPn@DXGDMM_INTERFACE_V1_IMPL@@YAJQEAXQEAUD3DKMDT_HVIDPN__@@@Z.c)
 */

__int64 __fastcall DXGDMMTEST_INTERFACE_IMPL::ReleaseVidPn(
        DXGDMMTEST_INTERFACE_IMPL *this,
        __int64 a2,
        struct D3DKMDT_HVIDPN__ *const a3)
{
  __int64 v4; // rsi
  struct _KTHREAD **Current; // rax
  __int64 v6; // rcx
  __int64 v7; // rax
  __int64 v9; // rcx
  struct DXGADAPTER *v10; // rdi
  __int64 v11; // rax
  __int64 v12; // rbx
  int v13; // eax
  __int64 v14; // rdx
  __int64 v15; // rcx
  struct D3DKMDT_HVIDPN__ *v16; // r8
  __int64 v17; // r9
  __int64 v18; // rax
  __int64 v19; // rax
  __int64 v20; // rax
  int v21; // eax
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // r8
  __int64 v25; // r9
  _QWORD *v26; // rax
  _BYTE v27[88]; // [rsp+20h] [rbp-58h] BYREF
  struct DXGADAPTER *v28; // [rsp+90h] [rbp+18h] BYREF
  DXGADAPTER *v29; // [rsp+98h] [rbp+20h] BYREF

  v4 = (unsigned int)this;
  Current = (struct _KTHREAD **)DXGPROCESS::GetCurrent((__int64)this);
  if ( Current )
  {
    v28 = 0LL;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)&v29, v4, Current, &v28);
    v10 = v28;
    if ( v28 )
    {
      COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v27, v28, 0LL);
      v13 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v27);
      LODWORD(v12) = v13;
      if ( v13 >= 0 )
      {
        if ( *((_QWORD *)v10 + 247) )
        {
          v21 = DXGDMM_INTERFACE_V1_IMPL::ReleaseVidPn(v10, a2, v16);
          v12 = v21;
          if ( v21 >= 0 )
          {
            LODWORD(v12) = 0;
          }
          else
          {
            v26 = (_QWORD *)WdLogNewEntry5_WdTrace(v23, v22, v24, v25);
            v26[3] = a2;
            v26[4] = v4;
            v26[5] = v12;
          }
        }
        else
        {
          v20 = WdLogNewEntry5_WdError(v15);
          *(_QWORD *)(v20 + 24) = v4;
          WdLogEvent5_WdError(v20);
          LODWORD(v12) = -1071775742;
        }
      }
      else
      {
        if ( v13 != -1073741130 )
        {
          v18 = WdLogNewEntry5_WdAssertion(v15, v14, v16, v17);
          WdLogEvent5_WdAssertion(v18);
        }
        v19 = WdLogNewEntry5_WdWarning(v15, v14, v16, v17);
        WdLogEvent5_WdWarning(v19);
      }
      COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v27);
    }
    else
    {
      v11 = WdLogNewEntry5_WdError(v9);
      *(_QWORD *)(v11 + 24) = v4;
      WdLogEvent5_WdError(v11);
      LODWORD(v12) = -1071775742;
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(&v29);
    return (unsigned int)v12;
  }
  else
  {
    v7 = WdLogNewEntry5_WdError(v6);
    WdLogEvent5_WdError(v7);
    return 3221225485LL;
  }
}

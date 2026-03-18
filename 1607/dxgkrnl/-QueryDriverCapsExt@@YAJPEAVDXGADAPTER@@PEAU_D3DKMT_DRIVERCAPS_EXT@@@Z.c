/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C014E104
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C0090400 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C000815C (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C0008198 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C0008220 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C00127C0 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C009F708 (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
 */

__int64 __fastcall QueryDriverCapsExt(struct DXGADAPTER *this, struct _D3DKMT_DRIVERCAPS_EXT *a2)
{
  unsigned int v2; // ebx
  int v5; // eax
  __int64 v6; // rdx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 v9; // r9
  _QWORD *v10; // rax
  __int64 v11; // r8
  __int64 v12; // rcx
  unsigned int v13; // edi
  __int64 v14; // rax
  struct _DXGKARG_QUERYADAPTERINFO v16; // [rsp+28h] [rbp-29h] BYREF
  _BYTE v17[80]; // [rsp+58h] [rbp+7h] BYREF
  unsigned int v18; // [rsp+B8h] [rbp+67h] BYREF

  v2 = 0;
  if ( !this || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)v17, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)v17);
  if ( v5 >= 0 )
  {
    memset(&v16, 0, 0x28uLL);
    v16.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v18 = 0;
    v16.pInputData = 0LL;
    v16.pOutputData = &v18;
    v16.InputDataSize = 0;
    v16.OutputDataSize = 4;
    v13 = DXGADAPTER::DdiQueryAdapterInfo(this, &v16, v11);
    if ( v13 )
    {
      v14 = WdLogNewEntry5_WdAssertion(v12);
      *(_QWORD *)(v14 + 24) = 1835LL;
      WdLogEvent5_WdAssertion(v14);
    }
    v2 = v13;
    a2->Value ^= (a2->Value ^ (v18 >> 1)) & 1;
  }
  else if ( v5 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v10[3] = this;
    v10[4] = *((int *)this + 68);
    v10[5] = *((unsigned int *)this + 67);
  }
  else
  {
    v2 = v5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)v17);
  return v2;
}

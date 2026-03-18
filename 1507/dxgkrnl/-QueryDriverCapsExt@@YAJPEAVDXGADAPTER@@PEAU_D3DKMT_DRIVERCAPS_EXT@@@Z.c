/*
 * XREFs of ?QueryDriverCapsExt@@YAJPEAVDXGADAPTER@@PEAU_D3DKMT_DRIVERCAPS_EXT@@@Z @ 0x1C01274B4
 * Callers:
 *     DxgkQueryAdapterInfo @ 0x1C00908E0 (DxgkQueryAdapterInfo.c)
 * Callees:
 *     ??1COREADAPTERACCESS@@QEAA@XZ @ 0x1C00018F0 (--1COREADAPTERACCESS@@QEAA@XZ.c)
 *     ??0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z @ 0x1C0001980 (--0COREADAPTERACCESS@@QEAA@QEAVDXGADAPTER@@0@Z.c)
 *     ?AcquireShared@COREADAPTERACCESS@@QEAAJXZ @ 0x1C00019F0 (-AcquireShared@COREADAPTERACCESS@@QEAAJXZ.c)
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z @ 0x1C007831C (-DdiQueryAdapterInfo@DXGADAPTER@@QEAAJPEBU_DXGKARG_QUERYADAPTERINFO@@@Z.c)
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
  __int64 v12; // rdx
  __int64 v13; // rcx
  unsigned int v14; // edi
  __int64 v15; // r8
  __int64 v16; // r9
  __int64 v17; // rax
  struct _DXGKARG_QUERYADAPTERINFO v19; // [rsp+20h] [rbp-60h] BYREF
  unsigned int v20; // [rsp+90h] [rbp+10h] BYREF

  v2 = 0;
  if ( !this || !a2 )
    return 3221225485LL;
  COREADAPTERACCESS::COREADAPTERACCESS((COREADAPTERACCESS *)&v19.hKmdProcessHandle, this, 0LL);
  v5 = COREADAPTERACCESS::AcquireShared((COREADAPTERACCESS *)&v19.hKmdProcessHandle);
  if ( v5 >= 0 )
  {
    memset(&v19, 0, 0x28uLL);
    v19.Type = DXGKQAITYPE_DISPLAY_DRIVERCAPS_EXTENSION;
    v20 = 0;
    v19.pInputData = 0LL;
    v19.pOutputData = &v20;
    v19.InputDataSize = 0;
    v19.OutputDataSize = 4;
    v14 = DXGADAPTER::DdiQueryAdapterInfo(this, &v19, v11);
    if ( v14 )
    {
      v17 = WdLogNewEntry5_WdAssertion(v13, v12, v15, v16);
      *(_QWORD *)(v17 + 24) = 5216LL;
      WdLogEvent5_WdAssertion(v17);
    }
    v2 = v14;
    a2->Value ^= (a2->Value ^ (v20 >> 1)) & 1;
  }
  else if ( v5 == -1073741130 )
  {
    v10 = (_QWORD *)WdLogNewEntry5_WdTrace(v7, v6, v8, v9);
    v10[3] = this;
    v10[4] = (int)HIDWORD(*(_QWORD *)((char *)this + 252));
    v10[5] = *((unsigned int *)this + 63);
  }
  else
  {
    v2 = v5;
  }
  COREADAPTERACCESS::~COREADAPTERACCESS((COREADAPTERACCESS *)&v19.hKmdProcessHandle);
  return v2;
}

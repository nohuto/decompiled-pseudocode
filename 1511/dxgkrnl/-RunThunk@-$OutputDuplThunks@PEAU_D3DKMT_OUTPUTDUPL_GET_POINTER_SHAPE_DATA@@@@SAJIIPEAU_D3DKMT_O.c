/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C01595CC
 * Callers:
 *     DxgkDestroyOutputDupl @ 0x1C0159C00 (DxgkDestroyOutputDupl.c)
 *     DxgkOutputDuplGetFrameInfo @ 0x1C0159D60 (DxgkOutputDuplGetFrameInfo.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C0159EF0 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C015A0B0 (DxgkOutputDuplGetPointerShapeData.c)
 *     DxgkOutputDuplReleaseFrame @ 0x1C015A320 (DxgkOutputDuplReleaseFrame.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0003E88 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0003F64 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C00120A0 (_guard_dispatch_icall_nop.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@P6AJPEAVOUTPUTDUPL_MGR@@1@Z@Z @ 0x1C0159480 (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_RELEASE_FRAME@@@@SAJPEAVDXGADAPTER@@IPE.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
        unsigned int a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v5; // rsi
  struct DXGPROCESS *Current; // rax
  __int64 v9; // rcx
  struct _KTHREAD **v10; // rdi
  __int64 v11; // rax
  int v13; // eax
  struct DXGADAPTER **v14; // r9
  int v15; // ebx
  __int64 v16; // rdx
  __int64 v17; // r8
  __int64 v18; // r9
  __int64 v19; // rax
  unsigned int v20; // ebx
  struct DXGADAPTER *v21; // [rsp+20h] [rbp-28h] BYREF
  DXGADAPTER *v22[4]; // [rsp+28h] [rbp-20h] BYREF

  v5 = a1;
  Current = DXGPROCESS::GetCurrent();
  v10 = (struct _KTHREAD **)Current;
  if ( Current )
  {
    v13 = (*(__int64 (__fastcall **)(_QWORD))(*((_QWORD *)Current + 10) + 224LL))(0LL);
    v14 = &v21;
    v21 = 0LL;
    if ( v13 )
      v14 = 0LL;
    v15 = v13;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v22, v5, v10, v14);
    if ( v15 || v21 )
    {
      v20 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_RELEASE_FRAME *>::RunForAdapter(v21, a2, a3, a4);
    }
    else
    {
      v19 = WdLogNewEntry5_WdWarning(0LL, v16, v17, v18);
      v20 = -1073741811;
      *(_QWORD *)(v19 + 24) = v5;
      *(_QWORD *)(v19 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v19);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v22);
    return v20;
  }
  else
  {
    v11 = WdLogNewEntry5_WdError(v9);
    *(_QWORD *)(v11 + 24) = 43LL;
    WdLogEvent5_WdError(v11);
    return -1073741811LL;
  }
}

/*
 * XREFs of ?RunThunk@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@@@SAJIIPEAU_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA@@P6AJPEAVOUTPUTDUPL_MGR@@0@Z@Z @ 0x1C017E584
 * Callers:
 *     DxgkDestroyOutputDupl @ 0x1C017EBE0 (DxgkDestroyOutputDupl.c)
 *     DxgkOutputDuplGetFrameInfo @ 0x1C017ED40 (DxgkOutputDuplGetFrameInfo.c)
 *     DxgkOutputDuplGetMetaData @ 0x1C017EED0 (DxgkOutputDuplGetMetaData.c)
 *     DxgkOutputDuplGetPointerShapeData @ 0x1C017F090 (DxgkOutputDuplGetPointerShapeData.c)
 *     DxgkOutputDuplReleaseFrame @ 0x1C017F300 (DxgkOutputDuplReleaseFrame.c)
 * Callees:
 *     ??0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z @ 0x1C0001A04 (--0DXGADAPTERBYHANDLE@@QEAA@IPEAVDXGPROCESS@@PEAPEAVDXGADAPTER@@@Z.c)
 *     ??1DXGADAPTERBYHANDLE@@QEAA@XZ @ 0x1C0001AE4 (--1DXGADAPTERBYHANDLE@@QEAA@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0012450 (_guard_dispatch_icall_nop.c)
 *     ?RunForAdapter@?$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_D3DKMT_OUTPUTDUPL_METADATA@@P6AJPEAVOUTPUTDUPL_MGR@@2@Z@Z @ 0x1C017E27C (-RunForAdapter@-$OutputDuplThunks@PEAU_D3DKMT_OUTPUTDUPL_METADATA@@@@SAJPEAVDXGADAPTER@@_NIPEAU_.c)
 */

__int64 __fastcall OutputDuplThunks<_D3DKMT_OUTPUTDUPL_GET_POINTER_SHAPE_DATA *>::RunThunk(
        __int64 a1,
        unsigned int a2,
        __int64 a3,
        __int64 (__fastcall *a4)(struct OUTPUTDUPL_MGR *, __int64))
{
  __int64 v5; // rdi
  __int64 CurrentProcess; // rax
  __int64 v9; // rdx
  __int64 ProcessDxgProcess; // rax
  __int64 v11; // rcx
  struct DXGPROCESS *v12; // rsi
  __int64 v13; // rax
  int v15; // eax
  struct DXGADAPTER **v16; // r9
  int v17; // ebx
  __int64 v18; // rdx
  __int64 v19; // r8
  __int64 v20; // r9
  __int64 v21; // rax
  unsigned int v22; // ebx
  unsigned __int64 v23; // rdx
  struct DXGADAPTER *v24; // [rsp+30h] [rbp-38h] BYREF
  DXGADAPTER *v25[3]; // [rsp+38h] [rbp-30h] BYREF

  v5 = (unsigned int)a1;
  CurrentProcess = PsGetCurrentProcess(a1);
  ProcessDxgProcess = PsGetProcessDxgProcess(CurrentProcess, v9);
  v12 = (struct DXGPROCESS *)ProcessDxgProcess;
  if ( ProcessDxgProcess )
  {
    v15 = (*(__int64 (__fastcall **)(_QWORD))(*(_QWORD *)(ProcessDxgProcess + 72) + 224LL))(0LL);
    v16 = &v24;
    v24 = 0LL;
    if ( v15 )
      v16 = 0LL;
    v17 = v15;
    DXGADAPTERBYHANDLE::DXGADAPTERBYHANDLE((DXGADAPTERBYHANDLE *)v25, v5, v12, v16);
    if ( v17 || v24 )
    {
      v22 = OutputDuplThunks<_D3DKMT_OUTPUTDUPL_METADATA *>::RunForAdapter(v24, v18, a2, a3, a4);
    }
    else
    {
      v21 = WdLogNewEntry5_WdWarning(0LL, v18, v19, v20);
      v22 = -1073741811;
      *(_QWORD *)(v21 + 24) = v5;
      *(_QWORD *)(v21 + 32) = -1073741811LL;
      WdLogEvent5_WdWarning(v21);
    }
    DXGADAPTERBYHANDLE::~DXGADAPTERBYHANDLE(v25, v23);
    return v22;
  }
  else
  {
    v13 = WdLogNewEntry5_WdError(v11);
    *(_QWORD *)(v13 + 24) = 43LL;
    WdLogEvent5_WdError(v13);
    return -1073741811LL;
  }
}

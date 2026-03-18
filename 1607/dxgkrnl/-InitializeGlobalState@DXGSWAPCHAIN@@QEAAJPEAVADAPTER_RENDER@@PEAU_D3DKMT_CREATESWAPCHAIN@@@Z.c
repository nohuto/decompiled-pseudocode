/*
 * XREFs of ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C018E3A8
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C018F860 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C00127C0 (memset.c)
 *     ??2@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C007F930 (--2@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C00B4048 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00DB4F8 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E3A78 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeGlobalState(
        DXGSWAPCHAIN *this,
        struct ADAPTER_RENDER *a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  SIZE_T v6; // rax
  PVOID v7; // rax
  __int64 v8; // rax
  UINT SurfaceCount; // ebx
  __int64 v11; // rcx
  unsigned int v12; // esi
  _DWORD *v13; // rax
  __int64 v14; // rcx
  _DWORD *v15; // rbx
  __int64 v16; // rbp
  int v17; // eax
  __int64 v18; // rcx
  __int64 v19; // rbx
  __int64 v20; // rbx
  __int64 v21; // rcx
  __int64 CurrentProcess; // rax
  __int64 v23; // rdx
  __int64 v24; // rax
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v25; // [rsp+20h] [rbp-78h] BYREF
  struct DXGSYNCOBJECT *v26; // [rsp+A0h] [rbp+8h] BYREF

  *((_QWORD *)this + 24) = *(_QWORD *)(*((_QWORD *)a2 + 2) + 268LL);
  if ( (*(_DWORD *)(*((_QWORD *)a2 + 2) + 300LL) & 0x10) != 0 )
    *((_DWORD *)this + 47) = 1;
  v6 = 56LL * a3->SurfaceCount;
  if ( !is_mul_ok(a3->SurfaceCount, 0x38uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v8 + 24) = 1220LL;
LABEL_7:
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
  memset(v7, 0, 56LL * a3->SurfaceCount);
  SurfaceCount = a3->SurfaceCount;
  v25.hDevice = 0;
  *((_DWORD *)this + 10) = SurfaceCount;
  memset(&v25.Info, 0, 0x58uLL);
  v25.Info.Flags.Value |= 1u;
  v12 = 0;
  v25.Info.Type = D3DDDI_FENCE;
  if ( SurfaceCount )
  {
    while ( 1 )
    {
      v13 = operator new(0x10uLL, 0x4B677844u, PagedPool);
      v15 = v13;
      if ( v13 )
      {
        *(_QWORD *)v13 = 0LL;
        v13[2] = 0;
        v13[3] = 0;
        AUTOEXPANDALLOCATION::GetBuffer((void **)v13, 0, 0);
      }
      else
      {
        v15 = 0LL;
      }
      v16 = 56LL * v12;
      *(_QWORD *)(*((_QWORD *)this + 6) + v16 + 8) = v15;
      if ( !*(_QWORD *)(*((_QWORD *)this + 6) + v16 + 8) )
        break;
      v17 = CreateSynchronizationObjectInternal(0LL, (DXGADAPTER **)a2, &v25, (D3DKMT_HANDLE **)&v26);
      v19 = v17;
      if ( v17 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v18);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v19;
        WdLogEvent5_WdError(v24);
        return (unsigned int)v19;
      }
      v11 = *((_QWORD *)this + 6);
      ++v12;
      *(_DWORD *)(v11 + v16 + 20) = v25.Info.SharedHandle;
      if ( v12 >= *((_DWORD *)this + 10) )
        goto LABEL_15;
    }
    v8 = WdLogNewEntry5_WdLowResource(v14);
    *(_QWORD *)(v8 + 24) = 1238LL;
    goto LABEL_7;
  }
LABEL_15:
  v20 = WdLogNewEntry5_WdEvent(v11);
  *(_QWORD *)(v20 + 24) = this;
  CurrentProcess = PsGetCurrentProcess(v21);
  *(_QWORD *)(v20 + 32) = PsGetProcessDxgProcess(CurrentProcess, v23);
  WdLogEvent5_WdEvent(v20);
  return 0LL;
}

/*
 * XREFs of ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0162030
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01634A0 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0010C80 (memset.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C008834C (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00D2128 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00DD9A0 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeGlobalState(
        DXGSWAPCHAIN *this,
        DXGADAPTER **a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  SIZE_T v6; // rax
  PVOID v7; // rax
  __int64 v8; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  __int64 v12; // r8
  __int64 v13; // r9
  unsigned int v14; // esi
  _DWORD *v15; // rax
  __int64 v16; // rcx
  _DWORD *v17; // rbx
  __int64 v18; // rbp
  int v19; // eax
  __int64 v20; // rcx
  __int64 v21; // rbx
  __int64 v22; // rbx
  __int64 v23; // rcx
  __int64 v24; // rax
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v25; // [rsp+20h] [rbp-78h] BYREF
  struct DXGSYNCOBJECT *v26; // [rsp+A0h] [rbp+8h] BYREF

  *((_DWORD *)this + 10) = a3->SurfaceCount;
  v6 = 56LL * a3->SurfaceCount;
  if ( !is_mul_ok(a3->SurfaceCount, 0x38uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 6) = v7;
  if ( !v7 )
  {
    v8 = WdLogNewEntry5_WdLowResource(0LL);
    *(_QWORD *)(v8 + 24) = 1208LL;
LABEL_5:
    WdLogEvent5_WdLowResource(v8);
    return 3221225495LL;
  }
  memset(v7, 0, 56LL * a3->SurfaceCount);
  v25.hDevice = 0;
  memset(&v25.Info, 0, 0x58uLL);
  v25.Info.Flags.Value |= 1u;
  v14 = 0;
  v25.Info.Type = D3DDDI_FENCE;
  if ( *((_DWORD *)this + 10) )
  {
    while ( 1 )
    {
      v15 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
      v17 = v15;
      if ( v15 )
      {
        *(_QWORD *)v15 = 0LL;
        v15[2] = 0;
        v15[3] = 0;
        AUTOEXPANDALLOCATION::GetBuffer((void **)v15, 0, 0);
      }
      else
      {
        v17 = 0LL;
      }
      v18 = 56LL * v14;
      *(_QWORD *)(*((_QWORD *)this + 6) + v18 + 8) = v17;
      if ( !*(_QWORD *)(*((_QWORD *)this + 6) + v18 + 8) )
        break;
      v19 = CreateSynchronizationObjectInternal(0LL, a2, &v25, (D3DKMT_HANDLE **)&v26);
      v21 = v19;
      if ( v19 < 0 )
      {
        v24 = WdLogNewEntry5_WdError(v20);
        *(_QWORD *)(v24 + 24) = this;
        *(_QWORD *)(v24 + 32) = v21;
        WdLogEvent5_WdError(v24);
        return (unsigned int)v21;
      }
      v11 = *((_QWORD *)this + 6);
      ++v14;
      *(_DWORD *)(v11 + v18 + 20) = v25.Info.SharedHandle;
      if ( v14 >= *((_DWORD *)this + 10) )
        goto LABEL_13;
    }
    v8 = WdLogNewEntry5_WdLowResource(v16);
    *(_QWORD *)(v8 + 24) = 1225LL;
    goto LABEL_5;
  }
LABEL_13:
  v22 = WdLogNewEntry5_WdEvent(v11, v10, v12, v13);
  *(_QWORD *)(v22 + 24) = this;
  *(_QWORD *)(v22 + 32) = DXGPROCESS::GetCurrent(v23);
  WdLogEvent5_WdEvent(v22);
  return 0LL;
}

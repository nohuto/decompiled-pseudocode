/*
 * XREFs of ?InitializeGlobalState@DXGSWAPCHAIN@@QEAAJPEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0166660
 * Callers:
 *     DxgkCreateSwapChain @ 0x1C01679D0 (DxgkCreateSwapChain.c)
 * Callees:
 *     memset @ 0x1C0012400 (memset.c)
 *     ??_U@YAPEAX_KIW4_POOL_TYPE@@@Z @ 0x1C0065FA0 (--_U@YAPEAX_KIW4_POOL_TYPE@@@Z.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C00769E0 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z @ 0x1C00BBFA0 (-GetBuffer@AUTOEXPANDALLOCATION@@QEAAPEAXIH@Z.c)
 *     ?CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESYNCHRONIZATIONOBJECT2@@PEAPEAVDXGSYNCOBJECT@@@Z @ 0x1C00E8C00 (-CreateSynchronizationObjectInternal@@YAJPEAVDXGDEVICE@@PEAVADAPTER_RENDER@@PEAU_D3DKMT_CREATESY.c)
 */

__int64 __fastcall DXGSWAPCHAIN::InitializeGlobalState(
        DXGSWAPCHAIN *this,
        DXGADAPTER **a2,
        struct _D3DKMT_CREATESWAPCHAIN *a3)
{
  SIZE_T v6; // rax
  PVOID v7; // rax
  __int64 v8; // rdx
  __int64 v9; // r8
  __int64 v10; // r9
  __int64 v11; // rax
  __int64 v13; // rdx
  __int64 v14; // rcx
  __int64 v15; // r8
  __int64 v16; // r9
  unsigned int v17; // esi
  _DWORD *v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // r9
  _DWORD *v23; // rbx
  __int64 v24; // rbp
  int v25; // eax
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rbx
  __int64 v29; // rax
  struct _D3DKMT_CREATESYNCHRONIZATIONOBJECT2 v30; // [rsp+20h] [rbp-78h] BYREF
  struct DXGSYNCOBJECT *v31; // [rsp+A0h] [rbp+8h] BYREF

  *((_DWORD *)this + 16) = a3->SurfaceCount;
  v6 = 56LL * a3->SurfaceCount;
  if ( !is_mul_ok(a3->SurfaceCount, 0x38uLL) )
    v6 = -1LL;
  v7 = operator new[](v6, 0x4B677844u, PagedPool);
  *((_QWORD *)this + 9) = v7;
  if ( !v7 )
  {
    v11 = WdLogNewEntry5_WdLowResource(0LL, v8, v9, v10);
    *(_QWORD *)(v11 + 24) = 1208LL;
LABEL_5:
    WdLogEvent5_WdLowResource(v11);
    return 3221225495LL;
  }
  memset(v7, 0, 56LL * a3->SurfaceCount);
  v30.hDevice = 0;
  memset(&v30.Info, 0, 0x58uLL);
  v30.Info.Flags.Value |= 1u;
  v17 = 0;
  v30.Info.Type = D3DDDI_FENCE;
  if ( *((_DWORD *)this + 16) )
  {
    while ( 1 )
    {
      v18 = operator new[](0x10uLL, 0x4B677844u, PagedPool);
      v23 = v18;
      if ( v18 )
      {
        *(_QWORD *)v18 = 0LL;
        v18[2] = 0;
        v18[3] = 0;
        AUTOEXPANDALLOCATION::GetBuffer((void **)v18, 0, 0);
      }
      else
      {
        v23 = 0LL;
      }
      v24 = 56LL * v17;
      *(_QWORD *)(*((_QWORD *)this + 9) + v24 + 8) = v23;
      if ( !*(_QWORD *)(*((_QWORD *)this + 9) + v24 + 8) )
        break;
      v25 = CreateSynchronizationObjectInternal(0LL, a2, &v30, (D3DKMT_HANDLE **)&v31);
      v27 = v25;
      if ( v25 < 0 )
      {
        v29 = WdLogNewEntry5_WdError(v26);
        *(_QWORD *)(v29 + 24) = this;
        *(_QWORD *)(v29 + 32) = v27;
        WdLogEvent5_WdError(v29);
        return (unsigned int)v27;
      }
      v14 = *((_QWORD *)this + 9);
      ++v17;
      *(_DWORD *)(v14 + v24 + 20) = v30.Info.SharedHandle;
      if ( v17 >= *((_DWORD *)this + 16) )
        goto LABEL_13;
    }
    v11 = WdLogNewEntry5_WdLowResource(v20, v19, v21, v22);
    *(_QWORD *)(v11 + 24) = 1225LL;
    goto LABEL_5;
  }
LABEL_13:
  v28 = WdLogNewEntry5_WdEvent(v14, v13, v15, v16);
  *(_QWORD *)(v28 + 24) = this;
  *(_QWORD *)(v28 + 32) = DXGPROCESS::GetCurrent();
  WdLogEvent5_WdEvent(v28);
  return 0LL;
}

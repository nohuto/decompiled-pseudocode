/*
 * XREFs of ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C01617AC
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C0161728 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C0161930 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C0161AD4 (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C01624B0 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ?AcquireShared@DXGPUSHLOCK@@QEAAXXZ @ 0x1C0002EAC (-AcquireShared@DXGPUSHLOCK@@QEAAXXZ.c)
 *     ??3@YAXPEAX@Z @ 0x1C00689D8 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00774F0 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?GetCurrent@DXGPROCESS@@SAPEAV1@XZ @ 0x1C0078F00 (-GetCurrent@DXGPROCESS@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z @ 0x1C008AE34 (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocalClient(DXGSWAPCHAIN *this, struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2)
{
  void *v3; // rcx
  void *v5; // rcx
  struct DXGPROCESS *Current; // r15
  unsigned int i; // ebp
  __int64 v8; // r12
  __int64 v9; // rdi
  void *v10; // rcx
  unsigned int v11; // r14d
  unsigned int v12; // edx
  __int64 v13; // r9
  int v14; // r8d
  struct DXGSYNCOBJECT *v15; // rdi
  __int64 v16; // rdx
  __int64 v17; // rcx
  __int64 v18; // r8
  __int64 v19; // r9
  PERESOURCE *Global; // rax
  __int64 v21; // r9

  v3 = (void *)*((_QWORD *)a2 + 6);
  if ( v3 )
  {
    ObfDereferenceObject(v3);
    *((_QWORD *)a2 + 6) = 0LL;
  }
  v5 = (void *)*((_QWORD *)a2 + 4);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  Current = DXGPROCESS::GetCurrent((__int64)v5);
  for ( i = 0; i < *((_DWORD *)this + 10); ++i )
  {
    v8 = 56LL * i;
    v9 = *((_QWORD *)this + 6) + 16 * (*((int *)a2 + 10) + 2LL);
    v10 = *(void **)(v9 + v8);
    if ( v10 )
    {
      ObCloseHandle(v10, 1);
      *(_QWORD *)(v9 + 56LL * i) = 0LL;
    }
    v11 = *(_DWORD *)(*((_QWORD *)this + 6) + 16LL * *((int *)a2 + 10) + v8 + 28);
    if ( v11 )
    {
      if ( Current )
      {
        DXGPUSHLOCK::AcquireShared((struct DXGPROCESS *)((char *)Current + 192));
        v12 = (v11 >> 6) & 0xFFFFFF;
        if ( v12 < *((_DWORD *)Current + 58)
          && (v13 = *((_QWORD *)Current + 27),
              v14 = *(_DWORD *)(v13 + 16LL * v12 + 8),
              ((v11 >> 26) & 0x30) == (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0x30))
          && (v14 & 0x1000) == 0
          && (v14 & 0xF) != 0
          && (*(_BYTE *)(v13 + 16LL * v12 + 8) & 0xF) == 8 )
        {
          v15 = *(struct DXGSYNCOBJECT **)(v13 + 16LL * v12);
        }
        else
        {
          v15 = 0LL;
        }
        ExReleasePushLockSharedEx((char *)Current + 192, 0LL);
        KeLeaveCriticalRegion();
        if ( v15 )
        {
          Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v17, v16, v18, v19);
          DXGGLOBAL::DestroySyncObject(Global, v15, v11, v21);
        }
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 16LL * *((int *)a2 + 10) + v8 + 28) = 0;
    }
  }
  *((_QWORD *)a2 + 2) = 0LL;
}

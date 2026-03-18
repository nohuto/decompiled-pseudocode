/*
 * XREFs of ?DestroyLocalClient@DXGSWAPCHAIN@@AEAAXPEAUSWAPCHAIN_CLIENT_INFO@1@@Z @ 0x1C018DAD4
 * Callers:
 *     ?DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ @ 0x1C018DA50 (-DestroyLocal@DXGSWAPCHAIN@@QEAAXXZ.c)
 *     ?DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z @ 0x1C018DCA8 (-DuplicateSurfacesForCreate@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_CREATESWAPCHAIN@@@Z.c)
 *     ?DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z @ 0x1C018DE4C (-DuplicateSurfacesForOpen@DXGSWAPCHAIN@@QEAAJPEAU_D3DKMT_OPENSWAPCHAIN@@@Z.c)
 *     ?OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z @ 0x1C018E860 (-OpenLocal@DXGSWAPCHAIN@@QEAAJIPEAVDXGDEVICE@@PEAXHH@Z.c)
 * Callees:
 *     ??1DXGAUTOPUSHLOCK@@QEAA@XZ @ 0x1C0001660 (--1DXGAUTOPUSHLOCK@@QEAA@XZ.c)
 *     ??0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z @ 0x1C0009964 (--0DXGHANDLETABLELOCKEXCLUSIVE@@QEAA@PEAVDXGPROCESS@@@Z.c)
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?GetGlobal@DXGGLOBAL@@SAPEAV1@XZ @ 0x1C00A7710 (-GetGlobal@DXGGLOBAL@@SAPEAV1@XZ.c)
 *     ?DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z @ 0x1C0175F1C (-DestroySyncObject@DXGGLOBAL@@QEAAXPEAVDXGSYNCOBJECT@@I_N@Z.c)
 */

void __fastcall DXGSWAPCHAIN::DestroyLocalClient(DXGSWAPCHAIN *this, struct DXGSWAPCHAIN::SWAPCHAIN_CLIENT_INFO *a2)
{
  void *v4; // rcx
  void *v5; // rcx
  __int64 CurrentProcess; // rax
  __int64 v7; // rdx
  unsigned int v8; // ebp
  __int64 i; // r14
  __int64 v10; // r12
  __int64 v11; // rdi
  void *v12; // rcx
  unsigned int v13; // r15d
  unsigned int v14; // ecx
  __int64 v15; // r8
  unsigned int v16; // edx
  struct DXGSYNCOBJECT *v17; // rdi
  unsigned int v18; // ecx
  __int64 v19; // rcx
  PERESOURCE *Global; // rax
  _BYTE v21[56]; // [rsp+20h] [rbp-38h] BYREF

  v4 = (void *)*((_QWORD *)a2 + 6);
  if ( v4 )
  {
    ObfDereferenceObject(v4);
    *((_QWORD *)a2 + 6) = 0LL;
  }
  v5 = (void *)*((_QWORD *)a2 + 4);
  if ( v5 )
  {
    operator delete(v5);
    *((_QWORD *)a2 + 4) = 0LL;
  }
  CurrentProcess = PsGetCurrentProcess(v5);
  v8 = 0;
  for ( i = PsGetProcessDxgProcess(CurrentProcess, v7); v8 < *((_DWORD *)this + 10); ++v8 )
  {
    v10 = 56LL * v8;
    v11 = *((_QWORD *)this + 6) + 16 * (*((int *)a2 + 10) + 2LL);
    v12 = *(void **)(v11 + v10);
    if ( v12 )
    {
      ObCloseHandle(v12, 1);
      *(_QWORD *)(v11 + 56LL * v8) = 0LL;
    }
    v13 = *(_DWORD *)(*((_QWORD *)this + 6) + 16LL * *((int *)a2 + 10) + v10 + 28);
    if ( v13 )
    {
      if ( i )
      {
        DXGHANDLETABLELOCKEXCLUSIVE::DXGHANDLETABLELOCKEXCLUSIVE(
          (DXGHANDLETABLELOCKEXCLUSIVE *)v21,
          (struct DXGPROCESS *)i);
        v14 = (v13 >> 6) & 0xFFFFFF;
        if ( v14 < *(_DWORD *)(i + 224)
          && (v15 = *(_QWORD *)(i + 208), v16 = *(_DWORD *)(v15 + 16LL * v14 + 8), v13 >> 30 == ((v16 >> 4) & 3))
          && (v16 & 0x1000) == 0
          && (v16 & 0xF) != 0
          && (*(_BYTE *)(v15 + 16LL * v14 + 8) & 0xF) == 8 )
        {
          v17 = *(struct DXGSYNCOBJECT **)(v15 + 16LL * v14);
          if ( v17 )
          {
            if ( v14 < *(_DWORD *)(i + 224) )
            {
              v18 = *(_DWORD *)(v15 + 16LL * v14 + 8);
              if ( v13 >> 30 == ((v18 >> 4) & 3) && (v18 & 0x1000) == 0 && (v18 & 0xF) != 0 )
                *(_DWORD *)(v15 + 16 * (((unsigned __int64)v13 >> 6) & 0xFFFFFF) + 8) |= 0x1000u;
            }
          }
        }
        else
        {
          v17 = 0LL;
        }
        DXGAUTOPUSHLOCK::~DXGAUTOPUSHLOCK((DXGAUTOPUSHLOCK *)v21);
        if ( v17 )
        {
          Global = (PERESOURCE *)DXGGLOBAL::GetGlobal(v19);
          DXGGLOBAL::DestroySyncObject(Global, v17, v13, 0);
        }
      }
      *(_DWORD *)(*((_QWORD *)this + 6) + 16LL * *((int *)a2 + 10) + v10 + 28) = 0;
    }
  }
  *((_QWORD *)a2 + 2) = 0LL;
}

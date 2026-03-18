/*
 * XREFs of ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015A57C
 * Callers:
 *     ?DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z @ 0x1C00934E0 (-DestroyDevice@ADAPTER_RENDER@@QEAAXPEAVDXGDEVICE@@PEAVCOREDEVICEACCESS@@@Z.c)
 *     ?Destroy@ADAPTER_RENDER@@QEAAXXZ @ 0x1C0148C38 (-Destroy@ADAPTER_RENDER@@QEAAXXZ.c)
 *     ?NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z @ 0x1C015A714 (-NotifyDxgProcessDestroyed@ADAPTER_RENDER@@QEAAXPEAVDXGPROCESS@@@Z.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015800C (-DdiDestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C015A4FC (-DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z.c)
 */

void __fastcall ADAPTER_RENDER::DestroyVirtualGpuState(ADAPTER_RENDER *this)
{
  __int64 i; // rdi
  __int64 v3; // rcx
  struct _DXGKARG_DESTROYVIRTUALGPU v4; // [rsp+30h] [rbp+8h] BYREF

  if ( *((_QWORD *)this + 134) )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 266); i = (unsigned int)(i + 1) )
    {
      v3 = *(_QWORD *)(*((_QWORD *)this + 134) + 8 * i);
      if ( v3 )
      {
        if ( *(_BYTE *)(v3 + 64) )
        {
          v4.PartitionId = i;
          ADAPTER_RENDER::DdiDestroyVirtualGpu(this, &v4);
        }
        DXGK_VIRTUAL_GPU::DestroyVirtualGpu(*(DXGK_VIRTUAL_GPU **)(*((_QWORD *)this + 134) + 8 * i), 0);
      }
    }
    operator delete(*((void **)this + 134));
    *((_QWORD *)this + 134) = 0LL;
  }
  *((_QWORD *)this + 135) = 0LL;
  *((_QWORD *)this + 136) = 0LL;
  *((_DWORD *)this + 266) = 0;
}

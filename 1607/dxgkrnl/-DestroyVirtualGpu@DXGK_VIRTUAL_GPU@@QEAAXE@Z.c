/*
 * XREFs of ?DestroyVirtualGpu@DXGK_VIRTUAL_GPU@@QEAAXE@Z @ 0x1C015A4FC
 * Callers:
 *     ?DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z @ 0x1C015A340 (-DestroyVirtualGpu@ADAPTER_RENDER@@QEAAJPEAU_DXGKARG_DESTROYVIRTUALGPU@@@Z.c)
 *     ?DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ @ 0x1C015A57C (-DestroyVirtualGpuState@ADAPTER_RENDER@@QEAAXXZ.c)
 * Callees:
 *     ??3@YAXPEAX@Z @ 0x1C007F918 (--3@YAXPEAX@Z.c)
 *     ?DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVICEACCESS@@U_D3DDDICB_DESTROYALLOCATION2FLAGS@@@Z @ 0x1C009E864 (-DestroyAllocationInternal@DXGDEVICE@@QEAAXIPEAPEAVDXGALLOCATION@@PEAVDXGRESOURCE@@PEAVCOREDEVIC.c)
 */

void __fastcall DXGK_VIRTUAL_GPU::DestroyVirtualGpu(DXGK_VIRTUAL_GPU *this, char a2)
{
  __int64 i; // rdi
  struct DXGALLOCATION **v4; // r8

  if ( a2 )
  {
    for ( i = 0LL; (unsigned int)i < *((_DWORD *)this + 10); i = (unsigned int)(i + 1) )
    {
      v4 = (struct DXGALLOCATION **)(*((_QWORD *)this + 7) + 8 * i);
      if ( *v4 )
      {
        DXGDEVICE::DestroyAllocationInternal(
          *((DXGDEVICE **)this + 6),
          1u,
          v4,
          0LL,
          0LL,
          DXGDEVICE::DestroyFlagsDefault);
        *(_QWORD *)(*((_QWORD *)this + 7) + 8 * i) = 0LL;
      }
    }
  }
  operator delete(*((void **)this + 7));
  *((_QWORD *)this + 7) = 0LL;
  *((_DWORD *)this + 10) = 0;
}

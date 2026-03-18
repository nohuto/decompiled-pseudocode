/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C004AE10
 * Callers:
 *     NtBindCompositionSurface @ 0x1C004AAD0 (NtBindCompositionSurface.c)
 * Callees:
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C001E494 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C001E770 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     Win32AllocPool @ 0x1C0034690 (Win32AllocPool.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C004B5C0 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CFlipExBuffer::Create(
        const struct CSM_BUFFER_ATTRIBUTES *a1,
        const struct CSM_SWAPCHAIN_BUFFER_INFO *a2,
        struct CRegion ***a3)
{
  int v6; // ebx
  CFlipExBuffer *v7; // rax
  struct CRegion **v8; // rdi

  *a3 = 0LL;
  v6 = ValidateBufferAttributes(a1);
  if ( v6 >= 0 )
  {
    v6 = -1073741811;
    if ( (unsigned int)(*((_DWORD *)a2 + 6) - 2) <= 2 )
    {
      if ( (unsigned int)(*((_DWORD *)a2 + 7) - 1) <= 0x1E )
        v6 = 0;
      if ( v6 >= 0 )
      {
        v7 = (CFlipExBuffer *)Win32AllocPool();
        if ( v7 )
          v8 = (struct CRegion **)CFlipExBuffer::CFlipExBuffer(v7);
        else
          v8 = 0LL;
        if ( v8 )
        {
          v6 = CFlipExBuffer::Initialize(v8, a1, a2);
          if ( v6 < 0 )
            (*(void (__fastcall **)(struct CRegion **, __int64))*v8)(v8, 1LL);
          else
            *a3 = v8;
        }
        else
        {
          return (unsigned int)-1073741801;
        }
      }
    }
  }
  return (unsigned int)v6;
}

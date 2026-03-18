/*
 * XREFs of ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0072420
 * Callers:
 *     NtBindCompositionSurface @ 0x1C00720B0 (NtBindCompositionSurface.c)
 * Callees:
 *     Win32AllocPool @ 0x1C0020C90 (Win32AllocPool.c)
 *     ?Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z @ 0x1C003E2F0 (-Initialize@CFlipExBuffer@@AEAAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@@Z.c)
 *     ??0CFlipExBuffer@@IEAA@XZ @ 0x1C003E5D0 (--0CFlipExBuffer@@IEAA@XZ.c)
 *     ?ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x1C00724D0 (-ValidateBufferAttributes@@YAJAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
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
    v6 = 0;
    if ( (unsigned int)(*((_DWORD *)a2 + 7) - 1) > 0x1E )
      v6 = -1073741811;
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
  return (unsigned int)v6;
}

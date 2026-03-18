/*
 * XREFs of ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJ_N0PEAPEAX@Z @ 0x1C004B3A8
 * Callers:
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C001E1C0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z @ 0x1C00F3E30 (-EnableDxgkrnlIndependentFlipMode@CFlipExBuffer@@IEAAJIIPEAH@Z.c)
 * Callees:
 *     GreDxgkGetSharedAllocationObjectType @ 0x1C004B590 (GreDxgkGetSharedAllocationObjectType.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 */

NTSTATUS __fastcall CBufferRealization::OpenDxSurfaceHandle(CBufferRealization *this, char a2, char a3, void **a4)
{
  ULONG v6; // ebp
  ACCESS_MASK v7; // r14d
  KPROCESSOR_MODE AccessMode; // bl
  struct _OBJECT_TYPE *ObjectType; // rax

  *a4 = 0LL;
  if ( (unsigned int)(*((_DWORD *)this + 6) - 2) > 2 )
    return -1073741811;
  v6 = 0;
  v7 = 983040;
  AccessMode = 1;
  if ( a3 )
    v6 = 512;
  if ( a2 )
    v7 = 983041;
  if ( a3 || (unsigned int)UserIsCurrentProcessDwm(this) )
    AccessMode = 0;
  ObjectType = (struct _OBJECT_TYPE *)GreDxgkGetSharedAllocationObjectType();
  return ObOpenObjectByPointer(*((PVOID *)this + 7), v6, 0LL, v7, ObjectType, AccessMode, a4);
}

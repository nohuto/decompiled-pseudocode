/*
 * XREFs of ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z @ 0x1C001FD8C
 * Callers:
 *     ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00499B0 (-OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     ?SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IPEBU_LUID@@_KIPEAH@Z @ 0x1C00DF9C0 (-SetIndependentFlip@CFlipExBuffer@@UEAAJ_N0IPEBU_LUID@@_KIPEAH@Z.c)
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

NTSTATUS __fastcall CBufferRealization::OpenDxSurfaceHandle(CBufferRealization *this, int a2, void **a3)
{
  ACCESS_MASK v5; // ebx
  KPROCESSOR_MODE AccessMode; // di
  struct _OBJECT_TYPE *ObjectType; // rax

  *a3 = 0LL;
  if ( *((_DWORD *)this + 6) != 2 )
    return -1073741811;
  v5 = 983040;
  if ( a2 )
    v5 = 983041;
  AccessMode = !UserIsCurrentProcessDwm();
  ObjectType = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0101528)();
  return ObOpenObjectByPointer(*((PVOID *)this + 7), 0, 0LL, v5, ObjectType, AccessMode, a3);
}

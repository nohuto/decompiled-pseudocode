/*
 * XREFs of ?OpenSwapChainHandles@CFlipExBuffer@@UEBAJPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00499B0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z @ 0x1C001FD8C (-OpenDxSurfaceHandle@CBufferRealization@@QEBAJHPEAPEAX@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall CFlipExBuffer::OpenSwapChainHandles(CFlipExBuffer *this, HANDLE *a2)
{
  NTSTATUS v4; // r15d
  __int64 v5; // rbx
  CFlipExBuffer *i; // rsi
  KPROCESSOR_MODE AccessMode; // bl
  struct _OBJECT_TYPE *ObjectType; // rax
  HANDLE *v10; // rdi
  void *v11; // [rsp+60h] [rbp+8h] BYREF

  v4 = 0;
  memset(a2, 0, 0x108uLL);
  if ( *((_QWORD *)this + 45) )
  {
    AccessMode = !UserIsCurrentProcessDwm();
    ObjectType = (struct _OBJECT_TYPE *)((__int64 (*)(void))qword_1C0101530)();
    v4 = ObOpenObjectByPointer(*((PVOID *)this + 45), 0, 0LL, 0x1F0000u, ObjectType, AccessMode, a2);
    if ( v4 < 0 )
      return (unsigned int)v4;
  }
  if ( !*((_DWORD *)this + 70) )
    return (unsigned int)v4;
  v5 = 0LL;
  for ( i = (CFlipExBuffer *)*((_QWORD *)this + 33); ; i = *(CFlipExBuffer **)i )
  {
    if ( i == (CFlipExBuffer *)((char *)this + 264) )
    {
      *((_DWORD *)a2 + 2) = v5;
      return (unsigned int)v4;
    }
    if ( *((_DWORD *)i + 4) != 3 )
      break;
LABEL_8:
    ;
  }
  v4 = CBufferRealization::OpenDxSurfaceHandle((CFlipExBuffer *)((char *)i - 8), *((_DWORD *)this + 44), &v11);
  if ( v4 >= 0 )
  {
    a2[v5 + 2] = v11;
    v5 = (unsigned int)(v5 + 1);
    goto LABEL_8;
  }
  if ( *a2 )
    ObCloseHandle(*a2, 1);
  if ( (_DWORD)v5 )
  {
    v10 = a2 + 2;
    do
    {
      ObCloseHandle(*v10++, 1);
      --v5;
    }
    while ( v5 );
  }
  return (unsigned int)v4;
}

/*
 * XREFs of NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00DF1B0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C004852C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C0048D80 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceOutOfFrameDirectFlipNotification(void *a1)
{
  __int64 v2; // r8
  int v3; // ebx
  struct CCompositionBuffer *RenderingBuffer; // rax
  __int64 v5; // rdx
  __int64 v6; // r8
  char v7; // r10
  char v8; // r11
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  CCompositionSurface *v11; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  if ( UserIsCurrentProcessDwm() )
  {
    v3 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v2, (struct CompositionSurfaceObject **)&Object);
    if ( v3 >= 0 )
    {
      v11 = 0LL;
      v3 = CompositionSurfaceObject::LockForWrite((char *)Object, &v11);
      if ( v3 >= 0 )
      {
        RenderingBuffer = CCompositionSurface::GetRenderingBuffer(v11);
        if ( RenderingBuffer )
        {
          LOBYTE(v6) = v7;
          LOBYTE(v5) = v8;
          (*(void (__fastcall **)(struct CCompositionBuffer *, __int64, __int64))(*(_QWORD *)RenderingBuffer + 120LL))(
            RenderingBuffer,
            v5,
            v6);
        }
        CInputSink::UnlockAndRelease(v11);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v3;
}

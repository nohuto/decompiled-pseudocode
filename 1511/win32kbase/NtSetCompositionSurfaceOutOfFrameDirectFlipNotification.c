/*
 * XREFs of NtSetCompositionSurfaceOutOfFrameDirectFlipNotification @ 0x1C00E0FE0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ @ 0x1C003A324 (-GetRenderingBuffer@CCompositionSurface@@IEBAPEAVCCompositionBuffer@@XZ.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceOutOfFrameDirectFlipNotification(void *a1, __int64 a2, int a3)
{
  int v4; // esi
  __int64 v6; // r8
  int v7; // ebx
  bool v8; // di
  bool v9; // si
  struct CCompositionBuffer *RenderingBuffer; // rax
  __int64 v11; // rdx
  __int64 v12; // r8
  PVOID Object; // [rsp+20h] [rbp-18h] BYREF
  CCompositionSurface *v15; // [rsp+58h] [rbp+20h] BYREF

  Object = 0LL;
  v4 = a2;
  if ( UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v7 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v6, (struct CompositionSurfaceObject **)&Object);
    if ( v7 >= 0 )
    {
      v15 = 0LL;
      v7 = CompositionSurfaceObject::LockForWrite((char *)Object, &v15);
      if ( v7 >= 0 )
      {
        v8 = a3 != 0;
        v9 = v4 != 0;
        RenderingBuffer = CCompositionSurface::GetRenderingBuffer(v15);
        if ( RenderingBuffer )
        {
          LOBYTE(v12) = v8;
          LOBYTE(v11) = v9;
          (*(void (__fastcall **)(struct CCompositionBuffer *, __int64, __int64))(*(_QWORD *)RenderingBuffer + 120LL))(
            RenderingBuffer,
            v11,
            v12);
        }
        CInputSink::UnlockAndRelease(v15);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v7;
}

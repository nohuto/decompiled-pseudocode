/*
 * XREFs of NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C001F740
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0048590 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C00491EC (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSwapChainHandleInfo(void *a1, unsigned __int64 *a2, _OWORD *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  unsigned __int64 v8; // r15
  bool v9; // r12
  __int64 v10; // r8
  HANDLE *v11; // rax
  __int64 v12; // rcx
  PVOID Object; // [rsp+28h] [rbp-160h] BYREF
  unsigned __int64 v15; // [rsp+30h] [rbp-158h]
  HANDLE Handle[41]; // [rsp+40h] [rbp-148h] BYREF
  CInputSink *v17; // [rsp+1A8h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0LL;
  v15 = 0LL;
  memset(Handle, 0, 0x108uLL);
  v9 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v8 = *a2;
    v15 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v10, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v17 = 0LL;
        v7 = CompositionSurfaceObject::LockForRead(Object, &v17);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::OpenSwapChainHandles(v17, v8, (struct CSM_SWAPCHAIN_HANDLE_INFO *)Handle);
          v9 = v7 >= 0;
          CInputSink::UnlockAndRelease(v17);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v7 = -1073741790;
    }
  }
  if ( v7 < 0 )
    goto LABEL_32;
  if ( a3 )
  {
    if ( (_OWORD *)((char *)a3 + 264) < a3 || (unsigned __int64)a3 + 264 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v11 = Handle;
    v12 = 2LL;
    do
    {
      *a3 = *(_OWORD *)v11;
      a3[1] = *((_OWORD *)v11 + 1);
      a3[2] = *((_OWORD *)v11 + 2);
      a3[3] = *((_OWORD *)v11 + 3);
      a3[4] = *((_OWORD *)v11 + 4);
      a3[5] = *((_OWORD *)v11 + 5);
      a3[6] = *((_OWORD *)v11 + 6);
      a3 += 8;
      *(a3 - 1) = *((_OWORD *)v11 + 7);
      v11 += 16;
      --v12;
    }
    while ( v12 );
    *(_QWORD *)a3 = *v11;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
LABEL_32:
    if ( v9 )
    {
      ObCloseHandle(Handle[0], 1);
      if ( LODWORD(Handle[1]) )
      {
        do
          ObCloseHandle(Handle[v6++ + 2], 1);
        while ( v6 < LODWORD(Handle[1]) );
      }
    }
  }
  return (unsigned int)v7;
}

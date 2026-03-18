/*
 * XREFs of NtOpenCompositionSurfaceSwapChainHandleInfo @ 0x1C004CF20
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0039DAC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z @ 0x1C003A704 (-OpenSwapChainHandles@CCompositionSurface@@QEBAJ_KPEAUCSM_SWAPCHAIN_HANDLE_INFO@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSwapChainHandleInfo(void *a1, __int64 *a2, _OWORD *a3)
{
  unsigned int v6; // edi
  int v7; // ebx
  __int64 v8; // r15
  ULONG64 v9; // rcx
  bool v10; // r12
  __int64 v11; // r8
  HANDLE *v12; // rax
  __int64 v13; // rcx
  PVOID Object; // [rsp+28h] [rbp-160h] BYREF
  __int64 v16; // [rsp+30h] [rbp-158h]
  HANDLE Handle[41]; // [rsp+40h] [rbp-148h] BYREF
  CInputSink *v18; // [rsp+1A8h] [rbp+20h] BYREF

  v6 = 0;
  v7 = 0;
  Object = 0LL;
  v8 = 0LL;
  v16 = 0LL;
  memset(Handle, 0, 0x108uLL);
  v10 = 0;
  if ( a2 )
  {
    v9 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || v9 > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v8 = *a2;
    v16 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( (unsigned int)UserIsCurrentProcessDwm(v9) )
    {
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v11, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v18 = 0LL;
        v7 = CompositionSurfaceObject::LockForRead((char *)Object, &v18);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::OpenSwapChainHandles(v18, v8, (struct CSM_SWAPCHAIN_HANDLE_INFO *)Handle);
          v10 = v7 >= 0;
          CInputSink::UnlockAndRelease(v18);
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
    v12 = Handle;
    v13 = 2LL;
    do
    {
      *a3 = *(_OWORD *)v12;
      a3[1] = *((_OWORD *)v12 + 1);
      a3[2] = *((_OWORD *)v12 + 2);
      a3[3] = *((_OWORD *)v12 + 3);
      a3[4] = *((_OWORD *)v12 + 4);
      a3[5] = *((_OWORD *)v12 + 5);
      a3[6] = *((_OWORD *)v12 + 6);
      a3 += 8;
      *(a3 - 1) = *((_OWORD *)v12 + 7);
      v12 += 16;
      --v13;
    }
    while ( v13 );
    *(_QWORD *)a3 = *v12;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 < 0 )
  {
LABEL_32:
    if ( v10 )
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

/*
 * XREFs of NtUnBindCompositionSurface @ 0x1C0075E50
 * Callers:
 *     <none>
 * Callees:
 *     UserRemoveWindowedSwapChain_0 @ 0x1C0002F88 (UserRemoveWindowedSwapChain_0.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?UnBind@CCompositionSurface@@QEAAJ_N@Z @ 0x1C003A69C (-UnBind@CCompositionSurface@@QEAAJ_N@Z.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C003A6C0 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z @ 0x1C00E200C (-AddUnBindTokenInternal@CTokenManager@@IEAAJPEAUCompositionSurfaceObject@@@Z.c)
 */

__int64 __fastcall NtUnBindCompositionSurface(void *a1, int a2, __int64 a3)
{
  int v4; // edi
  CTokenManager *v6; // rcx
  PVOID Object; // [rsp+20h] [rbp-3E8h] BYREF
  CInputSink *v8; // [rsp+28h] [rbp-3E0h] BYREF
  _QWORD v9[120]; // [rsp+30h] [rbp-3D8h] BYREF

  Object = 0LL;
  v4 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, a3, (struct CompositionSurfaceObject **)&Object);
  if ( v4 >= 0 )
  {
    v8 = 0LL;
    memset(v9, 0, sizeof(v9));
    v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v8);
    if ( v4 >= 0 )
    {
      CCompositionSurface::QueryBinding(v8, 0LL, (struct CSM_BUFFER_INFO *)v9);
      v4 = CCompositionSurface::UnBind(v8, a2 != 0);
      CInputSink::UnlockAndRelease(v8);
      if ( v4 >= 0 )
      {
        if ( LODWORD(v9[0]) == 2 && v9[23] )
          UserRemoveWindowedSwapChain_0();
        if ( !a2 )
        {
          KeEnterCriticalRegion();
          if ( g_pTokenManager )
            CTokenManager::AddUnBindTokenInternal(v6, (struct CompositionSurfaceObject *)Object);
          KeLeaveCriticalRegion();
        }
      }
    }
    ObfDereferenceObject(Object);
  }
  return (unsigned int)v4;
}

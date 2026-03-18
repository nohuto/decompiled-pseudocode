/*
 * XREFs of NtSetCompositionSurfaceBufferCompositionMode @ 0x1C0015EA0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C004852C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferCompositionMode(void *a1, unsigned __int64 *a2, unsigned int a3)
{
  int v5; // ebx
  unsigned __int64 v6; // rdi
  __int64 v7; // r8
  struct CCompositionBuffer *v9; // [rsp+28h] [rbp-30h] BYREF
  CCompositionSurface *v10; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v11; // [rsp+70h] [rbp+18h]
  PVOID Object; // [rsp+78h] [rbp+20h] BYREF

  v11 = a3;
  v5 = 0;
  v6 = 0LL;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v6 = *a2;
  }
  else
  {
    v5 = -1073741811;
  }
  if ( v5 >= 0 )
  {
    if ( a3 > 2 )
      v5 = -1073741811;
    if ( v5 >= 0 )
    {
      if ( UserIsCurrentProcessDwm() )
      {
        Object = 0LL;
        v5 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v7, (struct CompositionSurfaceObject **)&Object);
        if ( v5 >= 0 )
        {
          v10 = 0LL;
          v5 = CompositionSurfaceObject::LockForWrite(Object, &v10);
          if ( v5 >= 0 )
          {
            if ( (int)CCompositionSurface::FindBuffer(v10, v6, &v9) >= 0 )
              *((_DWORD *)v9 + 82) = a3;
            CInputSink::UnlockAndRelease(v10);
          }
          ObfDereferenceObject(Object);
        }
      }
      else
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return (unsigned int)v5;
}

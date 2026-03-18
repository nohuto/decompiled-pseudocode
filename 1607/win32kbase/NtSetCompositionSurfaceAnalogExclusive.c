/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C00F2FD0
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, int a2)
{
  __int64 v4; // r8
  int v5; // ebx
  CInputSink *v6; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CInputSink *v9; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  if ( UserIsCurrentProcessDwm((__int64)a1) )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v9 = 0LL;
      v5 = CompositionSurfaceObject::LockForWrite((char *)Object, &v9);
      if ( v5 >= 0 )
      {
        v6 = v9;
        *((_BYTE *)v9 + 88) = a2 != 0;
        CInputSink::UnlockAndRelease(v6);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    return (unsigned int)-1073741790;
  }
  return (unsigned int)v5;
}

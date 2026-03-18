/*
 * XREFs of NtSetCompositionSurfaceAnalogExclusive @ 0x1C00E0D70
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtSetCompositionSurfaceAnalogExclusive(void *a1, __int64 a2)
{
  int v2; // edi
  __int64 v4; // r8
  int v5; // ebx
  CInputSink *v6; // rcx
  PVOID Object; // [rsp+40h] [rbp+18h] BYREF
  CInputSink *v9; // [rsp+48h] [rbp+20h] BYREF

  Object = 0LL;
  v2 = a2;
  if ( UserIsCurrentProcessDwm((__int64)a1, a2) )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v9 = 0LL;
      v5 = CompositionSurfaceObject::LockForWrite((char *)Object, &v9);
      if ( v5 >= 0 )
      {
        v6 = v9;
        *((_BYTE *)v9 + 88) = v2 != 0;
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

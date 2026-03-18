/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00F3370
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C001B724 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        __int64 a1,
        __int64 *a2,
        __int64 a3,
        __int64 a4,
        int a5,
        int a6,
        _DWORD *a7)
{
  void *v7; // r14
  int Buffer; // ebx
  __int64 v9; // rsi
  __int64 v10; // r8
  CCompositionSurface *v12; // [rsp+48h] [rbp-50h] BYREF
  PVOID Object; // [rsp+50h] [rbp-48h] BYREF
  __int64 v14; // [rsp+58h] [rbp-40h]
  struct CCompositionBuffer *v15; // [rsp+60h] [rbp-38h] BYREF

  v7 = (void *)a1;
  Buffer = 0;
  v9 = 0LL;
  v14 = 0LL;
  if ( a2 )
  {
    a1 = (__int64)(a2 + 1);
    if ( a2 + 1 < a2 || a1 > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v9 = *a2;
    v14 = *a2;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 )
  {
    if ( UserIsCurrentProcessDwm(a1) )
    {
      Object = 0LL;
      Buffer = CompositionSurfaceObject::ResolveHandle(v7, 2LL, v10, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v12 = 0LL;
        Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v12);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v12, v9, &v15);
          if ( Buffer >= 0 )
            Buffer = _guard_dispatch_icall_fptr();
          CInputSink::UnlockAndRelease(v12);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( Buffer >= 0 )
  {
    if ( a7 )
    {
      if ( a7 + 1 < a7 || (unsigned __int64)(a7 + 1) > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *a7 = 0;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}

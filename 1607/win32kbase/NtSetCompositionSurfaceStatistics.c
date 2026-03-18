/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C00F3550
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     ?SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z @ 0x1C00F37A8 (-SetSurfaceStats@CCompositionSurface@@QEAAJ_KAEBUDXGI_FRAME_STATISTICS@@@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(__int64 a1, unsigned __int64 *a2, _OWORD *a3)
{
  void *v3; // rdi
  int v4; // ebx
  unsigned __int64 v5; // rsi
  __int128 v6; // xmm1
  __int64 v7; // r8
  CInputSink *v8; // rdi
  _OWORD v10[4]; // [rsp+28h] [rbp-40h] BYREF
  PVOID Object; // [rsp+80h] [rbp+18h] BYREF
  CInputSink *v12; // [rsp+88h] [rbp+20h] BYREF

  v3 = (void *)a1;
  v4 = 0;
  v5 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    a1 = (__int64)(a3 + 2);
    if ( a3 + 2 < a3 || a1 > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v6 = a3[1];
    v10[0] = *a3;
    v10[1] = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    if ( UserIsCurrentProcessDwm(a1) )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(v3, 2LL, v7, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v12 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v12);
        if ( v4 >= 0 )
        {
          v8 = v12;
          if ( *((_BYTE *)v12 + 88) )
            CCompositionSurface::SetSurfaceStats(v12, v5, (const struct DXGI_FRAME_STATISTICS *)v10);
          else
            v4 = -1073741823;
          CInputSink::UnlockAndRelease(v8);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      return (unsigned int)-1073741790;
    }
  }
  return (unsigned int)v4;
}

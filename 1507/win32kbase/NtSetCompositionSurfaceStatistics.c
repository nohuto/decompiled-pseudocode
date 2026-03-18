/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C00DF270
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C004852C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00489FC (-UpdateStats@CCompositionSurface@@IEAAJ_KAEBUCSM_BUFFER_STATISTICS@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(void *a1, unsigned __int64 *a2, __int128 *a3)
{
  int v4; // ebx
  unsigned __int64 v5; // rdi
  __int64 v6; // r8
  __int128 v8; // [rsp+28h] [rbp-70h]
  __int128 v9; // [rsp+38h] [rbp-60h]
  _OWORD v10[5]; // [rsp+48h] [rbp-50h] BYREF
  CInputSink *v11; // [rsp+B0h] [rbp+18h] BYREF
  PVOID Object; // [rsp+B8h] [rbp+20h] BYREF

  v4 = 0;
  v5 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v5 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v8 = *a3;
    v9 = a3[1];
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v6, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v11 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v11);
        if ( v4 >= 0 )
        {
          memset(v10, 0, 0x30uLL);
          LODWORD(v10[0]) = 0;
          v10[1] = v8;
          v10[2] = v9;
          CCompositionSurface::UpdateStats(v11, v5, (const struct CSM_BUFFER_STATISTICS *)v10);
          CInputSink::UnlockAndRelease(v11);
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

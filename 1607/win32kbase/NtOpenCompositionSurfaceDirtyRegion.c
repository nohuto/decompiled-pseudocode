/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C004B0F0
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C001B724 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C001C350 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C001E7F4 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C004B520 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     EngDeleteRgn @ 0x1C0078910 (EngDeleteRgn.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(unsigned __int64 a1, __int64 *a2, __int128 *a3, HRGN *a4)
{
  void *v5; // r15
  int Buffer; // ebx
  __int64 v7; // r14
  HRGN v8; // rdi
  __int64 v9; // r8
  CCompositionSurface *v11; // [rsp+28h] [rbp-90h] BYREF
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  __int64 v13; // [rsp+38h] [rbp-80h]
  struct CCompositionBuffer *v14; // [rsp+40h] [rbp-78h] BYREF
  struct CBufferRealization *v15; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  HRGN v19; // [rsp+C8h] [rbp+10h] BYREF
  HRGN *v20; // [rsp+D8h] [rbp+20h]

  v20 = a4;
  v5 = (void *)a1;
  Buffer = 0;
  Object = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v7 = *a2;
    v13 = *a2;
    a1 = (unsigned __int64)(a3 + 2);
    if ( a3 + 2 < a3 || a1 > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v17 = *a3;
    v18 = a3[1];
    v16[0] = v17;
    v16[1] = v18;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 )
  {
    if ( (unsigned int)UserIsCurrentProcessDwm(a1) )
    {
      Buffer = CompositionSurfaceObject::ResolveHandle(v5, 1LL, v9, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v11 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead((char *)Object, &v11);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v11, v7, &v14);
          if ( Buffer >= 0 )
          {
            Buffer = CCompositionBuffer::FindRealization(v14, (const struct CSM_REALIZATION_INFO *)v16, &v15);
            if ( Buffer >= 0 )
            {
              Buffer = CBufferRealization::OpenLifetimeDirtyRegion(v15, &v19);
              v8 = v19;
            }
          }
          CInputSink::UnlockAndRelease(v11);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      Buffer = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 1 < a4 || (unsigned __int64)(a4 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a4 = v8;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer < 0 && v8 )
    EngDeleteRgn(v8);
  return (unsigned int)Buffer;
}

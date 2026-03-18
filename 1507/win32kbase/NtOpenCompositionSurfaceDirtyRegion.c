/*
 * XREFs of NtOpenCompositionSurfaceDirtyRegion @ 0x1C001FAD0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     EngDeleteRgn @ 0x1C0011020 (EngDeleteRgn.c)
 *     ?OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z @ 0x1C001FEF0 (-OpenLifetimeDirtyRegion@CBufferRealization@@QEBAJPEAPEAUHRGN__@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0048590 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C0048D48 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@Z @ 0x1C004A220 (-FindRealization@CCompositionBuffer@@QEBAJAEBUCSM_REALIZATION_INFO@@PEAPEAVCBufferRealization@@@.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceDirtyRegion(void *a1, unsigned __int64 *a2, __int128 *a3, HRGN *a4)
{
  int Buffer; // ebx
  unsigned __int64 v7; // r14
  HRGN v8; // rdi
  __int64 v9; // r8
  CCompositionSurface *v11; // [rsp+28h] [rbp-90h] BYREF
  PVOID Object; // [rsp+30h] [rbp-88h] BYREF
  unsigned __int64 v13; // [rsp+38h] [rbp-80h]
  struct CBufferRealization *v14; // [rsp+40h] [rbp-78h] BYREF
  struct CCompositionBuffer *v15; // [rsp+48h] [rbp-70h] BYREF
  _OWORD v16[2]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v17; // [rsp+70h] [rbp-48h]
  __int128 v18; // [rsp+80h] [rbp-38h]
  HRGN v19; // [rsp+C8h] [rbp+10h] BYREF
  HRGN *v20; // [rsp+D8h] [rbp+20h]

  v20 = a4;
  Buffer = 0;
  Object = 0LL;
  v7 = 0LL;
  v13 = 0LL;
  v8 = 0LL;
  v19 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v13 = *a2;
    if ( a3 + 2 < a3 || (unsigned __int64)(a3 + 2) > MmUserProbeAddress )
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
    if ( UserIsCurrentProcessDwm() )
    {
      Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v9, (struct CompositionSurfaceObject **)&Object);
      if ( Buffer >= 0 )
      {
        v11 = 0LL;
        Buffer = CompositionSurfaceObject::LockForRead(Object, &v11);
        if ( Buffer >= 0 )
        {
          Buffer = CCompositionSurface::FindBuffer(v11, v7, &v15);
          if ( Buffer >= 0 )
          {
            Buffer = CCompositionBuffer::FindRealization(v15, (const struct CSM_REALIZATION_INFO *)v16, &v14);
            if ( Buffer >= 0 )
            {
              Buffer = CBufferRealization::OpenLifetimeDirtyRegion(v14, &v19);
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

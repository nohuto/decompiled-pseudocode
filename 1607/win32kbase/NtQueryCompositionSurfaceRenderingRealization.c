/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C004A950
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C001BBB0 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C001C350 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004B5A0 (UserIsCurrentProcessDwm.c)
 *     memset @ 0x1C008A080 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  __int64 v4; // r8
  int v5; // ebx
  _OWORD *v6; // rdi
  _OWORD v8[13]; // [rsp+30h] [rbp-D8h] BYREF
  CInputSink *v9; // [rsp+120h] [rbp+18h] BYREF
  PVOID Object; // [rsp+128h] [rbp+20h] BYREF

  Object = 0LL;
  memset(v8, 0, 0xC8uLL);
  if ( (unsigned int)UserIsCurrentProcessDwm() )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v9 = 0LL;
      v5 = CompositionSurfaceObject::LockForRead((char *)Object, &v9);
      if ( v5 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v9, (struct CSM_SURFACE_UPDATE *)v8);
        CInputSink::UnlockAndRelease(v9);
      }
      ObfDereferenceObject(Object);
    }
  }
  else
  {
    v5 = -1073741790;
  }
  if ( a2 )
  {
    if ( (_OWORD *)((char *)a2 + 200) < a2 || (unsigned __int64)a2 + 200 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v8[0];
    a2[1] = v8[1];
    a2[2] = v8[2];
    a2[3] = v8[3];
    a2[4] = v8[4];
    a2[5] = v8[5];
    a2[6] = v8[6];
    v6 = a2 + 8;
    *(v6 - 1) = v8[7];
    *v6 = v8[8];
    v6[1] = v8[9];
    v6[2] = v8[10];
    v6[3] = v8[11];
    *((_QWORD *)v6 + 8) = *(_QWORD *)&v8[12];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}

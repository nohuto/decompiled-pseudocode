/*
 * XREFs of NtQueryCompositionSurfaceRenderingRealization @ 0x1C004D140
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0039DAC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z @ 0x1C003A760 (-GetRenderingRealizationInfo@CCompositionSurface@@QEBAJPEAUCSM_SURFACE_UPDATE@@@Z.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceRenderingRealization(void *a1, _OWORD *a2)
{
  __int64 v4; // r8
  int v5; // ebx
  _OWORD *v6; // rax
  __int64 v7; // rcx
  _DWORD v9[70]; // [rsp+30h] [rbp-118h] BYREF
  CInputSink *v10; // [rsp+160h] [rbp+18h] BYREF
  PVOID Object; // [rsp+168h] [rbp+20h] BYREF

  Object = 0LL;
  memset(v9, 0, 264);
  if ( (unsigned int)UserIsCurrentProcessDwm(a1) )
  {
    v5 = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v4, (struct CompositionSurfaceObject **)&Object);
    if ( v5 >= 0 )
    {
      v10 = 0LL;
      v5 = CompositionSurfaceObject::LockForRead((char *)Object, &v10);
      if ( v5 >= 0 )
      {
        CCompositionSurface::GetRenderingRealizationInfo(v10, (struct CSM_SURFACE_UPDATE *)v9);
        CInputSink::UnlockAndRelease(v10);
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
    if ( (_OWORD *)((char *)a2 + 264) < a2 || (unsigned __int64)a2 + 264 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v6 = v9;
    v7 = 2LL;
    do
    {
      *a2 = *v6;
      a2[1] = v6[1];
      a2[2] = v6[2];
      a2[3] = v6[3];
      a2[4] = v6[4];
      a2[5] = v6[5];
      a2[6] = v6[6];
      a2 += 8;
      *(a2 - 1) = v6[7];
      v6 += 8;
      --v7;
    }
    while ( v7 );
    *(_QWORD *)a2 = *(_QWORD *)v6;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v5;
}

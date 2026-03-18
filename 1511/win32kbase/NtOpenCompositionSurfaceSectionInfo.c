/*
 * XREFs of NtOpenCompositionSurfaceSectionInfo @ 0x1C00E0BC0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0039DAC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 *     ?OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_INFO@@@Z @ 0x1C00E12AC (-OpenSectionInfo@CCompositionSurface@@QEBAJ_KAEBUCSM_SYSMEM_REALIZATION@@PEAUCSM_SYSMEM_SECTION_.c)
 */

__int64 __fastcall NtOpenCompositionSurfaceSectionInfo(
        __int64 a1,
        unsigned __int64 *a2,
        __int64 *a3,
        unsigned __int64 a4)
{
  void *v5; // r14
  int v6; // ebx
  unsigned __int64 v7; // rsi
  __int64 v8; // r8
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  unsigned __int64 v11; // [rsp+30h] [rbp-48h]
  __int64 v12; // [rsp+38h] [rbp-40h] BYREF
  __int128 v13; // [rsp+40h] [rbp-38h] BYREF
  __int64 v14; // [rsp+50h] [rbp-28h]
  CCompositionSurface *v15; // [rsp+88h] [rbp+10h] BYREF
  unsigned __int64 v16; // [rsp+98h] [rbp+20h]

  v16 = a4;
  v5 = (void *)a1;
  v6 = 0;
  Object = 0LL;
  v7 = 0LL;
  v11 = 0LL;
  v13 = 0uLL;
  v14 = 0LL;
  if ( a2 && a3 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v7 = *a2;
    v11 = *a2;
    a1 = (__int64)(a3 + 1);
    if ( a3 + 1 < a3 || a1 > MmUserProbeAddress )
      a3 = (__int64 *)MmUserProbeAddress;
    v12 = *a3;
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 >= 0 )
  {
    if ( UserIsCurrentProcessDwm(a1, (__int64)a2) )
    {
      v6 = CompositionSurfaceObject::ResolveHandle(v5, 1LL, v8, (struct CompositionSurfaceObject **)&Object);
      if ( v6 >= 0 )
      {
        v15 = 0LL;
        v6 = CompositionSurfaceObject::LockForRead((char *)Object, &v15);
        if ( v6 >= 0 )
        {
          v6 = CCompositionSurface::OpenSectionInfo(
                 v15,
                 v7,
                 (const struct CSM_SYSMEM_REALIZATION *)&v12,
                 (struct CSM_SYSMEM_SECTION_INFO *)&v13);
          CInputSink::UnlockAndRelease(v15);
        }
        ObfDereferenceObject(Object);
      }
    }
    else
    {
      v6 = -1073741790;
    }
  }
  if ( a4 )
  {
    if ( a4 + 24 < a4 || a4 + 24 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_OWORD *)a4 = v13;
    *(_QWORD *)(a4 + 16) = v14;
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)v6;
}

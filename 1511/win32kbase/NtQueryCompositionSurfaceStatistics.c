/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C0071220
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0039DAC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C0039E10 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(void *a1, _OWORD *a2)
{
  __int64 v4; // r8
  int Stats; // ebx
  _OWORD v7[4]; // [rsp+28h] [rbp-40h] BYREF
  CCompositionSurface *v8; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  Object = 0LL;
  memset(v7, 0, 0x30uLL);
  LODWORD(v7[0]) = 0;
  Stats = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v4, (struct CompositionSurfaceObject **)&Object);
  if ( Stats >= 0 )
  {
    v8 = 0LL;
    Stats = CompositionSurfaceObject::LockForRead((char *)Object, &v8);
    if ( Stats >= 0 )
    {
      Stats = CCompositionSurface::QueryStats(v8, (struct CSM_BUFFER_STATISTICS *)v7);
      CInputSink::UnlockAndRelease(v8);
    }
    ObfDereferenceObject(Object);
  }
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v7[0];
    a2[1] = v7[1];
    a2[2] = v7[2];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Stats;
}

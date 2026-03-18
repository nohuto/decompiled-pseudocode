/*
 * XREFs of NtQueryCompositionSurfaceStatistics @ 0x1C0048600
 * Callers:
 *     <none>
 * Callees:
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0048590 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z @ 0x1C004872C (-ResolveHandle@CompositionObject@@SAJPEAXKDW4CompositionObjectType@@PEAPEAU1@@Z.c)
 *     ?QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z @ 0x1C00487D0 (-QueryStats@CCompositionSurface@@QEBAJPEAUCSM_BUFFER_STATISTICS@@@Z.c)
 *     memset @ 0x1C0085E40 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceStatistics(__int64 a1, _OWORD *a2)
{
  __int64 v4; // r8
  int Stats; // ebx
  PVOID v6; // rsi
  _OWORD v8[3]; // [rsp+40h] [rbp-38h] BYREF
  CInputSink *v9; // [rsp+90h] [rbp+18h] BYREF
  PVOID Object; // [rsp+98h] [rbp+20h]

  memset(v8, 0, sizeof(v8));
  LODWORD(v8[0]) = 0;
  Object = 0LL;
  LOBYTE(v4) = 1;
  Stats = CompositionObject::ResolveHandle(a1, 1LL, v4);
  if ( Stats >= 0 )
  {
    v6 = Object;
    v9 = 0LL;
    Stats = CompositionSurfaceObject::LockForRead((char *)Object, &v9);
    if ( Stats >= 0 )
    {
      Stats = CCompositionSurface::QueryStats(v9, (struct CSM_BUFFER_STATISTICS *)v8);
      CInputSink::UnlockAndRelease(v9);
    }
    ObfDereferenceObject(v6);
  }
  if ( a2 )
  {
    if ( a2 + 3 < a2 || (unsigned __int64)(a2 + 3) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a2 = v8[0];
    a2[1] = v8[1];
    a2[2] = v8[2];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Stats;
}

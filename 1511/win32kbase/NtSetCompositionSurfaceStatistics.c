/*
 * XREFs of NtSetCompositionSurfaceStatistics @ 0x1C00E10A0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtSetCompositionSurfaceStatistics(__int64 a1, __int64 *a2, __int128 *a3)
{
  void *v3; // rsi
  int v4; // ebx
  __int64 v5; // rdi
  __int128 v6; // xmm1
  __int64 v7; // r8
  struct CCompositionBuffer *v8; // rax
  struct CCompositionBuffer *v10; // [rsp+28h] [rbp-40h] BYREF
  __int128 v11; // [rsp+30h] [rbp-38h]
  __int128 v12; // [rsp+40h] [rbp-28h]
  CCompositionSurface *v13; // [rsp+80h] [rbp+18h] BYREF
  PVOID Object; // [rsp+88h] [rbp+20h] BYREF

  v3 = (void *)a1;
  v4 = 0;
  v5 = 0LL;
  if ( a3 && a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v5 = *a2;
    a1 = (__int64)(a3 + 2);
    if ( a3 + 2 < a3 || a1 > MmUserProbeAddress )
      a3 = (__int128 *)MmUserProbeAddress;
    v6 = a3[1];
    v11 = *a3;
    v12 = v6;
  }
  else
  {
    v4 = -1073741811;
  }
  if ( v4 >= 0 )
  {
    if ( UserIsCurrentProcessDwm(a1, (__int64)a2) )
    {
      Object = 0LL;
      v4 = CompositionSurfaceObject::ResolveHandle(v3, 2LL, v7, (struct CompositionSurfaceObject **)&Object);
      if ( v4 >= 0 )
      {
        v13 = 0LL;
        v4 = CompositionSurfaceObject::LockForWrite((char *)Object, &v13);
        if ( v4 >= 0 )
        {
          if ( (int)CCompositionSurface::FindBuffer(v13, v5, &v10) >= 0 )
          {
            v8 = v10;
            *(_OWORD *)((char *)v10 + 232) = v11;
            *(_OWORD *)((char *)v8 + 248) = v12;
            *((_DWORD *)v8 + 57) = 0;
            *((_BYTE *)v8 + 264) = 1;
          }
          CInputSink::UnlockAndRelease(v13);
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

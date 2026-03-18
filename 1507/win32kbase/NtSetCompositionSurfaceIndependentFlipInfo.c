/*
 * XREFs of NtSetCompositionSurfaceIndependentFlipInfo @ 0x1C00DEFF0
 * Callers:
 *     <none>
 * Callees:
 *     UserIsCurrentProcessDwm @ 0x1C000EA40 (UserIsCurrentProcessDwm.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C004852C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IPEBU_LUID@@IPEAH@Z @ 0x1C00DF488 (-SetIndependentFlip@CCompositionSurface@@QEAAJ_K_N1IPEBU_LUID@@IPEAH@Z.c)
 */

__int64 __fastcall NtSetCompositionSurfaceIndependentFlipInfo(
        void *a1,
        unsigned __int64 *a2,
        unsigned int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned __int64 a7)
{
  int v10; // ebx
  unsigned __int64 v11; // rsi
  __int64 v12; // r8
  struct _LUID *v13; // r14
  _DWORD *v14; // rdx
  CCompositionSurface *v16; // [rsp+48h] [rbp-50h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp-48h]
  PVOID Object; // [rsp+58h] [rbp-40h] BYREF
  struct _LUID v19; // [rsp+60h] [rbp-38h] BYREF
  int v20; // [rsp+A8h] [rbp+10h] BYREF
  unsigned int v21; // [rsp+B0h] [rbp+18h]
  int v22; // [rsp+B8h] [rbp+20h]

  v22 = a4;
  v21 = a3;
  v10 = 0;
  v11 = 0LL;
  v17 = 0LL;
  v20 = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (unsigned __int64 *)MmUserProbeAddress;
    v11 = *a2;
    v17 = *a2;
  }
  else
  {
    v10 = -1073741811;
  }
  if ( v10 >= 0 )
  {
    if ( UserIsCurrentProcessDwm() )
    {
      Object = 0LL;
      v10 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v12, (struct CompositionSurfaceObject **)&Object);
      if ( v10 >= 0 )
      {
        v16 = 0LL;
        v13 = (struct _LUID *)Object;
        v10 = CompositionSurfaceObject::LockForWrite((char *)Object, &v16);
        if ( v10 >= 0 )
        {
          v19 = v13[2];
          v10 = CCompositionSurface::SetIndependentFlip(v16, v11, a4 != 0, a5 != 0, a3, &v19, a6, &v20);
          CInputSink::UnlockAndRelease(v16);
        }
        ObfDereferenceObject(v13);
      }
    }
    else
    {
      v10 = -1073741790;
    }
  }
  if ( v10 >= 0 )
  {
    v14 = (_DWORD *)a7;
    if ( a7 )
    {
      if ( a7 + 4 < a7 || a7 + 4 > MmUserProbeAddress )
        *(_BYTE *)MmUserProbeAddress = 0;
      *v14 = v20;
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)v10;
}

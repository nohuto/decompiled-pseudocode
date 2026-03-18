/*
 * XREFs of NtSetCompositionSurfaceBufferCompositionModeAndOrientation @ 0x1C00501F0
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C003A2EC (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     UserIsCurrentProcessDwm @ 0x1C004D740 (UserIsCurrentProcessDwm.c)
 */

__int64 __fastcall NtSetCompositionSurfaceBufferCompositionModeAndOrientation(
        __int64 a1,
        __int64 *a2,
        unsigned int a3,
        int a4)
{
  void *v6; // r15
  int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // r8
  struct CCompositionBuffer *v10; // rax
  PVOID Object; // [rsp+20h] [rbp-48h] BYREF
  __int64 v13; // [rsp+28h] [rbp-40h]
  struct CCompositionBuffer *v14; // [rsp+30h] [rbp-38h] BYREF
  CCompositionSurface *v15; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v16; // [rsp+80h] [rbp+18h]
  int v17; // [rsp+88h] [rbp+20h]

  v17 = a4;
  v16 = a3;
  v6 = (void *)a1;
  v7 = 0;
  v8 = 0LL;
  v13 = 0LL;
  if ( a2 )
  {
    a1 = (__int64)(a2 + 1);
    if ( a2 + 1 < a2 || a1 > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v8 = *a2;
    v13 = *a2;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    if ( a3 > 2 )
      v7 = -1073741811;
    if ( v7 >= 0 )
    {
      if ( UserIsCurrentProcessDwm(a1, (__int64)a2) )
      {
        Object = 0LL;
        v7 = CompositionSurfaceObject::ResolveHandle(v6, 2LL, v9, (struct CompositionSurfaceObject **)&Object);
        if ( v7 >= 0 )
        {
          v15 = 0LL;
          v7 = CompositionSurfaceObject::LockForWrite((char *)Object, &v15);
          if ( v7 >= 0 )
          {
            if ( (int)CCompositionSurface::FindBuffer(v15, v8, &v14) >= 0 )
            {
              v10 = v14;
              *((_DWORD *)v14 + 55) = a3;
              *((_DWORD *)v10 + 56) = a4;
            }
            CInputSink::UnlockAndRelease(v15);
          }
          ObfDereferenceObject(Object);
        }
      }
      else
      {
        return (unsigned int)-1073741790;
      }
    }
  }
  return (unsigned int)v7;
}

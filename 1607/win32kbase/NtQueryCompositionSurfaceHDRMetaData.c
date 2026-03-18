/*
 * XREFs of NtQueryCompositionSurfaceHDRMetaData @ 0x1C00F2D50
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C001B724 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C001C350 (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceHDRMetaData(
        void *a1,
        __int64 *a2,
        CCompositionSurface *a3,
        unsigned __int64 a4,
        unsigned __int64 a5)
{
  __int64 v6; // r8
  __int64 v7; // r15
  int v8; // edi
  int Buffer; // ebx
  CCompositionSurface *v11; // [rsp+28h] [rbp-80h] BYREF
  int v12; // [rsp+30h] [rbp-78h]
  PVOID Object; // [rsp+38h] [rbp-70h] BYREF
  struct CCompositionBuffer *v14; // [rsp+40h] [rbp-68h] BYREF
  __int64 v15; // [rsp+48h] [rbp-60h]
  struct CCompositionBuffer *v16[5]; // [rsp+50h] [rbp-58h] BYREF

  Object = a1;
  v11 = a3;
  v14 = (struct CCompositionBuffer *)a5;
  v6 = 0LL;
  v7 = 0LL;
  v15 = 0LL;
  v8 = 0;
  v12 = 0;
  memset(&v16[1], 0, 28);
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v7 = *a2;
    v15 = *a2;
  }
  else
  {
    v6 = 3221225485LL;
  }
  if ( (int)v6 < 0 )
  {
    Buffer = -1073741790;
  }
  else
  {
    Object = 0LL;
    Buffer = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v6, (struct CompositionSurfaceObject **)&Object);
    if ( Buffer >= 0 )
    {
      v11 = 0LL;
      Buffer = CompositionSurfaceObject::LockForRead((char *)Object, &v11);
      if ( Buffer >= 0 )
      {
        Buffer = CCompositionSurface::FindBuffer(v11, v7, &v14);
        if ( Buffer >= 0 )
        {
          v8 = _guard_dispatch_icall_fptr();
          v12 = v8;
          if ( v8 )
          {
            if ( v8 == 1 )
            {
              Buffer = CCompositionSurface::FindBuffer(v11, v7, v16);
              if ( Buffer >= 0 )
                Buffer = _guard_dispatch_icall_fptr();
            }
            else
            {
              Buffer = -1073741811;
            }
          }
        }
        CInputSink::UnlockAndRelease(v11);
      }
      ObfDereferenceObject(Object);
    }
  }
  if ( a3 )
  {
    if ( (CCompositionSurface *)((char *)a3 + 4) < a3 || (unsigned __int64)a3 + 4 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_DWORD *)a3 = v8;
  }
  else
  {
    Buffer = -1073741811;
  }
  if ( Buffer >= 0 && a5 && v8 )
  {
    if ( v8 == 1 )
    {
      if ( a4 < 0x1C )
      {
        return (unsigned int)-1073741789;
      }
      else
      {
        if ( a5 + 28 < a5 || a5 + 28 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_OWORD *)a5 = *(_OWORD *)&v16[1];
        *(struct CCompositionBuffer **)(a5 + 16) = v16[3];
        *(_DWORD *)(a5 + 24) = v16[4];
      }
    }
    else
    {
      return (unsigned int)-1073741811;
    }
  }
  return (unsigned int)Buffer;
}

/*
 * XREFs of NtSetCompositionSurfaceHDRMetaData @ 0x1C00F3180
 * Callers:
 *     <none>
 * Callees:
 *     ?FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z @ 0x1C001B724 (-FindBuffer@CCompositionSurface@@IEBAJ_KPEAPEAVCCompositionBuffer@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C001B9E0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C001C300 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C004862C (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     __security_check_cookie @ 0x1C0089A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0089D10 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall NtSetCompositionSurfaceHDRMetaData(void *a1, __int64 *a2, ULONG64 a3, ULONG64 a4)
{
  int v4; // edi
  int v6; // ecx
  __int64 v7; // rsi
  __int64 v8; // xmm1_8
  int v9; // eax
  int Buffer; // ebx
  bool v11; // zf
  CCompositionSurface *v12; // rdi
  PVOID Object; // [rsp+28h] [rbp-50h] BYREF
  CCompositionSurface *v15; // [rsp+30h] [rbp-48h] BYREF
  struct CCompositionBuffer *v16; // [rsp+38h] [rbp-40h] BYREF
  __int64 v17; // [rsp+40h] [rbp-38h]
  _OWORD v18[2]; // [rsp+48h] [rbp-30h] BYREF

  v4 = a3;
  Object = a1;
  v6 = 0;
  v7 = 0LL;
  v17 = 0LL;
  memset(v18, 0, 28);
  if ( a2 )
  {
    a3 = (ULONG64)(a2 + 1);
    if ( a2 + 1 < a2 || a3 > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v7 = *a2;
    v17 = *a2;
    if ( v4 )
    {
      if ( v4 == 1 && a4 )
      {
        if ( a4 + 28 < a4 || a4 + 28 > MmUserProbeAddress )
          a4 = MmUserProbeAddress;
        v8 = *(_QWORD *)(a4 + 16);
        v9 = *(_DWORD *)(a4 + 24);
        v18[0] = *(_OWORD *)a4;
        *(_QWORD *)&v18[1] = v8;
        DWORD2(v18[1]) = v9;
      }
      else
      {
        v6 = -1073741811;
      }
    }
  }
  else
  {
    v6 = -1073741811;
  }
  if ( v6 < 0 )
  {
    return (unsigned int)-1073741790;
  }
  else
  {
    Object = 0LL;
    Buffer = CompositionSurfaceObject::ResolveHandle(a1, 2LL, a3, (struct CompositionSurfaceObject **)&Object);
    if ( Buffer >= 0 )
    {
      v15 = 0LL;
      Buffer = CompositionSurfaceObject::LockForWrite((char *)Object, &v15);
      if ( Buffer >= 0 )
      {
        if ( v4 )
        {
          v11 = v4 == 1;
          v12 = v15;
          if ( v11 )
          {
            Buffer = CCompositionSurface::FindBuffer(v15, v7, &v16);
            if ( Buffer >= 0 )
              Buffer = _guard_dispatch_icall_fptr();
          }
          else
          {
            Buffer = -1073741811;
          }
        }
        else
        {
          v12 = v15;
          Buffer = CCompositionSurface::FindBuffer(v15, v7, &v16);
          if ( Buffer >= 0 )
            _guard_dispatch_icall_fptr();
        }
        CInputSink::UnlockAndRelease(v12);
      }
      ObfDereferenceObject(Object);
    }
  }
  return (unsigned int)Buffer;
}

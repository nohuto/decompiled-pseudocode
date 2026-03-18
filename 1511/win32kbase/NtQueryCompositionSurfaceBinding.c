/*
 * XREFs of NtQueryCompositionSurfaceBinding @ 0x1C0073280
 * Callers:
 *     <none>
 * Callees:
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z @ 0x1C0039DAC (-LockForRead@CompositionSurfaceObject@@QEBAJPEAPEBVCCompositionSurface@@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z @ 0x1C003A6C0 (-QueryBinding@CCompositionSurface@@QEBAJ_KPEAUCSM_BUFFER_INFO@@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     memset @ 0x1C00890C0 (memset.c)
 */

__int64 __fastcall NtQueryCompositionSurfaceBinding(CInputSink *a1, __int64 *a2, _OWORD *a3)
{
  _OWORD *v3; // rdi
  __int64 v6; // rsi
  __int64 v7; // r8
  int Binding; // ebx
  _OWORD *v9; // rax
  __int64 v10; // rcx
  CInputSink *v12; // [rsp+28h] [rbp-410h] BYREF
  PVOID Object; // [rsp+30h] [rbp-408h] BYREF
  __int64 v14; // [rsp+38h] [rbp-400h]
  _OWORD *v15; // [rsp+40h] [rbp-3F8h]
  _DWORD v16[240]; // [rsp+50h] [rbp-3E8h] BYREF

  v3 = a3;
  v12 = a1;
  v15 = a3;
  v6 = 0LL;
  v14 = 0LL;
  Object = 0LL;
  memset(v16, 0, sizeof(v16));
  v16[0] = 0;
  if ( a2 )
  {
    if ( a2 + 1 < a2 || (unsigned __int64)(a2 + 1) > MmUserProbeAddress )
      a2 = (__int64 *)MmUserProbeAddress;
    v6 = *a2;
    v14 = *a2;
  }
  Binding = CompositionSurfaceObject::ResolveHandle(a1, 1LL, v7, (struct CompositionSurfaceObject **)&Object);
  if ( Binding >= 0 )
  {
    v12 = 0LL;
    Binding = CompositionSurfaceObject::LockForRead((char *)Object, &v12);
    if ( Binding >= 0 )
    {
      Binding = CCompositionSurface::QueryBinding(v12, v6, (struct CSM_BUFFER_INFO *)v16);
      CInputSink::UnlockAndRelease(v12);
    }
    ObfDereferenceObject(Object);
  }
  if ( v3 )
  {
    if ( v3 + 60 < v3 || (unsigned __int64)(v3 + 60) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    v9 = v16;
    v10 = 7LL;
    do
    {
      *v3 = *v9;
      v3[1] = v9[1];
      v3[2] = v9[2];
      v3[3] = v9[3];
      v3[4] = v9[4];
      v3[5] = v9[5];
      v3[6] = v9[6];
      v3 += 8;
      *(v3 - 1) = v9[7];
      v9 += 8;
      --v10;
    }
    while ( v10 );
    *v3 = *v9;
    v3[1] = v9[1];
    v3[2] = v9[2];
    v3[3] = v9[3];
  }
  else
  {
    return (unsigned int)-1073741811;
  }
  return (unsigned int)Binding;
}

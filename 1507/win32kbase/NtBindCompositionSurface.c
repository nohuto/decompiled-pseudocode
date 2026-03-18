/*
 * XREFs of NtBindCompositionSurface @ 0x1C000FEB0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetWindowedSwapChainApiExt_0 @ 0x1C0002F40 (UserSetWindowedSwapChainApiExt_0.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0010214 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00106E0 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C0021ED0 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C004852C (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C0048C0C (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C0049114 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     __security_check_cookie @ 0x1C0085840 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0085AE0 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C0085E40 (memset.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00DF60C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, int a2, _OWORD *a3, struct CFlipExBuffer *a4)
{
  int v7; // ebx
  __int64 v8; // r12
  _OWORD *v9; // rax
  __int64 v10; // rdx
  __int64 v11; // rcx
  _OWORD *v12; // rax
  _OWORD *v13; // rcx
  struct CCompositionBuffer *v14; // rdi
  __int64 v15; // r15
  char v16; // r14
  char v17; // r8
  PVOID Object; // [rsp+28h] [rbp-810h] BYREF
  struct CCompositionBuffer *v20; // [rsp+30h] [rbp-808h] BYREF
  void *v21; // [rsp+38h] [rbp-800h]
  CInputSink *v22; // [rsp+40h] [rbp-7F8h] BYREF
  CInputSink *v23; // [rsp+48h] [rbp-7F0h] BYREF
  __int64 v24; // [rsp+50h] [rbp-7E8h]
  struct CFlipExBuffer *v25[2]; // [rsp+58h] [rbp-7E0h] BYREF
  _BYTE v26[968]; // [rsp+68h] [rbp-7D0h] BYREF
  _QWORD v27[120]; // [rsp+430h] [rbp-408h] BYREF

  v21 = a1;
  v25[1] = a4;
  v7 = 0;
  v8 = 0LL;
  v24 = 0LL;
  memset(v27, 0, sizeof(v27));
  if ( a3 )
  {
    if ( a3 + 60 < a3 || (unsigned __int64)(a3 + 60) > MmUserProbeAddress )
      a3 = (_OWORD *)MmUserProbeAddress;
    v9 = v26;
    v10 = 7LL;
    v11 = 7LL;
    do
    {
      *v9 = *a3;
      v9[1] = a3[1];
      v9[2] = a3[2];
      v9[3] = a3[3];
      v9[4] = a3[4];
      v9[5] = a3[5];
      v9[6] = a3[6];
      v9 += 8;
      *(v9 - 1) = a3[7];
      a3 += 8;
      --v11;
    }
    while ( v11 );
    *v9 = *a3;
    v9[1] = a3[1];
    v9[2] = a3[2];
    v9[3] = a3[3];
    v12 = v27;
    v13 = v26;
    do
    {
      *v12 = *v13;
      v12[1] = v13[1];
      v12[2] = v13[2];
      v12[3] = v13[3];
      v12[4] = v13[4];
      v12[5] = v13[5];
      v12[6] = v13[6];
      v12 += 8;
      *(v12 - 1) = v13[7];
      v13 += 8;
      --v10;
    }
    while ( v10 );
    *v12 = *v13;
    v12[1] = v13[1];
    v12[2] = v13[2];
    v12[3] = v13[3];
    if ( (struct CFlipExBuffer *)((char *)a4 + 8) < a4 || (unsigned __int64)a4 + 8 > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *(_QWORD *)a4 = 0LL;
  }
  else
  {
    v7 = -1073741811;
  }
  if ( v7 >= 0 )
  {
    v14 = 0LL;
    v20 = 0LL;
    v15 = 0LL;
    v21 = 0LL;
    v16 = 0;
    KeEnterCriticalRegion();
    if ( LODWORD(v27[0]) == 1 )
    {
      v7 = CCompositionBuffer::Create(
             (const struct CSM_BUFFER_ATTRIBUTES *)&v27[2],
             (const struct CSM_SINGLE_BUFFER_INFO *)&v27[23],
             &v20);
      v14 = v20;
    }
    else if ( LODWORD(v27[0]) == 2 )
    {
      v7 = CFlipExBuffer::Create(
             (const struct CSM_BUFFER_ATTRIBUTES *)&v27[2],
             (const struct CSM_SWAPCHAIN_BUFFER_INFO *)&v27[23],
             v25);
      if ( v7 >= 0 )
      {
        v14 = v25[0];
        v20 = v25[0];
        v15 = v27[23];
        v21 = (void *)v27[23];
      }
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 >= 0 )
    {
      Object = 0LL;
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 2u, v17, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v23 = 0LL;
        v7 = CompositionSurfaceObject::LockForWrite(Object, &v23);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::Bind(v23, v14, a2 != 0);
          if ( v7 >= 0 )
          {
            v16 = 1;
            v8 = *((_QWORD *)v14 + 1);
            v24 = v8;
          }
          CInputSink::UnlockAndRelease(v23);
        }
      }
      if ( a4 )
      {
        if ( (struct CFlipExBuffer *)((char *)a4 + 8) < a4 || (unsigned __int64)a4 + 8 > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *(_QWORD *)a4 = v8;
      }
      else
      {
        v7 = -1073741811;
      }
      if ( v7 < 0 )
        goto LABEL_52;
      if ( v15 && !(unsigned int)UserSetWindowedSwapChainApiExt_0() )
        v7 = -1073741790;
      if ( v7 < 0 )
      {
LABEL_52:
        if ( v16 )
        {
          v22 = 0LL;
          if ( (int)CompositionSurfaceObject::LockForWrite(Object, &v22) >= 0 )
          {
            CCompositionSurface::ReleaseAllBuffers(v22);
            CInputSink::UnlockAndRelease(v22);
          }
        }
      }
      if ( Object )
        ObfDereferenceObject(Object);
      if ( v14 && !v16 )
        _guard_dispatch_icall_fptr();
    }
    KeLeaveCriticalRegion();
  }
  return (unsigned int)v7;
}

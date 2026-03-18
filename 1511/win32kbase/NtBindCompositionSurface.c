/*
 * XREFs of NtBindCompositionSurface @ 0x1C00720B0
 * Callers:
 *     <none>
 * Callees:
 *     UserSetWindowedSwapChainApiExt_0 @ 0x1C0002F80 (UserSetWindowedSwapChainApiExt_0.c)
 *     ?ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z @ 0x1C00393C8 (-ResolveHandle@CompositionSurfaceObject@@KAJPEAXKDPEAPEAU1@@Z.c)
 *     ?LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z @ 0x1C0039D48 (-LockForWrite@CompositionSurfaceObject@@QEAAJPEAPEAVCCompositionSurface@@@Z.c)
 *     ?ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ @ 0x1C003A134 (-ReleaseAllBuffers@CCompositionSurface@@IEAA_NXZ.c)
 *     ?UnlockAndRelease@CInputSink@@QEBA_NXZ @ 0x1C003A570 (-UnlockAndRelease@CInputSink@@QEBA_NXZ.c)
 *     ?Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z @ 0x1C003A624 (-Bind@CCompositionSurface@@QEAAJPEAVCCompositionBuffer@@_N@Z.c)
 *     ?Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C0072420 (-Create@CFlipExBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SWAPCHAIN_BUFFER_INFO@@PEAPEAV1@@Z.c)
 *     __security_check_cookie @ 0x1C0088A80 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1C0088D70 (_guard_dispatch_icall_nop.c)
 *     memset @ 0x1C00890C0 (memset.c)
 *     ?Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@Z @ 0x1C00E142C (-Create@CCompositionBuffer@@SAJAEBUCSM_BUFFER_ATTRIBUTES@@AEBUCSM_SINGLE_BUFFER_INFO@@PEAPEAV1@@.c)
 */

__int64 __fastcall NtBindCompositionSurface(void *a1, __int64 a2, int a3, _OWORD *a4, _QWORD *a5)
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
  __int64 v17; // r8
  PVOID Object; // [rsp+28h] [rbp-810h] BYREF
  struct CCompositionBuffer *v20; // [rsp+30h] [rbp-808h] BYREF
  void *v21; // [rsp+38h] [rbp-800h]
  CCompositionSurface *v22; // [rsp+40h] [rbp-7F8h] BYREF
  CInputSink *v23; // [rsp+48h] [rbp-7F0h] BYREF
  int v24; // [rsp+50h] [rbp-7E8h]
  __int64 v25; // [rsp+58h] [rbp-7E0h]
  _QWORD *v26; // [rsp+60h] [rbp-7D8h]
  struct CFlipExBuffer *v27; // [rsp+68h] [rbp-7D0h] BYREF
  _BYTE v28[960]; // [rsp+70h] [rbp-7C8h] BYREF
  _QWORD v29[120]; // [rsp+430h] [rbp-408h] BYREF

  v21 = a1;
  v24 = a3;
  v26 = a5;
  v7 = 0;
  v8 = 0LL;
  v25 = 0LL;
  memset(v29, 0, sizeof(v29));
  if ( a4 )
  {
    if ( a4 + 60 < a4 || (unsigned __int64)(a4 + 60) > MmUserProbeAddress )
      a4 = (_OWORD *)MmUserProbeAddress;
    v9 = v28;
    v10 = 7LL;
    v11 = 7LL;
    do
    {
      *v9 = *a4;
      v9[1] = a4[1];
      v9[2] = a4[2];
      v9[3] = a4[3];
      v9[4] = a4[4];
      v9[5] = a4[5];
      v9[6] = a4[6];
      v9 += 8;
      *(v9 - 1) = a4[7];
      a4 += 8;
      --v11;
    }
    while ( v11 );
    *v9 = *a4;
    v9[1] = a4[1];
    v9[2] = a4[2];
    v9[3] = a4[3];
    v12 = v29;
    v13 = v28;
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
    if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
      *(_BYTE *)MmUserProbeAddress = 0;
    *a5 = 0LL;
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
    if ( LODWORD(v29[0]) == 1 )
    {
      v7 = CCompositionBuffer::Create(
             (const struct CSM_BUFFER_ATTRIBUTES *)&v29[2],
             (const struct CSM_SINGLE_BUFFER_INFO *)&v29[23],
             &v20);
      v14 = v20;
    }
    else if ( LODWORD(v29[0]) == 2 )
    {
      v7 = CFlipExBuffer::Create(
             (const struct CSM_BUFFER_ATTRIBUTES *)&v29[2],
             (const struct CSM_SWAPCHAIN_BUFFER_INFO *)&v29[23],
             &v27);
      if ( v7 >= 0 )
      {
        v14 = v27;
        v20 = v27;
        v15 = v29[23];
        v21 = (void *)v29[23];
      }
    }
    else
    {
      v7 = -1073741811;
    }
    if ( v7 >= 0 )
    {
      Object = 0LL;
      v7 = CompositionSurfaceObject::ResolveHandle(a1, 2LL, v17, (struct CompositionSurfaceObject **)&Object);
      if ( v7 >= 0 )
      {
        v23 = 0LL;
        v7 = CompositionSurfaceObject::LockForWrite((char *)Object, &v23);
        if ( v7 >= 0 )
        {
          v7 = CCompositionSurface::Bind(v23, v14);
          if ( v7 >= 0 )
          {
            v16 = 1;
            v8 = *((_QWORD *)v14 + 2);
            v25 = v8;
          }
          CInputSink::UnlockAndRelease(v23);
        }
      }
      if ( a5 )
      {
        if ( a5 + 1 < a5 || (unsigned __int64)(a5 + 1) > MmUserProbeAddress )
          *(_BYTE *)MmUserProbeAddress = 0;
        *a5 = v8;
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
          if ( (int)CompositionSurfaceObject::LockForWrite((char *)Object, &v22) >= 0 )
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

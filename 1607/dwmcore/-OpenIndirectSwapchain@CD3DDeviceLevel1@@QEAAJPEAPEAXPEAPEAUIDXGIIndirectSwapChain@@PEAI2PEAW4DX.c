/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DXGI_FORMAT@@@Z @ 0x180174E3C
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x180107FF0 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?IsOOM@@YA_NJ@Z @ 0x180047590 (-IsOOM@@YA_NJ@Z.c)
 *     __security_check_cookie @ 0x1800BD3F0 (__security_check_cookie.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 *     ?IsCompBuild@@YA_NXZ @ 0x1801693A8 (-IsCompBuild@@YA_NXZ.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenIndirectSwapchain(
        CD3DDeviceLevel1 *this,
        void **a2,
        struct IDXGIIndirectSwapChain **a3,
        unsigned int *a4,
        unsigned int *a5,
        enum DXGI_FORMAT *a6)
{
  __int64 (__fastcall ***v7)(_QWORD, GUID *, __int64 *); // rcx
  int v11; // eax
  unsigned int v12; // ebx
  int v13; // eax
  struct IDXGIIndirectSwapChain *v14; // rcx
  int v15; // eax
  int v16; // eax
  struct IDXGIIndirectSwapChain *v17; // rcx
  struct IDXGIIndirectSwapChain *v19; // [rsp+40h] [rbp-59h] BYREF
  __int64 v20; // [rsp+48h] [rbp-51h] BYREF
  int v21; // [rsp+50h] [rbp-49h] BYREF
  __int64 v22; // [rsp+58h] [rbp-41h] BYREF
  __int64 v23; // [rsp+60h] [rbp-39h] BYREF
  _DWORD v24[12]; // [rsp+68h] [rbp-31h] BYREF

  v7 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 66);
  v23 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v22 = 0LL;
  v11 = (**v7)(v7, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v23);
  v12 = v11;
  if ( v11 < 0 )
  {
    if ( IsOOM(v11) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x838u);
    goto LABEL_24;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int, struct IDXGIIndirectSwapChain **))(**(_QWORD **)(*((_QWORD *)this + 79) + 40LL) + 32LL))(
          *(_QWORD *)(*((_QWORD *)this + 79) + 40LL),
          v23,
          *a2,
          0LL,
          5,
          0x10000000,
          &v19);
  v12 = v13;
  if ( v13 < 0 )
  {
    if ( IsOOM(v13) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x844u);
    goto LABEL_24;
  }
  v14 = v19;
  *a2 = 0LL;
  v15 = (*(__int64 (__fastcall **)(struct IDXGIIndirectSwapChain *, _QWORD, __int64 *))(*(_QWORD *)v14 + 56LL))(
          v14,
          0LL,
          &v20);
  v12 = v15;
  if ( v15 < 0 )
  {
    if ( IsOOM(v15) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x84Bu);
    goto LABEL_24;
  }
  v16 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
          v20,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v22);
  v12 = v16;
  if ( v16 < 0 )
  {
    if ( IsOOM(v16) && IsCompBuild() )
      NtDCompositionDuplicateHandleToProcess(0LL, 2880220587LL, 0LL);
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v12, 0x84Cu);
LABEL_24:
    v17 = v19;
    goto LABEL_25;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v22 + 80LL))(v22, v24);
  v17 = v19;
  *a3 = v19;
  if ( v17 )
  {
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *))(*(_QWORD *)v17 + 8LL))(v17);
    v17 = v19;
  }
  *a4 = v24[0];
  *a5 = v24[1];
  *a6 = (enum DXGI_FORMAT)v24[4];
LABEL_25:
  if ( v22 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
    v17 = v19;
  }
  if ( v20 )
  {
    v21 = 2;
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *, __int64, int *))(*(_QWORD *)v17 + 64LL))(v17, 4LL, &v21);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v17 = v19;
  }
  if ( v17 )
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *))(*(_QWORD *)v17 + 16LL))(v17);
  if ( v23 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v23 + 16LL))(v23);
  return v12;
}

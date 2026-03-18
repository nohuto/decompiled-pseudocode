/*
 * XREFs of ?OpenIndirectSwapchain@CD3DDeviceLevel1@@QEAAJPEAPEAXPEAPEAUIDXGIIndirectSwapChain@@PEAI2PEAW4DXGI_FORMAT@@@Z @ 0x1801457D4
 * Callers:
 *     ?ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPCHAINRENDERTARGET_CREATE@@@Z @ 0x1800F41D4 (-ProcessCreate@CIndirectSwapchainRenderTarget@@QEAAJPEAVCResourceTable@@PEBUMILCMD_INDIRECTSWAPC.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

__int64 __fastcall CD3DDeviceLevel1::OpenIndirectSwapchain(
        CD3DDeviceLevel1 *this,
        void **a2,
        struct IDXGIIndirectSwapChain **a3,
        unsigned int *a4,
        unsigned int *a5,
        enum DXGI_FORMAT *a6)
{
  __int64 (__fastcall ***v6)(_QWORD, GUID *, __int64 *); // rdi
  __int64 (__fastcall **v10)(_QWORD, GUID *, __int64 *); // rax
  int v11; // eax
  unsigned int v12; // esi
  int v13; // eax
  int v14; // eax
  int v15; // eax
  struct IDXGIIndirectSwapChain *v16; // rdi
  enum DXGI_FORMAT *v17; // rcx
  struct IDXGIIndirectSwapChain *v19; // [rsp+40h] [rbp-69h] BYREF
  __int64 v20; // [rsp+48h] [rbp-61h] BYREF
  __int64 v21; // [rsp+50h] [rbp-59h] BYREF
  __int64 v22; // [rsp+58h] [rbp-51h] BYREF
  struct IDXGIIndirectSwapChain **v23; // [rsp+60h] [rbp-49h] BYREF
  enum DXGI_FORMAT *v24; // [rsp+68h] [rbp-41h]
  _DWORD v25[12]; // [rsp+70h] [rbp-39h] BYREF

  v6 = (__int64 (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 64);
  v24 = a6;
  v22 = 0LL;
  v20 = 0LL;
  v19 = 0LL;
  v21 = 0LL;
  v10 = *v6;
  v23 = a3;
  v11 = (*v10)(v6, &GUID_54ec77fa_1377_44e6_8c32_88fd5f44c84c, &v22);
  v12 = v11;
  if ( v11 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v11, 0x7C3u);
LABEL_9:
    v16 = v19;
    goto LABEL_13;
  }
  v13 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, _QWORD, int, int, struct IDXGIIndirectSwapChain **))(**(_QWORD **)(*((_QWORD *)this + 71) + 40LL) + 32LL))(
          *(_QWORD *)(*((_QWORD *)this + 71) + 40LL),
          v22,
          *a2,
          0LL,
          5,
          0x10000000,
          &v19);
  v12 = v13;
  if ( v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x7CFu);
    goto LABEL_9;
  }
  *a2 = 0LL;
  v14 = (*(__int64 (__fastcall **)(struct IDXGIIndirectSwapChain *, _QWORD, __int64 *))(*(_QWORD *)v19 + 56LL))(
          v19,
          0LL,
          &v20);
  v12 = v14;
  if ( v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x7D6u);
    goto LABEL_9;
  }
  v15 = (**(__int64 (__fastcall ***)(__int64, GUID *, __int64 *))v20)(
          v20,
          &GUID_6f15aaf2_d208_4e89_9ab4_489535d34f9c,
          &v21);
  v12 = v15;
  if ( v15 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v15, 0x7D7u);
    goto LABEL_9;
  }
  (*(void (__fastcall **)(__int64, _DWORD *))(*(_QWORD *)v21 + 80LL))(v21, v25);
  v16 = v19;
  *v23 = v19;
  if ( v16 )
  {
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *))(*(_QWORD *)v16 + 8LL))(v16);
    v16 = v19;
  }
  v17 = v24;
  *a4 = v25[0];
  *a5 = v25[1];
  *v17 = (enum DXGI_FORMAT)v25[4];
LABEL_13:
  if ( v21 )
  {
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v21 + 16LL))(v21);
    v16 = v19;
  }
  if ( v20 )
  {
    LODWORD(v23) = 3;
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *, __int64, struct IDXGIIndirectSwapChain ***))(*(_QWORD *)v16 + 64LL))(
      v16,
      4LL,
      &v23);
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16LL))(v20);
    v16 = v19;
  }
  if ( v16 )
    (*(void (__fastcall **)(struct IDXGIIndirectSwapChain *))(*(_QWORD *)v16 + 16LL))(v16);
  if ( v22 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v22 + 16LL))(v22);
  return v12;
}

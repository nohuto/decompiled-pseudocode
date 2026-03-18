/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18014BC50
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CDWMSwapChain::CheckMultiplaneOverlaySupport(
        CDWMSwapChain *this,
        __int64 a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  unsigned int v5; // r14d
  int v6; // ebx
  bool v9; // bp
  _DWORD *v10; // rcx
  bool *v11; // rax
  bool v12; // si
  int v14; // [rsp+30h] [rbp-38h] BYREF
  _DWORD v15[3]; // [rsp+34h] [rbp-34h] BYREF
  unsigned int v16; // [rsp+70h] [rbp+8h] BYREF

  v5 = a2;
  v6 = 0;
  v16 = 0;
  v14 = 0;
  v15[0] = 0;
  if ( !*((_QWORD *)this + 37) )
    goto LABEL_10;
  v9 = 1;
  if ( (_DWORD)a2 )
  {
    v10 = (_DWORD *)((char *)a3 + 16);
    a2 = (unsigned int)a2;
    do
    {
      *v10 = *((_DWORD *)this + 80);
      v10 += 34;
      --a2;
    }
    while ( a2 );
  }
  v16 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, _DWORD *))(**((_QWORD **)this + 37) + 176LL))(
          *((_QWORD *)this + 37),
          v5,
          a3,
          &v14,
          v15);
  v6 = v16;
  if ( v16 == -2005270527 )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( v6 >= 0 )
  {
    if ( v14 )
    {
LABEL_11:
      v11 = a5;
      v12 = v15[0] != 0;
      *a4 = v9;
      *v11 = v12;
      goto LABEL_12;
    }
LABEL_10:
    v9 = 0;
    goto LABEL_11;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v6, 0x407u);
LABEL_12:
  TranslateDXGIorD3DErrorInContext(v6, 0, &v16);
  return v16;
}

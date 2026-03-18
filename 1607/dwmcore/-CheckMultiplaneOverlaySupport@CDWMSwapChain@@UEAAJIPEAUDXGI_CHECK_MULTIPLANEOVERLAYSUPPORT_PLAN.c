/*
 * XREFs of ?CheckMultiplaneOverlaySupport@CDWMSwapChain@@UEAAJIPEAUDXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO@@PEA_N1@Z @ 0x18017C8D0
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckMultiplaneOverlaySupport(
        CDWMSwapChain *this,
        __int64 a2,
        struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *a3,
        bool *a4,
        bool *a5)
{
  __int64 v5; // rcx
  int v7; // edi
  bool v8; // al
  bool v9; // zf
  int v11; // [rsp+30h] [rbp-18h] BYREF
  _DWORD v12[5]; // [rsp+34h] [rbp-14h] BYREF
  unsigned int v13; // [rsp+50h] [rbp+8h] BYREF

  v5 = *((_QWORD *)this + 37);
  v13 = 0;
  v11 = 0;
  v7 = 0;
  v12[0] = 0;
  if ( !v5 )
    goto LABEL_7;
  v13 = (*(__int64 (__fastcall **)(__int64, __int64, struct DXGI_CHECK_MULTIPLANEOVERLAYSUPPORT_PLANE_INFO *, int *, _DWORD *))(*(_QWORD *)v5 + 176LL))(
          v5,
          a2,
          a3,
          &v11,
          v12);
  v7 = v13;
  if ( v13 == -2005270527 )
    RaiseFailFastException(0LL, 0LL, 0);
  if ( v7 >= 0 )
  {
    v8 = 1;
    if ( v11 )
    {
LABEL_8:
      v9 = v12[0] == 0;
      *a4 = v8;
      *a5 = !v9;
      goto LABEL_9;
    }
LABEL_7:
    v8 = 0;
    goto LABEL_8;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x405u);
LABEL_9:
  TranslateDXGIorD3DErrorInContext(v7, 0, (int *)&v13);
  return v13;
}

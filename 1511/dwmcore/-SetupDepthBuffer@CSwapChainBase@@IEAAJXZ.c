/*
 * XREFs of ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x180072E4C
 * Callers:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180072950 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18014C050 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x180074880 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x1800910C8 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 */

__int64 __fastcall CSwapChainBase::SetupDepthBuffer(CSwapChainBase *this)
{
  int v1; // eax
  __int64 v3; // r14
  __int64 v4; // rdi
  __int64 v5; // rbx
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rsi
  __int64 v9; // r15
  __int64 v10; // rdi
  __int64 v11; // r13
  __int64 v12; // r14
  __int64 v14; // [rsp+60h] [rbp+8h] BYREF
  __int64 v15; // [rsp+68h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 32);
  v3 = *((unsigned int *)this + 70);
  v15 = 0LL;
  LODWORD(v14) = v1;
  HIDWORD(v14) = *((_DWORD *)this + 33);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 120LL);
  v5 = (*(unsigned __int8 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 208LL))(this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, __int64, __int64 *))(**(_QWORD **)(v4 + 32) + 56LL))(
         *(_QWORD *)(v4 + 32),
         v14,
         v5,
         &v15);
  LODWORD(v14) = v6;
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_180170188, 0xAu, v6, 0xF7u);
  TranslateDXGIorD3DErrorInContext(v7, 0LL, &v14);
  if ( (int)v14 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v14, 0x8Fu);
  }
  else if ( (_DWORD)v3 )
  {
    v8 = 0LL;
    v9 = v3;
    do
    {
      v10 = v15;
      v11 = *(_QWORD *)(v8 + *((_QWORD *)this + 32));
      v12 = *(_QWORD *)(v11 + 224);
      if ( v12 )
        (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v12 + 16LL))(*(_QWORD *)(v11 + 224));
      *(_QWORD *)(v11 + 224) = v10;
      if ( v10 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v10 + 8LL))(v10);
      v8 += 8LL;
      --v9;
    }
    while ( v9 );
  }
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16LL))(v15);
  return (unsigned int)v14;
}

/*
 * XREFs of ?SetupDepthBuffer@CSwapChainBase@@IEAAJXZ @ 0x18007A1C8
 * Callers:
 *     ?Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z @ 0x180079D20 (-Init@CSwapChainBase@@MEAAJPEAVCD3DResourceManager@@@Z.c)
 *     ?SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z @ 0x18017CC90 (-SetHardwareProtection@CDWMSwapChain@@UEAAJ_N@Z.c)
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     ?TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z @ 0x18007BBC0 (-TranslateDXGIorD3DErrorInContext@@YAHJW4Enum@DXGIFunctionContext@@PEAJ@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CSwapChainBase::SetupDepthBuffer(CSwapChainBase *this)
{
  int v1; // eax
  __int64 v3; // rbp
  __int64 v4; // rbx
  unsigned __int8 v5; // al
  int v6; // eax
  unsigned int v7; // ebx
  __int64 v8; // rdi
  __int64 v9; // rbx
  __int64 v10; // r14
  __int64 v11; // rcx
  __int64 v13; // [rsp+50h] [rbp+8h] BYREF
  __int64 v14; // [rsp+58h] [rbp+10h] BYREF

  v1 = *((_DWORD *)this + 32);
  v14 = 0LL;
  v3 = *((unsigned int *)this + 70);
  LODWORD(v13) = v1;
  HIDWORD(v13) = *((_DWORD *)this + 33);
  v4 = *(_QWORD *)(*((_QWORD *)this + 2) + 128LL);
  v5 = (*(__int64 (__fastcall **)(CSwapChainBase *))(*(_QWORD *)this + 208LL))(this);
  v6 = (*(__int64 (__fastcall **)(_QWORD, __int64, _QWORD, __int64 *))(**(_QWORD **)(v4 + 32) + 56LL))(
         *(_QWORD *)(v4 + 32),
         v13,
         v5,
         &v14);
  LODWORD(v13) = v6;
  v7 = v6;
  if ( v6 < 0 )
    MilInstrumentationCheckHR(0x14u, &dword_1801ACAD0, 0xAu, v6, 0x1FAu);
  TranslateDXGIorD3DErrorInContext(v7, 0LL, &v13);
  if ( (int)v13 < 0 )
  {
    MilInstrumentationCheckHR(0x14u, 0LL, 0, v13, 0x8Fu);
  }
  else if ( (_DWORD)v3 )
  {
    v8 = 0LL;
    do
    {
      v9 = v14;
      v10 = *(_QWORD *)(v8 + *((_QWORD *)this + 32));
      v11 = *(_QWORD *)(v10 + 224);
      if ( v11 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v11 + 16LL))(v11);
      *(_QWORD *)(v10 + 224) = v9;
      if ( v9 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v9 + 8LL))(v9);
      v8 += 8LL;
      --v3;
    }
    while ( v3 );
  }
  if ( v14 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v14 + 16LL))(v14);
  return (unsigned int)v13;
}

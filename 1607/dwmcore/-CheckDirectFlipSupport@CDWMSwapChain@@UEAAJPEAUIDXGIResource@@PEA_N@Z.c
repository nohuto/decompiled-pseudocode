/*
 * XREFs of ?CheckDirectFlipSupport@CDWMSwapChain@@UEAAJPEAUIDXGIResource@@PEA_N@Z @ 0x18017C840
 * Callers:
 *     <none>
 * Callees:
 *     ?MilInstrumentationCheckHR@@YAXKQEBJIJI@Z @ 0x180047444 (-MilInstrumentationCheckHR@@YAXKQEBJIJI@Z.c)
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CDWMSwapChain::CheckDirectFlipSupport(CDWMSwapChain *this, struct IDXGIResource *a2, bool *a3)
{
  __int64 v3; // rcx
  bool v4; // bl
  unsigned int v6; // edi
  int v7; // eax
  int v9; // [rsp+40h] [rbp+8h] BYREF

  v3 = *((_QWORD *)this + 37);
  v4 = 0;
  v9 = 0;
  v6 = 0;
  if ( !v3 )
    goto LABEL_5;
  v7 = (*(__int64 (__fastcall **)(__int64, _QWORD, struct IDXGIResource *, int *))(*(_QWORD *)v3 + 144LL))(
         v3,
         0LL,
         a2,
         &v9);
  v6 = v7;
  if ( v7 >= 0 )
  {
    v4 = v9 != 0;
LABEL_5:
    *a3 = v4;
    return v6;
  }
  MilInstrumentationCheckHR(0x14u, 0LL, 0, v7, 0x2F0u);
  return v6;
}

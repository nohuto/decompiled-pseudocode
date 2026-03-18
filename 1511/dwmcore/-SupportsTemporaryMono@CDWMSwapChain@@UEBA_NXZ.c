/*
 * XREFs of ?SupportsTemporaryMono@CDWMSwapChain@@UEBA_NXZ @ 0x18014C140
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

bool __fastcall CDWMSwapChain::SupportsTemporaryMono(CDWMSwapChain *this)
{
  int (__fastcall ***v1)(_QWORD, GUID *, __int64 *); // rdi
  bool v2; // si
  __int64 v4; // [rsp+30h] [rbp+8h] BYREF

  v1 = (int (__fastcall ***)(_QWORD, GUID *, __int64 *))*((_QWORD *)this + 36);
  v2 = 0;
  v4 = 0LL;
  if ( (**v1)(v1, &GUID_790a45f7_0d42_4876_983a_0a55cfe6f4aa, &v4) >= 0 )
    v2 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v4 + 184LL))(v4) != 0;
  if ( v4 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  return v2;
}

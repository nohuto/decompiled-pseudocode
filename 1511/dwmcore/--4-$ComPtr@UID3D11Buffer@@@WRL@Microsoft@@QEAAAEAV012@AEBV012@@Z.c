/*
 * XREFs of ??4?$ComPtr@UID3D11Buffer@@@WRL@Microsoft@@QEAAAEAV012@AEBV012@@Z @ 0x1800A9AAC
 * Callers:
 *     ?EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z @ 0x1800A98D0 (-EnsureByteSpace@CD3DBuffer@@QEAAJI_N@Z.c)
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 */

__int64 *__fastcall Microsoft::WRL::ComPtr<ID3D11Buffer>::operator=(__int64 *a1, __int64 *a2)
{
  __int64 v2; // rdi
  __int64 v4; // rbx

  v2 = *a2;
  if ( *a1 != *a2 )
  {
    if ( v2 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v2 + 8LL))(v2);
    v4 = *a1;
    *a1 = v2;
    if ( v4 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v4 + 16LL))(v4);
  }
  return a1;
}

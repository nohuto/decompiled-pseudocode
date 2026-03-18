/*
 * XREFs of ?IsOpaque@CHwConstantColorSource@@UEBA_NXZ @ 0x180150E70
 * Callers:
 *     <none>
 * Callees:
 *     ?AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z @ 0x18001DE90 (-AdvanceFrame@CRenderTarget@@UEAAX_K_N@Z.c)
 *     __security_check_cookie @ 0x1800BA770 (__security_check_cookie.c)
 */

bool __fastcall CHwConstantColorSource::IsOpaque(CHwConstantColorSource *this)
{
  _BYTE v2[12]; // [rsp+20h] [rbp-28h] BYREF
  float v3; // [rsp+2Ch] [rbp-1Ch]

  (*(void (__fastcall **)(CHwConstantColorSource *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v2);
  return v3 >= 1.0;
}

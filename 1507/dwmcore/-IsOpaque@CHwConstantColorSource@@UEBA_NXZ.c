/*
 * XREFs of ?IsOpaque@CHwConstantColorSource@@UEBA_NXZ @ 0x180142200
 * Callers:
 *     <none>
 * Callees:
 *     __security_check_cookie @ 0x180097C20 (__security_check_cookie.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

bool __fastcall CHwConstantColorSource::IsOpaque(CHwConstantColorSource *this)
{
  _BYTE v2[12]; // [rsp+20h] [rbp-28h] BYREF
  float v3; // [rsp+2Ch] [rbp-1Ch]

  (*(void (__fastcall **)(CHwConstantColorSource *, _BYTE *))(*(_QWORD *)this + 56LL))(this, v2);
  return v3 >= 1.0;
}

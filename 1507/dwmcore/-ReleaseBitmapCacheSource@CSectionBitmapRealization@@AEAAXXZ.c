/*
 * XREFs of ?ReleaseBitmapCacheSource@CSectionBitmapRealization@@AEAAXXZ @ 0x18014DDE0
 * Callers:
 *     ?UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z @ 0x18014DE50 (-UpdateAttributes@CSectionBitmapRealization@@UEAAXAEBUCSM_BUFFER_ATTRIBUTES@@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

void __fastcall CSectionBitmapRealization::ReleaseBitmapCacheSource(CSectionBitmapRealization *this)
{
  __int64 v2; // rdi

  (*(void (__fastcall **)(char *, _QWORD))(*((_QWORD *)this + 2) + 24LL))((char *)this + 16, 0LL);
  v2 = *((_QWORD *)this + 65);
  if ( v2 )
  {
    (*(void (__fastcall **)(_QWORD))(*(_QWORD *)v2 + 16LL))(*((_QWORD *)this + 65));
    *((_QWORD *)this + 65) = 0LL;
  }
}

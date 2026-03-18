/*
 * XREFs of ?Release@CHWCallbackRenderer@@UEAAKXZ @ 0x18001D4F0
 * Callers:
 *     ?Release@CHWCallbackRenderer@@W7EAAKXZ @ 0x18009C200 (-Release@CHWCallbackRenderer@@W7EAAKXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHWCallbackRenderer::Release(CHWCallbackRenderer *this)
{
  unsigned __int32 v1; // edi

  v1 = _InterlockedDecrement((volatile signed __int32 *)this + 4);
  if ( !v1 && this != (CHWCallbackRenderer *)-8LL )
    (*(void (__fastcall **)(char *, __int64))(*((_QWORD *)this + 1) + 16LL))((char *)this + 8, 1LL);
  return v1;
}

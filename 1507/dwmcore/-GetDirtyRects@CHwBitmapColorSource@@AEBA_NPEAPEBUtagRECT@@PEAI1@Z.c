/*
 * XREFs of ?GetDirtyRects@CHwBitmapColorSource@@AEBA_NPEAPEBUtagRECT@@PEAI1@Z @ 0x18001C414
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z @ 0x18013D2F0 (-CheckAndSetReusableSource@CHwBitmapColorSource@@AEAAXPEAV1@@Z.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CHwBitmapColorSource::GetDirtyRects(
        CHwBitmapColorSource *this,
        const struct tagRECT **a2,
        unsigned int *a3,
        unsigned int *a4)
{
  char v4; // r10
  __int64 v5; // rdi

  v4 = 0;
  *a4 = *((_DWORD *)this + 42);
  v5 = *((_QWORD *)this + 26);
  if ( v5 )
    return (*(__int64 (__fastcall **)(_QWORD, const struct tagRECT **, unsigned int *, unsigned int *))(*(_QWORD *)v5 + 48LL))(
             *((_QWORD *)this + 26),
             a2,
             a3,
             a4);
  return v4;
}

/*
 * XREFs of ?IsRealizationCurrent@CHwBitmapColorSource@@AEBA_NXZ @ 0x18001CDD4
 * Callers:
 *     ?FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z @ 0x18001C494 (-FillTextureWithTransformedSource@CHwBitmapColorSource@@AEAAJPEAVIBitmapSource@@@Z.c)
 *     ?IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ @ 0x1800DE084 (-IsRealizationValid@CHwBitmapColorSource@@AEBA_NXZ.c)
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CHwBitmapColorSource::IsRealizationCurrent(CHwBitmapColorSource *this)
{
  __int64 v1; // r14
  char v2; // di
  int v5; // [rsp+30h] [rbp+8h] BYREF

  v1 = *((_QWORD *)this + 26);
  v2 = 0;
  if ( !v1
    || (*(int (__fastcall **)(_QWORD, int *))(*(_QWORD *)v1 + 40LL))(*((_QWORD *)this + 26), &v5) >= 0
    && *((_DWORD *)this + 42) == v5 )
  {
    return 1;
  }
  return v2;
}

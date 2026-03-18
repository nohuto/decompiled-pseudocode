/*
 * XREFs of ?SetClip@CD2DTarget@@QEAAXAEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x1800AD64C
 * Callers:
 *     ?ApplyCurrentClip@CD2DTarget@@QEAAXXZ @ 0x1800AD684 (-ApplyCurrentClip@CD2DTarget@@QEAAXXZ.c)
 * Callees:
 *     ?D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z @ 0x18007C754 (-D2DSetWorldClip@CD2DContext@@IEAAXPEBUD2D_RECT_F@@W4D2D1_ANTIALIAS_MODE@@@Z.c)
 */

void __fastcall CD2DTarget::SetClip(CD2DTarget *this, const struct D2D_RECT_F *a2, unsigned int a3)
{
  bool v3; // zf
  __int128 v5; // xmm0

  v3 = *((_BYTE *)this + 48) == 0;
  v5 = (__int128)*a2;
  *((_DWORD *)this + 19) = a3;
  *(_OWORD *)((char *)this + 60) = v5;
  if ( !v3 )
    CD2DContext::D2DSetWorldClip(*((CD2DContext **)this + 2), (const struct D2D_RECT_F *)((char *)this + 60), a3);
  *((_BYTE *)this + 56) = 1;
}

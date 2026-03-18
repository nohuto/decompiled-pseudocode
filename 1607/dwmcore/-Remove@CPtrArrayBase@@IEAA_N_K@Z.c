/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x1800A25CC
 * Callers:
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x1800502CC (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ??1CVisual@@MEAA@XZ @ 0x180054360 (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18011AF78 (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x1801254C0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 *     ?AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z @ 0x180137E4C (-AddLight@CVisual@@QEAAJPEAVCCompositionLight@@@Z.c)
 *     ?RemoveAllTargets@CCompositionLight@@AEAAXXZ @ 0x1801502A8 (-RemoveAllTargets@CCompositionLight@@AEAAXXZ.c)
 * Callees:
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x1800A249C (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
 */

bool __fastcall CPtrArrayBase::Remove(CPtrArrayBase *this, __int64 a2)
{
  __int64 v2; // r8
  unsigned __int64 v5; // r9
  bool result; // al
  unsigned __int64 v7; // r8
  unsigned int v8; // ecx
  __int64 v9; // rdx

  v2 = *(_QWORD *)this;
  if ( (*(_QWORD *)this & 2) != 0 )
    v5 = *(_QWORD *)(v2 & 0xFFFFFFFFFFFFFFFCuLL);
  else
    v5 = *(_QWORD *)this & 1LL;
  result = 0;
  if ( v5 )
  {
    v7 = v2 & 0xFFFFFFFFFFFFFFFCuLL;
    if ( v5 == 1 )
    {
      if ( a2 != v7 )
        return result;
      *(_QWORD *)this = 0LL;
      return 1;
    }
    v8 = 0;
    v9 = 0LL;
    do
    {
      if ( a2 == *(_QWORD *)(v7 + 8 * v9 + 16) )
        break;
      v9 = ++v8;
    }
    while ( v8 < v5 );
    if ( v8 < v5 )
    {
      CPtrArrayBase::RemoveAt(this, v8);
      return 1;
    }
  }
  return result;
}

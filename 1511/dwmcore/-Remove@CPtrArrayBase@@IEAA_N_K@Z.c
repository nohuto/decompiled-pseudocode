/*
 * XREFs of ?Remove@CPtrArrayBase@@IEAA_N_K@Z @ 0x180067E18
 * Callers:
 *     ??1CVisual@@MEAA@XZ @ 0x18004C96C (--1CVisual@@MEAA@XZ.c)
 *     ?RemoveChild@CVisual@@IEAAJPEAV1@_N@Z @ 0x18004D180 (-RemoveChild@CVisual@@IEAAJPEAV1@_N@Z.c)
 *     ?UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z @ 0x18008557C (-UnRegisterNNotifiersInternal@CResource@@AEAAXPEAPEAV1@I@Z.c)
 *     ?UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z @ 0x18008596C (-UnRegisterNotifierInternal@CResource@@AEAAXPEAV1@@Z.c)
 *     ?RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z @ 0x18010498C (-RemoveHwndBitmap@CWindowManager@@QEAAJPEAVCHwndBitmap@@@Z.c)
 *     ?AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z @ 0x18010EEF0 (-AddOrArrangeChild@CCoRenderVisualProxy@@UEAAJPEAUIDWMCoRenderVisualProxy@@0_N@Z.c)
 * Callees:
 *     ?RemoveAt@CPtrArrayBase@@IEAAX_K@Z @ 0x180067ACC (-RemoveAt@CPtrArrayBase@@IEAAX_K@Z.c)
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

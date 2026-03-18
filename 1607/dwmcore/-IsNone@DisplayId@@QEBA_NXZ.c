/*
 * XREFs of ?IsNone@DisplayId@@QEBA_NXZ @ 0x180110938
 * Callers:
 *     ?IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z @ 0x18001B95C (-IsSameLuidAndDisplayId@RenderTargetBitmapInfo@CCachedVisualImage@@QEAA_NU_LUID@@VDisplayId@@@Z.c)
 * Callees:
 *     <none>
 */

bool __fastcall DisplayId::IsNone(DisplayId *this)
{
  return *(_DWORD *)this == DisplayId::None;
}

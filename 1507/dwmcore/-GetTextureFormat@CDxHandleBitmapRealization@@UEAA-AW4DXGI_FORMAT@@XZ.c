/*
 * XREFs of ?GetTextureFormat@CDxHandleBitmapRealization@@UEAA?AW4DXGI_FORMAT@@XZ @ 0x18014E520
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CDxHandleBitmapRealization::GetTextureFormat(CDxHandleBitmapRealization *this)
{
  unsigned int v2; // esi

  v2 = 0;
  if ( (*(int (__fastcall **)(char *))(*((_QWORD *)this - 14) + 112LL))((char *)this - 112) >= 0 )
    return (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)(*((_QWORD *)this + 43) + 112LL) + 32LL))(*((_QWORD *)this + 43) + 112LL);
  return v2;
}

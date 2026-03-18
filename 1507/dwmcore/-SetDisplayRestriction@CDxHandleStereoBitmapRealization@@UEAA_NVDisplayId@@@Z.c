/*
 * XREFs of ?SetDisplayRestriction@CDxHandleStereoBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18014E670
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z @ 0x18001EEB0 (-SetDisplayRestriction@CDxHandleBitmapRealization@@UEAA_NVDisplayId@@@Z.c)
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

char __fastcall CDxHandleStereoBitmapRealization::SetDisplayRestriction(__int64 a1, int a2)
{
  __int64 v3; // rsi
  char v4; // bp
  __int64 v5; // rdx
  __int64 v6; // rcx

  v3 = 0LL;
  v4 = CDxHandleBitmapRealization::SetDisplayRestriction(a1, a2);
  if ( v4 )
  {
    v5 = *(_QWORD *)(a1 + 472);
    if ( v5 )
    {
      *(_DWORD *)(v5 + 248) = a2;
      v6 = *(_QWORD *)(a1 + 472);
      if ( v6 )
        v3 = v6 + 112;
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)(a1 + 496) + 24LL))(a1 + 496, v3);
    }
  }
  return v4;
}

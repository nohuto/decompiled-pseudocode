/*
 * XREFs of ?GetFrontBufferSurface@CHwDisplayRenderTarget@@UEAAJW4StereoContext@@_NPEAPEAVCD3DSurface@@@Z @ 0x1801391E0
 * Callers:
 *     <none>
 * Callees:
 *     ?OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ @ 0x180097F10 (-OnAnimationStop@ConstantInput@Animations@Components@@UEAAXXZ.c)
 */

__int64 __fastcall CHwDisplayRenderTarget::GetFrontBufferSurface(__int64 a1, __int64 a2, __int64 a3, _QWORD *a4)
{
  (***(void (__fastcall ****)(_QWORD))(a1 + 168))(*(_QWORD *)(a1 + 168));
  *a4 = *(_QWORD *)(a1 + 168);
  return 0LL;
}

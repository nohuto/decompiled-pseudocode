/*
 * XREFs of ?SetDisplayId@CHwTextureRenderTarget@@UEAAXVDisplayId@@@Z @ 0x18017BEC0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwTextureRenderTarget::SetDisplayId(__int64 a1)
{
  return (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(a1 - 176) + 192LL))(a1 - 176);
}

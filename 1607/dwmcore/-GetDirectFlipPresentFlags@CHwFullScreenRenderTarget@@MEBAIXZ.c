/*
 * XREFs of ?GetDirectFlipPresentFlags@CHwFullScreenRenderTarget@@MEBAIXZ @ 0x18017FFA0
 * Callers:
 *     <none>
 * Callees:
 *     _guard_dispatch_icall_nop @ 0x1800BF6F0 (_guard_dispatch_icall_nop.c)
 */

__int64 __fastcall CHwFullScreenRenderTarget::GetDirectFlipPresentFlags(CHwFullScreenRenderTarget *this)
{
  unsigned int v1; // edi

  v1 = 0;
  if ( *((_QWORD *)this + 46) == (*(__int64 (__fastcall **)(_QWORD))(**((_QWORD **)this + 27) + 152LL))(*((_QWORD *)this + 27)) )
    return 2;
  return v1;
}

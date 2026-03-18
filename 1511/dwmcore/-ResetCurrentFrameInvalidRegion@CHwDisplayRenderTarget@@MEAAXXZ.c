/*
 * XREFs of ?ResetCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@MEAAXXZ @ 0x18014A080
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::ResetCurrentFrameInvalidRegion(CHwDisplayRenderTarget *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 40);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 40) = 0LL;
  }
}

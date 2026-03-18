/*
 * XREFs of ?ResetCurrentFrameInvalidRegion@CHwDisplayRenderTarget@@MEAAXXZ @ 0x18017A6F0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

void __fastcall CHwDisplayRenderTarget::ResetCurrentFrameInvalidRegion(CHwDisplayRenderTarget *this)
{
  void *v2; // rcx

  v2 = (void *)*((_QWORD *)this + 41);
  if ( v2 )
  {
    DeleteObject(v2);
    *((_QWORD *)this + 41) = 0LL;
  }
}

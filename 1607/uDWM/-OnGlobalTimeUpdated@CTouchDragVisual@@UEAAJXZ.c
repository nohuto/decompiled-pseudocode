/*
 * XREFs of ?OnGlobalTimeUpdated@CTouchDragVisual@@UEAAJXZ @ 0x180089490
 * Callers:
 *     <none>
 * Callees:
 *     ?SetDirtyFlags@CVisual@@UEAAXK@Z @ 0x18001FFF0 (-SetDirtyFlags@CVisual@@UEAAXK@Z.c)
 */

__int64 __fastcall CTouchDragVisual::OnGlobalTimeUpdated(CTouchDragVisual *this)
{
  if ( *((_DWORD *)this + 82) > 1u )
    CVisual::SetDirtyFlags(this, 4096);
  return 0LL;
}

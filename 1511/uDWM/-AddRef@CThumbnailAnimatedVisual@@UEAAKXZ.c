/*
 * XREFs of ?AddRef@CThumbnailAnimatedVisual@@UEAAKXZ @ 0x1800500C0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CThumbnailAnimatedVisual::AddRef(CThumbnailAnimatedVisual *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this - 64);
}

/*
 * XREFs of ?AddRef@CAnimationResource@@UEAAKXZ @ 0x18004A2E0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationResource::AddRef(CAnimationResource *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 6);
}

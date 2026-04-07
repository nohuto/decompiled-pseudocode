/*
 * XREFs of ?AddRef@CAnimationEngine@@UEAAKXZ @ 0x180050500
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

__int64 __fastcall CAnimationEngine::AddRef(CAnimationEngine *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 29);
}

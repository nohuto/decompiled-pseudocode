/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180005A10
 * Callers:
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x180009CF0 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 *     ?AddRef@CDuckingManager@@WBI@EAAKXZ @ 0x180009D00 (-AddRef@CDuckingManager@@WBI@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}

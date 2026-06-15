/*
 * XREFs of ?AddRef@CBackgroundSessionCallbacks@@UEAAKXZ @ 0x180044E70
 * Callers:
 *     ?AddRef@CDuckingManager@@WBI@EAAKXZ @ 0x180045290 (-AddRef@CDuckingManager@@WBI@EAAKXZ.c)
 *     ?AddRef@CPlaybackManager@@WBA@EAAKXZ @ 0x1800453A0 (-AddRef@CPlaybackManager@@WBA@EAAKXZ.c)
 * Callees:
 *     <none>
 */

__int64 __fastcall CBackgroundSessionCallbacks::AddRef(CBackgroundSessionCallbacks *this)
{
  return (unsigned int)_InterlockedIncrement((volatile signed __int32 *)this + 2);
}

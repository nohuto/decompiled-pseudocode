/*
 * XREFs of IsTimeFromLastInput @ 0x1C0011A90
 * Callers:
 *     UpdateLastInput @ 0x1C0007440 (UpdateLastInput.c)
 *     PowerIsDisplayIdleExpired @ 0x1C00104B0 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     IsModerncoreUpdateLastInputTimeSupported_0 @ 0x1C0002268 (IsModerncoreUpdateLastInputTimeSupported_0.c)
 *     ModerncoreUpdateLastInputTime_0 @ 0x1C0002270 (ModerncoreUpdateLastInputTime_0.c)
 */

__int64 __fastcall IsTimeFromLastInput(unsigned __int64 a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (int)IsModerncoreUpdateLastInputTimeSupported_0() >= 0 )
    ModerncoreUpdateLastInputTime_0();
  LOBYTE(v2) = (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                - glinp) > a1;
  return v2;
}

/*
 * XREFs of IsTimeFromLastInput @ 0x1C00783D0
 * Callers:
 *     UpdateLastInput @ 0x1C0071150 (UpdateLastInput.c)
 *     PowerIsDisplayIdleExpired @ 0x1C0076F00 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     IsModerncoreUpdateLastInputTimeSupported_0 @ 0x1C0001E08 (IsModerncoreUpdateLastInputTimeSupported_0.c)
 *     ModerncoreUpdateLastInputTime_0 @ 0x1C0001E10 (ModerncoreUpdateLastInputTime_0.c)
 */

__int64 __fastcall IsTimeFromLastInput(unsigned int a1)
{
  unsigned __int64 v1; // rdi
  unsigned int v2; // ebx

  v1 = a1;
  v2 = 0;
  if ( (int)IsModerncoreUpdateLastInputTimeSupported_0() >= 0 )
    ModerncoreUpdateLastInputTime_0();
  LOBYTE(v2) = (unsigned __int64)(((((unsigned __int64)MEMORY[0xFFFFF78000000004] << 32)
                                  * (unsigned __int128)(unsigned __int64)(MEMORY[0xFFFFF78000000320] << 8)) >> 64)
                                - glinp) > v1;
  return v2;
}

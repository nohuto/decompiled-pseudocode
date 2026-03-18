/*
 * XREFs of IsTimeFromLastInput @ 0x1C0074560
 * Callers:
 *     UpdateLastInput @ 0x1C000E9A0 (UpdateLastInput.c)
 *     PowerIsDisplayIdleExpired @ 0x1C0072600 (PowerIsDisplayIdleExpired.c)
 * Callees:
 *     IsModerncoreUpdateLastInputTimeSupported_0 @ 0x1C00022A8 (IsModerncoreUpdateLastInputTimeSupported_0.c)
 *     ModerncoreUpdateLastInputTime_0 @ 0x1C00022B0 (ModerncoreUpdateLastInputTime_0.c)
 */

__int64 __fastcall IsTimeFromLastInput(unsigned int a1)
{
  unsigned int v2; // ebx

  v2 = 0;
  if ( (int)IsModerncoreUpdateLastInputTimeSupported_0() >= 0 )
    ModerncoreUpdateLastInputTime_0();
  LOBYTE(v2) = (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24) - glinp > a1;
  return v2;
}

/*
 * XREFs of zzzStartFade @ 0x1C01397A8
 * Callers:
 *     xxxTooltipWndProc @ 0x1C00C6150 (xxxTooltipWndProc.c)
 *     xxxMenuWindowProc @ 0x1C0135770 (xxxMenuWindowProc.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C0138524 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     zzzStartSonar @ 0x1C01E8164 (zzzStartSonar.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C00CA594 (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C0139870 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  unsigned int v0; // ebx

  v0 = 10;
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 0LL);
  GreSetBitmapOwner(*(_QWORD *)&gfade[4], 0LL);
  zzzShowFade();
  gfade[11] = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - (40 * gfade[10] + 255) / 0xFF;
  if ( SLOBYTE(gfade[12]) < 0 )
    v0 = 50;
  return SetSystemTimer(*((_QWORD *)&gTermIO + 1), 65526LL, v0, (__int64)xxxSystemTimerProc, 1);
}

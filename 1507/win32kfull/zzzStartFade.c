/*
 * XREFs of zzzStartFade @ 0x1C010DD38
 * Callers:
 *     xxxMenuWindowProc @ 0x1C0109290 (xxxMenuWindowProc.c)
 *     ?xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z @ 0x1C010C838 (-xxxMNDismissWithNotify@@YAXPEAUtagMENUSTATE@@PEAUtagPOPUPMENU@@PEAUtagITEM@@I_J@Z.c)
 *     xxxTooltipWndProc @ 0x1C0128580 (xxxTooltipWndProc.c)
 *     zzzStartSonar @ 0x1C01E7CF0 (zzzStartSonar.c)
 * Callees:
 *     _SetSystemTimer @ 0x1C0079ECC (_SetSystemTimer.c)
 *     zzzShowFade @ 0x1C010DE00 (zzzShowFade.c)
 */

__int64 zzzStartFade()
{
  int v0; // ebx

  v0 = 10;
  GreSetDCOwnerEx(*(_QWORD *)&gfade[2], 0LL, 0LL, 0LL);
  GreSetBitmapOwner(*(_QWORD *)&gfade[4], 0LL);
  zzzShowFade();
  gfade[11] = ((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24)
            - (40 * gfade[10] + 255) / 0xFF;
  if ( SLOBYTE(gfade[12]) < 0 )
    v0 = 50;
  return SetSystemTimer(*((_QWORD *)&gTermIO + 1), 65526, v0, (int)xxxSystemTimerProc, 1);
}

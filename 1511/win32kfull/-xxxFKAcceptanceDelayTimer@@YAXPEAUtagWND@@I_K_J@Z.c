/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE650
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C000D614 (PostEventMessageEx.c)
 *     xxxProcessKeyEvent @ 0x1C00830F4 (xxxProcessKeyEvent.c)
 *     SetRITTimer @ 0x1C00F4780 (SetRITTimer.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C01ED374 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx
  unsigned int v5; // edx
  __int64 v6; // rax

  if ( (xmmword_1C03222CC & 0x40) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v4, *(_QWORD *)(v4 + 384), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
  v5 = HIDWORD(xmmword_1C03222CC);
  if ( HIDWORD(xmmword_1C03222CC) )
  {
    if ( DWORD2(xmmword_1C03222CC) )
      v5 = DWORD2(xmmword_1C03222CC);
    v6 = SetRITTimer(a3, v5, (__int64)xxxFKRepeatRateTimer, 1);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v6;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}

/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE210
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C01ECE54 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx

  if ( (xmmword_1C0323934 & 0x40) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v4, *(_QWORD *)(v4 + 392), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
  }
  gtmridFKResponse = SetRITTimer(a3, SHIDWORD(xmmword_1C0323934), (int)xxxFKRepeatRateTimer, 1);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
}

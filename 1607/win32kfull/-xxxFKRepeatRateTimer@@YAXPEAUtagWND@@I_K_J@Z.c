/*
 * XREFs of ?xxxFKRepeatRateTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E4930
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E88E0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 */

void __fastcall xxxFKRepeatRateTimer(struct tagWND *a1, __int64 a2, __int64 a3)
{
  __int64 v4; // rcx

  if ( (xmmword_1C0326F34 & 0x40) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v4, *(_QWORD *)(v4 + 384), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
  }
  gtmridFKResponse = SetRITTimer(a3, HIDWORD(xmmword_1C0326F34), (__int64)xxxFKRepeatRateTimer, 1);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
}

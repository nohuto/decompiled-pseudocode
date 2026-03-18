/*
 * XREFs of ?xxxFKAcceptanceDelayTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01EE130
 * Callers:
 *     <none>
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     PostEventMessageEx @ 0x1C00E79A8 (PostEventMessageEx.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C01ECE54 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 */

// write access to const memory has been detected, the output may be wrong!
void __fastcall xxxFKAcceptanceDelayTimer(struct tagWND *a1, __int64 a2, int a3)
{
  __int64 v4; // rcx
  int v5; // edx
  __int64 v6; // rax

  if ( (xmmword_1C0323934 & 0x40) != 0 )
  {
    v4 = *(_QWORD *)(*(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL) + 16LL);
    PostEventMessageEx(v4, *(_QWORD *)(v4 + 392), 0xEu, 0LL, 4u, 0LL, 0LL, 0LL);
  }
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, gFKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)&gFKKeyEvent, gFKExtraInformation, 0, 0, 0LL);
  v5 = HIDWORD(xmmword_1C0323934);
  if ( HIDWORD(xmmword_1C0323934) )
  {
    if ( DWORD2(xmmword_1C0323934) )
      v5 = DWORD2(xmmword_1C0323934);
    v6 = SetRITTimer(a3, v5, (int)xxxFKRepeatRateTimer, 1);
    gtmridFKAcceptanceDelay = 0LL;
    gtmridFKResponse = v6;
  }
  else
  {
    gdwPUDFlags |= 0x800u;
  }
}

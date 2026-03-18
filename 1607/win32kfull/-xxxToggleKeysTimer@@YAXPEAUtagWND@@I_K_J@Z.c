/*
 * XREFs of ?xxxToggleKeysTimer@@YAXPEAUtagWND@@I_K_J@Z @ 0x1C01E52D0
 * Callers:
 *     <none>
 * Callees:
 *     PostEventMessageEx @ 0x1C0059A54 (PostEventMessageEx.c)
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E88E0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 */

void __fastcall xxxToggleKeysTimer(struct tagWND *a1)
{
  __int64 v1; // rcx
  char v2; // al
  _BYTE v3[2]; // [rsp+40h] [rbp-38h] BYREF
  __int16 v4; // [rsp+42h] [rbp-36h]

  v1 = *(_QWORD *)(*(_QWORD *)(grpdeskRitInput + 24LL) + 24LL);
  v2 = dword_1C0326F24;
  if ( (dword_1C0326F24 & 1) != 0 )
  {
    dword_1C0326F24 &= ~1u;
    if ( (v2 & 0x10) != 0 )
      PostEventMessageEx(*(_QWORD *)(v1 + 16), *(_QWORD *)(*(_QWORD *)(v1 + 16) + 384LL), 0xEu, 0LL, 1u, 0LL, 0LL, 0LL);
  }
  else
  {
    if ( (dword_1C0326F24 & 0x10) != 0 )
      PostEventMessageEx(*(_QWORD *)(v1 + 16), *(_QWORD *)(*(_QWORD *)(v1 + 16) + 384LL), 0xEu, 0LL, 0, 0LL, 0LL, 0LL);
    PostWinlogonMessage(1026LL, 4LL);
  }
  v3[0] = gTKScanCode;
  v4 = gNumLockVk | 0x8000;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v3, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)v3, gTKExtraInformation, 0, 0, 0LL);
  v4 = gNumLockVk;
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)v3, gTKExtraInformation, gTKNextProcIndex) )
    xxxProcessKeyEvent((struct tagKE *)v3, gTKExtraInformation, 0, 0, 0LL);
}

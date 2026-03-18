/*
 * XREFs of ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688
 * Callers:
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C00E85CC (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01D0354 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ProcessKeyboardInput @ 0x1C01D22D0 (ProcessKeyboardInput.c)
 * Callees:
 *     SetRITTimer @ 0x1C005F490 (SetRITTimer.c)
 *     xxxProcessKeyEvent @ 0x1C00A24AC (xxxProcessKeyEvent.c)
 *     ValidatePtiKbd @ 0x1C00A41F0 (ValidatePtiKbd.c)
 *     InternalMapVirtualKeyEx @ 0x1C00E8328 (InternalMapVirtualKeyEx.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C00E88E0 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     VKFromVSC @ 0x1C00E8DD4 (VKFromVSC.c)
 *     __security_check_cookie @ 0x1C0158CD0 (__security_check_cookie.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01D0644 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C01D0910 (-RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D0B68 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     UserBeep @ 0x1C0228C40 (UserBeep.c)
 */

void __fastcall ProcessKeyboardInputWorker(struct _KEYBOARD_INPUT_DATA *a1, struct DEVICEINFO *a2, int a3)
{
  char *v3; // rbx
  USHORT Flags; // cx
  int v8; // r15d
  int v9; // r12d
  __int64 v10; // rdx
  ULONG ExtraInformation; // eax
  __int64 v12; // rcx
  unsigned __int8 v13; // r14
  __int16 v14; // r8
  int v15; // r9d
  __int64 v16; // rdx
  unsigned int v17; // r8d
  char v18; // dl
  struct tagTHREADINFO *v19; // rax
  __int64 v20; // rax
  __int64 v21; // r8
  USHORT v22; // cx
  unsigned __int8 v23[8]; // [rsp+30h] [rbp-30h] BYREF
  USHORT MakeCode; // [rsp+38h] [rbp-28h] BYREF
  __int16 v25; // [rsp+3Ah] [rbp-26h]
  int v26; // [rsp+3Ch] [rbp-24h]
  __int64 v27; // [rsp+40h] [rbp-20h]
  __int64 v28; // [rsp+48h] [rbp-18h]
  ULONG v29; // [rsp+50h] [rbp-10h]

  v3 = 0LL;
  Flags = a1->Flags;
  v8 = 0;
  v10 = Flags;
  v9 = 0;
  LOWORD(v10) = Flags & 0x10;
  if ( (Flags & 0x10) != 0 || a2 && (*((_DWORD *)a2 + 46) & 0x800) != 0 || a1->UnitId == 0xFFFE )
    v9 = 1;
  if ( a2 )
    v27 = *(_QWORD *)a2;
  else
    v27 = 0LL;
  ExtraInformation = a1->ExtraInformation;
  v28 = *(_QWORD *)&a1->UnitId;
  v29 = ExtraInformation;
  v26 = 0;
  if ( (Flags & 0x28) != 0 )
  {
    if ( (Flags & 8) != 0 )
    {
      if ( (Flags & 0x10) != 0 )
        a1->ExtraInformation |= 0x4000u;
      RemoteSyncToggleKeys(a1->ExtraInformation);
    }
    v22 = a1->Flags;
    if ( (v22 & 0x20) != 0 )
    {
      MakeCode = a1->MakeCode;
      v25 = ((v22 & 1) << 15) | 0x10E7;
      if ( a2 && (*((_DWORD *)a2 + 46) & 0x800) != 0 )
        v3 = (char *)a2 + 392;
      v15 = 0;
      v17 = ((unsigned __int8)v22 >> 4) & 1;
      v16 = 0LL;
      goto LABEL_34;
    }
    return;
  }
  if ( (gSetLedReceived & 0x8000) != 0 )
    RemoteSyncToggleKeys(gSetLedReceived);
  v12 = a1->Flags;
  if ( (v12 & 2) != 0 )
    LOBYTE(v10) = -32;
  else
    LOBYTE(v10) = (v12 & 4) != 0 ? 0xE1 : 0;
  v23[0] = v10;
  if ( a1->MakeCode == 255 )
  {
    if ( gdwInAtomicOperation )
    {
      v12 = gdwExtraInstrumentations;
      if ( (gdwExtraInstrumentations & 1) != 0 )
        KeBugCheckEx(0x160u, gdwInAtomicOperation, 0LL, 0LL, 0LL);
    }
    UserSessionSwitchLeaveCrit(v12, gdwInAtomicOperation);
    UserBeep(440LL, 125LL);
    EnterCrit(0LL, 1LL);
    return;
  }
  LOBYTE(MakeCode) = a1->MakeCode & 0x7F;
  if ( a3 && (gpScancodeMap || gpFlexMap) )
  {
    v25 = 0;
    if ( (v12 & 1) != 0 )
      v25 = 0x8000;
    if ( !(unsigned int)MapScancode((struct tagKE *)&MakeCode, v23, a2) )
      return;
    LOBYTE(v10) = v23[0];
  }
  gbVKLastDown = VKFromVSC(&MakeCode, v10);
  v13 = gbVKLastDown;
  if ( gbVKLastDown )
  {
    if ( (unsigned __int8)(gbVKLastDown - 91) <= 1u && (a1->Flags & 1) == 0 )
    {
      if ( gptiForeground && (v20 = *(_QWORD *)(gptiForeground + 392LL)) != 0 )
        v21 = *(_QWORD *)(*(_QWORD *)(v20 + 48) + 32LL);
      else
        v21 = gpKbdTbl;
      if ( !LScanCode )
        LScanCode = InternalMapVirtualKeyEx(0x4Cu, 0, v21);
      goto LABEL_19;
    }
  }
  else
  {
    v19 = (struct tagTHREADINFO *)ValidatePtiKbd(gpqForeground);
    if ( !(unsigned int)RawInputRequestedForKeyboard(v19) )
      return;
    v8 = 1;
  }
  if ( LScanCode )
  {
    if ( a1->MakeCode == LScanCode )
    {
      v13 = 76;
      gbVKLastDown = 76;
      v25 = 76;
    }
    if ( (gfsSASModifiersDown & 8) == 0 || (a1->Flags & 1) != 0 && (unsigned __int8)(v13 - 91) <= 1u )
      LScanCode = 0;
  }
LABEL_19:
  v14 = a1->Flags & 1;
  if ( v14 )
    v25 |= 0x8000u;
  if ( gProtocolType && (unsigned __int8)(v25 - 91) <= 1u && !gfEnableWindowsKey )
    return;
  if ( v13 == 91 )
  {
    v18 = 64;
  }
  else
  {
    if ( v13 == 92 )
    {
      v18 = 0x80;
      gCurrentModifierBit = 0x80;
LABEL_38:
      if ( v14 )
        gPhysModifierState &= ~v18;
      else
        gPhysModifierState |= v18;
      goto LABEL_26;
    }
    if ( (unsigned __int8)(v13 + 96) > 5u )
    {
      gCurrentModifierBit = 0;
      goto LABEL_26;
    }
    v18 = 1 << (v13 & 0xF);
  }
  gCurrentModifierBit = v18;
  if ( v18 )
    goto LABEL_38;
LABEL_26:
  if ( v13 == 13 && !v14 )
    PoLatencySensitivityHint(1LL);
  if ( (gdwPUDFlags & 0x100) == 0 )
  {
    if ( a2 && (*((_DWORD *)a2 + 46) & 0x800) != 0 )
      v3 = (char *)a2 + 392;
    v16 = a1->ExtraInformation;
    v15 = v8;
    v17 = v9;
    goto LABEL_34;
  }
  if ( gtmridAccessTimeOut && (qword_1C0326EF4 & 1) != 0 )
    gtmridAccessTimeOut = SetRITTimer(gtmridAccessTimeOut, HIDWORD(qword_1C0326EF4), (__int64)xxxAccessTimeOutTimer, 1);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&MakeCode, a1->ExtraInformation, 0) )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x800) != 0 )
        v3 = (char *)a2 + 392;
    }
    v15 = v8;
    v16 = a1->ExtraInformation;
    v17 = (LOBYTE(a1->Flags) >> 4) & 1;
LABEL_34:
    xxxProcessKeyEvent((struct tagKE *)&MakeCode, v16, v17, v15, (__int64)v3);
  }
}

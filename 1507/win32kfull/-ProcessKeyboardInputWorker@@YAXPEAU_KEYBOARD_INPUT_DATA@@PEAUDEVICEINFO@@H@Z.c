/*
 * XREFs of ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8014
 * Callers:
 *     ?MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z @ 0x1C01D79B8 (-MapFlexibleKeys@@YAHPEAUtagKE@@EPEAUDEVICEINFO@@@Z.c)
 *     ?ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z @ 0x1C01D7F18 (-ProcessKeyboardInputViaRim@@YAXPEAXKK0@Z.c)
 *     ProcessKeyboardInput @ 0x1C01D9F10 (ProcessKeyboardInput.c)
 * Callees:
 *     xxxProcessKeyEvent @ 0x1C00482A8 (xxxProcessKeyEvent.c)
 *     ValidatePtiKbd @ 0x1C004929C (ValidatePtiKbd.c)
 *     ?RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z @ 0x1C004A73C (-RawInputRequestedForKeyboard@@YAHPEAUtagTHREADINFO@@@Z.c)
 *     SetRITTimer @ 0x1C0079F80 (SetRITTimer.c)
 *     InternalMapVirtualKeyEx @ 0x1C00D715C (InternalMapVirtualKeyEx.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 *     ?MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z @ 0x1C01D7CA8 (-MapScancode@@YAHPEAUtagKE@@PEAEPEAUDEVICEINFO@@@Z.c)
 *     ?RemoteSyncToggleKeys@@YAXK@Z @ 0x1C01D8640 (-RemoteSyncToggleKeys@@YAXK@Z.c)
 *     ?AccessProceduresStream@@YAHPEAUtagKE@@KH@Z @ 0x1C01ECE54 (-AccessProceduresStream@@YAHPEAUtagKE@@KH@Z.c)
 *     UserBeep @ 0x1C0229040 (UserBeep.c)
 *     VKFromVSC @ 0x1C022A3E0 (VKFromVSC.c)
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
  struct tagTHREADINFO *v14; // rax
  __int16 v15; // r8
  char v16; // dl
  __int64 v17; // rax
  __int64 v18; // r8
  __int64 v19; // rdx
  int v20; // r9d
  unsigned int v21; // r8d
  USHORT v22; // cx
  char v23[8]; // [rsp+30h] [rbp-30h] BYREF
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
        v3 = (char *)a2 + 384;
      v20 = 0;
      v21 = ((unsigned __int8)v22 >> 4) & 1;
      v19 = 0LL;
      goto LABEL_83;
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
    UserSessionSwitchLeaveCrit(v12, v10);
    UserBeep(440LL, 125LL);
    EnterCrit(1LL);
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
  if ( !gbVKLastDown )
  {
    v14 = (struct tagTHREADINFO *)ValidatePtiKbd(gpqForeground);
    if ( !(unsigned int)RawInputRequestedForKeyboard(v14) )
      return;
    v8 = 1;
    goto LABEL_27;
  }
  if ( (unsigned __int8)(gbVKLastDown - 91) > 1u || (a1->Flags & 1) != 0 )
  {
LABEL_27:
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
    goto LABEL_34;
  }
  if ( gptiForeground && (v17 = *(_QWORD *)(gptiForeground + 400LL)) != 0 )
    v18 = *(_QWORD *)(*(_QWORD *)(v17 + 48) + 32LL);
  else
    v18 = gpKbdTbl;
  if ( !LScanCode )
    LScanCode = InternalMapVirtualKeyEx(0x4Cu, 0, v18);
LABEL_34:
  v15 = a1->Flags & 1;
  if ( v15 )
    v25 |= 0x8000u;
  if ( gProtocolType && (unsigned __int8)(v25 - 91) <= 1u && !gfEnableWindowsKey )
    return;
  if ( v13 == 91 )
  {
    v16 = 64;
  }
  else
  {
    if ( v13 == 92 )
    {
      v16 = 0x80;
      gCurrentModifierBit = 0x80;
      goto LABEL_55;
    }
    if ( (unsigned __int8)(v13 + 96) > 5u )
    {
      gCurrentModifierBit = 0;
      goto LABEL_58;
    }
    v16 = 1 << (v13 & 0xF);
  }
  gCurrentModifierBit = v16;
  if ( v16 )
  {
LABEL_55:
    if ( v15 )
      gPhysModifierState &= ~v16;
    else
      gPhysModifierState |= v16;
  }
LABEL_58:
  if ( v13 == 13 && !v15 )
    PoLatencySensitivityHint(1LL);
  if ( (gdwPUDFlags & 0x100) == 0 )
  {
    if ( a2 )
    {
      if ( (*((_DWORD *)a2 + 46) & 0x800) != 0 )
        v3 = (char *)a2 + 384;
    }
    v19 = a1->ExtraInformation;
    v20 = v8;
    v21 = v9;
LABEL_83:
    xxxProcessKeyEvent((struct tagKE *)&MakeCode, v19, v21, v20, (__int64)v3);
    return;
  }
  if ( gtmridAccessTimeOut && (qword_1C03238F4 & 1) != 0 )
    gtmridAccessTimeOut = SetRITTimer(gtmridAccessTimeOut, SHIDWORD(qword_1C03238F4), (int)xxxAccessTimeOutTimer, 1);
  if ( (unsigned int)AccessProceduresStream((struct tagKE *)&MakeCode, a1->ExtraInformation, 0) )
  {
    if ( a2 && (*((_DWORD *)a2 + 46) & 0x800) != 0 )
      v3 = (char *)a2 + 384;
    v20 = v8;
    v19 = a1->ExtraInformation;
    v21 = (LOBYTE(a1->Flags) >> 4) & 1;
    goto LABEL_83;
  }
}

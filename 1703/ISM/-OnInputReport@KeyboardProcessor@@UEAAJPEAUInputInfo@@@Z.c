/*
 * XREFs of ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003C810
 * Callers:
 *     <none>
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 *     ?KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z @ 0x18003C178 (-KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z.c)
 *     ?UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z @ 0x18003C228 (-UpdateKeyModifierArray@KeyboardModifierState@@QEAAJW4KeyboardModifier@@_N@Z.c)
 *     ?OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18005A6F0 (-OnInputReport@NonPointerProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 *     memset @ 0x18009D814 (memset.c)
 */

__int64 __fastcall KeyboardProcessor::OnInputReport(KeyboardProcessor *this, struct InputInfo *a2)
{
  __int64 v4; // rcx
  unsigned int v5; // ebx
  __int16 v6; // ax
  int v7; // ebp
  bool v8; // r14
  int updated; // eax
  __int64 v10; // rcx
  int v11; // r9d
  __int16 v12; // cx
  WORD v13; // ax
  tagINPUT pInputs; // [rsp+30h] [rbp-58h] BYREF
  int v16; // [rsp+98h] [rbp+10h] BYREF

  v16 = 0;
  v4 = 0LL;
  if ( (*(_DWORD *)a2 & 4) != 0 )
  {
    v6 = *((_WORD *)a2 + 354);
    if ( (v6 & 0x60) == 0 )
    {
      v4 = *((unsigned __int16 *)a2 + 353);
      if ( (v6 & 2) != 0 )
        LOWORD(v4) = v4 | 0xE000;
      if ( (v6 & 4) != 0 )
        LOWORD(v4) = v4 | 0xE100;
    }
    if ( !(unsigned int)KeyboardModifierState::KeyboardModifierFromScanCode(v4, (enum KeyboardModifier *)&v16) )
    {
      v7 = v16;
      v8 = (*((_BYTE *)a2 + 708) & 1) == 0;
      if ( (*((_BYTE *)a2 + 708) & 1) != 0 || (v16 & *((_DWORD *)this + 16)) == 0 )
      {
        updated = KeyboardModifierState::UpdateKeyModifierArray(
                    *((_DWORD **)this + 7),
                    v16,
                    (*((_BYTE *)a2 + 708) & 1) == 0);
        v5 = updated;
        if ( updated < 0 )
        {
          if ( (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
            return v5;
          v11 = 243;
          goto LABEL_28;
        }
        if ( v8 )
          *((_DWORD *)this + 16) |= v7;
        else
          *((_DWORD *)this + 16) &= ~v7;
      }
    }
    if ( ((1LL << gdwDeviceFamily) & 0x224A) == 0 )
    {
      updated = NonPointerProcessor::OnInputReport(this, a2);
      v5 = updated;
      if ( updated >= 0 || (Microsoft_OneCore_MinInputEnableBits & 2) == 0 )
        return v5;
      v11 = 268;
LABEL_28:
      Template_qqq(v10, &MinInput_Warning_CheckResult, 0, v11, updated);
      return v5;
    }
    memset(&pInputs, 0, sizeof(pInputs));
    v12 = *((_WORD *)a2 + 354);
    pInputs.ki.dwExtraInfo = *((_QWORD *)a2 + 84);
    v13 = *((_WORD *)a2 + 353);
    pInputs.type = 1;
    if ( (v12 & 0x40) != 0 )
    {
      pInputs.ki.wVk = v13;
      if ( (unsigned __int16)(v13 - 1) <= 1u )
        return 0;
    }
    else
    {
      pInputs.ki.wScan = v13;
    }
    pInputs.mi.dy = 2 * (v12 & 1);
    SendInput(1u, &pInputs, 40);
    return 0;
  }
  v5 = -2147024809;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(0LL, &MinInput_Warning_CheckResult, 0, 189, 87);
  return v5;
}

/*
 * XREFs of VKFromVSC @ 0x1C022A6E0
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C0082B5C (xxxInternalKeyEventDirect.c)
 *     ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D8B30 (-ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C01D8E30 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 * Callees:
 *     GetActiveHKL @ 0x1C0084850 (GetActiveHKL.c)
 *     GetModifierBits @ 0x1C0099ACC (GetModifierBits.c)
 *     GetModificationNumber @ 0x1C0099B1C (GetModificationNumber.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, char a2)
{
  __int16 v4; // di
  char v5; // cl
  unsigned __int8 v6; // cl
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // ax
  __int64 v10; // rax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax
  __int64 v13; // rdx

  *((_WORD *)a1 + 1) = 255;
  v4 = 255;
  if ( (*gpsi & 4) != 0 && (GetActiveHKL() & 0x3FF) == 0x12 )
  {
    v5 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      v6 = v5 | 0x80;
      a2 = -32;
    }
    else
    {
      v6 = v5 & 0x7F;
    }
    *a1 = v6;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( gptiForeground && (v7 = *(_QWORD *)(gptiForeground + 392LL)) != 0 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL);
  else
    v8 = gpKbdTbl;
  if ( a2 )
  {
    if ( a2 == -32 )
    {
      v4 = 511;
      if ( *a1 == 42 || *a1 == 54 )
        goto LABEL_30;
      v10 = *(_QWORD *)(v8 + 64);
    }
    else
    {
      if ( a2 != -31 )
      {
LABEL_15:
        LOBYTE(v9) = -1;
        return v9;
      }
      v10 = *(_QWORD *)(v8 + 72);
    }
    if ( v10 && *(_WORD *)(v10 + 2) )
    {
      while ( *(_BYTE *)v10 != *a1 )
      {
        v10 += 4LL;
        if ( !*(_WORD *)(v10 + 2) )
          goto LABEL_28;
      }
      v4 = *(_WORD *)(v10 + 2);
    }
  }
  else
  {
    if ( *a1 >= *(_BYTE *)(v8 + 56) )
      goto LABEL_15;
    v4 = *(_WORD *)(*(_QWORD *)(v8 + 48) + 2LL * *a1);
    if ( !v4 )
      goto LABEL_15;
  }
LABEL_28:
  if ( dword_1C032F300 )
  {
    dword_1C032F300 = 0;
LABEL_30:
    LOBYTE(v9) = 0;
    return v9;
  }
  if ( v4 == 19 )
  {
    *a1 = 69;
    dword_1C032F300 = 1;
  }
  if ( (v4 & 0x200) != 0 )
  {
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, (__int64)gafRawKeyState);
    ModificationNumber = GetModificationNumber((__int64)&Modifiers_VK_STANDARD, ModifierBits);
    if ( ModificationNumber != 15 )
    {
      v13 = *((_QWORD *)gapulCvt_VK + ModificationNumber);
      if ( v13 )
      {
        while ( *(_DWORD *)v13 )
        {
          if ( *(_BYTE *)v13 == (_BYTE)v4 )
          {
            v9 = *(_WORD *)(v13 + 2);
            *((_WORD *)a1 + 1) = v9;
            return v9;
          }
          v13 += 4LL;
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v4;
  LOBYTE(v9) = v4;
  return v9;
}

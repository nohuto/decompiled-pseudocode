/*
 * XREFs of VKFromVSC @ 0x1C00E8DD4
 * Callers:
 *     xxxInternalKeyEventDirect @ 0x1C00A21FC (xxxInternalKeyEventDirect.c)
 *     ?ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z @ 0x1C00E8688 (-ProcessKeyboardInputWorker@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@H@Z.c)
 *     ?ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z @ 0x1C01D06B0 (-ProcessKeyboardInjectedInputViaRim@@YAXPEAU_KEYBOARD_INPUT_DATA@@PEAUDEVICEINFO@@@Z.c)
 * Callees:
 *     GetActiveHKL @ 0x1C00A41B4 (GetActiveHKL.c)
 *     GetModifierBits @ 0x1C00E80D0 (GetModifierBits.c)
 *     GetModificationNumber @ 0x1C00E8270 (GetModificationNumber.c)
 */

char __fastcall VKFromVSC(unsigned __int8 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  char v4; // si
  __int16 v6; // di
  __int64 v7; // rax
  __int64 v8; // rax
  __int16 v9; // ax
  unsigned __int16 ModifierBits; // ax
  unsigned __int16 ModificationNumber; // ax
  char v12; // cl
  unsigned __int8 v13; // cl
  __int64 v14; // rax
  __int64 v15; // rdx

  *((_WORD *)a1 + 1) = 255;
  v4 = a2;
  v6 = 255;
  if ( (*gpsi & 4) != 0 && (GetActiveHKL((__int64)a1, a2, gpsi, a4) & 0x3FF) == 0x12 )
  {
    v12 = *a1;
    if ( (unsigned __int8)(*a1 - 113) <= 1u )
    {
      v13 = v12 | 0x80;
      v4 = -32;
    }
    else
    {
      v13 = v12 & 0x7F;
    }
    *a1 = v13;
  }
  else
  {
    *a1 &= ~0x80u;
  }
  if ( gptiForeground && (v7 = *(_QWORD *)(gptiForeground + 392LL)) != 0 )
    v8 = *(_QWORD *)(*(_QWORD *)(v7 + 48) + 32LL);
  else
    v8 = gpKbdTbl;
  switch ( v4 )
  {
    case 0:
      if ( *a1 < *(_BYTE *)(v8 + 56) )
      {
        v6 = *(_WORD *)(*(_QWORD *)(v8 + 48) + 2LL * *a1);
        if ( v6 )
          goto LABEL_10;
      }
LABEL_17:
      LOBYTE(v9) = -1;
      return v9;
    case -32:
      v6 = 511;
      if ( *a1 == 42 || *a1 == 54 )
        goto LABEL_28;
      v14 = *(_QWORD *)(v8 + 64);
      break;
    case -31:
      v14 = *(_QWORD *)(v8 + 72);
      break;
    default:
      goto LABEL_17;
  }
  if ( v14 && *(_WORD *)(v14 + 2) )
  {
    while ( *(_BYTE *)v14 != *a1 )
    {
      v14 += 4LL;
      if ( !*(_WORD *)(v14 + 2) )
        goto LABEL_10;
    }
    v6 = *(_WORD *)(v14 + 2);
  }
LABEL_10:
  if ( dword_1C0331D84 )
  {
    dword_1C0331D84 = 0;
LABEL_28:
    LOBYTE(v9) = 0;
    return v9;
  }
  if ( v6 == 19 )
  {
    *a1 = 69;
    dword_1C0331D84 = 1;
  }
  if ( (v6 & 0x200) != 0 )
  {
    ModifierBits = GetModifierBits((unsigned __int8 **)&Modifiers_VK_STANDARD, (__int64)gafRawKeyState);
    ModificationNumber = GetModificationNumber((__int64)&Modifiers_VK_STANDARD, ModifierBits);
    if ( ModificationNumber != 15 )
    {
      v15 = *((_QWORD *)gapulCvt_VK + ModificationNumber);
      if ( v15 )
      {
        while ( *(_DWORD *)v15 )
        {
          if ( *(_BYTE *)v15 == (_BYTE)v6 )
          {
            v9 = *(_WORD *)(v15 + 2);
            *((_WORD *)a1 + 1) = v9;
            return v9;
          }
          v15 += 4LL;
        }
      }
    }
  }
  *((_WORD *)a1 + 1) = v6;
  LOBYTE(v9) = v6;
  return v9;
}

/*
 * XREFs of ?KeyboardModifierFromScanCode@KeyboardModifierState@@SAJGPEAW4KeyboardModifier@@@Z @ 0x18003C178
 * Callers:
 *     ?OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z @ 0x18003C810 (-OnInputReport@KeyboardProcessor@@UEAAJPEAUInputInfo@@@Z.c)
 * Callees:
 *     Template_qqq @ 0x180001B00 (Template_qqq.c)
 */

__int64 __fastcall KeyboardModifierState::KeyboardModifierFromScanCode(__int64 a1, enum KeyboardModifier *a2)
{
  unsigned int v2; // ebx
  int v3; // eax

  v2 = 0;
  switch ( (unsigned __int16)a1 )
  {
    case 0x1Du:
      v3 = 1;
      goto LABEL_19;
    case 0x2Au:
      v3 = 2;
      goto LABEL_19;
    case 0x36u:
      v3 = 32;
      goto LABEL_19;
    case 0x38u:
      v3 = 4;
      goto LABEL_19;
    case 0xE01Du:
      v3 = 16;
      goto LABEL_19;
    case 0xE038u:
      v3 = 64;
      goto LABEL_19;
    case 0xE05Bu:
      v3 = 8;
      goto LABEL_19;
    case 0xE05Cu:
      v3 = 128;
LABEL_19:
      *(_DWORD *)a2 = v3;
      return v2;
  }
  v2 = -2147418113;
  if ( (Microsoft_OneCore_MinInputEnableBits & 2) != 0 )
    Template_qqq(a1, &MinInput_Warning_CheckResult, 0, 137, 255);
  return v2;
}

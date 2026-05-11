/*
 * XREFs of USBMidiOutCreateThirdByte @ 0x1C00230A0
 * Callers:
 *     <none>
 * Callees:
 *     <none>
 */

char __fastcall USBMidiOutCreateThirdByte(__int64 a1, _BYTE *a2, char a3)
{
  char v4; // al

  if ( a3 >= 0 )
    goto LABEL_4;
  if ( (a3 & 0xF8) == 0xF8 )
  {
    if ( *(_BYTE *)(a1 + 68) )
LABEL_4:
      a2[3] = a3;
  }
  else if ( a3 == -9 && *(_BYTE *)(a1 + 68) )
  {
    v4 = *a2 & 0xF7;
    a2[3] = -9;
    *a2 = v4 | 7;
    *(_BYTE *)(a1 + 68) = 0;
  }
  return 1;
}

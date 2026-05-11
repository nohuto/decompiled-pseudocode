/*
 * XREFs of USBMidiInCopyEvent @ 0x1C00211E4
 * Callers:
 *     USBMidiInProcessPin @ 0x1C0006030 (USBMidiInProcessPin.c)
 * Callees:
 *     memmove @ 0x1C0007CC0 (memmove.c)
 */

_DWORD *__fastcall USBMidiInCopyEvent(_DWORD *a1, _BYTE *a2, unsigned __int64 a3, unsigned __int64 a4, _DWORD *a5)
{
  unsigned int v8; // esi
  _DWORD *result; // rax

  v8 = USBMidiInConvertCINToBytes[*a2 & 0xF];
  memmove((char *)a1 + (unsigned int)a1[1] + 8, a2 + 1, v8);
  if ( a4 >= a3 )
    *a1 = (a4 - a3) / 0x2710;
  else
    *a1 = 0;
  a1[1] += v8;
  result = a5;
  *a5 = a1[1] + 8;
  return result;
}

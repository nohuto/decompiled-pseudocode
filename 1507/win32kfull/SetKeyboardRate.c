/*
 * XREFs of SetKeyboardRate @ 0x1C0138A40
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C003A8E0 (xxxSystemParametersInfo.c)
 *     xxxInitWindowStation @ 0x1C0138550 (xxxInitWindowStation.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetKeyboardRate()
{
  __int64 result; // rax

  word_1C0323986 = word_1C031B0F2
                 + (gnKeyboardSpeed & 0x1F)
                 * ((unsigned __int16)dword_1C031B0F8 - (unsigned int)(unsigned __int16)word_1C031B0F2)
                 / 0x1F;
  result = gdwUpdateKeyboard;
  word_1C0323988 = word_1C031B0F4
                 + (((unsigned int)gnKeyboardSpeed >> 5) & 3)
                 * (HIWORD(dword_1C031B0F8) - (unsigned __int16)word_1C031B0F4)
                 / 3;
  gdwUpdateKeyboard |= 1u;
  return result;
}

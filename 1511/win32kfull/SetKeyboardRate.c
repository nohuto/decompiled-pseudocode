/*
 * XREFs of SetKeyboardRate @ 0x1C00D8E4C
 * Callers:
 *     xxxInitWindowStation @ 0x1C00D7374 (xxxInitWindowStation.c)
 *     xxxSystemParametersInfo @ 0x1C0126360 (xxxSystemParametersInfo.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetKeyboardRate()
{
  __int64 result; // rax

  word_1C03223C6 = WORD1(qword_1C031B120)
                 + (gnKeyboardSpeed & 0x1F)
                 * ((unsigned __int16)dword_1C031B128 - (unsigned int)WORD1(qword_1C031B120))
                 / 0x1F;
  result = gdwUpdateKeyboard;
  word_1C03223C8 = WORD2(qword_1C031B120)
                 + (((unsigned int)gnKeyboardSpeed >> 5) & 3) * (HIWORD(dword_1C031B128) - WORD2(qword_1C031B120)) / 3;
  gdwUpdateKeyboard |= 1u;
  return result;
}

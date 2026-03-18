/*
 * XREFs of SetKeyboardRate @ 0x1C00BC7DC
 * Callers:
 *     xxxSystemParametersInfo @ 0x1C0068630 (xxxSystemParametersInfo.c)
 *     xxxInitWindowStation @ 0x1C00BC2F0 (xxxInitWindowStation.c)
 * Callees:
 *     <none>
 */

// write access to const memory has been detected, the output may be wrong!
__int64 SetKeyboardRate()
{
  __int64 result; // rax

  word_1C0327036 = word_1C03217DA
                 + (gnKeyboardSpeed & 0x1F)
                 * ((unsigned __int16)dword_1C03217E0 - (unsigned int)(unsigned __int16)word_1C03217DA)
                 / 0x1F;
  result = gdwUpdateKeyboard;
  word_1C0327038 = word_1C03217DC
                 + (((unsigned int)gnKeyboardSpeed >> 5) & 3)
                 * (HIWORD(dword_1C03217E0) - (unsigned __int16)word_1C03217DC)
                 / 3;
  gdwUpdateKeyboard |= 1u;
  return result;
}

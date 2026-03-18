/*
 * XREFs of EtwTracePointerDeviceContactIds @ 0x1C00A7970
 * Callers:
 *     RIMGetMultiContactDeviceState @ 0x1C00CABDC (RIMGetMultiContactDeviceState.c)
 *     RIMUseLastContactPosition @ 0x1C00CC168 (RIMUseLastContactPosition.c)
 * Callees:
 *     Template_qqqdd @ 0x1C00AA0F4 (Template_qqqdd.c)
 */

__int64 __fastcall EtwTracePointerDeviceContactIds(int a1, int a2, int a3, __int64 a4)
{
  __int64 result; // rax

  if ( (Microsoft_Windows_Win32kEnableBits & 0x4000) != 0 )
    return Template_qqqdd(a1, a2, a3, a1, a2, a3, a4, SBYTE4(a4));
  return result;
}

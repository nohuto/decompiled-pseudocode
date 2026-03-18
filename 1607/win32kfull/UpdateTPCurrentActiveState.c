/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C00E3404
 * Callers:
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C00E317C (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C00E4AD0 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225EF0 (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x1C00E342C (UpdateMouseConnectionState.c)
 */

char UpdateTPCurrentActiveState()
{
  char result; // al
  int v1; // edx

  result = UpdateMouseConnectionState();
  if ( (qword_1C03281F0 & 0x100000000LL) != 0 )
  {
    v1 = HIDWORD(qword_1C03281F0) | 8;
  }
  else
  {
    result = ~BYTE4(qword_1C03281F0);
    v1 = (BYTE4(qword_1C03281F0) ^ (unsigned __int8)(8 * ((unsigned __int8)(~BYTE4(qword_1C03281F0) & 0x10) >> 4))) & 8 ^ HIDWORD(qword_1C03281F0);
  }
  HIDWORD(qword_1C03281F0) = v1;
  return result;
}

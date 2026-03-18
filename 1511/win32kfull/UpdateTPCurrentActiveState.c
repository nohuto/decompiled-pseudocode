/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C00957EC
 * Callers:
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C0095550 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0098878 (_GetPrecisionTouchPadConfiguration.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C022533C (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x1C0095814 (UpdateMouseConnectionState.c)
 */

char UpdateTPCurrentActiveState()
{
  char result; // al
  int v1; // edx

  result = UpdateMouseConnectionState();
  if ( (qword_1C0322020 & 0x100000000LL) != 0 )
  {
    v1 = HIDWORD(qword_1C0322020) | 8;
  }
  else
  {
    result = ~BYTE4(qword_1C0322020);
    v1 = (BYTE4(qword_1C0322020) ^ (unsigned __int8)(8 * ((unsigned __int8)(~BYTE4(qword_1C0322020) & 0x10) >> 4))) & 8 ^ HIDWORD(qword_1C0322020);
  }
  HIDWORD(qword_1C0322020) = v1;
  return result;
}

/*
 * XREFs of UpdateTPCurrentActiveState @ 0x1C0039CF4
 * Callers:
 *     _GetPrecisionTouchPadConfiguration @ 0x1C0039AF0 (_GetPrecisionTouchPadConfiguration.c)
 *     ApplyGatheredDeviceInfoSummaryInformation @ 0x1C01459D0 (ApplyGatheredDeviceInfoSummaryInformation.c)
 *     _SetPrecisionTouchPadConfiguration @ 0x1C0225E2C (_SetPrecisionTouchPadConfiguration.c)
 * Callees:
 *     UpdateMouseConnectionState @ 0x1C0039D1C (UpdateMouseConnectionState.c)
 */

char UpdateTPCurrentActiveState()
{
  char result; // al
  int v1; // edx

  result = UpdateMouseConnectionState();
  if ( (qword_1C0323098 & 0x100000000LL) != 0 )
  {
    v1 = HIDWORD(qword_1C0323098) | 8;
  }
  else
  {
    result = ~BYTE4(qword_1C0323098);
    v1 = (BYTE4(qword_1C0323098) ^ (unsigned __int8)(8 * ((unsigned __int8)(~BYTE4(qword_1C0323098) & 0x10) >> 4))) & 8 ^ HIDWORD(qword_1C0323098);
  }
  HIDWORD(qword_1C0323098) = v1;
  return result;
}

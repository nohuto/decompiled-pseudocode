/*
 * XREFs of xxxRouteTouchpadInertiaToMT @ 0x1C022A464
 * Callers:
 *     UserProcessDwmInput @ 0x1C00E0620 (UserProcessDwmInput.c)
 * Callees:
 *     ?xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z @ 0x1C0229DE0 (-xxxRouteSyntheticTouchpadToMT@@YAHIUtagPOINT@@0_K@Z.c)
 */

__int64 xxxRouteTouchpadInertiaToMT()
{
  __int64 result; // rax

  result = gInertiaMTInfo;
  if ( (gInertiaMTInfo & 1) != 0 )
    return xxxRouteSyntheticTouchpadToMT(dword_1C033264C, stru_1C0332650, stru_1C0332658, qword_1C0332660);
  return result;
}

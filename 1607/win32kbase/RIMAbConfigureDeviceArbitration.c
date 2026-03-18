/*
 * XREFs of RIMAbConfigureDeviceArbitration @ 0x1C00D1AAC
 * Callers:
 *     RIMProcessAnyPointerDeviceInput @ 0x1C00DB5A8 (RIMProcessAnyPointerDeviceInput.c)
 * Callees:
 *     IsGetPenArbitrationTypeSupported_0 @ 0x1C0002E98 (IsGetPenArbitrationTypeSupported_0.c)
 *     GetPenArbitrationType_0 @ 0x1C0002EA0 (GetPenArbitrationType_0.c)
 *     RIMAbIsDeviceArbitrationSupported @ 0x1C00054AC (RIMAbIsDeviceArbitrationSupported.c)
 */

__int64 RIMAbConfigureDeviceArbitration()
{
  __int64 result; // rax
  unsigned int v1; // ebx

  result = RIMAbIsDeviceArbitrationSupported();
  v1 = 0;
  if ( (_DWORD)result )
  {
    if ( (int)IsGetPenArbitrationTypeSupported_0() >= 0 )
    {
      result = GetPenArbitrationType_0();
      v1 = result;
      goto LABEL_4;
    }
    result = RIMAbIsDeviceArbitrationSupported();
    if ( !(_DWORD)result )
    {
LABEL_4:
      if ( v1 >= 4 )
        return result;
      goto LABEL_5;
    }
    v1 = 3;
  }
LABEL_5:
  gDeviceArbitrationType = v1;
  return result;
}

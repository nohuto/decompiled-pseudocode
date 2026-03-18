/*
 * XREFs of PfSnScanCommandLine @ 0x1404D7588
 * Callers:
 *     PfSnBeginAppLaunch @ 0x1404D64B4 (PfSnBeginAppLaunch.c)
 * Callees:
 *     PfSnHashUnsafeUnicodeString @ 0x1404B515C (PfSnHashUnsafeUnicodeString.c)
 *     PfSnParsePrefetchParam @ 0x1404D7610 (PfSnParsePrefetchParam.c)
 *     PfSnCaptureParamBlockString @ 0x1404D77B4 (PfSnCaptureParamBlockString.c)
 *     PfSnGetUnsafeProcessParameters @ 0x1404D77FC (PfSnGetUnsafeProcessParameters.c)
 */

__int64 __fastcall PfSnScanCommandLine(_DWORD *a1, int a2)
{
  int v4; // ebx
  __int64 UnsafeProcessParameters; // rax
  __int64 result; // rax
  _BYTE v7[24]; // [rsp+20h] [rbp-18h] BYREF
  __int64 v8; // [rsp+50h] [rbp+18h] BYREF

  v4 = 0;
  UnsafeProcessParameters = PfSnGetUnsafeProcessParameters();
  if ( !UnsafeProcessParameters )
    return 3221225865LL;
  result = PfSnCaptureParamBlockString(UnsafeProcessParameters, UnsafeProcessParameters + 112, v7);
  if ( (int)result >= 0 )
  {
    if ( (int)PfSnParsePrefetchParam(v7, &v8) >= 0 )
      v4 = v8;
    if ( !a2 )
      goto LABEL_6;
    result = PfSnHashUnsafeUnicodeString((__int64)v7, &v8);
    if ( (int)result >= 0 )
    {
      v4 += v8;
LABEL_6:
      *a1 = v4;
      return 0LL;
    }
  }
  return result;
}

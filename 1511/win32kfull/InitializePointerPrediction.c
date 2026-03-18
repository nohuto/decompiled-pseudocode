/*
 * XREFs of InitializePointerPrediction @ 0x1C01130B0
 * Callers:
 *     <none>
 * Callees:
 *     ReadPointerDeviceSettings @ 0x1C0125F9C (ReadPointerDeviceSettings.c)
 *     __security_check_cookie @ 0x1C01512D0 (__security_check_cookie.c)
 */

LARGE_INTEGER InitializePointerPrediction()
{
  LARGE_INTEGER result; // rax
  _QWORD v1[2]; // [rsp+20h] [rbp-28h] BYREF

  glTOUCH_DRIVER_HW_STACK_LATENCY = 0;
  glTOUCH_DRIVER_HW_STACK_SAMPLETIME = 0;
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = 0;
  v1[0] = 0LL;
  v1[1] = 0LL;
  result = KeQueryPerformanceCounter(&gliQpcFreq);
  if ( gliQpcFreq.QuadPart )
  {
    result.QuadPart = ReadPointerDeviceSettings(156LL, v1);
    if ( result.LowPart )
    {
      gFilterTapsInUse = 3;
      gPredictorRLSLambdaMin = 3865470464LL;
      gPredictorRLSDelta = 4294968LL;
      gPredictorRLSLambdaMax = 4290672384LL;
      result.QuadPart = 4252017664LL;
      gPredictorRLSExpoSmoothAlpha = 4252017664LL;
      gPredictorRLSLambdaLearningRate = 4294968LL;
    }
  }
  return result;
}

/*
 * XREFs of InitializePointerPrediction @ 0x1C0156A80
 * Callers:
 *     <none>
 * Callees:
 *     ReadPointerDeviceSettings @ 0x1C003C944 (ReadPointerDeviceSettings.c)
 *     __security_check_cookie @ 0x1C015BB90 (__security_check_cookie.c)
 */

LARGE_INTEGER InitializePointerPrediction()
{
  LARGE_INTEGER result; // rax
  LARGE_INTEGER v1; // r8
  unsigned int v2; // r9d
  _QWORD v3[2]; // [rsp+20h] [rbp-28h] BYREF

  glTOUCH_DRIVER_HW_STACK_LATENCY = 0;
  glTOUCH_DRIVER_HW_STACK_SAMPLETIME = 0;
  gbTOUCH_DRIVER_HW_STACK_TIMESTAMP = 0;
  v3[0] = 0LL;
  v3[1] = 0LL;
  result = KeQueryPerformanceCounter(&gliQpcFreq);
  if ( gliQpcFreq.QuadPart )
  {
    result.QuadPart = ReadPointerDeviceSettings(156, (__int64)v3, (unsigned __int16 *)v1.QuadPart, v2);
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

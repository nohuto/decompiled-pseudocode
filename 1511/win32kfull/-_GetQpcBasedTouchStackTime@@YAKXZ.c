/*
 * XREFs of ?_GetQpcBasedTouchStackTime@@YAKXZ @ 0x1C01DC8C0
 * Callers:
 *     ?xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z @ 0x1C01DCA10 (-xxxSendLastFrameTouchUp@@YAXPEAUtagINJECTED_CONTACT@@PEAUDEVICEINFO@@IK@Z.c)
 *     xxxInjectTouchInput @ 0x1C01DD214 (xxxInjectTouchInput.c)
 * Callees:
 *     <none>
 */

__int64 _GetQpcBasedTouchStackTime(void)
{
  LARGE_INTEGER PerformanceCounter; // rax

  if ( !gliQpcFreq.QuadPart )
    return 10 * (unsigned int)((MEMORY[0xFFFFF78000000320] * (unsigned __int64)MEMORY[0xFFFFF78000000004]) >> 24);
  PerformanceCounter = KeQueryPerformanceCounter(0LL);
  return 10000 * (unsigned int)(PerformanceCounter.QuadPart / gliQpcFreq.QuadPart)
       + (unsigned int)((unsigned __int64)(10000 * (PerformanceCounter.QuadPart % gliQpcFreq.QuadPart))
                      / gliQpcFreq.QuadPart);
}

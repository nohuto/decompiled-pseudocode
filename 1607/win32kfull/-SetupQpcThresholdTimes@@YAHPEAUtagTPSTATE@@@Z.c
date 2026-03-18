/*
 * XREFs of ?SetupQpcThresholdTimes@@YAHPEAUtagTPSTATE@@@Z @ 0x1C01E8544
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

union _LARGE_INTEGER __fastcall SetupQpcThresholdTimes(struct tagTPSTATE *a1)
{
  union _LARGE_INTEGER result; // rax
  int v2; // r9d

  result = gliQpcFreq;
  if ( gliQpcFreq.QuadPart )
  {
    v2 = dword_1C0328110 & 0x200;
    if ( (dword_1C0328110 & 0x200) != 0 || !*((_QWORD *)a1 + 225) )
    {
      *((_QWORD *)a1 + 225) = gliQpcFreq.QuadPart * (unsigned int)gTPThresholds / 1000;
      result = gliQpcFreq;
    }
    if ( v2 || !*((_QWORD *)a1 + 226) )
    {
      *((_QWORD *)a1 + 226) = result.QuadPart * (unsigned int)dword_1C03280DC / 1000;
      result = gliQpcFreq;
    }
    if ( v2 || !*((_QWORD *)a1 + 227) )
    {
      *((_QWORD *)a1 + 227) = result.QuadPart * (unsigned int)dword_1C0328124 / 1000;
      result = gliQpcFreq;
    }
    if ( v2 || !*((_QWORD *)a1 + 228) )
      *((_QWORD *)a1 + 228) = result.QuadPart * HIDWORD(qword_1C0328134) / 1000;
    return (union _LARGE_INTEGER)1LL;
  }
  return result;
}

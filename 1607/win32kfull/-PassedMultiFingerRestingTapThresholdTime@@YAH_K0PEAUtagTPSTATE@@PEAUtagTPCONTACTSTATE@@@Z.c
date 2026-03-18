/*
 * XREFs of ?PassedMultiFingerRestingTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01E827C
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01E96E4 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

union _LARGE_INTEGER __fastcall PassedMultiFingerRestingTapThresholdTime(
        __int64 a1,
        __int64 a2,
        struct tagTPSTATE *a3,
        struct tagTPCONTACTSTATE *a4)
{
  union _LARGE_INTEGER result; // rax
  unsigned int v5; // r9d

  result = gliQpcFreq;
  v5 = 0;
  if ( gliQpcFreq.QuadPart )
  {
    if ( (dword_1C0328110 & 0x200) != 0 || !*((_QWORD *)a3 + 229) )
      *((_QWORD *)a3 + 229) = gliQpcFreq.QuadPart * (unsigned int)dword_1C03280FC / 1000;
    LOBYTE(v5) = (unsigned __int64)(a2 - a1) > *((_QWORD *)a3 + 229);
    return (union _LARGE_INTEGER)v5;
  }
  return result;
}

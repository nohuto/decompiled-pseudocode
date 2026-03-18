/*
 * XREFs of ?PassedTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F1D98
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F2F3C (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
 * Callees:
 *     <none>
 */

union _LARGE_INTEGER __fastcall PassedTapThresholdTime(
        __int64 a1,
        __int64 a2,
        struct tagTPSTATE *a3,
        struct tagTPCONTACTSTATE *a4)
{
  union _LARGE_INTEGER result; // rax
  unsigned int v5; // r10d

  result = gliQpcFreq;
  v5 = 0;
  if ( gliQpcFreq.QuadPart )
  {
    if ( !*((_QWORD *)a3 + 151) )
    {
      *((_QWORD *)a3 + 151) = gliQpcFreq.QuadPart * (unsigned int)gTPThresholds / 1000;
      result = gliQpcFreq;
    }
    if ( !*((_QWORD *)a3 + 152) )
      *((_QWORD *)a3 + 152) = result.QuadPart * (unsigned int)dword_1C03236BC / 1000;
    *((_DWORD *)a4 + 42) ^= (*((_DWORD *)a4 + 42) ^ (16 * ((unsigned __int64)(a2 - a1) > *((_QWORD *)a3 + 152)))) & 0x10;
    LOBYTE(v5) = (unsigned __int64)(a2 - a1) > *((_QWORD *)a3 + 151);
    return (union _LARGE_INTEGER)v5;
  }
  return result;
}

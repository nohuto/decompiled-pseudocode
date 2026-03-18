/*
 * XREFs of ?PassedTapThresholdTime@@YAH_K0PEAUtagTPSTATE@@PEAUtagTPCONTACTSTATE@@@Z @ 0x1C01F1F50
 * Callers:
 *     ?UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagHID_POINTER_DEVICE_INFO@@PEAH@Z @ 0x1C01F3264 (-UpdateTPStateIndicator@@YAXPEAUtagTPCONTACTSTATE@@PEAUtagTPSTATE@@PEAUtagPOINTER_INFO@@PEAUtagH.c)
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
  unsigned __int64 v6; // r11
  int v7; // edx

  result = gliQpcFreq;
  v5 = 0;
  if ( gliQpcFreq.QuadPart )
  {
    if ( !*((_QWORD *)a3 + 179) )
    {
      *((_QWORD *)a3 + 179) = gliQpcFreq.QuadPart * (unsigned int)gTPThresholds / 1000;
      result = gliQpcFreq;
    }
    if ( !*((_QWORD *)a3 + 180) )
    {
      *((_QWORD *)a3 + 180) = result.QuadPart * (unsigned int)dword_1C0321F1C / 1000;
      result = gliQpcFreq;
    }
    if ( !*((_QWORD *)a3 + 181) )
    {
      *((_QWORD *)a3 + 181) = result.QuadPart * (unsigned int)dword_1C0321F64 / 1000;
      result = gliQpcFreq;
    }
    if ( !*((_QWORD *)a3 + 182) )
      *((_QWORD *)a3 + 182) = result.QuadPart * HIDWORD(qword_1C0321F74) / 1000;
    v6 = a2 - a1;
    *((_DWORD *)a4 + 53) ^= (*((_DWORD *)a4 + 53) ^ (16 * ((unsigned __int64)(a2 - a1) > *((_QWORD *)a3 + 180)))) & 0x10;
    v7 = *((_DWORD *)a4 + 53) ^ (*((_DWORD *)a4 + 53) ^ (((unsigned __int64)(a2 - a1) > *((_QWORD *)a3 + 181)) << 19)) & 0x80000;
    *((_DWORD *)a4 + 53) = v7;
    *((_DWORD *)a4 + 53) = v7 ^ (v7 ^ ((v6 > *((_QWORD *)a3 + 182)) << 20)) & 0x100000;
    LOBYTE(v5) = v6 > *((_QWORD *)a3 + 179);
    return (union _LARGE_INTEGER)v5;
  }
  return result;
}

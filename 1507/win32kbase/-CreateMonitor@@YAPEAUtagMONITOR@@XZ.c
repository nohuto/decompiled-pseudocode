/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AAB8
 * Callers:
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C001AB44 (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005A4BC (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 * Callees:
 *     UserSetLastError @ 0x1C003333C (UserSetLastError.c)
 *     HMAllocObject @ 0x1C004FB70 (HMAllocObject.c)
 */

struct tagMONITOR *__fastcall CreateMonitor(__int64 a1, __int64 a2, __int64 a3)
{
  _QWORD *v3; // rbx

  LOBYTE(a3) = 12;
  v3 = (_QWORD *)HMAllocObject(0LL, 0LL, a3, 584LL);
  if ( v3 )
  {
    *(_QWORD *)((char *)v3 + 28) = 0LL;
    *(_QWORD *)((char *)v3 + 36) = 0LL;
    *(_QWORD *)((char *)v3 + 76) = 0LL;
    *(_QWORD *)((char *)v3 + 84) = 0LL;
    v3[64] = 0LL;
    v3[65] = 0LL;
    *(_QWORD *)((char *)v3 + 44) = 0LL;
    *(_QWORD *)((char *)v3 + 52) = 0LL;
    *(_QWORD *)((char *)v3 + 92) = 0LL;
    *(_QWORD *)((char *)v3 + 100) = 0LL;
    v3[66] = 0LL;
    v3[67] = 0LL;
    *(_QWORD *)((char *)v3 + 60) = 0LL;
    *(_QWORD *)((char *)v3 + 68) = 0LL;
    *(_QWORD *)((char *)v3 + 108) = 0LL;
    *(_QWORD *)((char *)v3 + 116) = 0LL;
    v3[68] = 0LL;
    v3[69] = 0LL;
  }
  else
  {
    UserSetLastError(8LL);
  }
  return (struct tagMONITOR *)v3;
}

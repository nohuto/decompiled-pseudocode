/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D720
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C006BB98 (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C006D6FC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     HMAllocObject @ 0x1C0041A20 (HMAllocObject.c)
 *     UserSetLastError @ 0x1C00436EC (UserSetLastError.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  __int64 v0; // rdx
  _QWORD *v1; // rbx

  v1 = (_QWORD *)HMAllocObject(0LL, 0LL, 0xCu, 0x248u);
  if ( v1 )
  {
    *(_QWORD *)((char *)v1 + 28) = 0LL;
    *(_QWORD *)((char *)v1 + 36) = 0LL;
    *(_QWORD *)((char *)v1 + 76) = 0LL;
    *(_QWORD *)((char *)v1 + 84) = 0LL;
    v1[64] = 0LL;
    v1[65] = 0LL;
    *(_QWORD *)((char *)v1 + 44) = 0LL;
    *(_QWORD *)((char *)v1 + 52) = 0LL;
    *(_QWORD *)((char *)v1 + 92) = 0LL;
    *(_QWORD *)((char *)v1 + 100) = 0LL;
    v1[66] = 0LL;
    v1[67] = 0LL;
    *(_QWORD *)((char *)v1 + 60) = 0LL;
    *(_QWORD *)((char *)v1 + 68) = 0LL;
    *(_QWORD *)((char *)v1 + 108) = 0LL;
    *(_QWORD *)((char *)v1 + 116) = 0LL;
    v1[68] = 0LL;
    v1[69] = 0LL;
  }
  else
  {
    UserSetLastError(8LL, v0);
  }
  return (struct tagMONITOR *)v1;
}

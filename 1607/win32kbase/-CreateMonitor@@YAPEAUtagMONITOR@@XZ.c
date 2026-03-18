/*
 * XREFs of ?CreateMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005E32C
 * Callers:
 *     ?SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z @ 0x1C005834C (-SetMonitorData@@YAPEAUtagMONITOR@@PEAU1@K@Z.c)
 *     ?CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ @ 0x1C005FCEC (-CreateCachedMonitor@@YAPEAUtagMONITOR@@XZ.c)
 * Callees:
 *     UserSetLastError @ 0x1C0020A94 (UserSetLastError.c)
 *     HMAllocObject @ 0x1C0038CC0 (HMAllocObject.c)
 */

struct tagMONITOR *CreateMonitor(void)
{
  _QWORD *v0; // rbx

  v0 = (_QWORD *)HMAllocObject(0LL, 0LL, 0xCu, 0x248u);
  if ( v0 )
  {
    *(_QWORD *)((char *)v0 + 28) = 0LL;
    *(_QWORD *)((char *)v0 + 36) = 0LL;
    *(_QWORD *)((char *)v0 + 76) = 0LL;
    *(_QWORD *)((char *)v0 + 84) = 0LL;
    v0[64] = 0LL;
    v0[65] = 0LL;
    *(_QWORD *)((char *)v0 + 44) = 0LL;
    *(_QWORD *)((char *)v0 + 52) = 0LL;
    *(_QWORD *)((char *)v0 + 92) = 0LL;
    *(_QWORD *)((char *)v0 + 100) = 0LL;
    v0[66] = 0LL;
    v0[67] = 0LL;
    *(_QWORD *)((char *)v0 + 60) = 0LL;
    *(_QWORD *)((char *)v0 + 68) = 0LL;
    *(_QWORD *)((char *)v0 + 108) = 0LL;
    *(_QWORD *)((char *)v0 + 116) = 0LL;
    v0[68] = 0LL;
    v0[69] = 0LL;
  }
  else
  {
    UserSetLastError(8LL);
  }
  return (struct tagMONITOR *)v0;
}

/*
 * XREFs of GreIsDisconnectDeviceAttached @ 0x1C0049CDC
 * Callers:
 *     NtUserGetDisplayConfigBufferSizes @ 0x1C0049BD0 (NtUserGetDisplayConfigBufferSizes.c)
 * Callees:
 *     ??0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z @ 0x1C0049D3C (--0SEMOBJSHARED@@QEAA@PEAUHSEMAPHORE__@@@Z.c)
 *     ??1SEMOBJSHARED@@QEAA@XZ @ 0x1C0049D70 (--1SEMOBJSHARED@@QEAA@XZ.c)
 */

__int64 GreIsDisconnectDeviceAttached()
{
  unsigned int v0; // ebx
  char v2; // [rsp+30h] [rbp+8h] BYREF

  SEMOBJSHARED::SEMOBJSHARED((SEMOBJSHARED *)&v2, ghsemDynamicModeChange);
  v0 = 1;
  if ( (!gpLocalDiscGraphicsDevice || (*((_DWORD *)gpLocalDiscGraphicsDevice + 40) & 1) == 0)
    && (!gpRemoteDiscGraphicsDevice || (*((_DWORD *)gpRemoteDiscGraphicsDevice + 40) & 1) == 0) )
  {
    v0 = 0;
  }
  SEMOBJSHARED::~SEMOBJSHARED((SEMOBJSHARED *)&v2);
  return v0;
}

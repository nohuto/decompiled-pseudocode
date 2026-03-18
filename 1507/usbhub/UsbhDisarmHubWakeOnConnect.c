/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C001F018
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C0001000 (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0017B8C (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C001E7B0 (UsbhSshResumeDownstream.c)
 * Callees:
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x1C0016ECC (UsbhSetHubRemoteWake.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C001F064 (UsbhDisarmHubForWakeDetect.c)
 */

__int64 __fastcall UsbhDisarmHubWakeOnConnect(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 result; // rax
  __int64 v7; // r8
  __int64 v8; // r9

  v5 = FdoExt(a1, a2, a3, a4);
  result = UsbhDisarmHubForWakeDetect(a1);
  if ( (v5[640] & 0x80000) != 0 )
  {
    result = UsbhSetHubRemoteWake(a1, 0, v7, v8);
    if ( (int)result >= 0 )
      v5[640] &= ~0x80000u;
  }
  return result;
}

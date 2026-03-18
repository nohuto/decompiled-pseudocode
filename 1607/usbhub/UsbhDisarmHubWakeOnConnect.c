/*
 * XREFs of UsbhDisarmHubWakeOnConnect @ 0x1C0022768
 * Callers:
 *     UsbhFdoSetPowerDx_Action @ 0x1C000120C (UsbhFdoSetPowerDx_Action.c)
 *     UsbhSshSuspendHub @ 0x1C0018F70 (UsbhSshSuspendHub.c)
 *     UsbhSshResumeDownstream @ 0x1C0021F00 (UsbhSshResumeDownstream.c)
 * Callees:
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSetHubRemoteWake @ 0x1C00182A4 (UsbhSetHubRemoteWake.c)
 *     UsbhDisarmHubForWakeDetect @ 0x1C00227B4 (UsbhDisarmHubForWakeDetect.c)
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

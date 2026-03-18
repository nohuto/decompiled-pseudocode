/*
 * XREFs of UsbhSshBusIdle @ 0x1C003F6FC
 * Callers:
 *     UsbhHubSSH_PnpStop @ 0x1C00568C0 (UsbhHubSSH_PnpStop.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

LONG __fastcall UsbhSshBusIdle(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  volatile __int64 *v5; // rax
  __int64 v6; // rdx
  __int64 v7; // r9
  _QWORD *v8; // r10

  v5 = (volatile __int64 *)FdoExt(a1, a2, a3, a4);
  Log(a1, 2048, 1114863917, 0LL, _InterlockedExchange64(v5 + 411, 0LL));
  return UsbhDecHubBusy(a1, v6, v8, v7);
}

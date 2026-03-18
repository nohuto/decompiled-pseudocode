/*
 * XREFs of UsbhGetHubCount @ 0x1C0021E80
 * Callers:
 *     UsbhInitialize @ 0x1C0019A10 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C0020110 (UsbhSyncSendInternalIoctl.c)
 */

__int64 __fastcall UsbhGetHubCount(__int64 a1, _DWORD *a2, __int64 a3, __int64 a4)
{
  _DWORD *v6; // rax
  NTSTATUS v7; // r10d
  unsigned int v8; // r10d

  v6 = FdoExt(a1, (__int64)a2, a3, a4);
  *a2 = 1;
  if ( (v6[640] & 1) != 0 )
    Log(a1, 8, 1214475858, 0LL, 0LL);
  else
    v7 = UsbhSyncSendInternalIoctl(a1, 0x22001Bu, (unsigned __int64)a2, 0LL);
  Log(a1, 8, 1214475892, v7, (unsigned int)*a2);
  return v8;
}

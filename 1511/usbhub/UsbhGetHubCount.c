/*
 * XREFs of UsbhGetHubCount @ 0x1C001F5F8
 * Callers:
 *     UsbhInitialize @ 0x1C000F6C0 (UsbhInitialize.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendInternalIoctl @ 0x1C001C840 (UsbhSyncSendInternalIoctl.c)
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

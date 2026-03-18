/*
 * XREFs of UsbhExAddDeviceInit @ 0x1C0028140
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

void __fastcall UsbhExAddDeviceInit(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rax
  _QWORD *v6; // r10

  v5 = FdoExt(a1, a2, a3, a4);
  v5[640] |= 0x2000u;
  Log(a1, 128, 1702379852, 0LL, 0LL);
  v6[608] = v6 + 607;
  v6[607] = v6 + 607;
  KeInitializeSpinLock(v6 + 609);
}

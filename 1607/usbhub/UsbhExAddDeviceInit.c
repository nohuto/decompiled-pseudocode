/*
 * XREFs of UsbhExAddDeviceInit @ 0x1C000A9F0
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 */

void __fastcall UsbhExAddDeviceInit(__int64 a1)
{
  int v1; // ebx
  __int64 v2; // rax
  _QWORD *v3; // r10

  v1 = a1;
  v2 = FdoExt(a1);
  *(_DWORD *)(v2 + 2560) |= 0x2000u;
  Log(v1, 128, 1702379852, 0, 0LL);
  v3[608] = v3 + 607;
  v3[607] = v3 + 607;
  KeInitializeSpinLock(v3 + 609);
}

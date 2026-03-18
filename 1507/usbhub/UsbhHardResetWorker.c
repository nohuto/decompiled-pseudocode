/*
 * XREFs of UsbhHardResetWorker @ 0x1C0046820
 * Callers:
 *     <none>
 * Callees:
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

void __fastcall UsbhHardResetWorker(__int64 DeviceObject, __int64 Context, __int64 a3, __int64 a4)
{
  _DWORD *v5; // rbx
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rax
  __int64 v10; // r9
  __int64 v11; // r10
  unsigned int v12; // r11d
  __int64 v13; // r8

  v5 = FdoExt(DeviceObject, Context, a3, a4);
  v9 = FdoExt(DeviceObject, v6, v7, v8);
  Log(DeviceObject, 4, 1919251287, (__int64)(v9 + 566), 0LL);
  v13 = v12;
  if ( (v5[640] & 0x100000) == 0 )
    v13 = v12 + 3;
  UsbhDispatch_HardResetEvent(DeviceObject, v11, v13, v10);
}

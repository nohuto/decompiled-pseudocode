/*
 * XREFs of UsbhDisableDeviceForWake @ 0x1C0020760
 * Callers:
 *     UsbhPdoSetD0_Finish @ 0x1C0004BF4 (UsbhPdoSetD0_Finish.c)
 *     UsbhPdoSetD0 @ 0x1C001FF90 (UsbhPdoSetD0.c)
 * Callees:
 *     PdoExt @ 0x1C000D6E0 (PdoExt.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhSyncSendCommandToDevice @ 0x1C001C5D4 (UsbhSyncSendCommandToDevice.c)
 */

__int64 __fastcall UsbhDisableDeviceForWake(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // r9
  _DWORD *v9; // rbp
  int v10; // eax
  int v11; // r10d
  __int64 v13[5]; // [rsp+40h] [rbp-28h] BYREF
  __int16 v14; // [rsp+88h] [rbp+20h] BYREF

  v14 = 0;
  FdoExt(a1, a2, a3, a4);
  v9 = PdoExt(a2, v6, v7, v8);
  v13[0] = 65792LL;
  v10 = UsbhSyncSendCommandToDevice(a1, a2, v13, 0LL, &v14);
  Log(a1, 256, 1145993067, v10, 0LL);
  if ( v11 >= 0 )
    v9[353] &= ~0x8000u;
  return (unsigned int)v11;
}

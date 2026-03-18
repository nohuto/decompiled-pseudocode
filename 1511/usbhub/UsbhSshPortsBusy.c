/*
 * XREFs of UsbhSshPortsBusy @ 0x1C00262E0
 * Callers:
 *     UsbhSshSetPortsBusyState @ 0x1C000FDC0 (UsbhSshSetPortsBusyState.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000C010 (UsbhDecHubBusy.c)
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhIncHubBusy @ 0x1C0014020 (UsbhIncHubBusy.c)
 */

void __fastcall UsbhSshPortsBusy(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  int v4; // ebx
  volatile signed __int64 *v7; // rsi
  signed __int64 v8; // rax
  __int64 v9; // r9
  __int64 v10; // r10
  int v11; // r11d
  __int64 v12; // rdx
  __int64 v13; // r9
  _QWORD *v14; // r10

  v4 = a3;
  v7 = (volatile signed __int64 *)FdoExt(a1, a2, a3, a4);
  v8 = UsbhIncHubBusy(a1, a2, a1, 1649439603LL, v4);
  Log(a1, 0x10000, 1213419563, _InterlockedCompareExchange64(v7 + 414, v8, 0LL), v8);
  if ( v9 )
  {
    Log(a1, v11, 1213419570, v9, v10);
    UsbhDecHubBusy(a1, v12, v14, v13);
  }
}

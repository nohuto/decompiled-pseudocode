/*
 * XREFs of UsbhSshPortsBusy @ 0x1C000B91C
 * Callers:
 *     UsbhSshSetPortsBusyState @ 0x1C0018360 (UsbhSshSetPortsBusyState.c)
 * Callees:
 *     UsbhDecHubBusy @ 0x1C000BC70 (UsbhDecHubBusy.c)
 *     UsbhIncHubBusy @ 0x1C000CE90 (UsbhIncHubBusy.c)
 *     Log @ 0x1C0014B50 (Log.c)
 *     FdoExt @ 0x1C0015060 (FdoExt.c)
 */

__int64 __fastcall UsbhSshPortsBusy(struct _DEVICE_OBJECT *a1, __int64 a2, int a3)
{
  __int64 v5; // rsi
  signed __int64 v6; // rax
  __int64 result; // rax
  __int64 v8; // r9
  __int64 v9; // r10
  int v10; // r11d
  __int64 v11; // rdx
  __int64 v12; // r10

  v5 = FdoExt(a1);
  v6 = UsbhIncHubBusy(a1, a3);
  result = Log(
             (_DWORD)a1,
             0x10000,
             1213419563,
             _InterlockedCompareExchange64((volatile signed __int64 *)(v5 + 3312), v6, 0LL),
             v6);
  if ( v8 )
  {
    Log((_DWORD)a1, v10, 1213419570, v8, v9);
    return UsbhDecHubBusy(a1, v11, v12);
  }
  return result;
}

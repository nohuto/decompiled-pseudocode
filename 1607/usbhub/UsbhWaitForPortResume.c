/*
 * XREFs of UsbhWaitForPortResume @ 0x1C0028934
 * Callers:
 *     UsbhSyncResumePort @ 0x1C002883C (UsbhSyncResumePort.c)
 *     UsbhFdoSetD0Warm @ 0x1C0046020 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     UsbhWaitEventWithTimeoutEx @ 0x1C000DC70 (UsbhWaitEventWithTimeoutEx.c)
 *     Log @ 0x1C00159D0 (Log.c)
 *     FdoExt @ 0x1C0015EE0 (FdoExt.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C0041628 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPortResumeTimeout @ 0x1C0044354 (UsbhPortResumeTimeout.c)
 */

__int64 __fastcall UsbhWaitForPortResume(PDEVICE_OBJECT DeviceObject, __int64 a2, __int64 a3, __int64 a4)
{
  _DWORD *v7; // rsi
  KSPIN_LOCK *v8; // rsi
  char v9; // r9
  KIRQL v10; // al
  __int64 result; // rax

  v7 = FdoExt((__int64)DeviceObject, a2, a3, a4);
  Log((__int64)DeviceObject, 16, 1347573553, 0LL, *(unsigned __int16 *)(a2 + 4));
  v8 = (KSPIN_LOCK *)(v7 + 1236);
  *(_BYTE *)(a2 + 2838) = v9;
  while ( 1 )
  {
    v10 = KeAcquireSpinLockRaiseToDpc(v8);
    if ( *(_DWORD *)(a2 + 696) == 3 )
    {
      KeReleaseSpinLock(v8, v10);
      result = UsbhWaitEventWithTimeoutEx(DeviceObject, (void *)(a2 + 712), 500, 1347573623, 0xBu, a2);
    }
    else
    {
      KeReleaseSpinLock(v8, v10);
      result = 0LL;
    }
    if ( (_DWORD)result != 258 )
      break;
    UsbhPCE_ResumeTimeout(DeviceObject, a3, *(unsigned __int16 *)(a2 + 4));
  }
  if ( *(_BYTE *)(a2 + 2838) )
    return UsbhPortResumeTimeout(DeviceObject);
  return result;
}

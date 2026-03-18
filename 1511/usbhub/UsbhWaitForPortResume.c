/*
 * XREFs of UsbhWaitForPortResume @ 0x1C0028274
 * Callers:
 *     UsbhSyncResumePort @ 0x1C002817C (UsbhSyncResumePort.c)
 *     UsbhFdoSetD0Warm @ 0x1C0045DA0 (UsbhFdoSetD0Warm.c)
 * Callees:
 *     Log @ 0x1C0013250 (Log.c)
 *     FdoExt @ 0x1C00132D0 (FdoExt.c)
 *     UsbhWaitEventWithTimeoutEx @ 0x1C00138F0 (UsbhWaitEventWithTimeoutEx.c)
 *     UsbhPCE_ResumeTimeout @ 0x1C00412F0 (UsbhPCE_ResumeTimeout.c)
 *     UsbhPortResumeTimeout @ 0x1C0044014 (UsbhPortResumeTimeout.c)
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
      result = UsbhWaitEventWithTimeoutEx((__int64)DeviceObject, (void *)(a2 + 712), 500, 1347573623, 0xBu, a2);
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

/*
 * XREFs of PiDmObjectAcquireSharedLock @ 0x14043ABF4
 * Callers:
 *     PiControlGetDeviceInterfaceEnabled @ 0x140438C9C (PiControlGetDeviceInterfaceEnabled.c)
 *     PiDmListEnumObjectsWithCallback @ 0x140438E44 (PiDmListEnumObjectsWithCallback.c)
 *     PiDmObjectIsEnumerable @ 0x14043BBF4 (PiDmObjectIsEnumerable.c)
 *     IopRegisterDeviceInterface @ 0x1404DED78 (IopRegisterDeviceInterface.c)
 *     PiDmListAddObject @ 0x1404DF9D4 (PiDmListAddObject.c)
 *     PiDmObjectGetCachedObjectReference @ 0x140547318 (PiDmObjectGetCachedObjectReference.c)
 *     PiDmListAddList @ 0x14058C898 (PiDmListAddList.c)
 *     PiDmListRemoveList @ 0x140680530 (PiDmListRemoveList.c)
 *     PiDmListRemoveObject @ 0x140680838 (PiDmListRemoveObject.c)
 * Callees:
 *     KeAbPreAcquire @ 0x14004E900 (KeAbPreAcquire.c)
 *     ExfAcquirePushLockSharedEx @ 0x1400F2F00 (ExfAcquirePushLockSharedEx.c)
 */

signed __int64 __fastcall PiDmObjectAcquireSharedLock(volatile signed __int64 *a1, __int64 a2, __int64 a3, __int64 a4)
{
  struct _KTHREAD *CurrentThread; // rax
  __int64 v6; // rbx
  __int64 v7; // r9
  signed __int64 result; // rax

  CurrentThread = KeGetCurrentThread();
  --CurrentThread->KernelApcDisable;
  v6 = KeAbPreAcquire((ULONG_PTR)a1, 0LL, 0LL, a4);
  result = _InterlockedCompareExchange64(a1, 17LL, 0LL);
  if ( result )
    result = ExfAcquirePushLockSharedEx((unsigned __int64 *)a1, v6, (ULONG_PTR)a1, v7);
  if ( v6 )
  {
    result = *(_QWORD *)(v6 + 32);
    *(_BYTE *)(v6 + 26) |= 1u;
  }
  return result;
}
